/*
 * XREFs of ProcLibTraceControlCallback @ 0x140024B00
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x140001490 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x140002B9C (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x140003864 (InitializeEnumerationContext.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1400055D4 (ProcLibTraceRegisterGroupEvents.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     ProcLibTraceProcessorIdsHv @ 0x140023020 (ProcLibTraceProcessorIdsHv.c)
 *     ProcLibCpcResourcePriorityRundown @ 0x1400245EC (ProcLibCpcResourcePriorityRundown.c)
 *     ProcLibCpcRundown @ 0x1400247F0 (ProcLibCpcRundown.c)
 *     ProcLibTraceIdleStatesErrata @ 0x140024E00 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x140024E84 (ProcLibTracePccErrata.c)
 *     ProcLibTracePepPerfDomain @ 0x140024EB0 (ProcLibTracePepPerfDomain.c)
 *     ProcLibTracePerfStatesErrata @ 0x1400250C8 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceQueryWpsCapabilities @ 0x1400250F4 (ProcLibTraceQueryWpsCapabilities.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1400251B8 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTraceSummary @ 0x14003F680 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x14003F9E0 (ProcLibTraceSummary2.c)
 *     ProcLibTracePerfStatesRundown @ 0x14003FE4C (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x14003FFC4 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x140040280 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x140040A7C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x140040C58 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x140040EF4 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140041104 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x14004141C (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1400416A0 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePccSummary @ 0x1400418F4 (ProcLibTracePccSummary.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x140041AD0 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x140041EA4 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1400420D0 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceCStateDomainRundown @ 0x14004216C (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x140042220 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x140042760 (ProcLibTraceProcessorIds.c)
 *     ProcLibTracePStateDomainRundown @ 0x140042974 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTraceEnergyEsuRundown @ 0x1400431C4 (ProcLibTraceEnergyEsuRundown.c)
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
      qword_1400155D8,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_140015648; i != &qword_140015648; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown(i);
    for ( j = qword_140015628; (__int64 *)j != &qword_140015628; j = *(_QWORD *)j )
    {
      ProcLibTracePStateDomainRundown(j);
      if ( *(_BYTE *)(j + 48) )
      {
        LOBYTE(v7) = 1;
        ProcLibTracePepPerfDomain(j, v7);
      }
    }
    if ( (dword_140015B8C & 0x7F077) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceIdleStatesErrata(v4);
    }
    if ( (dword_140015B8C & 0x70000000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePerfStatesErrata(v4);
    }
    if ( (dword_140015B8C & 0x3300000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceThrottleStatesErrata(v4);
    }
    if ( dword_140015B8C < 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePccErrata(v4);
    }
    InitializeEnumerationContext((__int64)&qword_140015618, 32, (__int64)v26);
    LOBYTE(v8) = 1;
    ProcLibTraceGetPlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTracePlatformIdleStates(v9);
    LOBYTE(v10) = 1;
    ProcLibTraceCoordinatedIdleStates(v10);
    v12 = (unsigned int *)qword_140015CB8;
    if ( qword_140015CB8 )
    {
      v13 = 0;
      if ( *(_DWORD *)qword_140015CB8 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v12[8 * v13 + 2 + 2 * v13]);
          ++v13;
        }
        while ( v13 < *v12 );
      }
    }
    if ( _bittest64(&Globals, 0x25u) )
      ProcLibTraceEnergyEsuRundown();
    if ( _bittest64(&Globals, 0x33u) )
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
      v20(WdfDriverGlobals, qword_1400155D8);
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
        qword_1400155D8,
        0LL);
    }
    v20(WdfDriverGlobals, qword_1400155D8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155F0,
      0LL);
    v21 = (char **)&unk_1400155F8;
    v22 = 2LL;
    v23 = (char *)&unk_1400155F8;
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
      qword_1400155F0);
  }
}
