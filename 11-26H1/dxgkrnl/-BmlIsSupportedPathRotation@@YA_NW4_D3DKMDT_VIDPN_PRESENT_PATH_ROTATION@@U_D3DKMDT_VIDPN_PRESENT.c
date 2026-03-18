/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1402D947C
 * Callers:
 *     BmlPinPathContentRotation @ 0x1402D76DC (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1402D77B8 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x14034A3DC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

char __fastcall BmlIsSupportedPathRotation(
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  int v2; // eax
  unsigned int v3; // r10d
  int v4; // r11d
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  char v8; // r8
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r10d
  int v14; // eax
  int v15; // eax

  v2 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          WdLogSingleEntry1(1LL);
          WdLogGlobalForLineNumber = 1591;
          return 0;
        }
        v7 = v3 >> 3;
      }
      else
      {
        v7 = v3 >> 2;
      }
    }
    else
    {
      v7 = v3 >> 1;
    }
    v8 = 1;
    v9 = (v7 & 1) == 0;
  }
  else
  {
    v8 = 1;
    v9 = (v3 & 1) == 0;
  }
  if ( v9 )
    return 0;
  v10 = v4;
  if ( (unsigned int)(v4 - 1) <= 0xF )
    v10 = (v4 - 1) / 4 + 1;
  v11 = v10 - 1;
  if ( v11 )
  {
    v14 = v11 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
        {
          WdLogSingleEntry1(1LL);
          WdLogGlobalForLineNumber = 1615;
          return 0;
        }
        v12 = v3 >> 7;
      }
      else
      {
        v12 = v3 >> 6;
      }
    }
    else
    {
      v12 = v3 >> 5;
    }
  }
  else
  {
    v12 = v3 >> 4;
  }
  if ( (v12 & 1) == 0 )
    return 0;
  return v8;
}
