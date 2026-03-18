/*
 * XREFs of ?DisplayID_IsValidVersion2@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z @ 0x14009EFDC
 * Callers:
 *     ?GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x140281C70 (-GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AW4MonitorDescriptorParseResult@2@XZ.c)
 * Callees:
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x140069BA4 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 *     ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x14009ECF4 (-DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDEN.c)
 */

__int64 __fastcall DisplayID_IsValidVersion2(__int64 a1)
{
  unsigned int v1; // ebx
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || !*(_DWORD *)(a1 + 20) || !*(_BYTE *)(a1 + 16) )
    return 1LL;
  if ( (**(_BYTE **)a1 & 0xF0) != 0x20 )
    return 2LL;
  if ( (int)DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK((const struct DisplayIDObj *)a1, &v4) < 0 )
    return 3LL;
  if ( (int)DisplayID_GetBlock((__int64 *)a1, 34, &v4) < 0 )
    return 4LL;
  if ( (int)DisplayID_GetBlock((__int64 *)a1, 33, &v4) < 0 )
    return 5;
  return v1;
}
