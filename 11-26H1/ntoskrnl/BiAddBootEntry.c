/*
 * XREFs of BiAddBootEntry @ 0x14089999C
 * Callers:
 *     BiCreateEfiEntry @ 0x14089A010 (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x140728D00 (ZwAddBootEntry.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

__int64 __fastcall BiAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  NTSTATUS v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v6);
  if ( v4 < 0 || (v4 = ZwAddBootEntry(BootEntry, Id), BiReleasePrivilege(&v6), v4 < 0) )
    BiLogMessage(
      4LL,
      L"Failed to add boot entry '%ws'. Status: %x",
      (char *)BootEntry + BootEntry->FriendlyNameOffset,
      (unsigned int)v4);
  return (unsigned int)v4;
}
