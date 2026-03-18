/*
 * XREFs of ?IsOffsetRotationTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14002E02C
 * Callers:
 *     ?IsRotationTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14002DF1C (-IsRotationTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTAT.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002E0B0 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsOffsetRotationTransformationSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  __int32 v2; // eax
  __int64 v3; // r9
  int v4; // eax
  unsigned __int8 result; // al
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax

  v2 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(a2) - 1;
  if ( !v2 )
  {
    v4 = *(_DWORD *)(v3 + 124) >> 4;
    return v4 & 1;
  }
  v6 = v2 - 1;
  if ( !v6 )
  {
    v4 = *(_DWORD *)(v3 + 124) >> 5;
    return v4 & 1;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v4 = *(_DWORD *)(v3 + 124) >> 6;
    return v4 & 1;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v4 = *(_DWORD *)(v3 + 124) >> 7;
    return v4 & 1;
  }
  if ( v8 == 251 )
    return 1;
  WdLogSingleEntry1(2LL);
  result = 0;
  WdLogGlobalForLineNumber = 726;
  return result;
}
