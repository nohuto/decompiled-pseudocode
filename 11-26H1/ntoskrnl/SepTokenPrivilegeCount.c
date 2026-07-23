/*
 * XREFs of SepTokenPrivilegeCount @ 0x1404776A4
 * Callers:
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x140A4EF60 (SepGetTokenAccessInformationBufferSize.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140A62010 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepTokenPrivilegeCount(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // r10d
  __int64 v3; // r9
  unsigned int v4; // r8d

  LODWORD(result) = 0;
  for ( i = 0; i <= 0x24; ++i )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = result + 1;
    if ( !_bittest64(&v3, i) )
      v4 = result;
    result = v4;
  }
  return result;
}
