/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x14021AA60
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x140421350 (PpmUpdatePlatformIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1404762E8 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCheckResetProcessors @ 0x1404FB714 (PpmCheckResetProcessors.c)
 *     PpmUpdateIdleDomains @ 0x1406061C0 (PpmUpdateIdleDomains.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140606310 (PpmUpdateProcessorIdleVeto.c)
 *     PpmParkRegisterParking @ 0x1406130BC (PpmParkRegisterParking.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407CCAF4 (PpmIdleRegisterDefaultStates.c)
 *     PpmWmiIdleAccountingWork @ 0x1407DDF30 (PpmWmiIdleAccountingWork.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PpmInitializePepWpsSupport @ 0x1407E82E0 (PpmInitializePepWpsSupport.c)
 *     PpmPostProcessMediaBuffering @ 0x1409C1AD0 (PpmPostProcessMediaBuffering.c)
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 *     PpmReapplyIdlePolicy @ 0x140AD8F94 (PpmReapplyIdlePolicy.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140AEBE2C (PpmParkUpdateConcurrencyTracking.c)
 *     PpmUpdateProcessorPolicy @ 0x140AF0768 (PpmUpdateProcessorPolicy.c)
 *     PpmUpdateIdleStates @ 0x140B00820 (PpmUpdateIdleStates.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x14021AB1C (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Object; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v8; // [rsp+58h] [rbp-21h]
  int v9; // [rsp+5Ah] [rbp-1Fh]
  __int16 v10; // [rsp+5Eh] [rbp-1Bh]
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int64 *p_Object; // [rsp+78h] [rbp-1h]
  _QWORD *v15; // [rsp+80h] [rbp+7h]
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  _OWORD v18[3]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+47h]
  int v20; // [rsp+C8h] [rbp+4Fh]

  Object = 393217LL;
  v19 = 0LL;
  v20 = 0;
  v17 = 0;
  v6[1] = v6;
  v6[0] = v6;
  v7[1] = *(_QWORD *)(a1 + 8);
  v15 = v7;
  v7[0] = a1;
  v11 = a2;
  p_Object = &Object;
  memset(v18, 0, sizeof(v18));
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v12 = a3;
  v13 = a4;
  v16 = 0;
  PopQueueTargetDpc((ULONG_PTR)v18);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
