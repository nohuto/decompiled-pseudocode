/*
 * XREFs of VidSchiUpdateNativeFenceCurrentValue @ 0x140049328
 * Callers:
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003CFE4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiUpdateNativeFenceCurrentValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax
  _BYTE v10[8]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v11; // [rsp+38h] [rbp-59h] BYREF
  __int64 v12; // [rsp+40h] [rbp-51h] BYREF
  __int64 v13; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v15; // [rsp+60h] [rbp-31h]
  _QWORD v16[8]; // [rsp+70h] [rbp-21h] BYREF

  v12 = a2;
  v11 = a3;
  v13 = a4;
  memset(v16, 0, sizeof(v16));
  if ( a2 )
  {
    LODWORD(v16[3]) = 1;
    v16[0] = &v12;
    v16[1] = &v11;
    v16[2] = &v13;
  }
  v7 = *(unsigned int *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 32);
  HIDWORD(v16[3]) = *a5;
  v14[1] = v16;
  v10[0] = 0;
  v15 = 0LL;
  v14[0] = a1;
  result = DpSynchronizeExecution(v8, VidSchiUpdateNativeFenceCurrentValueAtISR, v14, v7, v10);
  if ( (int)result < 0 || (int)v15 < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    result = WdLogSingleEntry5(0LL, 281LL, 19LL, a1, v11, 0LL);
    WdLogGlobalForLineNumber = 916;
  }
  return result;
}
