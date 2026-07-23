/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C
 * Callers:
 *     RtlSubscribeWnfStateChangeNotification @ 0x18008E440 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlpFcStartSubscriptionManager @ 0x18008F00C (RtlpFcStartSubscriptionManager.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x18008FEAC (LdrpEnableUMGLTracingStateSync.c)
 *     RtlWaitForWnfMetaNotification @ 0x180090610 (RtlWaitForWnfMetaNotification.c)
 *     RtlRegisterForWnfMetaNotification @ 0x180106360 (RtlRegisterForWnfMetaNotification.c)
 *     RtlRegisterAvailableCpusChangeNotification @ 0x180149020 (RtlRegisterAvailableCpusChangeNotification.c)
 *     RtlpCtContextInit @ 0x18014954C (RtlpCtContextInit.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlRunOnceBeginInitialize @ 0x18005A390 (RtlRunOnceBeginInitialize.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18008E764 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCreateWnfUserSubscription @ 0x18008E808 (RtlpCreateWnfUserSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x18008E8D0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18008EBB4 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18008ED60 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlRunOnceComplete @ 0x18008F440 (RtlRunOnceComplete.c)
 *     RtlReportCriticalFailure @ 0x18008F548 (RtlReportCriticalFailure.c)
 *     RtlpCreateSerializationGroup @ 0x18008F730 (RtlpCreateSerializationGroup.c)
 *     RtlpInitializeWnf @ 0x180090A74 (RtlpInitializeWnf.c)
 */

__int64 __fastcall RtlpSubscribeWnfStateChangeNotificationInternal(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  void *SerializationGroup; // rsi
  NTSTATUS v14; // eax
  NTSTATUS WnfUserSubscription; // edi
  void *v16; // rbx
  __int64 v17; // rcx
  void *v18; // rdx
  void *v19; // r8
  NTSTATUS v21; // eax
  char v22[8]; // [rsp+40h] [rbp-38h] BYREF
  void *v23; // [rsp+48h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-28h] BYREF

  SerializationGroup = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( byte_1801CA908 )
    return (unsigned int)-1073741558;
  v14 = RtlRunOnceBeginInitialize(&RunOnce, 0, 0LL);
  WnfUserSubscription = v14;
  if ( v14 < 0 )
  {
    v22[0] = 0;
    goto LABEL_23;
  }
  if ( v14 != 259 )
    goto LABEL_4;
  if ( !(unsigned int)RtlpInitializeWnf(&RunOnce, 0LL, 0LL) )
  {
    WnfUserSubscription = -1073741823;
    v21 = RtlRunOnceComplete(&RunOnce, 4u, 0LL);
    if ( v21 >= 0 )
    {
LABEL_4:
      if ( WnfUserSubscription < 0 )
        return (unsigned int)WnfUserSubscription;
      goto LABEL_8;
    }
    WnfUserSubscription = v21;
    v22[0] = 2;
LABEL_23:
    RtlReportCriticalFailure((unsigned int)WnfUserSubscription, v22, 1LL);
    goto LABEL_4;
  }
  WnfUserSubscription = RtlRunOnceComplete(&RunOnce, 0, 0LL);
  if ( WnfUserSubscription < 0 )
  {
    v22[0] = 1;
    goto LABEL_23;
  }
LABEL_8:
  if ( !a7 || (SerializationGroup = (void *)RtlpCreateSerializationGroup()) != 0LL )
  {
    WnfUserSubscription = RtlpCreateWnfUserSubscription(
                            (unsigned int)&v23,
                            a3,
                            a4,
                            a5,
                            (__int64)SerializationGroup,
                            a8,
                            a9);
    if ( WnfUserSubscription < 0
      || (SerializationGroup = 0LL,
          WnfUserSubscription = RtlpCreateWnfNameSubscription(&v24, a2, a6),
          WnfUserSubscription < 0) )
    {
      v19 = v23;
    }
    else
    {
      v16 = v23;
      v17 = v24;
      v18 = v23;
      *a1 = v23;
      WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v17, v18);
      if ( WnfUserSubscription < 0 )
      {
        *a1 = 0LL;
        RtlUnsubscribeWnfNotificationWaitForCompletion(v16);
      }
      v19 = 0LL;
    }
    if ( v19 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v19);
    if ( SerializationGroup )
      RtlpDecrementWnfSerializationGroup(SerializationGroup);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WnfUserSubscription;
}
