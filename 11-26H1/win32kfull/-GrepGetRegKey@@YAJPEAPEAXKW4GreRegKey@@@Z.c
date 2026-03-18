/*
 * XREFs of ?GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z @ 0x1401C6450
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXW4GreRegKey@@H@Z @ 0x14010FDF8 (-FinishStockFontInitInternal@@YAXW4GreRegKey@@H@Z.c)
 *     ?FNTCachepQueryReg@@YAHW4GreRegKey@@PEAT_LARGE_INTEGER@@PEAK@Z @ 0x1401C6574 (-FNTCachepQueryReg@@YAHW4GreRegKey@@PEAT_LARGE_INTEGER@@PEAK@Z.c)
 *     GrepFontSubSystemInitialize @ 0x140323A20 (GrepFontSubSystemInitialize.c)
 *     bInitStockFontsInternal @ 0x1403FBDC8 (bInitStockFontsInternal.c)
 * Callees:
 *     ?GrepGetRegKeyCommon@@YAJPEAPEAXKPEBG@Z @ 0x1401C64E4 (-GrepGetRegKeyCommon@@YAJPEAPEAXKPEBG@Z.c)
 */

__int64 __fastcall GrepGetRegKey(void **a1, ACCESS_MASK a2, int a3)
{
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  const WCHAR *v11; // r8

  v3 = a3 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                if ( v9 != 1 )
                  return 3221225485LL;
                v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows";
              }
              else
              {
                v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont";
              }
            }
            else
            {
              v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\SmallFont";
            }
          }
          else
          {
            v11 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
          }
        }
        else
        {
          v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontMapper\\FamilyDefaults";
        }
      }
      else
      {
        v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts";
      }
    }
    else
    {
      v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts";
    }
  }
  else
  {
    v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize";
  }
  return GrepGetRegKeyCommon(a1, a2, v11);
}
