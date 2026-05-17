/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x180118558
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x18005AAC0 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18009CAD0 (RtlQueryEnvironmentVariable_U.c)
 *     LdrpConstructModernAppKeyName @ 0x1800C1CE4 (LdrpConstructModernAppKeyName.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D1F10 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D2134 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D2DD0 (LdrpQueryIllegalCWDDevices.c)
 *     RtlQueryApplicationKeyOption @ 0x1800D2EDC (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800EB914 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800FBA6C (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlOpenModernAppOptionsKey @ 0x180108640 (RtlOpenModernAppOptionsKey.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180112290 (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x180123BB4 (RtlpInitializeLegacyDosDevicePathState.c)
 *     RtlSetGlobalHeapFeatures @ 0x180144518 (RtlSetGlobalHeapFeatures.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
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
  __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // r14
  HANDLE v12; // r15
  int v13; // eax
  int v14; // eax
  int ApplicationKeyOption; // eax
  int *v16; // rcx
  int v17; // eax
  int v18; // edi
  __int64 i; // rdi
  const wchar_t *v20; // rdx
  bool *v21; // rax
  int v22; // edi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  HANDLE *v27; // rbx
  HANDLE *v28; // rbx
  __int64 v30; // [rsp+30h] [rbp-D0h]
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
  unsigned int v43; // [rsp+40h] [rbp-C0h] BYREF
  char v44; // [rsp+44h] [rbp-BCh]
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *v50; // [rsp+60h] [rbp-A0h] BYREF
  void *v51; // [rsp+68h] [rbp-98h] BYREF
  int *v52; // [rsp+70h] [rbp-90h]
  __int64 v53[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  void *v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h]
  HANDLE *v57; // [rsp+A0h] [rbp-60h]
  HANDLE *v58; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v62[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v63; // [rsp+F0h] [rbp-10h]
  WCHAR SourceString[200]; // [rsp+100h] [rbp+0h] BYREF

  v59 = a1;
  v7 = a1;
  *a4 = 0LL;
  *a5 = 0LL;
  v8 = 0;
  v57 = a4;
  v9 = 0LL;
  v53[0] = a3;
  v10 = 0;
  v58 = a5;
  v11 = 0LL;
  v60 = a6;
  v12 = 0LL;
  v51 = 0LL;
  Handle = 0LL;
  v46 = 0;
  v47 = -1;
  v52 = 0LL;
  v56 = 0LL;
  v54 = 0LL;
  v50 = 0LL;
  DestinationString = 0LL;
  v45 = 0;
  v43 = 0;
  v48 = 0;
  v44 = 1;
  v55 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) == 0 )
  {
    v13 = RtlpOpenImageFileOptionsKeyEx(v7, 9u, 0, &v51);
    v9 = (__int64)v51;
    if ( v13 >= 0 )
    {
      *v57 = v51;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)LdrpConstructModernAppKeyName(SourceString) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v14 = RtlOpenModernAppOptionsKey((__int64)&DestinationString, v9, &v50);
        v11 = (__int64)v50;
        if ( v14 >= 0 )
          *v58 = v50;
      }
      RtlQueryApplicationKeyOption(
        v11,
        v9,
        (__int64)L"DisableHeapLookaside",
        4u,
        (__int64)&RtlpDisableHeapLookaside,
        4,
        v30,
        0LL);
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v46, 4, v31, 0LL);
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"HeapFeatures", 0xBu, (__int64)&v54, 8, v32, 0LL);
      v56 = v54;
      if ( v54 )
      {
        ApplicationKeyOption = RtlQueryApplicationKeyOption(
                                 v11,
                                 v9,
                                 (__int64)L"PgSamplingOptions",
                                 4u,
                                 (__int64)&v47,
                                 4,
                                 v33,
                                 0LL);
        v16 = &v47;
        if ( ApplicationKeyOption < 0 )
          v16 = 0LL;
        v52 = v16;
      }
      RtlQueryApplicationKeyOption(
        v11,
        v9,
        (__int64)L"ShutdownFlags",
        4u,
        (__int64)&RtlpShutdownProcessFlags,
        4,
        v33,
        0LL);
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v43, 4, v34, 0LL);
      if ( v43 )
        RtlpUnloadEventTraceExNumber = v43;
      v43 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v43, 4, v35, 0LL);
      if ( v43 )
        *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v43;
      v43 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v43, 4, v36, 0LL);
      if ( v43 )
        LdrpUseImpersonatedDeviceMap = 1;
      v43 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"TracingFlags", 4u, (__int64)&v43, 4, v37, 0LL);
      if ( v43 )
        _InterlockedOr((volatile signed __int32 *)(a2 + 888), v43);
      v43 = 0;
      if ( (int)RtlQueryApplicationKeyOption(
                  v11,
                  v9,
                  (__int64)L"RaiseExceptionOnPossibleDeadlock",
                  4u,
                  (__int64)&v43,
                  4,
                  v38,
                  0LL) >= 0 )
        RtlpRaiseExceptionOnPossibleDeadlock = v43 != 0;
      v43 = 0;
      if ( (int)RtlQueryApplicationKeyOption(v11, v9, (__int64)L"LegacyDosDevicePaths", 4u, (__int64)&v43, 4, v39, 0LL) >= 0 )
        RtlpInitializeLegacyDosDevicePathState(v43);
      v43 = 0;
      if ( (int)RtlQueryImageFileKeyOption(v9, L"CFGOptions", 4, (int *)&v43, 4u, 0LL) >= 0 && (v43 & 1) != 0 )
      {
        LdrProtectMrdata(0);
        RtlGuardAllowSuppressedCalls = 1;
        LdrProtectMrdata(1);
      }
      if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
      {
        v62[0] = 48LL;
        v62[2] = &unk_180172DC0;
        v62[3] = 64LL;
        v62[1] = v9;
        v63 = 0LL;
        v17 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1LL, v62);
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
      RtlQueryImageFileKeyOption(v9, L"MinimumStackCommitInBytes", 4, (int *)&v43, 4u, 0LL);
      if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v43 )
        *(_QWORD *)(a2 + 792) = v43;
      for ( i = 0LL; i != 6; i += 2LL )
      {
        v20 = (&off_180172CE0)[i];
        v43 = 0;
        RtlQueryImageFileKeyOption(v9, v20, 4, (int *)&v43, 4u, 0LL);
        v21 = (bool *)*(&off_180172CE0 + i + 1);
        *v21 = v43 != 0;
      }
      v43 = 0;
      RtlQueryImageFileKeyOption(v9, L"MaxDeadActivationContexts", 4, (int *)&v43, 4u, 0LL);
      v7 = v59;
      if ( v43 )
        g_SxsMaxDeadActivationContexts = v43;
      v12 = 0LL;
      v43 = 0;
      if ( (int)RtlQueryImageFileKeyOption(v9, L"ImageExpansionMitigation", 4, (int *)&v43, 4u, 0LL) >= 0 )
        LdrpImageExpansionMitigation = v43;
      v8 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
      if ( (int)RtlQueryApplicationKeyOption(v11, v9, (__int64)L"GlobalFlag", 4u, (__int64)&v45, 4, v40, &v55) < 0 )
        goto LABEL_47;
      v22 = v45;
      if ( (v45 & 0x2000100) != 0 )
      {
        if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v11, v9) )
        {
          v22 &= 0xFDFFFEFF;
          v45 = v22;
        }
        if ( (v22 & 0x2000100) != 0 )
        {
          if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v7, &v48) < 0 )
          {
LABEL_47:
            if ( (int)RtlQueryApplicationKeyOption(v11, v9, (__int64)L"GlobalFlag2", 4u, (__int64)&v45, 4, v41, 0LL) >= 0 )
              *(_DWORD *)(a2 + 1988) = v45;
            if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
            {
              v44 = 0;
              v12 = v55;
            }
            v43 = 0;
            v23 = RtlQueryApplicationKeyOption(
                    v11,
                    v9,
                    (__int64)L"QueryProcessModuleInformationLoopDetectorCount",
                    4u,
                    (__int64)&v43,
                    4,
                    v42,
                    0LL);
            v10 = v46;
            if ( v23 >= 0 )
              LdrpQueryProcessModuleInformationLoopDetectorCount = v43;
            goto LABEL_53;
          }
          if ( !v48 )
          {
            v22 &= 0xFDFFFEFF;
            v45 = v22;
          }
        }
      }
      *(_DWORD *)(a2 + 188) = v22;
      goto LABEL_47;
    }
  }
