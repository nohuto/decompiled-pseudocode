/*
 * XREFs of ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x14006CCF4
 * Callers:
 *     ?GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140281820 (-GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayPa.c)
 *     ?GetPhysicalSize@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z @ 0x140281CA0 (-GetPhysicalSize@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z.c)
 * Callees:
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x140069BA4 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 */

__int64 __fastcall DisplayID_GetPhysicalSize(const struct DisplayIDObj *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 result; // rax
  _BYTE *v6; // r9
  _BYTE *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v7 = 0LL;
  result = DisplayID_GetBlock((__int64 *)a1, 33, &v7);
  if ( (int)result < 0 )
    return result;
  v6 = v7;
  if ( *v7 != 33 || v7[2] != 29 )
    return 3221225485LL;
  *a2 = ((((char)v7[1] >> 31) & 0x384) + 100)
      * (((unsigned __int8)v7[4] << 8) + (unsigned int)(unsigned __int8)v7[3] + 1)
      / 0x3E8;
  *a3 = ((((char)v6[1] >> 31) & 0x384) + 100)
      * (((unsigned __int8)v6[6] << 8) + (unsigned int)(unsigned __int8)v6[5] + 1)
      / 0x3E8;
  return 0LL;
}
