/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x14019D9A0
 * Callers:
 *     ApiSetGetInputSensorThreadingModel @ 0x1402280D0 (ApiSetGetInputSensorThreadingModel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsGetInputSensorThreadingModelSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4896LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
