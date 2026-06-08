/*
 * XREFs of ValidateMsrGenAddr @ 0x14003542C
 * Callers:
 *     ValidateMsr_PCT @ 0x1400354FC (ValidateMsr_PCT.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall ValidateMsrGenAddr(_BYTE *a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r9
  int v4; // [rsp+28h] [rbp-10h]

  if ( *a1 == 127 )
  {
    if ( a1[1] == 64 )
    {
      v1 = 0;
      if ( a1[2] )
      {
        v1 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 39;
          goto LABEL_13;
        }
      }
      else if ( a1[3] != 64 )
      {
        v1 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 40;
          goto LABEL_13;
        }
      }
    }
    else
    {
      v1 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v2 = 38;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v1 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 37;
LABEL_13:
      v4 = -1073741811;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v2,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        v4);
    }
  }
  return v1;
}
