/*
 * XREFs of ?_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ @ 0x18008D5D8
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800634B0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18006384C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x18008D9A8 (-SetParentVisible@CAccent@@QEAAX_N@Z.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18008DA1C (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::_IsAcrylicBlurEnabledAndAllowed(CAccent *this)
{
  int v1; // eax
  char v2; // dl

  v1 = *((_DWORD *)this + 46);
  v2 = 0;
  if ( v1 == 4 || v1 == 3 )
  {
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
      return 1;
  }
  return v2;
}
