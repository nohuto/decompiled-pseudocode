/*
 * XREFs of LdrImageDirectoryEntryToLoadConfigEx @ 0x180081428
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180080000 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180080840 (LdrInitSecurityCookie.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpGetTargetRvaFlag @ 0x1800C71F4 (RtlpGetTargetRvaFlag.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FF4BC (LdrpInitializeCfgScpHelpers.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18011041C (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlGetImageEnclaveConfig @ 0x18014F144 (RtlGetImageEnclaveConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfigEx(unsigned __int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v6 = 0;
  v5 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v5);
  if ( !a1 )
    return 0LL;
  v3 = RtlImageDirectoryEntryToData(a1, 1, 0xAu, &v6);
  if ( !v3 || !v6 || v6 != *v3 )
    return 0LL;
  if ( *(_WORD *)(v5 + 4) == 0x8664 )
    return v3;
  return (_DWORD *)v1;
}
