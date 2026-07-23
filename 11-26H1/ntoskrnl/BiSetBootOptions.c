/*
 * XREFs of BiSetBootOptions @ 0x14089A5E0
 * Callers:
 *     BiExportEfiBootManager @ 0x140B3A0B8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootOptions @ 0x14072B2C0 (ZwSetBootOptions.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

__int64 __fastcall BiSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootOptions(BootOptions, FieldsToChange);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot options. Status: %x", (unsigned int)v5);
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v4;
}
