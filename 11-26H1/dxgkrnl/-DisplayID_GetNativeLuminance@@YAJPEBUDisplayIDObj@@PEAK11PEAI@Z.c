/*
 * XREFs of ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x14009F58C
 * Callers:
 *     ?GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140281820 (-GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayPa.c)
 *     ?GetHdrLuminance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x140281BA0 (-GetHdrLuminance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z.c)
 * Callees:
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x140069BA4 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 *     ?ConvertHalfToFloat@@YAMG@Z @ 0x14009F2F0 (-ConvertHalfToFloat@@YAMG@Z.c)
 *     ?IsValidBlock@DisplayID_DisplayParameters_Parser@@QEBA_NXZ @ 0x14009F6D4 (-IsValidBlock@DisplayID_DisplayParameters_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetNativeLuminance(
        const struct DisplayIDObj *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v8; // rdi
  unsigned __int8 *v10; // rbx
  unsigned __int16 v11; // r11
  unsigned __int16 v12; // r10
  unsigned __int8 *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v8 = a5;
          if ( a5 )
          {
            if ( !*((_BYTE *)a1 + 16) )
              return 3223126019LL;
            v13 = 0LL;
            if ( (int)DisplayID_GetBlock((__int64 *)a1, 33, &v13) < 0 )
              return 3221226021LL;
            v10 = v13;
            if ( DisplayID_DisplayParameters_Parser::IsValidBlock((DisplayID_DisplayParameters_Parser *)&v13) )
            {
              *a2 = (int)(float)(ConvertHalfToFloat(v10[24] + (v10[25] << 8)) * 10000.0);
              *a3 = (int)(float)(ConvertHalfToFloat(v11) * 10000.0);
              *a4 = (int)(float)(ConvertHalfToFloat(v12) * 10000.0);
              *v8 = v10[31] + 100;
              return 0LL;
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
