/*
 * XREFs of AvrfMiniLoadDll @ 0x180116838
 * Callers:
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     LdrpGetProcedureAddress @ 0x180046820 (LdrpGetProcedureAddress.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     LdrpCallInitRoutine @ 0x18004C46C (LdrpCallInitRoutine.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x180075F50 (RtlCopyUnicodeString.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180080000 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180080840 (LdrInitSecurityCookie.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800818F4 (RtlInsertInvertedFunctionTable.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpGenRandom @ 0x1800DCCEC (LdrpGenRandom.c)
 *     LdrpCfgProcessLoadConfig @ 0x180119A40 (LdrpCfgProcessLoadConfig.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18015F5A0 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x18015F6E0 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x18015F960 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x18015FA40 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180161650 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x180161CB0 (NtQuerySymbolicLinkObject.c)
 *     ZwSystemDebugControl @ 0x180162950 (ZwSystemDebugControl.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  _QWORD *v5; // r13
  int appended; // esi
  int v7; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // rdi
  void *ArbitraryUserPointer; // rbx
  int v11; // eax
  __int64 v12; // r15
  unsigned __int64 v13; // r10
  __int128 v14; // xmm0
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // r8
  _WORD *i; // rdx
  __int16 v18; // ax
  _WORD *v19; // rdx
  __int16 v20; // cx
  unsigned __int64 v21; // rax
  int v22; // eax
  _DWORD *v23; // rax
  _DWORD *v24; // r12
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  unsigned __int64 v30; // r12
  __int64 v31; // rdi
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  _OWORD *v38; // rcx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rcx
  _DWORD v49[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v50; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v55; // [rsp+98h] [rbp-68h]
  _DWORD *v56; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v58; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v59; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v62; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v63; // [rsp+100h] [rbp+0h] BYREF
  __int64 v64; // [rsp+108h] [rbp+8h] BYREF
  __int64 v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v68; // [rsp+130h] [rbp+30h] BYREF
  __int128 v69; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v70[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 (__fastcall *v71)(); // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v72)(); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v73)(int); // [rsp+168h] [rbp+68h]
  __int64 v74; // [rsp+170h] [rbp+70h]
  char *(__fastcall *v75)(_QWORD *, unsigned int); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v76)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v77)(__int64, __int64, unsigned int, __int64, int, __int64); // [rsp+188h] [rbp+88h]
  __int128 v78; // [rsp+190h] [rbp+90h]
  _DWORD *v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 v81; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall *v82)(unsigned __int16, unsigned __int16); // [rsp+1B8h] [rbp+B8h]
  struct _TEB *(__fastcall *v83)(__int64 *); // [rsp+1C0h] [rbp+C0h]
  __int64 (__fastcall *v84)(__int64, unsigned __int64, unsigned __int64, _QWORD *); // [rsp+1C8h] [rbp+C8h]
  __int64 (*v85)(void); // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v86)(__int64, int); // [rsp+1D8h] [rbp+D8h]
  struct _TEB *(__fastcall *v87)(__int64, __int64 *); // [rsp+1E0h] [rbp+E0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v89[56]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v90; // [rsp+238h] [rbp+138h]
  _QWORD *v91; // [rsp+258h] [rbp+158h]
  int v92; // [rsp+268h] [rbp+168h]
  __int64 v93; // [rsp+270h] [rbp+170h] BYREF
  char v94[16]; // [rsp+278h] [rbp+178h] BYREF
  _DWORD *v95; // [rsp+288h] [rbp+188h]
  unsigned int v96; // [rsp+290h] [rbp+190h]
  _BYTE v97[48]; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned __int64 v98; // [rsp+300h] [rbp+200h]
  int v99; // [rsp+310h] [rbp+210h]
  int v100; // [rsp+338h] [rbp+238h]
  _OWORD v101[2]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v102; // [rsp+430h] [rbp+330h]
  _DWORD v103[2]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v104[520]; // [rsp+448h] [rbp+348h] BYREF

  v66 = a3;
  v65 = a2;
  v55 = a4;
  v58 = 0LL;
  v59 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = (_QWORD *)(a5 + 312);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  memset(v101, 0, sizeof(v101));
  v102 = 0LL;
  Handle = 0LL;
  v53 = 0LL;
  FileHandle = 0LL;
  DestinationString = 0LL;
  v51 = 0LL;
  v68 = 0LL;
  v64 = 0LL;
  v50 = 0LL;
  IoStatusBlock = 0LL;
  memset_thunk_772440563353939046(v97, 0, 0x138uLL);
  v62 = 0LL;
  v56 = 0LL;
  v63 = 0LL;
  memset_thunk_772440563353939046(v89, 0, 0xD0uLL);
  v54 = 0;
  v70[1] = 0;
  v69 = 0LL;
  memset_thunk_772440563353939046(v70, 0, 0x94uLL);
  v61 = 0LL;
  v49[0] = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  appended = ZwOpenDirectoryObject(&v58, 3LL, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString(&v68, L"KnownDllPath");
    ObjectAttributes.RootDirectory = v58;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v68;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&v59, 1LL, &ObjectAttributes);
    if ( appended >= 0 )
    {
      v103[0] = 4128860;
      WORD1(v50) = 512;
      v103[1] = 6029375;
      *((_QWORD *)&v50 + 1) = v104;
      appended = NtQuerySymbolicLinkObject(v59, &v50, 0LL);
      if ( appended >= 0 )
      {
        *((_QWORD *)&v50 + 1) = v103;
        LOWORD(v50) = v50 + 8;
        WORD1(v50) += 8;
        RtlInitUnicodeString(&v53, L"\\");
        appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v50, (const void **)&v53);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v50, &VerifierDllString);
          if ( appended >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              v69 = v50;
              ZwSystemDebugControl(38LL, &v69, 16LL, 0LL, 0, 0LL);
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v50;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v7 = ZwQueryAttributesFile(&ObjectAttributes, v101);
            if ( v7 < 0 && v7 != -1073741757 && v7 != -1073741790 )
              goto LABEL_11;
            v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v8;
            if ( v8 >= 0 )
            {
              appended = NtCreateSection(&Handle, 13LL, 0LL, 0LL, 16, 0x1000000, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 394) = 520;
                *(_QWORD *)(a5 + 400) = a5 + 408;
                *(_WORD *)(a5 + 392) = 0;
                *((_QWORD *)&v50 + 1) = v104;
                LOWORD(v50) = v50 - 8;
                WORD1(v50) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 392), (unsigned __int16 *)&v50);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = (void *)*((_QWORD *)&v50 + 1);
                v11 = ZwMapViewOfSection(Handle, -1LL, &v51, 0LL, 0LL, 0LL, &v64, 1, 0x800000, 2);
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                appended = v11;
                if ( v11 >= 0 )
                {
                  *(_QWORD *)&v53.Length = 0LL;
                  RtlImageNtHeaderEx(1, v51, 0LL, &v53);
                  v12 = *(_QWORD *)&v53.Length;
                  if ( !*(_QWORD *)&v53.Length )
                    goto LABEL_18;
                  v13 = v51;
                  *(_QWORD *)(a5 + 48) = v51;
                  *(_DWORD *)(a5 + 64) = *(_DWORD *)(v12 + 80);
                  *(_DWORD *)(a5 + 128) = *(_DWORD *)(v12 + 8);
                  *(_QWORD *)(a5 + 144) = 0LL;
                  v14 = *(_OWORD *)(a5 + 392);
                  *(_DWORD *)(a5 + 104) = 0;
                  *(_OWORD *)(a5 + 72) = v14;
                  v15 = *(_WORD *)(a5 + 72);
                  v16 = *(_QWORD *)(a5 + 80);
                  for ( i = (_WORD *)(v16 + 2 * (((unsigned __int64)v15 >> 1) - 1)); (unsigned __int64)i > v16; --i )
                  {
                    if ( *i == 92 )
                      goto LABEL_24;
                  }
                  if ( *i == 92 )
                  {
LABEL_24:
                    v18 = *(_WORD *)(a5 + 74);
                    v19 = i + 1;
                    *(_QWORD *)(a5 + 96) = v19;
                    v20 = 2 * ((__int64)((__int64)v19 - v16) >> 1);
                    *(_WORD *)(a5 + 88) = v15 - v20;
                    *(_WORD *)(a5 + 90) = v18 - v20;
                    goto LABEL_26;
                  }
                  *(_OWORD *)(a5 + 88) = v14;
LABEL_26:
                  if ( *(_DWORD *)(v12 + 40) )
                    v21 = v13 + *(unsigned int *)(v12 + 40);
                  else
                    v21 = 0LL;
                  *(_QWORD *)(a5 + 56) = v21;
                  *(_QWORD *)(a5 + 248) = *(_QWORD *)(v12 + 48);
                  *(_QWORD *)(a5 + 152) = v5;
                  memset_thunk_772440563353939046(v5, 0, 0x50uLL);
                  *(_QWORD *)(a5 + 160) = v5;
                  *(_QWORD *)(a5 + 168) = v5;
                  *v5 = a5 + 160;
                  *(_QWORD *)(a5 + 320) = a5 + 160;
                  *(_DWORD *)(a5 + 276) = 2;
                  *(_DWORD *)(a5 + 336) = -1;
                  *(_WORD *)(*v5 - 52LL) = -1;
                  v22 = NtQuerySection(Handle, 2LL, &v61, 8LL, 0LL);
                  if ( v22 < 0 )
                  {
                    appended = v22;
                    goto LABEL_45;
                  }
                  if ( v61 )
                    *(_QWORD *)(a5 + 248) -= v61;
                  if ( (*(_WORD *)(v12 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  if ( RtlImageDirectoryEntryToData(*(_QWORD *)(a5 + 48), 1, 9u, v49) && v49[0] )
                  {
                    DbgPrintEx(93, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v23 = RtlImageDirectoryEntryToData(*(_QWORD *)(a5 + 48), 1, 1u, v49);
                  v24 = v23;
                  if ( !v23 )
                  {
LABEL_18:
                    appended = -1073741701;
                    goto LABEL_45;
                  }
                  v25 = (_QWORD *)(*(_QWORD *)(a5 + 48) + (unsigned int)*v23);
                  v26 = *(_QWORD *)(a5 + 48) + (unsigned int)v23[4];
                  if ( *v25 )
                  {
                    v27 = v55;
                    *(_QWORD *)(a5 + 176) = v89;
                    v90 = a5;
                    v62 = v97;
                    *(_QWORD *)&v53.Length = 0LL;
                    RtlImageNtHeaderEx(1, v27, 0LL, &v53);
                    v100 = 33554436;
                    v98 = v27;
                    v99 = *(_DWORD *)(*(_QWORD *)&v53.Length + 80LL);
                    v91 = &v62;
                    v95 = v24;
                    v92 = 1;
                    appended = LdrpPrepareImportAddressTableForSnap((__int64)v89, v28);
                    if ( appended >= 0 )
                    {
                      if ( v93 )
                      {
                        v30 = v55;
                        v31 = v26 - (_QWORD)v25;
                        while ( 1 )
                        {
                          appended = LdrpGetProcedureAddress(
                                       v30,
                                       (const char *)(*(unsigned int *)v25 + *(_QWORD *)(a5 + 48) + 2LL),
                                       0,
                                       (_QWORD *)((char *)v25 + v31));
                          if ( appended < 0 )
                            break;
                          if ( !*++v25 )
                          {
                            ZwProtectVirtualMemory(-1LL, &v93, v94, v96, &v54);
                            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
                            {
                              appended = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(v90 + 48), 0, 0);
                              if ( appended < 0 )
                                break;
                            }
                            goto LABEL_63;
                          }
                        }
                      }
                      else
                      {
                        appended = -1073741701;
                      }
                    }
                  }
                  else
                  {
                    v30 = v55;
LABEL_63:
                    v32 = *(_DWORD *)(a5 + 104);
                    if ( (v32 & 0x2004) == 4 )
                    {
                      v33 = LdrpGenRandom();
                      LdrInitSecurityCookie(*(_QWORD *)(a5 + 48), *(_DWORD *)(a5 + 64), 0LL, v33 ^ v34, &v63);
                      appended = LdrpCfgProcessLoadConfig(a5, v12, v63);
                      if ( appended < 0 )
                        goto LABEL_45;
                      v32 = *(_DWORD *)(a5 + 104) | 0x2000;
                      *(_DWORD *)(a5 + 104) = v32;
                    }
                    if ( (v32 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable(v51, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v35 = *(_QWORD *)(a5 + 48);
                    v36 = *(_QWORD *)(a5 + 56);
                    v71 = RtlpGetStackTraceAddress;
                    v70[0] = 152;
                    v82 = RtlpGetStackTraceAddressEx;
                    v81 = v30;
                    v72 = AVrfInternalHeapFreeNotification;
                    v73 = RtlLogStackTrace;
                    v83 = RtlReleaseStackTrace;
                    v84 = RtlStdInitializeStackDatabase;
                    v85 = RtlStdDeleteStackDatabase;
                    v86 = RtlStdLogStackTrace;
                    v87 = RtlStdReleaseStackTrace;
                    v74 = v65;
                    v80 = v66;
                    v75 = RtlCommitDebugInfo;
                    v76 = RtlSetProcessDebugInformation;
                    v77 = RtlQueryImageFileExecutionOptions;
                    v56 = v70;
                    v78 = 0LL;
                    v79 = 0LL;
                    if ( LdrpCallInitRoutine(v36, v35, 5u, (__int64)&v56)
                      && v56 == v70
                      && (v37 = v79) != 0LL
                      && *v79 == 80
                      && (v38 = (_OWORD *)*((_QWORD *)&v78 + 1)) != 0LL
                      && **((_DWORD **)&v78 + 1) == 176 )
                    {
                      v39 = *(_OWORD *)(*((_QWORD *)&v78 + 1) + 16LL);
                      *(_OWORD *)&dword_1801C5598 = **((_OWORD **)&v78 + 1);
                      v40 = *(_OWORD *)(*((_QWORD *)&v78 + 1) + 32LL);
                      *((_OWORD *)&dword_1801C5598 + 1) = v39;
                      v41 = v38[3];
                      *((_OWORD *)&dword_1801C5598 + 2) = v40;
                      v42 = v38[4];
                      *((_OWORD *)&dword_1801C5598 + 3) = v41;
                      v43 = v38[5];
                      *((_OWORD *)&dword_1801C5598 + 4) = v42;
                      v44 = v38[6];
                      *((_OWORD *)&dword_1801C5598 + 5) = v43;
                      v45 = v38[8];
                      *((_OWORD *)&dword_1801C5598 + 6) = v44;
                      *((_OWORD *)&dword_1801C5598 + 7) = v38[7];
                      v46 = v38[9];
                      *((_OWORD *)&dword_1801C5598 + 8) = v45;
                      v47 = v38[10];
                      *((_OWORD *)&dword_1801C5598 + 9) = v46;
                      *((_OWORD *)&dword_1801C5598 + 10) = v47;
                      RtlpDebugPageHeapTable = (_UNKNOWN *)v78;
                      v37[10] = AVrfpVerifierFlags;
                      v37[11] = AVrfpDebug;
                      v48 = *(_QWORD *)(a5 + 48);
                      v51 = 0LL;
                      LdrpLogDllState(v48, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 368) = 9;
                      *(_QWORD *)(a5 + 176) = 0LL;
                    }
                    else
                    {
                      appended = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v8 == -1073741772 )
            {
LABEL_11:
              appended = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_45:
  if ( v51 )
  {
    NtUnmapViewOfSection(-1LL, v51);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v58 )
    NtClose(v58);
  if ( v59 )
    NtClose(v59);
  return (unsigned int)appended;
}
