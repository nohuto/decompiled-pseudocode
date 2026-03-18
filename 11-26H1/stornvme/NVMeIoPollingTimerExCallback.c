/*
 * XREFs of NVMeIoPollingTimerExCallback @ 0x140027710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeIoPollingTimerExCallback(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rdx
  int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h]

  v8 = 0;
  StorPortExtendedFunction(92LL, *a2, &v8, a4);
  v5 = a2[1] + 264LL;
  v6 = *a2;
  v9 = 0;
  return StorPortNotification(4098LL, v6, v5);
}
