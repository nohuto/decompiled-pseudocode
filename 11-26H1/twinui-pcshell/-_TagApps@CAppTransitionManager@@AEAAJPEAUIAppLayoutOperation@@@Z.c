/*
 * XREFs of ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E380C
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2060 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CAppTransitionTagger@@QEAA@XZ @ 0x1804E1F54 (--1CAppTransitionTagger@@QEAA@XZ.c)
 *     ?_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z @ 0x1804E355C (-_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E393C (-_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::_TagApps(CAppTransitionManager *this, struct IAppLayoutOperation *a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int i; // esi
  __int64 v10; // rax
  int (__fastcall *v11)(struct IAppLayoutOperation *, _QWORD, GUID *, struct IAppLayoutOperationItem **); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  struct IAppLayoutOperationItem *v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 23);
  v4 = *((_DWORD *)this + 75);
  v16 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, (char *)this + 264, v4);
  v6 = *(_QWORD *)a2;
  v14 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(v6 + 24))(a2, &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    for ( i = 0; i < v14; ++i )
    {
      v10 = *(_QWORD *)a2;
      v15 = 0LL;
      v11 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, struct IAppLayoutOperationItem **))(v10 + 32);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
      if ( v11(a2, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v15) >= 0 )
        CAppTransitionManager::_PrepareTaggingInfoForApp(this, v15);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
    }
    if ( *((_DWORD *)this + 71) == 1 && !*((_BYTE *)this + 281) )
      CAppTransitionManager::_TagBuffer(this, a2);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17E,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  CAppTransitionTagger::~CAppTransitionTagger((CAppTransitionTagger *)&v16);
  return v8;
}
