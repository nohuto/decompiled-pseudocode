/*
 * XREFs of ApiSetEnterEditionCrit @ 0x1401C50EC
 * Callers:
 *     rimDeviceResetApc @ 0x1400599D0 (rimDeviceResetApc.c)
 *     InputUnInitialize @ 0x140117884 (InputUnInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x14017516C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1401C50C4 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEnterEditionCrit(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (*v4)(void); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3952LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 3960LL);
      if ( v4 )
        return v4();
    }
  }
  return v1;
}
