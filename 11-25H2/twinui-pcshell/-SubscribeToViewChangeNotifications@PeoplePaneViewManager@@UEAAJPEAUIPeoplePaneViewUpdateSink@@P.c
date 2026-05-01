/*
 * XREFs of ?SubscribeToViewChangeNotifications@PeoplePaneViewManager@@UEAAJPEAUIPeoplePaneViewUpdateSink@@PEAK@Z @ 0x180402F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UViewChangeListener@PeoplePaneViewManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UViewChangeListener@PeoplePaneViewManager@@@@V?$CSimpleArrayStandardCompareHelper@UViewChangeListener@PeoplePaneViewManager@@@@V?$CSimpleArrayStandardMergeHelper@UViewChangeListener@PeoplePaneViewManager@@@@@@QEAAJ_K0@Z @ 0x1802CDC0C (-_EnsureCapacity@-$CTSimpleArray@UViewChangeListener@PeoplePaneViewManager@@$0PPPPPPPO@V-$CTPoli.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PeoplePaneViewManager::SubscribeToViewChangeNotifications(
        PeoplePaneViewManager *this,
        struct IPeoplePaneViewUpdateSink *a2,
        unsigned int *a3)
{
  struct IPeoplePaneViewUpdateSink *v6; // rbx
  unsigned int v7; // r14d
  _QWORD *v8; // rbp
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IPeoplePaneViewUpdateSink *v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( a2 )
  {
    v15 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v6 = a2;
  }
  v7 = *((_DWORD *)this + 106);
  *((_DWORD *)this + 106) = v7 + 1;
  *a3 = v7;
  v8 = (_QWORD *)((char *)this + 392);
  v9 = 0;
  v10 = v8[1];
  if ( v10 != v8[3]
    || (v9 = CTSimpleArray<PeoplePaneViewManager::ViewChangeListener,4294967294,CTPolicyCoTaskMem<PeoplePaneViewManager::ViewChangeListener>,CSimpleArrayStandardCompareHelper<PeoplePaneViewManager::ViewChangeListener>,CSimpleArrayStandardMergeHelper<PeoplePaneViewManager::ViewChangeListener>>::_EnsureCapacity(
               v8,
               v10 + 1,
               (unsigned __int64)a3),
        v9 >= 0) )
  {
    v11 = v8[1];
    v8[1] = v11 + 1;
    v12 = *v8 + 16 * v11;
    if ( !v12 )
      goto LABEL_9;
    *(_QWORD *)v12 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v12);
    *(_DWORD *)(v12 + 8) = v7;
  }
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DB,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_9:
  if ( v6 )
    (*(void (__fastcall **)(struct IPeoplePaneViewUpdateSink *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v9;
}
