/*
 * XREFs of ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x140065040
 * Callers:
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x140064CE4 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1402DD7D8 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a2)
{
  unsigned __int8 result; // al
  int v3; // eax

  switch ( a2 )
  {
    case D3DKMDT_VPPMT_NOPROTECTION:
      LOBYTE(v3) = *((_BYTE *)this + 168);
      break;
    case D3DKMDT_VPPMT_MACROVISION_APSTRIGGER:
      v3 = *((_DWORD *)this + 42) >> 1;
      break;
    case D3DKMDT_VPPMT_MACROVISION_FULLSUPPORT:
      v3 = *((_DWORD *)this + 42) >> 2;
      break;
    default:
      WdLogSingleEntry1(2LL);
      result = 0;
      WdLogGlobalForLineNumber = 1095;
      return result;
  }
  return v3 & 1;
}
