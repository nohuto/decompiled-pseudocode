/*
 * XREFs of ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800F6260
 * Callers:
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x1800F6130 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ?Initialize@CD2DResource@@MEAAJXZ @ 0x1800F6240 (-Initialize@CD2DResource@@MEAAJXZ.c)
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180102CC4 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x1801C7800 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x1802132E4 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1802A92FC (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180298480 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DResourceManager::AddResource(CD2DResourceManager *this, struct CD2DResource *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = (_QWORD *)((char *)a2 + 56);
  v5 = *(_QWORD *)this;
  if ( *(CD2DResourceManager **)(*(_QWORD *)this + 8LL) != this )
    __fastfail(3u);
  *v4 = v5;
  *((_QWORD *)a2 + 8) = this;
  *(_QWORD *)(v5 + 8) = v4;
  *(_QWORD *)this = v4;
  v6 = *(_QWORD *)a2;
  *((_BYTE *)a2 + 48) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(struct CD2DResource *))(v6 + 56))(a2) )
    *((_BYTE *)a2 + 50) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(struct CD2DResource *))(*(_QWORD *)a2 + 48LL))(a2) )
  {
    ++*((_DWORD *)this + 4);
    if ( *((_BYTE *)a2 + 50) )
      CD2DContext::AddHwProtectedResource(*((CD2DContext **)this + 3));
  }
}
