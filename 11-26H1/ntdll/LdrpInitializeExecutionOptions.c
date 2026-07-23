/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x180118308
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x180045040 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x180052020 (RtlUnicodeStringToInteger.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18009BC00 (RtlQueryEnvironmentVariable_U.c)
 *     LdrpConstructModernAppKeyName @ 0x1800BF994 (LdrpConstructModernAppKeyName.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800CF680 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800CF8A4 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D11EC (LdrpQueryIllegalCWDDevices.c)
 *     RtlQueryApplicationKeyOption @ 0x1800D12EC (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800EAB24 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800FB1BC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlOpenModernAppOptionsKey @ 0x180108040 (RtlOpenModernAppOptionsKey.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180111D40 (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x180123924 (RtlpInitializeLegacyDosDevicePathState.c)
 *     RtlSetGlobalHeapFeatures @ 0x180144408 (RtlSetGlobalHeapFeatures.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  unsigned __int16 *v7; // r13
  char v8; // r12
  HANDLE v9; // rsi
  int v10; // edi
  void *v11; // r14
  HANDLE v12; // r15
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  int ApplicationKeyOption; // eax
  int *v16; // rcx
  NTSTATUS v17; // eax
  NTSTATUS v18; // edi
  __int64 i; // rdi
  wchar_t *v20; // rdx
  bool *v21; // rax
  ULONG v22; // edi
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  HANDLE *v28; // rbx
  HANDLE *v29; // rbx
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+30h] [rbp-D0h]
  __int64 v41; // [rsp+30h] [rbp-D0h]
  __int64 v42; // [rsp+30h] [rbp-D0h]
  __int64 v43; // [rsp+30h] [rbp-D0h]
  ULONG v44; // [rsp+40h] [rbp-C0h] BYREF
  char v45; // [rsp+44h] [rbp-BCh]
  ULONG v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *v51; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  int *v53; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING Value; // [rsp+78h] [rbp-88h] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  void *v56; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h]
  HANDLE *v58; // [rsp+A0h] [rbp-60h]
  HANDLE *v59; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  WCHAR SourceString[200]; // [rsp+100h] [rbp+0h] BYREF

  v60 = a1;
  v7 = a1;
  *a4 = 0LL;
  *a5 = 0LL;
  v8 = 0;
  v58 = a4;
  v9 = 0LL;
  *(_QWORD *)&Value.Length = a3;
  v10 = 0;
  v59 = a5;
  v11 = 0LL;
  v61 = a6;
  v12 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v47 = 0;
  v48 = -1;
  v53 = 0LL;
  v57 = 0LL;
  v55 = 0LL;
  v51 = 0LL;
  DestinationString = 0LL;
  v46 = 0;
  v44 = 0;
  v49 = 0;
  v45 = 1;
  v56 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) == 0 )
  {
    v13 = RtlpOpenImageFileOptionsKeyEx(v7, 9u, 0, &KeyHandle);
    v9 = KeyHandle;
    if ( v13 >= 0 )
    {
      *v58 = KeyHandle;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && LdrpConstructModernAppKeyName(SourceString) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v14 = RtlOpenModernAppOptionsKey(&DestinationString, v9, &v51);
        v11 = v51;
        if ( v14 >= 0 )
          *v59 = v51;
      }
      RtlQueryApplicationKeyOption(
        v11,
        v9,
        L"DisableHeapLookaside",
        4LL,
        (__int64)&RtlpDisableHeapLookaside,
        4,
        v31,
        0LL);
      RtlQueryApplicationKeyOption(v11, v9, L"FrontEndHeapDebugOptions", 4LL, (__int64)&v47, 4, v32, 0LL);
      RtlQueryApplicationKeyOption(v11, v9, L"HeapFeatures", 11LL, (__int64)&v55, 8, v33, 0LL);
      v57 = v55;
      if ( v55 )
      {
        ApplicationKeyOption = RtlQueryApplicationKeyOption(
                                 v11,
                                 v9,
                                 L"PgSamplingOptions",
                                 4LL,
                                 (__int64)&v48,
                                 4,
                                 v34,
                                 0LL);
        v16 = &v48;
        if ( ApplicationKeyOption < 0 )
          v16 = 0LL;
        v53 = v16;
      }
      RtlQueryApplicationKeyOption(v11, v9, L"ShutdownFlags", 4LL, (__int64)&RtlpShutdownProcessFlags, 4, v34, 0LL);
      RtlQueryApplicationKeyOption(v11, v9, L"UnloadEventTraceDepth", 4LL, (__int64)&v44, 4, v35, 0LL);
      if ( v44 )
        RtlpUnloadEventTraceExNumber = v44;
      v44 = 0;
      RtlQueryApplicationKeyOption(v11, v9, L"MaxLoaderThreads", 4LL, (__int64)&v44, 4, v36, 0LL);
      if ( v44 )
        *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v44;
      v44 = 0;
      RtlQueryApplicationKeyOption(v11, v9, L"UseImpersonatedDeviceMap", 4LL, (__int64)&v44, 4, v37, 0LL);
      if ( v44 )
        LdrpUseImpersonatedDeviceMap = 1;
      v44 = 0;
      RtlQueryApplicationKeyOption(v11, v9, L"TracingFlags", 4LL, (__int64)&v44, 4, v38, 0LL);
      if ( v44 )
        _InterlockedOr((volatile signed __int32 *)(a2 + 888), v44);
      v44 = 0;
      if ( (int)RtlQueryApplicationKeyOption(
                  v11,
                  v9,
                  L"RaiseExceptionOnPossibleDeadlock",
                  4LL,
                  (__int64)&v44,
                  4,
                  v39,
                  0LL) >= 0 )
        RtlpRaiseExceptionOnPossibleDeadlock = v44 != 0;
      v44 = 0;
      if ( (int)RtlQueryApplicationKeyOption(v11, v9, L"LegacyDosDevicePaths", 4LL, (__int64)&v44, 4, v40, 0LL) >= 0 )
        RtlpInitializeLegacyDosDevicePathState(v44);
      v44 = 0;
      if ( RtlQueryImageFileKeyOption(v9, (wchar_t *)L"CFGOptions", 4, &v44, 4u, 0LL) >= 0 && (v44 & 1) != 0 )
      {
        LdrProtectMrdata(0);
        RtlGuardAllowSuppressedCalls = 1;
        LdrProtectMrdata(1);
      }
      if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180171E20;
        *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
        ObjectAttributes.RootDirectory = v9;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v17 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
        v18 = v17;
        if ( v17 == -1073741772 )
        {
          LdrpLargePageDllKeyHandle = 0LL;
        }
        else if ( v17 < 0 )
        {
          goto LABEL_77;
        }
      }
      RtlQueryImageFileKeyOption(v9, (wchar_t *)L"MinimumStackCommitInBytes", 4, &v44, 4u, 0LL);
      if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v44 )
        *(_QWORD *)(a2 + 792) = v44;
      for ( i = 0LL; i != 6; i += 2LL )
      {
        v20 = (&off_180171D40)[i];
        v44 = 0;
        RtlQueryImageFileKeyOption(v9, v20, 4, &v44, 4u, 0LL);
        v21 = (bool *)*(&off_180171D40 + i + 1);
        *v21 = v44 != 0;
      }
      v44 = 0;
      RtlQueryImageFileKeyOption(v9, (wchar_t *)L"MaxDeadActivationContexts", 4, &v44, 4u, 0LL);
      v7 = v60;
      if ( v44 )
        g_SxsMaxDeadActivationContexts = v44;
      v12 = 0LL;
      v44 = 0;
      if ( RtlQueryImageFileKeyOption(v9, (wchar_t *)L"ImageExpansionMitigation", 4, &v44, 4u, 0LL) >= 0 )
        LdrpImageExpansionMitigation = v44;
      v8 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
      if ( (int)RtlQueryApplicationKeyOption(v11, v9, (wchar_t *)L"GlobalFlag", 4LL, (__int64)&v46, 4, v41, &v56) < 0 )
        goto LABEL_47;
      v22 = v46;
      if ( (v46 & 0x2000100) != 0 )
      {
        if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v11, v9) )
        {
          v22 &= 0xFDFFFEFF;
          v46 = v22;
        }
        if ( (v22 & 0x2000100) != 0 )
        {
          if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v7, &v49) < 0 )
          {
LABEL_47:
            if ( (int)RtlQueryApplicationKeyOption(v11, v9, L"GlobalFlag2", 4LL, (__int64)&v46, 4, v42, 0LL) >= 0 )
              *(_DWORD *)(a2 + 1988) = v46;
            if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
            {
              v45 = 0;
              v12 = v56;
            }
            v44 = 0;
            v23 = RtlQueryApplicationKeyOption(
                    v11,
                    v9,
                    L"QueryProcessModuleInformationLoopDetectorCount",
                    4LL,
                    (__int64)&v44,
                    4,
                    v43,
                    0LL);
            v10 = v47;
            if ( v23 >= 0 )
              LdrpQueryProcessModuleInformationLoopDetectorCount = v44;
            goto LABEL_53;
          }
          if ( !v49 )
          {
            v22 &= 0xFDFFFEFF;
            v46 = v22;
          }
        }
      }
      *(_DWORD *)(a2 + 188) = v22;
      goto LABEL_47;
    }
  }
