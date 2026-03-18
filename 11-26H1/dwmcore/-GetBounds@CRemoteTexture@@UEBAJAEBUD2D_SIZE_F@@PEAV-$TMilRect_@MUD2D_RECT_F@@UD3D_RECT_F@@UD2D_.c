/*
 * XREFs of ?GetBounds@CRemoteTexture@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18027F380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteTexture::GetBounds(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\globalremotetexture.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
    *(_DWORD *)(a3 + 8) = *a2;
    *(_DWORD *)(a3 + 12) = a2[1];
  }
  return 0LL;
}
