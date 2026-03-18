/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CDrawingContext@@AEBAJPEAVCVisual@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180170690
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  __int64 (__fastcall *v7)(__int64, void *); // rdi
  int v8; // eax
  void *v9; // rdx
  __int64 result; // rax
  unsigned int v11; // edi

  v7 = *(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)a2 + 208LL);
  v8 = *(_DWORD *)(a1 + 288);
  if ( v8 )
    v9 = (void *)(*(_QWORD *)(a1 + 280) + 68LL * (unsigned int)(v8 - 1));
  else
    v9 = &CMILMatrix::Identity;
  result = v7(a2, v9);
  v11 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0xAFAu, 0LL);
    return v11;
  }
  else
  {
    *a6 = 0LL;
  }
  return result;
}
