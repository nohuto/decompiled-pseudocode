/*
 * XREFs of ?IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804E2678
 * Callers:
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2A00 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x18022A7D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CAppTransitionManager::IsLayoutOperationCrossFadeOnly(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2)
{
  bool v4; // si
  bool v5; // zf
  __int64 v6; // rax
  int (__fastcall *v7)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v11; // rax
  void (__fastcall *v12)(struct IAppLayoutOperationItem *, _QWORD, RECT *); // rax
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+38h] [rbp-28h] BYREF
  RECT rcSrc1; // [rsp+48h] [rbp-18h] BYREF

  v4 = 1;
  if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2) )
    return 0;
  v5 = *((_QWORD *)this + 26) == 0LL;
  v14 = 0LL;
  if ( v5 )
    goto LABEL_18;
  v6 = *(_QWORD *)a2;
  *(_QWORD *)&rcDst.left = 0LL;
  v7 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v6 + 32);
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&rcDst.left);
  if ( v7(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v8) >= 0 )
  {
    v9 = *((_QWORD *)this + 26);
    v10 = *(void (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v9 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
    v10(v9, *(_QWORD *)&rcDst.left, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v14);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&rcDst.left);
  if ( !v14 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14) == 1 )
  {
LABEL_18:
    if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
    {
      if ( v14 )
        goto LABEL_11;
      v11 = *(_QWORD *)a2;
      rcSrc1 = 0LL;
      v12 = *(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, RECT *))(v11 + 56);
      rcDst = 0LL;
      v12(a2, 0LL, &rcSrc1);
      (*(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, struct tagRECT *))(*(_QWORD *)a2 + 72LL))(
        a2,
        0LL,
        &rcDst);
      if ( Geometry::operator==(&rcSrc1, &rcDst) )
        goto LABEL_11;
    }
    else if ( v14 )
    {
      rcDst = 0LL;
      rcSrc1 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v14 + 24LL))(v14, 0LL, &rcSrc1);
      v4 = !IntersectRect(&rcDst, &rcSrc1, (const RECT *)((char *)this + 264));
      goto LABEL_11;
    }
  }
  v4 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  return v4;
}
