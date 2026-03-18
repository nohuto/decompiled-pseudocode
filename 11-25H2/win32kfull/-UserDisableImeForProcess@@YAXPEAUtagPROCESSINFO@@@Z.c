/*
 * XREFs of ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140240288
 * Callers:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x140200B58 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     NtUserDisableThreadIme @ 0x140202980 (NtUserDisableThreadIme.c)
 *     DisableImeForProcess @ 0x140283290 (DisableImeForProcess.c)
 * Callees:
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x140204B24 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402832A8 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall UserDisableImeForProcess(struct tagPROCESSINFO *a1)
{
  struct tagTHREADINFO *i; // rbx

  if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline()
    || (*((_DWORD *)a1 + 3) & 0x800000) == 0 )
  {
    *((_DWORD *)a1 + 3) |= 0x800000u;
    for ( i = (struct tagTHREADINFO *)*((_QWORD *)a1 + 40); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 88) )
      UserDisableImeForThread(i, 0LL);
  }
}
