/*
 * XREFs of MiDecommitHandleProtoFormatPte @ 0x140362D00
 * Callers:
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 * Callees:
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiDecrementCombinedPteEx @ 0x14036BF5C (MiDecrementCombinedPteEx.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiGetSharedProtosAtDpc @ 0x140463BB0 (MiGetSharedProtosAtDpc.c)
 *     MiDecrementCloneBlockReference @ 0x1404A91C0 (MiDecrementCloneBlockReference.c)
 */

void __fastcall MiDecommitHandleProtoFormatPte(__int64 a1, unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // rsi
  int v5; // r9d
  _KPROCESS *Process; // rbx
  int v7; // eax
  ULONG_PTR PrototypePteDirect; // rsi
  ULONG_PTR CloneAddress; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  char v13; // r8
  int v14; // r9d
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  _KPROCESS *v18; // rax
  unsigned __int64 CycleTime; // rcx
  unsigned int v20; // r15d
  __int64 i; // rbp
  int v22; // ebx
  unsigned __int64 v23; // rcx
  __int64 SharedProtosAtDpc; // rax
  unsigned __int64 v25; // rcx

  v2 = *(_DWORD *)(a1 + 112);
  v3 = a2;
  if ( (v2 & 8) == 0 )
  {
    v5 = *(_DWORD *)(a1 + 100) & 0xF0;
    if ( v5 )
    {
      Process = 0LL;
      if ( v5 == 32 && (a2 & 0x400000000000000LL) != 0 )
      {
        ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        goto LABEL_19;
      }
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
    }
    if ( (a2 & 0x400) != 0 && (a2 & 0x3FFFFFFFFFF000LL) == 0x3FFFFFFFFFF000LL || (a2 & 0x800) == 0 )
    {
      if ( !Process )
      {
        if ( (v2 & 2) != 0 )
        {
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        }
        else
        {
          v15 = *(_QWORD *)(a1 + 40);
          if ( v5 == 48 )
          {
            ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
          }
          else if ( (*(_DWORD *)(v15 + 56) & 0x20) != 0 )
          {
            if ( qword_140E2D8C0 && (a2 & 0x10) == 0 )
              v3 = a2 & qword_140E2D8C8;
            v16 = qword_140E37D10;
            if ( (v3 & 0x800000000000000LL) == 0 )
              v16 = qword_140E37D20;
            v17 = v16 + ((v3 >> 9) & 0x1FFFFFFFFFF8LL);
            v18 = KeGetCurrentThread()->ApcState.Process;
            CycleTime = v18[1].CycleTime;
            if ( !CycleTime || (v18[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
              v20 = -1;
            else
              v20 = *(_DWORD *)(CycleTime + 8);
            for ( i = v15 + 128; i; i = *(_QWORD *)(i + 16) )
            {
              v22 = *(_DWORD *)(i + 32);
              v23 = *(_QWORD *)(i + 8);
              if ( v17 < v23 || v17 >= v23 + 8LL * *(unsigned int *)(i + 44) )
              {
                if ( (*(_DWORD *)(i + 32) & 0x20000) == 0 )
                  continue;
                if ( (*(_DWORD *)(v15 + 56) & 8) == 0 )
                  continue;
                if ( (*(_DWORD *)(v15 + 56) & 0x20) == 0 )
                  continue;
                SharedProtosAtDpc = MiGetSharedProtosAtDpc(v15, v20, i);
                if ( !SharedProtosAtDpc )
                  continue;
                v25 = *(_QWORD *)(SharedProtosAtDpc + 72);
                if ( v17 < v25 || v17 >= v25 + 8LL * *(unsigned int *)(i + 44) )
                  continue;
              }
              if ( (v22 & 0x3Eu) >= 8 )
                ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
              goto LABEL_19;
            }
          }
        }
        goto LABEL_19;
      }
      if ( Process[1].IdealProcessorAssignmentBlock )
      {
        LOBYTE(v7) = MiIsPrototypePteVadLookup(a2);
        if ( !v7 )
        {
          PrototypePteDirect = MiGetPrototypePteDirect(v3);
          CloneAddress = MiLocateCloneAddress(Process, PrototypePteDirect);
          if ( CloneAddress )
          {
            v10 = MiDecrementCloneBlockReference(CloneAddress, PrototypePteDirect);
            goto LABEL_12;
          }
        }
      }
    }
    else
    {
      v12 = MiGetPrototypePteDirect(a2);
      if ( Process )
      {
        v10 = MiDecrementCombinedPteEx(*(_QWORD *)(a1 + 32), v12, 0LL);
LABEL_12:
        if ( v10 == 3 )
        {
LABEL_13:
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
          goto LABEL_19;
        }
LABEL_17:
        if ( v10 == 5 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        goto LABEL_19;
      }
      if ( v14 == 48 || (v13 & 0x20) == 0 )
        ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
      v11 = **(_QWORD **)(((v12 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      v10 = MiDecrementCombinedPteEx(*(_QWORD *)(a1 + 32), v12, 0LL);
      if ( v10 != 3 )
        goto LABEL_17;
      if ( v11 == *(_QWORD *)(a1 + 8) )
        goto LABEL_13;
    }
LABEL_19:
    **(_QWORD **)(a1 + 64) = *(_QWORD *)(a1 + 128);
    if ( !*(_QWORD *)(a1 + 128) )
      ++*(_DWORD *)(a1 + 96);
  }
}
