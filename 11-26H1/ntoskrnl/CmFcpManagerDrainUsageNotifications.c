/*
 * XREFs of CmFcpManagerDrainUsageNotifications @ 0x140AC1BB0
 * Callers:
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140866E18 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerRetryUsageNotificationsWorker @ 0x140867CD0 (CmFcpManagerRetryUsageNotificationsWorker.c)
 *     CmFcpManagerSoftwareHiveReady @ 0x140867DA0 (CmFcpManagerSoftwareHiveReady.c)
 *     CmFcpManagerDrainUsageNotificationsWorker @ 0x140AC1AF0 (CmFcpManagerDrainUsageNotificationsWorker.c)
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404C5CC4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D2078 (RtlpFcBufferManagerReferenceBuffers.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x1406E6F60 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     RtlUpdateSwapReference @ 0x140AC1C5C (RtlUpdateSwapReference.c)
 *     RtlpFcDrainDelayedUsageReportBuffer @ 0x140AC1CDC (RtlpFcDrainDelayedUsageReportBuffer.c)
 */

__int64 __fastcall CmFcpManagerDrainUsageNotifications(__int64 a1, char a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // r8
  __int64 result; // rax
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0;
  v4 = (_DWORD *)(a1 + 376);
  v5 = *v4 & 1;
  RtlUpdateSwapReference(v4);
  RtlpFcBufferManagerReferenceBuffers(a1 + 136, (__int64)&v12, &v11);
  v6 = v11;
  LOBYTE(v7) = a2;
  RtlpFcDrainDelayedUsageReportBuffer(
    *(_QWORD *)(a1 + 8 * v5 + 416),
    v7,
    *(_QWORD *)(v11 + 56),
    *(_QWORD *)(v11 + 64),
    (__int64)&v10);
  result = RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)(a1 + 136), v6, v8);
  if ( v10 )
    return CmFcpManagerArmFeatureUsageRetryTimer(a1);
  return result;
}
