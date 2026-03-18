/*
 * XREFs of ?GetBounds@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BEB40
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::GetBounds(__int64 a1, __int64 a2, _OWORD *a3, const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = *(_OWORD *)(a1 + 108);
  if ( *(_BYTE *)(a1 + 402) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\primitivegroup.cpp",
      a4);
  return 0LL;
}
