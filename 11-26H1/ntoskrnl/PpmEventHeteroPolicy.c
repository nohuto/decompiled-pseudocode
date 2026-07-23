/*
 * XREFs of PpmEventHeteroPolicy @ 0x140AFBADC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventHeteroPolicy(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  unsigned __int64 v4; // [rsp+30h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  int *v6; // [rsp+50h] [rbp-49h]
  __int64 v7; // [rsp+58h] [rbp-41h]
  int *v8; // [rsp+60h] [rbp-39h]
  __int64 v9; // [rsp+68h] [rbp-31h]
  void *v10; // [rsp+70h] [rbp-29h]
  __int64 v11; // [rsp+78h] [rbp-21h]
  int *v12; // [rsp+80h] [rbp-19h]
  __int64 v13; // [rsp+88h] [rbp-11h]
  void *v14; // [rsp+90h] [rbp-9h]
  __int64 v15; // [rsp+98h] [rbp-1h]
  int *v16; // [rsp+A0h] [rbp+7h]
  __int64 v17; // [rsp+A8h] [rbp+Fh]
  int *v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]
  int *v20; // [rsp+C0h] [rbp+27h]
  __int64 v21; // [rsp+C8h] [rbp+2Fh]
  unsigned __int64 *v22; // [rsp+D0h] [rbp+37h]
  __int64 v23; // [rsp+D8h] [rbp+3Fh]

  v1 = &PPM_ETW_HETEROGENEOUS_POLICIES_CHANGED;
  v4 = 0LL;
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_HETEROGENEOUS_POLICIES_RUNDOWN;
  if ( !a1 )
    v2 = &PPM_ETW_HETEROGENEOUS_POLICIES_CHANGED;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      UserData.Ptr = (ULONGLONG)&PpmHeteroPolicy;
      v6 = &PopHeteroSystem;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &KiDesiredHeteroCpuPolicy;
      v10 = &unk_140FBF4CC;
      v12 = &KiDynamicHeteroCpuPolicyMask;
      v14 = &unk_140FBF4BC;
      v16 = KiDynamicHeteroCpuPolicy;
      v18 = &KiDynamicHeteroCpuPolicyImportantPriority;
      v20 = &KiDynamicHeteroCpuPolicyExpectedRuntime;
      v7 = 4LL;
      v9 = 4LL;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 8LL;
      v22 = &v4;
      v4 = v4 & 0xFFFFFFFFFFF800LL | PpmHeteroHgsEnabled & 1 | (2
                                                              * (PpmHeteroHgsThreadEnabled & 1 | (2
                                                                                                * (PpmHeteroHgsThreadDisabled & 1 | (2 * (PpmHeteroHgsDynamicUpdateEnabled & 1 | (2 * (PpmHeteroHgsDynamicUpdateReasonEnabled & 1 | (2 * (PpmHeteroHgsParkingEnabled & 1 | (2 * (PpmHeteroHgsParkingHintEnabled & 1 | (2 * (PpmHeteroHgsEePerfHintsIndependentEnabled & 1 | ((PpmHeteroHgsCapabilityBits & 0xF | (16LL * (unsigned __int8)PpmHeteroHgsVendor)) << 49))))))))))))))) & 0xFFFFFFFFFFFFF8FFuLL | ((PpmHeteroHgsContainmentState & 2) << 7) & 0xF9FF | ((PpmHeteroHgsContainmentState & 4 | (8LL * (PpmHeteroWpsContainmentEnumOverride & 1))) << 7);
      LOBYTE(v1) = EtwWrite(PpmEtwHandle, v2, 0LL, 0xAu, &UserData);
    }
  }
  return (char)v1;
}
