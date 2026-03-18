/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x140518534
 * Callers:
 *     IoCaptureLiveDump @ 0x14051255C (IoCaptureLiveDump.c)
 *     IoProvisionCrashDumpKey @ 0x1405C73A4 (IoProvisionCrashDumpKey.c)
 *     IopInitializeCrashDump @ 0x140793598 (IopInitializeCrashDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SecureDump_GetSecureDumpSettings(__int64 a1)
{
  int v2; // eax

  if ( !a1 )
    return 3221225485LL;
  if ( SecureDmpEncryptionContext == 2 )
  {
    *(_BYTE *)a1 = byte_140E660E4;
    *(_DWORD *)(a1 + 4) = pbInput;
    *(_BYTE *)(a1 + 1) = dword_140E66128 == 1;
    v2 = dword_140E66130;
  }
  else
  {
    v2 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v2;
  return 0LL;
}
