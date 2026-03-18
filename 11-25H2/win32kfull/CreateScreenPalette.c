/*
 * XREFs of CreateScreenPalette @ 0x1402DD220
 * Callers:
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1402B3BAC (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1402011BC (GreGetSystemPaletteUse.c)
 *     GreGetSystemPaletteEntries @ 0x140310B00 (GreGetSystemPaletteEntries.c)
 */

__int64 __fastcall CreateScreenPalette(HDC a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v6; // ebx
  int v7; // ebp
  signed int DeviceCaps; // esi
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  char *v12; // rdi
  int v13; // esi
  __int64 v14; // rax
  char *v15; // rcx
  __int64 Palette; // rax

  v6 = 0;
  if ( (unsigned int)GreGetSystemPaletteUse(a1) == 1 )
    v7 = (int)GreGetDeviceCaps(a1, 106LL) / 2;
  else
    v7 = 1;
  DeviceCaps = GreGetDeviceCaps(a1, 104LL);
  if ( DeviceCaps < 0 )
    return 3221225485LL;
  if ( DeviceCaps < v7 )
    return 3221225485LL;
  v9 = 4LL * (unsigned int)DeviceCaps;
  if ( v9 > 0xFFFFFFFF )
    return 3221225485LL;
  v10 = v9 + 8;
  if ( v10 < 8 )
    return 3221225485LL;
  v11 = Win32AllocPoolWithQuotaZInit(v10, 1650684757LL);
  v12 = (char *)v11;
  if ( v11 )
  {
    *(_WORD *)v11 = 768;
    *(_WORD *)(v11 + 2) = DeviceCaps;
    if ( !(unsigned int)GreGetSystemPaletteEntries(a1, 0, DeviceCaps, (struct tagPALETTEENTRY *)(v11 + 4)) )
      goto LABEL_14;
    v13 = DeviceCaps - v7;
    if ( v7 < (__int64)v13 )
    {
      v14 = v13 - (__int64)v7;
      v15 = &v12[4 * v7 + 7];
      do
      {
        *v15 = 4;
        v15 += 4;
        --v14;
      }
      while ( v14 );
    }
    Palette = GreCreatePalette(v12, v7);
    if ( Palette )
    {
      *a2 = v12;
      *a3 = Palette;
    }
    else
    {
LABEL_14:
      Win32FreePool(v12);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
