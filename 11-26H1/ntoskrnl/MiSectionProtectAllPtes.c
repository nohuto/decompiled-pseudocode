/*
 * XREFs of MiSectionProtectAllPtes @ 0x1402E5F80
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiSectionProtectPageFilePte @ 0x1402B16A8 (MiSectionProtectPageFilePte.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiSectionProtectValidPte @ 0x1402E64E0 (MiSectionProtectValidPte.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiSectionProtectProtoPte @ 0x14033EE50 (MiSectionProtectProtoPte.c)
 *     MiSectionProtectTransitionPte @ 0x140340FE0 (MiSectionProtectTransitionPte.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiMakeProtoLeafValid @ 0x1404B9358 (MiMakeProtoLeafValid.c)
 */

void __fastcall MiSectionProtectAllPtes(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r8
  unsigned __int64 v3; // r14
  int v4; // ebp
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // r12
  int v7; // edi
  unsigned __int64 v9; // rbx
  int valid; // ebx
  unsigned __int8 v11; // al
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  unsigned __int64 v26; // r10
  __int64 PrototypePteDirect; // rbp
  __int64 v28; // r11
  int ProtoLeafValid; // eax
  ULONG_PTR v30; // rcx
  __int64 v31; // r8
  unsigned int *v32; // [rsp+28h] [rbp-70h] BYREF
  __int128 v33; // [rsp+30h] [rbp-68h] BYREF
  __int128 v34; // [rsp+40h] [rbp-58h]
  KIRQL v35; // [rsp+A0h] [rbp+8h]
  int v36; // [rsp+A8h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0LL;
  v3 = 0LL;
  v4 = 1;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) >> 10) & 0x7F;
  v36 = 1;
  v33 = 0LL;
  v34 = 0LL;
  v35 = *(_BYTE *)(a1 + 24);
  if ( v5 <= v6 )
  {
    while ( 1 )
    {
      if ( (v5 & 0xFFF) == 0 || v4 )
      {
        v36 = 0;
        if ( v3 )
        {
          if ( (_QWORD)v33 )
          {
            MiFlushTbList(v33);
            *(_QWORD *)&v33 = 0LL;
            MiReleaseProcessorFlushList();
            *((_QWORD *)&v33 + 1) = v25;
          }
          MiUnlockPageTableInternal(v1, v3);
        }
        v11 = *(_DWORD *)(v1 + 184) & 0xF;
        if ( (v11 == 5 || v11 <= 4u)
          && ((*(_DWORD *)(v1 + 184) & 0xF) != 1 ? (v12 = (__int64 *)(v1 + 192)) : (v12 = &qword_140E37980),
              (v13 = *v12, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
            ? (v15 = 0LL)
            : (v15 = MmInternal[81]),
              (*(_DWORD *)((v15 << 6) + v13) & 0x40000000) != 0)
          || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v1, v35);
          MiLockWorkingSetShared(v1, v16, v17);
        }
        v3 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v5, v7, v35, 0);
      }
      v9 = *(_QWORD *)v5;
      if ( (*(_QWORD *)v5 & 1) != 0 )
      {
        valid = MiSectionProtectValidPte(a1, &v33, v5, *(_QWORD *)v5);
        if ( valid >= 0 )
          goto LABEL_8;
        if ( (_BYTE)v34 )
        {
          if ( (_QWORD)v33 )
          {
            MiFlushTbList(v33);
            *(_QWORD *)&v33 = 0LL;
            MiReleaseProcessorFlushList();
            *((_QWORD *)&v33 + 1) = v24;
          }
          MiUnlockPageTableInternal(v1, v3);
          MiUnlockWorkingSetShared(v1, v35);
          MiCopyOnWriteCheckConditions(v1, (unsigned int)valid, *((_QWORD *)&v34 + 1));
          LOBYTE(v34) = 0;
          v3 = 0LL;
          v36 = 1;
          MiLockWorkingSetShared(v1, v22, v23);
        }
      }
      else if ( (v9 & 0x400) != 0 )
      {
        if ( (unsigned int)MiIsPrototypePteVadLookup(*(_QWORD *)v5)
          || (PrototypePteDirect = MiGetPrototypePteDirect(v9),
              PrototypePteDirect == MiGetProtoPteAddress(v28, v26 >> 12, 8u, &v32)) )
        {
          MiSectionProtectProtoPte(a1, v5, v9);
          goto LABEL_8;
        }
        if ( (_QWORD)v33 )
        {
          MiFlushTbList(v33);
          *(_QWORD *)&v33 = 0LL;
          MiReleaseProcessorFlushList();
          *((_QWORD *)&v33 + 1) = v31;
        }
        ProtoLeafValid = MiMakeProtoLeafValid(v5);
        v30 = v5;
        v36 = 1;
        v5 += 8LL;
        if ( ProtoLeafValid >= 0 )
          v5 = v30;
      }
      else
      {
        if ( (v9 & 0x800) == 0 )
        {
          MiSectionProtectPageFilePte((__int64 *)a1, (unsigned __int64 *)v5, *(_QWORD *)v5);
LABEL_8:
          v5 += 8LL;
          goto LABEL_9;
        }
        if ( (int)MiSectionProtectTransitionPte(a1, v5, v2) >= 0 )
          goto LABEL_8;
      }
LABEL_9:
      v4 = v36;
      if ( v5 > v6 )
        break;
      v2 = 0LL;
    }
  }
  if ( (_QWORD)v33 )
  {
    MiFlushTbList(v33);
    MiReleaseProcessorFlushList();
  }
  if ( v3 )
  {
    if ( v3 == 0xFFFFF6FB7DBEDF68uLL )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = *(_DWORD *)(v1 + 184) & 0xF;
      if ( v19 )
      {
        if ( v19 == 7 )
        {
          v20 = 1LL;
        }
        else
        {
          v20 = 3LL;
          if ( v19 == 5 )
            v20 = 0LL;
        }
      }
      else
      {
        v20 = 2LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v20]);
    }
    else if ( (*(_DWORD *)(v1 + 184) & 0xF) != 0
           || v3 < 0xFFFFF6FB7DBED000uLL
           || v3 > 0xFFFFF6FB7DBEDFFFuLL
           || (v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(v1 + 184) & 0xF) != 0 && v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBEDFFFuLL )
        _InterlockedAnd(
          (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4
                                                                       * ((unsigned __int64)(2
                                                                                           * (unsigned int)((__int64)(v3 + 0x90482413000LL) >> 3)) >> 5)
                                                                       + 4],
          ~(2 << ((2 * ((__int64)(v3 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                 * ((__int64)(v3 + 0x90482413000LL) >> 3)) & 0x1F)));
      else
        _InterlockedAnd64((volatile signed __int64 *)v3, 0xCFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v21 + 4 * ((v3 >> 3) & 0x1FF)));
    }
  }
}
