/*
 * XREFs of ?NotifyRenderedRect@CConversionSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A7960
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConversionSwapChain::NotifyRenderedRect(__int64 a1, const struct tagRECT *a2)
{
  int v4; // r9d
  int v5; // r10d
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-78h] BYREF
  int v8; // [rsp+24h] [rbp-74h]
  FastRegion::CRegion *v9[10]; // [rsp+30h] [rbp-68h] BYREF

  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 272) + 88LL))(*(_QWORD *)(a1 + 272), &v7);
  v4 = v7;
  v5 = v8;
  if ( a2 )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v9, a2);
    CRegion::Union((const struct FastRegion::Internal::CRgnData **)(a1 + 776), v9);
    FastRegion::CRegion::FreeMemory(v9);
  }
  else if ( v7 <= 0 || v8 <= 0 )
  {
    **(_DWORD **)(a1 + 776) = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 776);
    *(_QWORD *)v6 = 2LL;
    *(_DWORD *)(v6 + 8) = v4;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 16) = 16;
    *(_DWORD *)(v6 + 28) = 0;
    *(_DWORD *)(v6 + 32) = v4;
    *(_DWORD *)(v6 + 20) = v5;
    *(_DWORD *)(v6 + 24) = 16;
  }
}
