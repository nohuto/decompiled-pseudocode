/*
 * XREFs of ?GetD2DBitmap@?$CDeviceTextureT@VICrossAdapterTexture@@@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B7D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureD2DBitmap@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJ_N@Z @ 0x1802B7A30 (-EnsureD2DBitmap@-$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceTextureT<ICrossAdapterTexture>::GetD2DBitmap(__int64 a1, _QWORD *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v6 = CDeviceTextureT<ICrossAdapterTexture>::EnsureD2DBitmap(a1 - 120, a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( a3 )
      v9 = *(_QWORD *)(a1 + 112);
    else
      v9 = *(_QWORD *)(a1 + 104);
    *a2 = v9;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\DeviceTexture.h",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
