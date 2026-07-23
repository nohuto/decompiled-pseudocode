/*
 * XREFs of AVrfInitializeVerifier @ 0x180115BD0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180111D40 (LdrpInitializeApplicationVerifierPackage.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     LdrpInitializeTls @ 0x180073B08 (LdrpInitializeTls.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     LdrGetProcedureAddressEx @ 0x18007CF70 (LdrGetProcedureAddressEx.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E73B0 (LdrpInitializeGraphRecurse.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800EAB24 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106768 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x18011365C (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpParseVerifierDllsString @ 0x180114B3C (AVrfpParseVerifierDllsString.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     AVrfpVerifierStopInitialize @ 0x18011FF98 (AVrfpVerifierStopInitialize.c)
 *     AVrfpEnableVerifierOptions @ 0x180120D44 (AVrfpEnableVerifierOptions.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x180124490 (AVrfpChainDuplicateVerificationLayers.c)
 */

__int64 __fastcall AVrfInitializeVerifier(char a1, int a2, void *a3, int a4, __int64 a5, _QWORD *a6)
{
  struct _PEB *v6; // r14
  int Dll; // ebx
  __int64 *i; // rbx
  int LoadedDllByName; // eax
  void *v13; // rbx
  NTSTATUS v14; // ebx
  __int64 *j; // rdi
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  unsigned int NtGlobalFlag; // r11d
  int v21; // r14d
  int v22; // eax
  ULONG Flags[2]; // [rsp+20h] [rbp-20h]
  PVOID BaseAddress; // [rsp+30h] [rbp-10h] BYREF
  PVOID ProcedureAddress; // [rsp+38h] [rbp-8h] BYREF
  int v27; // [rsp+88h] [rbp+48h] BYREF

  v6 = NtCurrentPeb();
  BaseAddress = 0LL;
  ProcedureAddress = 0LL;
  v27 = 0;
  if ( !a4 )
  {
    v19 = a6;
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v6->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      v21 = 1;
    }
    else
    {
      v21 = 0;
      if ( LdrpPayloadRestrictionMitigationsEnabled() )
        v21 = 2;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v22 = 0, a1) )
      v22 = 294916;
    AVrfpVerifierFlags = v22;
    LOWORD(AVrfpVerifierDllsString[0]) = 0;
    if ( a3 )
    {
      RtlQueryImageFileKeyOption(a3, (wchar_t *)L"VerifierFlags", 4, (ULONG *)&v27, 4u, 0LL);
      LOBYTE(v22) = v27;
      if ( v27 )
      {
        AVrfpVerifierFlags = v27;
LABEL_45:
        if ( (v22 & 4) != 0 )
          RtlQueryImageFileKeyOption(a3, (wchar_t *)L"HandleTraces", 4, (ULONG *)&AVrfpHandleTraces, 4u, 0LL);
        RtlQueryImageFileKeyOption(a3, (wchar_t *)L"VerifierDebug", 4, (ULONG *)&AVrfpDebug, 4u, 0LL);
        RtlQueryImageFileKeyOption(a3, (wchar_t *)L"VerifierDlls", 1, AVrfpVerifierDllsString, 0x200u, 0LL);
LABEL_48:
        Dll = AvrfMiniLoadDll((unsigned int)&VerifierDllString, a2, (_DWORD)a3, a5, (__int64)&AvrfpLoaderEntry);
        if ( Dll >= 0 )
        {
          *v19 = &AvrfpLoaderEntry;
          Dll = AVrfpEnableVerifierOptions();
          if ( Dll >= 0 )
          {
            LdrProtectMrdata(0);
            AvrfAppVerifierMode = v21;
            LdrProtectMrdata(1);
          }
        }
        return (unsigned int)Dll;
      }
      LOBYTE(v22) = AVrfpVerifierFlags;
    }
    if ( a1 )
      AVrfpEnabledSystemWide = 1;
    if ( !a3 )
      goto LABEL_48;
    goto LABEL_45;
  }
  if ( a4 != 1 )
    return 0;
  qword_1801CC538 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx(&AVrfpVerifierLock, 0, 0);
  if ( Dll >= 0 )
  {
    if ( AvrfAppVerifierMode == 2 )
    {
      LOBYTE(v27) = 0;
      Dll = LdrpInitializeGraphRecurse(qword_1801CC698, 0LL, &v27);
      if ( Dll < 0 )
        return (unsigned int)Dll;
    }
    else
    {
      DbgPrintEx(
        0x5Du,
        0,
        "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
        *(_QWORD *)(qword_1801CA8D0 + 96),
        NtCurrentTeb()->ClientId.UniqueProcess,
        AVrfpVerifierFlags);
      if ( (int)AVrfpParseVerifierDllsString() < 0 )
      {
        Flags[0] = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
        DbgPrintEx(
          0x5Du,
          0,
          "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
          *(_QWORD *)(qword_1801CA8D0 + 96),
          *(_QWORD *)Flags);
        Dll = -1073741823;
        NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
        return (unsigned int)Dll;
      }
      for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
      {
        if ( !AVrfpLoadAndInitializeProvider((__int64)i) )
          return (unsigned int)-1073741502;
      }
      AVrfpChainDuplicateVerificationLayers();
      LoadedDllByName = LdrpFindLoadedDllByName(
                          (PUNICODE_STRING)&VrfcoreDllString,
                          0LL,
                          0LL,
                          (__int64)&BaseAddress,
                          0LL);
      Dll = LoadedDllByName;
      if ( LoadedDllByName < 0 )
      {
        if ( LoadedDllByName != -1073741515 )
          return (unsigned int)Dll;
        v13 = (void *)qword_1801CC590;
      }
      else
      {
        v13 = (void *)*((_QWORD *)BaseAddress + 6);
        LdrpDereferenceModule((char *)BaseAddress);
      }
      v14 = LdrGetProcedureAddressEx(v13, (PANSI_STRING)&AvrfpAPILookupCallbackName, 0, &ProcedureAddress, 1u);
      LdrProtectMrdata(0);
      if ( v14 >= 0 )
      {
        AvrfpAPILookupCallbacksEnabled = 1;
        AvrfpAPILookupCallbackRoutine = __ROR8__(
                                          (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                          MEMORY[0x7FFE0330] & 0x3F);
      }
      AVrfpEnabled = 1;
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
      AVrfpSnapAlreadyLoadedDlls();
      LdrpInitializeTls();
      for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
      {
        v16 = j[4];
        LOBYTE(v27) = 0;
        Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v16 + 152), 0LL, &v27);
        if ( Dll < 0 )
          return (unsigned int)Dll;
      }
      if ( (AVrfpDebug & 8) != 0 )
      {
        DbgPrint("AVRF: -*- final list of providers -*- \n");
        v17 = (__int64 *)AVrfpVerifierProvidersList;
        while ( v17 != &AVrfpVerifierProvidersList )
        {
          v18 = v17[3];
          v17 = (__int64 *)*v17;
          DbgPrint("AVRF: provider %ws \n", v18);
        }
      }
      AVrfpVerifierStopInitialize();
      RtlImageNtHeaderEx(3u, v6->ImageBaseAddress, 0LL, (PIMAGE_NT_HEADERS *)&ProcedureAddress);
    }
    return 0;
  }
  return (unsigned int)Dll;
}
