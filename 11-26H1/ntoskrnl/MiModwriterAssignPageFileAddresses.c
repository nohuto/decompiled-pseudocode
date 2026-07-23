/*
 * XREFs of MiModwriterAssignPageFileAddresses @ 0x140400260
 * Callers:
 *     MiGatherPagefilePages @ 0x1403FFDF8 (MiGatherPagefilePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     MiUpdatePfnBackingStore @ 0x140401584 (MiUpdatePfnBackingStore.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int16 __fastcall MiModwriterAssignPageFileAddresses(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v3; // r13d
  ULONG_PTR *v4; // r12
  int v5; // eax
  __int64 v6; // r14
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  ULONG_PTR v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // r8
  unsigned __int64 PageFilePte; // rdx
  __int64 v21; // r14
  __int16 result; // ax
  __int64 v23; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r10
  __int64 v26; // rdx
  int CanPfnOriginalPteBeLost; // eax
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h]
  unsigned int v32; // [rsp+88h] [rbp+10h]
  unsigned int v33; // [rsp+90h] [rbp+18h]
  __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v30 = v1;
  v3 = 0;
  v4 = (ULONG_PTR *)(v1 + 152);
  v34 = *(_QWORD *)(v1 + 64);
  v29 = *(_QWORD *)(v34 + 224);
  v33 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v1 + 144) = v33 << 12;
  *(_DWORD *)(v1 + 44) = v33 << 12;
  *(_DWORD *)(v1 + 48) = *(_DWORD *)(a1 + 16);
  v5 = MiPageToNode(*(_QWORD *)(v1 + 152));
  v6 = v34;
  v7 = v5 + 1;
  v8 = *(_DWORD *)(a1 + 4);
  v9 = v33;
  v32 = v8;
  do
  {
    v10 = *v4;
    v11 = 0xFFFFDE0000000000uLL;
    v12 = 48 * *v4 - 0x220000000000LL;
    if ( *v4 != qword_140E361B8 )
    {
      if ( v7 && v7 != (unsigned int)MiPageToNode(v10) + 1 )
        v7 = 0;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = 2;
        LOBYTE(v10) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v10, v11);
      }
      LODWORD(v34) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      v9 = v33;
      if ( (*(_BYTE *)(v12 + 34) & 0x10) == 0
        || (CanPfnOriginalPteBeLost = MiCanPfnOriginalPteBeLost(v12), v18 = 0, !CanPfnOriginalPteBeLost) )
      {
        if ( (*(_BYTE *)(v6 + 172) & 0x40) != 0 )
        {
          v14 = *(_QWORD *)(v12 + 16);
          v28 = v14;
          v15 = *(_QWORD *)(v29 + 8LL * *(unsigned int *)(v29 + 1300) + 22304);
          v16 = v14;
          if ( (unsigned __int64)&v28 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v28 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v23 = v28;
            if ( (v28 & 1) != 0 && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                KernelWaitTime = Process[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v26 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v28 >> 3) & 0x1FF));
                  if ( (v26 & 0x20) != 0 )
                    v23 = v28 | 0x20;
                  v16 = v23 | 0x42;
                  if ( (v26 & 0x42) == 0 )
                    v16 = v23;
                }
              }
            }
          }
          v28 = v16 & ((v16 & 0x400) != 0 ? -5LL : -65537LL);
          v17 = v28;
          if ( (v14 & 0x400) == 0 )
            v17 = v28 & 0xFFFFFFFFFFFFFFF3uLL;
          v18 = 0;
          if ( v15 )
          {
            v19 = *(unsigned __int16 *)(v15 + 172);
            if ( v17 )
            {
              if ( qword_140E2D8C0 )
              {
                if ( (v17 & 0x10) != 0 )
                  LODWORD(v17) = v17 & 0xFFFFFFEF;
                else
                  LODWORD(v17) = qword_140E2D8C8 & v17;
              }
              PageFilePte = (unsigned int)v17 | 0x400000000LL;
              if ( qword_140E2D8C0 )
              {
                if ( (qword_140E2D8C0 & PageFilePte) != 0 )
                  PageFilePte = (unsigned int)v17 | 0x400000010LL;
                else
                  PageFilePte |= qword_140E2D8C0;
              }
            }
            else
            {
              PageFilePte = MiMakePageFilePte(4u);
            }
            v17 = (v19 << 12) ^ (PageFilePte ^ (v19 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
          }
          *(_QWORD *)(v12 + 16) = v17;
        }
        else
        {
          MiUpdatePfnBackingStore(v12, v6, v32);
          v18 = 0;
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags != v18 )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v8 = v32;
    }
    ++v8;
    ++v4;
    ++v3;
    v32 = v8;
  }
  while ( v3 < v9 );
  v21 = v30;
  *(_DWORD *)(a1 + 20) = v7;
  result = 8 * (dword_140FBF21C + 6);
  *(_WORD *)(v21 + 112) = result;
  return result;
}