LABEL_53:
  LOBYTE(v24) = LdrControlFlowGuardEnforced();
  if ( v24 )
    v10 |= 1u;
  RtlSetGlobalHeapFeatures((_DWORD)v7, v10, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL), v57, (__int64)v53);
  v18 = 0;
  if ( v45 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
  {
    if ( AVrfOpenCurrentUserImageFileOptionsKey(v7, v25, &Handle) < 0 )
    {
      Handle = 0LL;
    }
    else if ( RtlQueryImageFileKeyOption(Handle, (wchar_t *)L"GlobalFlag", 4, &v46, 4u, 0LL) >= 0 )
    {
      v12 = Handle;
      *(_DWORD *)(a2 + 188) |= v46 & 0x2000100;
    }
  }
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || LdrpPayloadRestrictionMitigationsEnabled() )
  {
    v27 = LdrpInitializeApplicationVerifierPackage(v7, a2, v8, v12, *(__int64 *)&Value.Length, v61);
    v18 = v27;
    if ( v27 < 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        10522,
        (__int64)"LdrpInitializeExecutionOptions",
        0,
        "Initializing the application verifier package failed with status 0x%08lx\n",
        v27);
      goto LABEL_77;
    }
  }
  else if ( !v11 && !v9 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      v26 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)&Value.Length = 0x200000LL;
      Value.Buffer = (wchar_t *)&ObjectAttributes;
      if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v26 + 128), (PUNICODE_STRING)&stru_180171D80, &Value) < 0
        || (v18 = RtlUnicodeStringToInteger(&Value, 0, &v44), v18 < 0)
        || !v44 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
    *(_DWORD *)(a2 + 1984) |= 1u;
  if ( v18 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v9);
    goto LABEL_81;
  }
LABEL_77:
  v28 = v58;
  if ( *v58 )
  {
    NtClose(*v58);
    *v28 = 0LL;
  }
  v29 = v59;
  if ( *v59 )
  {
    NtClose(*v59);
    *v29 = 0LL;
  }
LABEL_81:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v18;
}
