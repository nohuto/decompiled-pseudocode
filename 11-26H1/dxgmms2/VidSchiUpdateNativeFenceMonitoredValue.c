/*
 * XREFs of VidSchiUpdateNativeFenceMonitoredValue @ 0x14002EF10
 * Callers:
 *     ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140009530 (-VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchSubmitWaitFromCpu @ 0x1400119F0 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiAcquireSyncObject @ 0x14002DD6C (VidSchiAcquireSyncObject.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4 (VidSchiUnwaitNativeFenceWaiters.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiUpdateNativeFenceMonitoredValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r9
  _BYTE v9[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v10; // [rsp+38h] [rbp-41h] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v14; // [rsp+60h] [rbp-19h]
  _QWORD v15[8]; // [rsp+70h] [rbp-9h] BYREF

  v11 = a2;
  v10 = a3;
  v12 = a4;
  v9[0] = 0;
  memset(v15, 0, sizeof(v15));
  v5 = *(unsigned int *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 32);
  v15[0] = &v11;
  LODWORD(v15[3]) = 1;
  v15[1] = &v10;
  v15[2] = &v12;
  v13[1] = v15;
  v14 = 0LL;
  v13[0] = a1;
  result = DpSynchronizeExecution(v6, VidSchiUpdateNativeFenceMonitoredValueAtISR, v13, v5, v9);
  if ( (int)result < 0 || (int)v14 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    g_DxgMmsBugcheckExportIndex = 1;
    result = WdLogSingleEntry5(0LL, 281LL, 18LL, v8, v11, v10);
    WdLogGlobalForLineNumber = 916;
  }
  return result;
}
