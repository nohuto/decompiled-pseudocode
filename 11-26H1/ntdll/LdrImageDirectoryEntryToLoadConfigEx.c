/*
 * XREFs of LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800773A0 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180077BE0 (LdrInitSecurityCookie.c)
 *     RtlGuardRestoreContext @ 0x180077EF0 (RtlGuardRestoreContext.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C4120 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpGetTargetRvaFlag @ 0x1800C49B4 (RtlpGetTargetRvaFlag.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FEC0C (LdrpInitializeCfgScpHelpers.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010FFAC (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlGetImageEnclaveConfig @ 0x18014EFF4 (RtlGetImageEnclaveConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfigEx(PVOID BaseOfImage)
{
  __int64 v1; // rbx
  _DWORD *v3; // rax
  PIMAGE_NT_HEADERS v5; // [rsp+30h] [rbp+8h] BYREF
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  Size = 0;
  v5 = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v5);
  if ( !BaseOfImage )
    return 0LL;
  v3 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  if ( !v3 || !Size || Size != *v3 )
    return 0LL;
  if ( v5->FileHeader.Machine == 0x8664 )
    return v3;
  return (_DWORD *)v1;
}
