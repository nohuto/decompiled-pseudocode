/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403EA560
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1403EA4C0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 * Callees:
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020C608 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14027EAF0 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCleanup @ 0x1403E9B88 (SmKmStoreHelperCleanup.c)
 *     SmFpCleanup @ 0x1403E9CB0 (SmFpCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1403E9D34 (SmKmStoreHelperCheckWaitCommand.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403E9E98 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  bool v1; // zf
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rdi
  void *v9; // rcx
  struct _KPROCESS *v10; // rcx
  _QWORD *v11; // rdi
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  *(_BYTE *)(a1 + 2469) |= 1u;
  v1 = *(_QWORD *)(a1 + 2632) == 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !v1 )
  {
    KeSetEvent((PRKEVENT)(a1 + 2584), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 2632), Executive, 0, 0, 0LL);
  }
  v3 = *(void **)(a1 + 2632);
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 2664, 1);
  if ( (*(_BYTE *)(a1 + 2469) & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 2952) )
    {
      KeSetEvent((PRKEVENT)(a1 + 2960), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 2952), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 2952), 0x746C6644u);
    }
    if ( (*(_BYTE *)(a1 + 2469) & 4) != 0 )
    {
      v10 = *(struct _KPROCESS **)(a1 + 3056);
      if ( v10 )
        KeStackAttachProcess(v10, &ApcState);
      if ( (*(_BYTE *)(a1 + 2469) & 4) != 0 )
      {
        v11 = *(_QWORD **)(a1 + 3040);
        if ( v11 )
        {
          if ( *v11 )
            PspUserApcKernelRoutine();
          ExFreePoolWithTag(v11, 0);
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 64, 0);
  v5 = *(void **)(a1 + 48);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(a1 + 2160);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(a1 + 2208);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)a1);
  SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(a1);
  KeLeaveCriticalRegion();
  if ( (*(_BYTE *)(a1 + 2469) & 4) != 0 && *(_QWORD *)(a1 + 3056) )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  v8 = *(void **)(a1 + 2648);
  if ( (*(_BYTE *)(a1 + 2469) & 4) != 0 )
  {
    v9 = *(void **)(a1 + 2656);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    SmKmStoreHelperCleanup((PVOID *)(a1 + 2664));
    SmKmStoreHelperCleanup((PVOID *)(a1 + 2808));
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  SmFpCleanup(a1 + 3080);
  if ( (*(_BYTE *)(a1 + 2469) & 0x10) != 0 )
    SmAcquireReleaseCharges(*(_QWORD *)(a1 + 3200), *(unsigned int *)(a1 + 2640), 1, 1);
  if ( *(char *)(a1 + 2469) < 0
    && *(_BYTE *)(a1 + 3220) != 0xFF
    && _InterlockedDecrement64((volatile signed __int64 *)(**(_QWORD **)(*(_QWORD *)(a1 + 3200) + 2208LL)
                                                         + 8LL * *(unsigned __int8 *)(a1 + 3220)
                                                         + 21528)) <= -1 )
  {
    __fastfail(0xEu);
  }
}
