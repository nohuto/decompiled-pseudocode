/*
 * XREFs of SepTokenPrivilegeCount @ 0x14047DD34
 * Callers:
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x140A34000 (SepGetTokenAccessInformationBufferSize.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140A54A70 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
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
