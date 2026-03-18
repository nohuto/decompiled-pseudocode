/*
 * XREFs of ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18016DE30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z @ 0x18016E300 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18016E340 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::HitTestContent(CVisual *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // ebx
  const struct D2D_RECT_F *TouchTargetBounds; // rax
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  *a4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 296LL))(this) )
    return 0LL;
  if ( a2 )
  {
    TouchTargetBounds = (const struct D2D_RECT_F *)CVisual::GetTouchTargetBounds(this, v12);
    *a4 = IsPointInRect(a3, TouchTargetBounds);
  }
  if ( *a4 )
    return 0LL;
  v8 = *((_QWORD *)this + 31);
  if ( !v8 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(__int64, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v8 + 216LL))(
             v8,
             (char *)this + 140,
             a3,
             a4);
  v10 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x1279u, 0LL);
    return v10;
  }
  return result;
}
