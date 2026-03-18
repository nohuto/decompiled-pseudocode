/*
 * XREFs of ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140295B28
 * Callers:
 *     NtUserDisableThreadIme @ 0x140086250 (NtUserDisableThreadIme.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x14018D958 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     DisableImeForProcess @ 0x1402A1A90 (DisableImeForProcess.c)
 * Callees:
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x14023AA84 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14025C788 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall UserDisableImeForProcess(struct tagPROCESSINFO *a1)
{
  struct tagTHREADINFO *i; // rbx

  if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline()
    || (*((_DWORD *)a1 + 3) & 0x800000) == 0 )
  {
    *((_DWORD *)a1 + 3) |= 0x800000u;
    for ( i = (struct tagTHREADINFO *)*((_QWORD *)a1 + 41); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 87) )
      UserDisableImeForThread(i, 0);
  }
}
