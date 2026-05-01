/*
 * XREFs of ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x180522900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D8604 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801DFD6C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?InternalAddRef@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEBAXXZ @ 0x18020DBB8 (-InternalAddRef@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___ @ 0x1805227FC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___.c)
 *     ?GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z @ 0x180522A30 (-GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionAdjustmentHistory::AddPositionAdjustment(__int64 a1, struct IApplicationView *a2)
{
  void *v4; // r8
  ULONGLONG TickCount64; // r15
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rdx
  volatile int *v9; // rdx
  __int64 *v10; // rdi
  volatile int *v11; // rdx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // r8
  unsigned int EntryCountForView; // eax
  int v16[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONGLONG v17; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)v16 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v16);
  TickCount64 = GetTickCount64();
  v17 = TickCount64;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 != *(_QWORD *)(a1 + 48)
    || (v7 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               a1 + 24,
               v8 + 1,
               v4),
        v7 >= 0) )
  {
    ++*(_QWORD *)(a1 + 32);
    v9 = (volatile int *)(16LL * *(_QWORD *)(a1 + 32));
    v10 = (__int64 *)((char *)v9 + *(_QWORD *)(a1 + 24) - 16);
    if ( v10 )
    {
      *v10 = (__int64)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
      v10[1] = TickCount64;
    }
  }
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (int)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v7);
  v20 = a1;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalAddRef(&v20, v9);
  v19 = a1;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalAddRef(&v19, v11);
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___(
    v12,
    *(unsigned int *)(a1 + 56),
    v13,
    (volatile signed __int32 *)&v19);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v19);
  EntryCountForView = PositionAdjustmentHistory::GetEntryCountForView((PositionAdjustmentHistory *)a1, a2);
  if ( EntryCountForView >= 3 )
    v6 = 2 - (EntryCountForView < 4);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v16);
  return v6;
}
