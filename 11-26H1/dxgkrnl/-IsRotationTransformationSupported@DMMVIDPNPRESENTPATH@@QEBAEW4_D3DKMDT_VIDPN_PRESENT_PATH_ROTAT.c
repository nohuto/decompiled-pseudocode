/*
 * XREFs of ?IsRotationTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14002DF1C
 * Callers:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14002DE54 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsOffsetRotationTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14002E02C (-IsOffsetRotationTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsRotationTransformationSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  char v2; // bl
  __int32 v3; // eax
  _DWORD *v4; // r10
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v5; // r11d
  int v6; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  __int32 v10; // eax

  v2 = 1;
  v3 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a2) - 1;
  if ( v3 )
  {
    v8 = v3 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 != 251 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 707;
            return 0;
          }
          goto LABEL_4;
        }
        v6 = v4[31] >> 3;
      }
      else
      {
        v6 = v4[31] >> 2;
      }
    }
    else
    {
      v6 = v4[31] >> 1;
    }
  }
  else
  {
    LOBYTE(v6) = *((_BYTE *)v4 + 124);
  }
  if ( (v6 & 1) == 0 )
    return 0;
LABEL_4:
  if ( !DMMVIDPNPRESENTPATH::IsOffsetRotationTransformationSupported((DMMVIDPNPRESENTPATH *)v4, v5) )
    return 0;
  return v2;
}
