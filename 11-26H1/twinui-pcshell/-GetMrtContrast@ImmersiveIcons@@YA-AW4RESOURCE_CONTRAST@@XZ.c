/*
 * XREFs of ?GetMrtContrast@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@XZ @ 0x1802B93FC
 * Callers:
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x180299CE8 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 ImmersiveIcons::GetMrtContrast()
{
  unsigned int v0; // esi
  int v1; // edi
  int v2; // ebx
  unsigned __int16 SysColor; // ax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  v5 = 0LL;
  LODWORD(v5) = 16;
  if ( SystemParametersInfoW(0x42u, 0x10u, &v5, 0) && (BYTE4(v5) & 1) != 0 )
  {
    v1 = 2 * (unsigned __int8)GetSysColor(5);
    v2 = (unsigned __int8)(GetSysColor(5) >> 16);
    SysColor = GetSysColor(5);
    LOBYTE(v0) = v2 + v1 + 4 * HIBYTE(SysColor) + HIBYTE(SysColor) > 0x400u;
    v0 += 2;
  }
  return v0;
}
