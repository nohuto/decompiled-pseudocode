/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x1801611D4
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180046590 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 * Callees:
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v4 = 32 * a2;
  v5 = *a1;
  v6 = *(_QWORD *)(32 * a2 + *a1 + 16);
  if ( v6 )
  {
    *(_QWORD *)(v4 + v5 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(_QWORD *)(v4 + v5);
  if ( v7 )
  {
    *(_QWORD *)(v4 + v5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = a1[1];
  if ( a2 != v8 - 1 )
    memmove_0((void *)(v4 + *a1), (const void *)(v4 + *a1 + 32), 32 * (v8 - a2) - 32);
  --a1[1];
  return 0LL;
}
