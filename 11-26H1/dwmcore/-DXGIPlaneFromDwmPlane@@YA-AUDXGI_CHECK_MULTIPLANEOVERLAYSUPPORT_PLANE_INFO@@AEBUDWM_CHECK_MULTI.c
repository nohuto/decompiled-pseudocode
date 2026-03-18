/*
 * XREFs of ?DXGIPlaneFromDwmPlane@@YA?AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x180128A90
 * Callers:
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180128560 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 * Callees:
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall DXGIPlaneFromDwmPlane(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *result; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  memset_0(a1, 0, 0x90uLL);
  *a1 = *(_DWORD *)a2;
  *((_QWORD *)a1 + 1) = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a2 + 8) + 40LL))(
                          *(_QWORD *)(a2 + 8),
                          a1 + 7);
  a1[4] = *(_DWORD *)(a2 + 16);
  v4 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a2 + 8) + 24LL))(*(_QWORD *)(a2 + 8), &v6);
  result = a1;
  *(_QWORD *)(a1 + 5) = v4;
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 24);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 40);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 56);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 72);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(a2 + 88);
  *((_OWORD *)a1 + 7) = *(_OWORD *)(a2 + 104);
  *((_OWORD *)a1 + 8) = *(_OWORD *)(a2 + 120);
  return result;
}
