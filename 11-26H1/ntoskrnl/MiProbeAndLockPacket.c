/*
 * XREFs of MiProbeAndLockPacket @ 0x1402D0300
 * Callers:
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MmLockPhysicalPagesByVa @ 0x1406EF4CC (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiProbeLockFrame @ 0x1402D0680 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x1402D0C10 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1402D1B90 (MiSetProbePagesAhead.c)
 *     MiProbePacketContended @ 0x1402E87F0 (MiProbePacketContended.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A20A0 (MiUnlockProbePacketWorkingSet.c)
 *     MiFaultInProbeAddress @ 0x1403A2230 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x140484AEC (MiLockProbePacketWorkingSet.c)
 */

__int64 __fastcall MiProbeAndLockPacket(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // esi
  unsigned int v4; // ebp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v20; // rcx
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  do
  {
    if ( !_bittest64((const signed __int64 *)(a1 + 96), 0x39u) )
      **(_QWORD **)(a1 + 56) = -1LL;
    v6 = 1LL;
    if ( (*(_DWORD *)(a1 + 104) & 1) != 0
      && (v7 = *(_QWORD *)(a1 + 8), v7 >= *(_QWORD *)(a1 + 160))
      && v7 <= *(_QWORD *)(a1 + 168) )
    {
      if ( (v3 & 0x3F) == 0 && v3 && (unsigned int)MiProbePacketContended(a1) )
        goto LABEL_57;
      v8 = *(_QWORD *)(a1 + 176);
      if ( v8 == -1 )
      {
        a3 = *(_QWORD *)(a1 + 24);
        v9 = *(_QWORD *)a3;
        if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v17 = *(_QWORD *)a3;
          if ( (v9 & 1) != 0 && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                a3 = (a3 >> 3) & 0x1FF;
                v20 = *(_QWORD *)(KernelWaitTime + 8 * a3);
                if ( (v20 & 0x20) != 0 )
                  v17 = v9 | 0x20;
                v9 = v17 | 0x42;
                if ( (v20 & 0x42) == 0 )
                  v9 = v17;
              }
            }
          }
        }
        v10 = (v9 >> 12) & 0xFFFFFFFFFFLL;
      }
      else
      {
        v10 = v8 + ((*(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 160)) >> 12);
      }
      *(_QWORD *)(a1 + 144) = v10;
      if ( v10 > qword_140E2D920 || (*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      {
        v11 = *(_QWORD *)(a1 + 168) + 1LL;
        if ( *(_QWORD *)(a1 + 16) <= v11 )
          v11 = *(_QWORD *)(a1 + 16);
        a3 = (v11 - (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFF000uLL)) >> 12;
        if ( a3 > 1 )
        {
          v12 = 512 - (v10 & 0x1FF);
          if ( a3 <= v12 )
            v12 = a3;
          if ( v8 == -1 )
          {
            a3 = *(_QWORD *)(a1 + 24) + 8LL;
            if ( v12 > 1 )
            {
              do
              {
                v13 = (*(_QWORD *)a3 >> 12) & 0xFFFFFFFFFFLL;
                if ( v13 != v10 + 1 )
                  break;
                a3 += 8LL;
                ++v6;
                v10 = v13;
              }
              while ( v6 < v12 );
            }
          }
          else
          {
            v6 = v12;
          }
        }
      }
    }
    else
    {
      if ( (v3 & 0xF) == 0 && v3 && (unsigned int)MiProbePacketContended(a1) )
      {
LABEL_57:
        MiUnlockProbePacketWorkingSet(a1);
        MiLockProbePacketWorkingSet(a1);
        goto LABEL_36;
      }
      v21 = 0;
      while ( 1 )
      {
        result = MiLockPageLeafPageTable(a1);
        if ( !*(_QWORD *)(a1 + 48) )
          break;
        result = MiProbeLeafPteAccess(a1, &v21);
        if ( (int)result < 0 )
          return result;
        if ( !v21 )
        {
          *(_QWORD *)(a1 + 144) = (*(_QWORD *)(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
          MiSetProbePagesAhead(a1);
          goto LABEL_30;
        }
        if ( v21 != 1 )
        {
          result = MiFaultInProbeAddress(a1);
          if ( (int)result < 0 )
          {
            ++HIDWORD(stru_140E2ED08.LastXStateSaveDebugInfo);
            return result;
          }
        }
      }
      if ( (int)result < 0 )
        return result;
    }
LABEL_30:
    result = MiProbeLockFrame(a1, v6, a3);
    v4 = result;
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 8) += v6 << 12;
    *(_QWORD *)(a1 + 24) += 8 * v6;
    if ( !_bittest64((const signed __int64 *)(a1 + 96), 0x39u) )
    {
      v15 = *(_QWORD *)(a1 + 144);
      if ( v6 )
      {
        v16 = *(_QWORD **)(a1 + 56);
        do
        {
          *v16++ = v15++;
          --v6;
        }
        while ( v6 );
        *(_QWORD *)(a1 + 56) = v16;
      }
    }
LABEL_36:
    ++v3;
  }
  while ( *(_QWORD *)(a1 + 24) <= *(_QWORD *)(a1 + 32) );
  return v4;
}
