/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x140511FA4
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     IoProvisionCrashDumpKey @ 0x1405C9C74 (IoProvisionCrashDumpKey.c)
 *     IopInitializeCrashDump @ 0x1407960C8 (IopInitializeCrashDump.c)
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
    *(_BYTE *)a1 = byte_140E662A4;
    *(_DWORD *)(a1 + 4) = pbInput;
    *(_BYTE *)(a1 + 1) = dword_140E662E8 == 1;
    v2 = dword_140E662F0;
  }
  else
  {
    v2 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v2;
  return 0LL;
}
