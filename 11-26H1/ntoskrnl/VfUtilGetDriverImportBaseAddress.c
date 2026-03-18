/*
 * XREFs of VfUtilGetDriverImportBaseAddress @ 0x140C217B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     VfIsVerifierEnabled @ 0x1404FC020 (VfIsVerifierEnabled.c)
 */

__int64 __fastcall VfUtilGetDriverImportBaseAddress(unsigned __int64 a1, _DWORD *a2)
{
  if ( (unsigned int)VfIsVerifierEnabled() && a1 && a2 )
    return RtlImageDirectoryEntryToData(a1, 1, 0xCu, a2);
  else
    return 0LL;
}
