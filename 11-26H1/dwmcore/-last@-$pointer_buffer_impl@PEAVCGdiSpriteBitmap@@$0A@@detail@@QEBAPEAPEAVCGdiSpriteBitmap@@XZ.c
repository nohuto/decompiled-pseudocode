/*
 * XREFs of ?last@?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEBAPEAPEAVCGdiSpriteBitmap@@XZ @ 0x1800E0830
 * Callers:
 *     ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x1800DF778 (-OnSourceModificationsChanged@CWindowNode@@AEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAAPEAPEAVCGdiSpriteBitmap@@_K0@Z @ 0x1800DF9D4 (-reserve_region@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitma.c)
 *     ?SetIsClipToDirty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024B7E8 (-SetIsClipToDirty@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>::last(__int64 *a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v2 = (unsigned __int64)a1;
  v3 = *a1 & 3;
  v4 = *(_DWORD *)a1 & 3;
  if ( !v3 )
  {
    v8 = 1LL;
    return v2 + 8 * v8;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v2 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_6:
    v8 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    return v2 + 8 * v8;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return 0LL;
  if ( v6 != 1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v9 = v3 - 1;
  if ( !v9 )
    goto LABEL_6;
  if ( (unsigned __int64)(v9 - 1) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  return v2;
}
