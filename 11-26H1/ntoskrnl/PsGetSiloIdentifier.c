/*
 * XREFs of PsGetSiloIdentifier @ 0x140B09670
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x1408A6F94 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408A72EC (ObGetSiloRootDirectoryPath.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloIdentifier(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return *(unsigned int *)(a1 + 1468);
  return result;
}
