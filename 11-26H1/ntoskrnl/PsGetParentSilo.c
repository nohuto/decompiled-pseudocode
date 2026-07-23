/*
 * XREFs of PsGetParentSilo @ 0x14093AD80
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408AD75C (ObGetSiloRootDirectoryPath.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     VRegEnabledInJob @ 0x14093A35C (VRegEnabledInJob.c)
 * Callees:
 *     PspGetJobSilo @ 0x140430120 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1304));
  else
    return 0LL;
}
