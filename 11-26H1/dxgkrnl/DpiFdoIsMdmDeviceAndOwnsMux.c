/*
 * XREFs of DpiFdoIsMdmDeviceAndOwnsMux @ 0x1400905B8
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x1402424B0 (DpiFdoHandleStartDevice.c)
 * Callees:
 *     ?CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_MGR@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@PEAE1@Z @ 0x14008B138 (-CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_MGR@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPO.c)
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x1402533C0 (DpiAcpiPrepareDisplayMuxSupport.c)
 */

__int64 __fastcall DpiFdoIsMdmDeviceAndOwnsMux(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 64);
  *a2 = 0;
  *a3 = 0;
  if ( !v3 || *(_DWORD *)(v3 + 16) != 1953656900 || *(_DWORD *)(v3 + 20) != 2 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 4779;
    return 3221225485LL;
  }
  if ( !*(_BYTE *)(v3 + 1156) )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 4789;
    return 3221225485LL;
  }
  result = DpiAcpiPrepareDisplayMuxSupport((struct _FDO_CONTEXT *)v3);
  if ( (int)result >= 0 )
    return DISPLAY_MUX_MGR::CheckMdmDeviceAndMuxOwnership(
             (DISPLAY_MUX_PAIRING **)qword_140169448,
             (const struct _DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT *)(v3 + 6024),
             a2,
             a3);
  return result;
}
