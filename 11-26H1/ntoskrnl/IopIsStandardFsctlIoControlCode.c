/*
 * XREFs of IopIsStandardFsctlIoControlCode @ 0x140467430
 * Callers:
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopIsStandardFsctlIoControlCode(unsigned int a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx

  if ( a1 == 1126400 )
    return 1;
  if ( a1 <= 0x110028 )
  {
    if ( a1 == 1114152 )
      return 1;
    v7 = a1 - 589864;
    if ( !v7 )
      return 1;
    v8 = v7 - 524252;
    if ( !v8 )
      return 1;
    v9 = v8 - 4;
    if ( !v9 )
      return 1;
    v10 = v9 - 16;
    if ( !v10 )
      return 1;
    return v10 == 4;
  }
  else
  {
    v2 = a1 - 1114160;
    if ( !v2 )
      return 1;
    v3 = v2 - 8;
    if ( !v3 )
      return 1;
    v4 = v3 - 12228;
    if ( !v4 )
      return 1;
    v5 = v4 - 4112;
    if ( !v5 )
      return 1;
    return v5 == 32779;
  }
}