LABEL_53:
  if ( LdrControlFlowGuardEnforced() )
    v10 |= 1u;
  RtlSetGlobalHeapFeatures((_DWORD)v7, v10, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL), v56, (__int64)v52);
  v18 = 0;
  if ( v44 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
  {
    if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v7, v24, (__int64)&Handle) < 0 )
    {
      Handle = 0LL;
    }
    else if ( (int)RtlQueryImageFileKeyOption((__int64)Handle, L"GlobalFlag", 4, &v45, 4u, 0LL) >= 0 )
    {
      v12 = Handle;
      *(_DWORD *)(a2 + 188) |= v45 & 0x2000100;
    }
  }
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || LdrpPayloadRestrictionMitigationsEnabled() )
  {
    v26 = LdrpInitializeApplicationVerifierPackage(v7, a2, v8, (__int64)v12, v53[0], v60);
    v18 = v26;
    if ( v26 < 0 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        10526,
        (__int64)"LdrpInitializeExecutionOptions",
        0,
        "Initializing the application verifier package failed with status 0x%08lx\n",
        v26);
      goto LABEL_77;
    }
  }
  else if ( !v11 && !v9 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      v25 = *(_QWORD *)(a2 + 32);
      v53[0] = 0x200000LL;
      v53[1] = (__int64)v62;
      if ( (int)RtlQueryEnvironmentVariable_U(*(_QWORD *)(v25 + 128), word_180172D20, (__int64)v53) < 0
        || (v18 = RtlUnicodeStringToInteger((unsigned __int16 *)v53, 0, (int *)&v43), v18 < 0)
        || !v43 )
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
  v27 = v57;
  if ( *v57 )
  {
    NtClose(*v57);
    *v27 = 0LL;
  }
  v28 = v58;
  if ( *v58 )
  {
    NtClose(*v58);
    *v28 = 0LL;
  }
LABEL_81:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v18;
}
