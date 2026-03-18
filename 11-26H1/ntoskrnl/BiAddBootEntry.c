/*
 * XREFs of BiAddBootEntry @ 0x14089359C
 * Callers:
 *     BiCreateEfiEntry @ 0x140893C10 (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x140724130 (ZwAddBootEntry.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BiAddBootEntry(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v6);
  if ( v4 < 0 || (v4 = ZwAddBootEntry(a1, a2), BiReleasePrivilege(&v6), v4 < 0) )
    BiLogMessage(4LL, L"Failed to add boot entry '%ws'. Status: %x", a1 + *(unsigned int *)(a1 + 16), (unsigned int)v4);
  return (unsigned int)v4;
}
