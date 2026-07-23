/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140393844
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1404B17F0 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14027E6A0 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140391D40 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x140728420 (ZwQueryVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x14077EE18 (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v8; // r12d
  struct _KTHREAD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // r9
  unsigned int v14; // r8d
  unsigned int v15; // r15d
  char *v16; // rsi
  char *v17; // rcx
  __int64 v18; // r14
  char *v19; // r12
  char *v20; // rax
  unsigned __int64 *v21; // rdx
  char *v22; // r10
  struct _KLOCK_ENTRIES *v23; // r9
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  int MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v35; // [rsp+30h] [rbp-D0h]
  unsigned int v36; // [rsp+34h] [rbp-CCh]
  unsigned int v37; // [rsp+38h] [rbp-C8h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-C0h] BYREF
  char *v39; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v40[63]; // [rsp+78h] [rbp-88h]
  char MemoryInformation[8]; // [rsp+270h] [rbp+170h] BYREF
  char v42; // [rsp+278h] [rbp+178h] BYREF

  v2 = (*(_BYTE *)(a1 + 2469) & 4) == 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( v2 )
    return (unsigned int)-1073741637;
  v5 = *(_DWORD *)(a1 + 2104);
  v6 = 0;
  v36 = v5;
  if ( v5 )
  {
    v8 = *(_DWORD *)(a1 + 2640) >> 12;
    v35 = v8;
    KeStackAttachProcess(*(PRKPROCESS *)(a1 + 3056), &ApcState);
    v9 = (struct _KTHREAD *)(a1 + 2472);
    StLockAcquireShared((struct VLOCK *)(a1 + 2472), v10, v11, v12);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 3068));
    v14 = 0;
    v15 = 0;
    if ( !*(_DWORD *)(a1 + 2644) )
      goto LABEL_9;
    while ( 1 )
    {
      if ( v14 >= v5 )
        goto LABEL_9;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 2648) + 8LL * v15) & 0x7FFFFFFFFFFF0000LL) == 0
        || (*(_WORD *)(*(_QWORD *)(a1 + 1432) + 2LL * v15) & 0xE000) != 0xC000 )
      {
        goto LABEL_8;
      }
      v37 = v14 + 1;
      v16 = (char *)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v15, 0, v13, 0);
      if ( (unsigned __int64)v16 <= 4 )
      {
        v9 = (struct _KTHREAD *)(a1 + 2472);
        goto LABEL_29;
      }
      StLockReleaseShared((struct _KTHREAD *)(a1 + 2472));
      if ( !*a2 )
      {
        v31 = *(unsigned int *)(a1 + 2640);
        v39 = v16;
        v40[0] = v31;
        MmSetPriorityVaRanges(1LL, &v39);
        goto LABEL_28;
      }
      v17 = v16;
      v18 = v8 << 12;
      v19 = &v16[v18];
      v20 = MemoryInformation;
      if ( v16 < &v16[v18] )
      {
        do
        {
          *(_QWORD *)v20 = v17;
          v17 += 4096;
          v20 += 16;
        }
        while ( v17 < v19 );
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v16,
             MemoryWorkingSetExInformation,
             MemoryInformation,
             16LL * v35,
             0LL) < 0
        && v16 < v19 )
      {
        v21 = (unsigned __int64 *)&v42;
        v32 = ((unsigned __int64)(v18 - 1) >> 12) + 1;
        do
        {
          *v21 = *v21 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
          v21 += 2;
          --v32;
        }
        while ( v32 );
      }
      v22 = v16;
      v23 = (struct _KLOCK_ENTRIES *)MemoryInformation;
      v24 = 0LL;
      while ( v22 < v19 )
      {
        if ( (*(_QWORD *)&v23->AvailableEntryBitmap & 1) != 0
          || (*(_QWORD *)&v23->AvailableEntryBitmap & 0xC00000LL) == 0x400000 )
        {
          v25 = *(_QWORD *)&v23->AvailableEntryBitmap & 0x7000000LL;
          if ( v25 == 100663296 )
          {
            if ( !*a2 )
            {
              v33 = *(unsigned int *)(a1 + 2640);
              v39 = v16;
              v40[0] = v33;
              v27 = 1LL;
              goto LABEL_26;
            }
            v26 = *a2 - 1;
            goto LABEL_22;
          }
          if ( v25 < 0x6000000 )
          {
            v21 = (unsigned __int64 *)*a2;
            if ( *a2 )
            {
              v30 = 2LL * (unsigned int)v24;
              v24 = (unsigned int)(v24 + 1);
              v40[v30 - 1] = v23->Thread;
              v26 = (__int64)v21 - 1;
              v40[v30] = 4096LL;
LABEL_22:
              *a2 = v26;
            }
          }
        }
        v22 += 4096;
        v23 = (struct _KLOCK_ENTRIES *)((char *)v23 + 16);
      }
      if ( !(_DWORD)v24 )
        goto LABEL_27;
      v27 = (unsigned int)v24;
LABEL_26:
      MmSetPriorityVaRanges(v27, &v39);
LABEL_27:
      v5 = v36;
      v8 = v35;
LABEL_28:
      v9 = (struct _KTHREAD *)(a1 + 2472);
      StLockAcquireShared((struct VLOCK *)(a1 + 2472), (__int64)v21, v24, v23);
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v15, v28, v29, MemoryInformationLength, 0);
LABEL_29:
      v14 = v37;
LABEL_8:
      if ( ++v15 >= *(_DWORD *)(a1 + 2644) )
      {
LABEL_9:
        StLockReleaseShared(v9);
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 3068));
        KiUnstackDetachProcess((__int64)&ApcState, 0);
        return v6;
      }
    }
  }
  return v6;
}
