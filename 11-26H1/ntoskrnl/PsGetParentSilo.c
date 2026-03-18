/*
 * XREFs of PsGetParentSilo @ 0x140978D70
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1407EEB8C (PspConvertSiloToServerSilo.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     ObCreateSiloRootDirectory @ 0x1408A6F94 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408A72EC (ObGetSiloRootDirectoryPath.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     VRegEnabledInJob @ 0x14097834C (VRegEnabledInJob.c)
 * Callees:
 *     PspGetJobSilo @ 0x14043D870 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1304));
  else
    return 0LL;
}
