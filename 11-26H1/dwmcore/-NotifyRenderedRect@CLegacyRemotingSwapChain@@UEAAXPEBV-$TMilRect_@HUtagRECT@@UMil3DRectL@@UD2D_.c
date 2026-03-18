/*
 * XREFs of ?NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A8A50
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtagRECT@@@Z @ 0x18018CEC4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtag.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRemotingSwapChain::NotifyRenderedRect(__int64 a1, int *a2)
{
  int v4; // eax
  int v5; // r10d
  __int64 v6; // r8
  __int64 v7; // [rsp+20h] [rbp-29h] BYREF
  struct tagRECT v8; // [rsp+28h] [rbp-21h] BYREF
  FastRegion::CRegion *v9[10]; // [rsp+40h] [rbp-9h] BYREF

  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) + 32LL))(
    *(_QWORD *)(a1 + 64) + 8LL,
    &v7);
  v4 = v7;
  v5 = HIDWORD(v7);
  *(_QWORD *)&v8.right = v7;
  *(_QWORD *)&v8.left = 0LL;
  if ( a2 )
  {
    if ( TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v8.left, a2) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v9, &v8);
      CRegion::Union((const struct FastRegion::Internal::CRgnData **)(a1 + 112), v9);
      FastRegion::CRegion::FreeMemory(v9);
    }
  }
  else if ( (int)v7 <= 0 || SHIDWORD(v7) <= 0 )
  {
    **(_DWORD **)(a1 + 112) = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 112);
    *(_DWORD *)(v6 + 8) = v7;
    *(_QWORD *)v6 = 2LL;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 16) = 16;
    *(_DWORD *)(v6 + 32) = v4;
    *(_DWORD *)(v6 + 28) = 0;
    *(_DWORD *)(v6 + 20) = v5;
    *(_DWORD *)(v6 + 24) = 16;
  }
}
