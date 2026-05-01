/*
 * XREFs of ?IsPlaceModeEnabled@@YA_NXZ @ 0x180401430
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FFAD0 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool IsPlaceModeEnabled(void)
{
  int v0; // eax
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v0 = dword_18089BFA0;
  if ( !dword_18089BFA0 )
  {
    v2 = 0;
    v3 = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\WindowArrangement\\PlaceMode",
           L"Enabled",
           0x10u,
           0LL,
           &v2,
           &v3) )
    {
      v0 = 1;
    }
    else
    {
      v0 = 2 - (v2 != 0);
    }
    dword_18089BFA0 = v0;
  }
  return v0 == 1;
}
