/*
 * XREFs of ProcLibTraceControlCallback @ 0x14002C260
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceRegisterGroupEvents @ 0x140003604 (ProcLibTraceRegisterGroupEvents.c)
 *     EnumerateNextDevice @ 0x1400040CC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400048EC (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x1400049F4 (InitializeEnumerationContext.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1400288F8 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTraceProcessorIdsHv @ 0x1400289AC (ProcLibTraceProcessorIdsHv.c)
 *     ProcLibCpcResourcePriorityRundown @ 0x14002BE44 (ProcLibCpcResourcePriorityRundown.c)
 *     ProcLibCpcRundown @ 0x14002C048 (ProcLibCpcRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x14002C560 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceIdleStatesErrata @ 0x14002C78C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x14002C810 (ProcLibTracePccErrata.c)
 *     ProcLibTracePepPerfDomain @ 0x14002C83C (ProcLibTracePepPerfDomain.c)
 *     ProcLibTracePerfStatesErrata @ 0x14002CA54 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceQueryWpsCapabilities @ 0x14002CA80 (ProcLibTraceQueryWpsCapabilities.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x14002CB44 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTraceSummary @ 0x140043A98 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x140043EAC (ProcLibTraceSummary2.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1400442FC (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePlatformIdleStates @ 0x140044500 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorRundown @ 0x140044780 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x140044DC8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x14004507C (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x1400452F8 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x140045470 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTracePccSummary @ 0x140045708 (ProcLibTracePccSummary.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x140045838 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x140045EA8 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140046010 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePStateDomainRundown @ 0x140046328 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1400464E0 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1400468B4 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1400469C4 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceEnergyEsuRundown @ 0x140046A60 (ProcLibTraceEnergyEsuRundown.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx
  __int64 *i; // rbx
  __int64 j; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int *v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  bool v19; // zf
  void (__fastcall *v20)(PWDF_DRIVER_GLOBALS, __int64); // rax
  char **v21; // rsi
  __int64 v22; // rbp
  char *v23; // rdi
  char *k; // rbx
  __int64 v25; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    memset(v26, 0, 32);
    v25 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400191A8,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_140019218; i != &qword_140019218; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = qword_1400191F8; (__int64 *)j != &qword_1400191F8; j = *(_QWORD *)j )
    {
      ProcLibTracePStateDomainRundown(j);
      if ( *(_BYTE *)(j + 48) )
      {
        LOBYTE(v7) = 1;
        ProcLibTracePepPerfDomain(j, v7);
      }
    }
    if ( (dword_14001975C & 0x7F077) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceIdleStatesErrata(v4);
    }
    if ( (dword_14001975C & 0x70000000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePerfStatesErrata(v4);
    }
    if ( (dword_14001975C & 0x3300000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceThrottleStatesErrata(v4);
    }
    if ( dword_14001975C < 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePccErrata(v4);
    }
    InitializeEnumerationContext((__int64)&qword_1400191E8, 32, (__int64)v26);
    LOBYTE(v8) = 1;
    ProcLibTraceGetPlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTracePlatformIdleStates(v9);
    LOBYTE(v10) = 1;
    ProcLibTraceCoordinatedIdleStates(v10);
    v12 = (unsigned int *)qword_140019888;
    if ( qword_140019888 )
    {
      v13 = 0;
      if ( *(_DWORD *)qword_140019888 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v12[8 * v13 + 2 + 2 * v13]);
          ++v13;
        }
        while ( v13 < *v12 );
      }
    }
    if ( _bittest64(Globals, 0x25u) )
      ProcLibTraceEnergyEsuRundown();
    if ( _bittest64(Globals, 0x33u) )
    {
      LOBYTE(v11) = 1;
      ProcLibTraceQueryWpsCapabilities(v11);
    }
    ResetEnumerationContext(v26);
    while ( 1 )
    {
      v19 = (unsigned int)EnumerateNextDevice(v26, &v25) == 0;
      v20 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v19 )
        break;
      v20(WdfDriverGlobals, qword_1400191A8);
      v14 = v25;
      ProcLibTraceProcessorRundown(v25);
      ProcLibTraceSummary(v14);
      LOBYTE(v15) = 1;
      ProcLibTraceSummary2(v14, v15);
      ProcLibTracePerfStatesRundown(v14);
      ProcLibTraceBiosPStatesRundown(v14);
      ProcLibTraceBiosCStatesRundown(v14);
      ProcLibTraceBiosTStatesRundown(v14);
      ProcLibTraceProcessorLpiRundown(v14);
      LOBYTE(v16) = 1;
      ProcLibTraceQueryCapabilities(v14, v16);
      LOBYTE(v17) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v14, v17);
      LOBYTE(v18) = 1;
      ProcLibTracePepPerfCapabilities(v14, v18);
      ProcLibCpcRundown(v14);
      ProcLibCpcResourcePriorityRundown(v14);
      if ( *(_DWORD *)(v14 + 80) == 1 )
        ProcLibTraceProcessorIdsHv(v14);
      else
        ProcLibTraceProcessorIds(v14);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400191A8,
        0LL);
    }
    v20(WdfDriverGlobals, qword_1400191A8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400191C0,
      0LL);
    v21 = (char **)&unk_1400191C8;
    v22 = 2LL;
    v23 = (char *)&unk_1400191C8;
    do
    {
      for ( k = *v21; k != v23; k = *(char **)k )
        ProcLibTraceRegisterGroupEvents((__int64)k, 2u);
      v23 += 16;
      v21 += 2;
      --v22;
    }
    while ( v22 );
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400191C0);
  }
}
