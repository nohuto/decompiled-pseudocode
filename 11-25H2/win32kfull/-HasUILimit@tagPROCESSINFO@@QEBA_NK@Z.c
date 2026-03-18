/*
 * XREFs of ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x140275B0C
 * Callers:
 *     PrepareForLogoff @ 0x14021612C (PrepareForLogoff.c)
 *     EditionCreateDesktopEntryPoint @ 0x140247E50 (EditionCreateDesktopEntryPoint.c)
 *     NtUserAutoRotateScreen @ 0x140248050 (NtUserAutoRotateScreen.c)
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 *     NtUserGetDCEx @ 0x1402498D0 (NtUserGetDCEx.c)
 *     NtUserSetClipboardData @ 0x14024D260 (NtUserSetClipboardData.c)
 *     NtUserSwitchDesktop @ 0x14024F070 (NtUserSwitchDesktop.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x1402759AC (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall tagPROCESSINFO::HasUILimit(tagPROCESSINFO *this, int a2)
{
  __int64 ProcessJob; // rax
  char v4; // bl

  ProcessJob = PsGetProcessJob(*(_QWORD *)this);
  v4 = 0;
  if ( ProcessJob )
    return (a2 & (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob)) == a2;
  return v4;
}
