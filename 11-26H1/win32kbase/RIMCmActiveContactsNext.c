/*
 * XREFs of RIMCmActiveContactsNext @ 0x140074BA4
 * Callers:
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1400732B8 (rimCountContactsToDeliverWithFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimStorePointersInHoldingFrame @ 0x140073934 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimIsWakeablePointerFrame @ 0x14007B3D8 (rimIsWakeablePointerFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1401B5F48 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsNext(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rdi
  unsigned int v5; // ecx
  __int64 *v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 i; // r8
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-10h]

  v2 = (__int64 *)(a1 + 1000);
  if ( !*(_DWORD *)(a1 + 1008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 483LL);
  if ( *a2 != v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 484LL);
  v4 = *a2;
  if ( !**a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  if ( !*((_DWORD *)v4 + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
  v5 = *((_DWORD *)v4 + 2);
  if ( *a2 == v4 && *((_DWORD *)a2 + 2) == v5 && a2[2] == (__int64 *)(*v4 + 16LL * v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 485LL);
  if ( !*a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 81LL);
  if ( *((_DWORD *)a2 + 2) >= *((_DWORD *)*a2 + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 82LL);
  v11 = *(_OWORD *)a2;
  v6 = *a2;
  v7 = *a2[2];
  v8 = (unsigned int)a2[1];
  for ( i = **a2; ; v7 = *(_QWORD *)(i + 16LL * v8) )
  {
    result = i + 16LL * v8;
    v12 = v7;
    if ( v7 != result )
      break;
    DWORD2(v11) = ++v8;
    if ( v8 >= *(_DWORD *)(v11 + 8) )
    {
      if ( v8 != *((_DWORD *)v6 + 2) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 99LL);
      if ( !*v6 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
      if ( !*((_DWORD *)v6 + 2) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
      *((_QWORD *)&v11 + 1) = *((unsigned int *)v6 + 2);
      result = *v6 + 16LL * DWORD2(v11);
      v12 = result;
      *(_QWORD *)&v11 = v6;
      break;
    }
  }
  *(_OWORD *)a2 = v11;
  a2[2] = (__int64 *)v12;
  return result;
}
