/*
 * XREFs of BiModifyBootEntry @ 0x14089408C
 * Callers:
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409D298C (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x1407257F0 (ZwModifyBootEntry.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BiModifyBootEntry(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v3 = BiAcquirePrivilege(22LL, &v6);
  if ( v3 >= 0 )
  {
    v4 = ZwModifyBootEntry(a1, v2);
    v3 = v4;
    if ( v4 < 0 )
      BiLogMessage(4LL, L"Failed to modify boot entry 0x%x. Status: %x", *(unsigned int *)(a1 + 8), (unsigned int)v4);
    BiReleasePrivilege(&v6);
  }
  return (unsigned int)v3;
}
