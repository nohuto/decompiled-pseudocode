/*
 * XREFs of GetPrefixCount @ 0x14002B41C
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14002A200 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x14002B2D0 (xxxPSMGetTextExtent.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 *     xxxPSMTextOut @ 0x1402EE394 (xxxPSMTextOut.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPrefixCount(__int16 *a1, int a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  int v5; // ebx
  int v6; // r10d
  __int64 v7; // r11
  int v8; // esi
  __int16 v9; // r9
  int v10; // eax

  v4 = -1;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( a2 > 0 )
  {
    v8 = a2;
    if ( a3 )
      v8 = a4;
    while ( 1 )
    {
      v9 = *a1;
      --a2;
      if ( !*a1 )
        goto LABEL_12;
      v10 = v8--;
      if ( v10 <= 0 )
        goto LABEL_12;
      ++a1;
      if ( v9 == 38 )
        break;
      if ( v9 == 30 )
      {
        ++v6;
LABEL_16:
        v4 = v5;
        goto LABEL_11;
      }
      if ( v9 == 31 )
      {
        ++v6;
        if ( !a2 )
          goto LABEL_12;
        ++v6;
        ++a1;
        --a2;
      }
      else
      {
        ++v5;
        if ( a3 )
          *(_WORD *)(a3 + 2 * v7++) = v9;
      }
LABEL_11:
      if ( a2 <= 0 )
        goto LABEL_12;
    }
    ++v6;
    if ( *a1 == 38 )
    {
      if ( a3 )
        *(_WORD *)(a3 + 2 * v7++) = 38;
      --a2;
      ++a1;
      ++v5;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
LABEL_12:
  if ( a3 )
    *(_WORD *)(a3 + 2 * v7) = 0;
  return v4 | ((unsigned __int16)v6 << 16);
}
