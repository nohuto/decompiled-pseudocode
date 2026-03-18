/*
 * XREFs of _PopulateDisplayModeFromPresentPath @ 0x1402D8FF0
 * Callers:
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x14034A3DC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall PopulateDisplayModeFromPresentPath(
        unsigned int *a1,
        unsigned int *a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        unsigned __int16 a8,
        struct _D3DDDI_RATIONAL *a9,
        unsigned __int8 *a10)
{
  __int64 v13; // r14
  __int64 result; // rax

  v13 = a4;
  *a10 = 0;
  a9[1].Numerator = a1[7];
  a9->Numerator = a1[4];
  a9->Denominator = a1[5];
  a9[3].Numerator = (int)(a2[14] << 29) >> 29;
  a9[4].Denominator = (a9[4].Denominator & 0xFFFFFFFE ^ a5 & 1) & 0xFFFFFFFD;
  a9[5].Numerator = (a7 != 0 ? 0x80 : 0) | (a6 != 0 ? 0x40 : 0) | (a8 ^ (LOWORD(a9[5].Numerator) ^ a8) & 0xFFF0) & 0x10F;
  a9[2] = *(struct _D3DDDI_RATIONAL *)(a2 + 7);
  if ( ((a2[14] >> 3) & 0x3F) != 0 )
    a9[2].Denominator *= (a2[14] >> 3) & 0x3F;
  a9[1].Denominator = DmmMapVSyncFromRationalToInteger(
                        a9 + 2,
                        (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(a2[14] << 29) >> 29),
                        a10);
  switch ( a3 )
  {
    case 1:
      goto LABEL_9;
    case 2:
      a9[4].Numerator = 2;
      break;
    case 3:
      a9[4].Numerator = 1;
      break;
    default:
      if ( a3 != 4 && a3 != 5 && a3 != 255 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 153;
        if ( a3 == 253 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 156;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"DmmScaling != D3DKMDT_VPPS_PREFERRED",
            156LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
LABEL_9:
      a9[4].Numerator = 0;
      break;
  }
  result = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v13) - 1;
  if ( !(_DWORD)result )
    goto LABEL_14;
  result = (unsigned int)(result - 1);
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    if ( !(_DWORD)result )
    {
      a9[3].Denominator = 3;
      goto LABEL_15;
    }
    if ( (_DWORD)result == 1 )
    {
      a9[3].Denominator = 4;
      goto LABEL_15;
    }
    result = WdLogSingleEntry3(3LL, v13, *a1, *a2);
    WdLogGlobalForLineNumber = 2694;
LABEL_14:
    a9[3].Denominator = 1;
    goto LABEL_15;
  }
  a9[3].Denominator = 2;
LABEL_15:
  if ( a1[1] == 3 )
  {
LABEL_26:
    a9[5].Numerator |= 0x10u;
    a9[4].Denominator |= 1u;
    return result;
  }
  if ( a1[1] == 4 )
  {
    a9[5].Numerator |= 0x20u;
    goto LABEL_26;
  }
  return result;
}
