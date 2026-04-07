/*
 * XREFs of ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18003F5DC
 * Callers:
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x1800388F0 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18003F4F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18003F644 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x180040BFC (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A0700 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::_AnyTransparentBackground(CAccent *this)
{
  int v1; // eax
  char v2; // dl

  v1 = *((_DWORD *)this + 60);
  if ( v1 == 2 )
    return 1;
  v2 = 0;
  if ( (unsigned int)(v1 - 3) <= 1 )
  {
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
      return 1;
  }
  return v2;
}
