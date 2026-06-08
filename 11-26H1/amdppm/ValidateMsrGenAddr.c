/*
 * XREFs of ValidateMsrGenAddr @ 0x1400312EC
 * Callers:
 *     ValidateMsr_PCT @ 0x1400313BC (ValidateMsr_PCT.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidateMsrGenAddr(_BYTE *a1)
{
  unsigned int v1; // ebx
  int v2; // r9d

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
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        1,
        v2,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        13);
    }
  }
  return v1;
}
