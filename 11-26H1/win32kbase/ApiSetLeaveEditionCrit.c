/*
 * XREFs of ApiSetLeaveEditionCrit @ 0x140228290
 * Callers:
 *     rimDeviceResetApc @ 0x1400599D0 (rimDeviceResetApc.c)
 *     InputUnInitialize @ 0x140117884 (InputUnInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x14017516C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1401C5F50 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetLeaveEditionCrit(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3968LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 48) + 3976LL);
      if ( result )
        return (__int64 (*)(void))result();
    }
  }
  return result;
}
