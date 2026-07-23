/*
 * XREFs of AvrfMiniLoadDll @ 0x180116018
 * Callers:
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     LdrpGetProcedureAddress @ 0x180030D90 (LdrpGetProcedureAddress.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpCallInitRoutine @ 0x1800369EC (LdrpCallInitRoutine.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x180064770 (RtlCopyUnicodeString.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800773A0 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180077BE0 (LdrInitSecurityCookie.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800788B0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlInsertInvertedFunctionTable @ 0x180078C94 (RtlInsertInvertedFunctionTable.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C4120 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpGenRandom @ 0x1800D9C5C (LdrpGenRandom.c)
 *     LdrpCfgProcessLoadConfig @ 0x1801197F0 (LdrpCfgProcessLoadConfig.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18015F4A0 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x18015F5E0 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x18015F860 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x18015F940 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180161550 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x180161BB0 (NtQuerySymbolicLinkObject.c)
 *     ZwSystemDebugControl @ 0x180162850 (ZwSystemDebugControl.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5)
{
  _QWORD *v5; // r13
  int appended; // esi
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // rdi
  void *ArbitraryUserPointer; // rbx
  NTSTATUS v11; // eax
  __int64 v12; // r15
  char *v13; // r10
  __int128 v14; // xmm0
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // r8
  _WORD *i; // rdx
  __int16 v18; // ax
  _WORD *v19; // rdx
  __int16 v20; // cx
  char *v21; // rax
  NTSTATUS v22; // eax
  unsigned int *v23; // rax
  ULONG_PTR v24; // r12
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  PVOID v27; // rsi
  PVOID v29; // r12
  __int64 v30; // rdi
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  _OWORD *v37; // rcx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // rcx
  ULONG Size[4]; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING LinkTarget; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING Source; // [rsp+80h] [rbp-80h] BYREF
  ULONG OldProtect; // [rsp+90h] [rbp-70h] BYREF
  PVOID BaseOfImage; // [rsp+98h] [rbp-68h]
  _DWORD *v55; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE DirectoryHandle; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE LinkHandle; // [rsp+B8h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  __int64 SectionInformation; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v61; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR ViewSize; // [rsp+108h] [rbp+8h] BYREF
  __int64 v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  _UNICODE_STRING v67; // [rsp+130h] [rbp+30h] BYREF
  _UNICODE_STRING InputBuffer; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v69[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v71)(); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v72)(int); // [rsp+168h] [rbp+68h]
  __int64 v73; // [rsp+170h] [rbp+70h]
  PVOID (__cdecl *v74)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+178h] [rbp+78h]
  NTSTATUS (__cdecl *v75)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v76)(__int64, wchar_t *, __int64, __int64, int, __int64); // [rsp+188h] [rbp+88h]
  __int128 v77; // [rsp+190h] [rbp+90h]
  _DWORD *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  PVOID v80; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall *v81)(unsigned __int16, unsigned __int16); // [rsp+1B8h] [rbp+B8h]
  void (__fastcall *v82)(__int64); // [rsp+1C0h] [rbp+C0h]
  NTSTATUS (__fastcall *v83)(void *, ULONG_PTR, ULONG_PTR, _QWORD *); // [rsp+1C8h] [rbp+C8h]
  __int64 (*v84)(void); // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v85)(__int64, int); // [rsp+1D8h] [rbp+D8h]
  void (__fastcall *v86)(__int64, __int64); // [rsp+1E0h] [rbp+E0h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v88[56]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v89; // [rsp+238h] [rbp+138h]
  _QWORD *v90; // [rsp+258h] [rbp+158h]
  int v91; // [rsp+268h] [rbp+168h]
  PVOID v92; // [rsp+270h] [rbp+170h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+278h] [rbp+178h] BYREF
  ULONG NewProtect; // [rsp+290h] [rbp+190h]
  _BYTE v95[48]; // [rsp+2D0h] [rbp+1D0h] BYREF
  PVOID v96; // [rsp+300h] [rbp+200h]
  int v97; // [rsp+310h] [rbp+210h]
  int v98; // [rsp+338h] [rbp+238h]
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+410h] [rbp+310h] BYREF
  _DWORD v100[2]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v101[520]; // [rsp+448h] [rbp+348h] BYREF

  v65 = a3;
  v64 = a2;
  BaseOfImage = a4;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = (_QWORD *)(a5 + 312);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  memset(&FileInformation, 0, sizeof(FileInformation));
  SectionHandle = 0LL;
  Source = 0LL;
  FileHandle = 0LL;
  DestinationString = 0LL;
  BaseAddress = 0LL;
  v67 = 0LL;
  ViewSize = 0LL;
  LinkTarget = 0LL;
  IoStatusBlock = 0LL;
  memset_thunk_772440563353939046(v95, 0, 0x138uLL);
  v61 = 0LL;
  v55 = 0LL;
  v62 = 0LL;
  memset_thunk_772440563353939046(v88, 0, 0xD0uLL);
  OldProtect = 0;
  v69[1] = 0;
  InputBuffer = 0LL;
  memset_thunk_772440563353939046(v69, 0, 0x94uLL);
  SectionInformation = 0LL;
  Size[0] = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString(&v67, L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v67;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      v100[0] = 4128860;
      LinkTarget.MaximumLength = 512;
      v100[1] = 6029375;
      LinkTarget.Buffer = (wchar_t *)v101;
      appended = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (wchar_t *)v100;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString(&Source, L"\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &VerifierDllString);
          if ( appended >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              InputBuffer = LinkTarget;
              ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &LinkTarget;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v7 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
            if ( v7 < 0 && v7 != -1073741757 && v7 != -1073741790 )
              goto LABEL_11;
            v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v8;
            if ( v8 >= 0 )
            {
              appended = NtCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 394) = 520;
                *(_QWORD *)(a5 + 400) = a5 + 408;
                *(_WORD *)(a5 + 392) = 0;
                LinkTarget.Buffer = (wchar_t *)v101;
                LinkTarget.Length -= 8;
                LinkTarget.MaximumLength -= 8;
                RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 392), &LinkTarget);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = LinkTarget.Buffer;
                v11 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        0LL,
                        0LL,
                        &ViewSize,
                        ViewShare,
                        0x800000u,
                        2u);
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                appended = v11;
                if ( v11 >= 0 )
                {
                  *(_QWORD *)&Source.Length = 0LL;
                  RtlImageNtHeaderEx(1u, BaseAddress, 0LL, (PIMAGE_NT_HEADERS *)&Source);
                  v12 = *(_QWORD *)&Source.Length;
                  if ( !*(_QWORD *)&Source.Length )
                    goto LABEL_18;
                  v13 = (char *)BaseAddress;
                  *(_QWORD *)(a5 + 48) = BaseAddress;
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
                    v21 = &v13[*(unsigned int *)(v12 + 40)];
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
                  v22 = NtQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
                  if ( v22 < 0 )
                  {
                    appended = v22;
                    goto LABEL_45;
                  }
                  if ( SectionInformation )
                    *(_QWORD *)(a5 + 248) -= SectionInformation;
                  if ( (*(_WORD *)(v12 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  if ( RtlImageDirectoryEntryToData(*(PVOID *)(a5 + 48), 1u, 9u, Size) && Size[0] )
                  {
                    DbgPrintEx(0x5Du, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v23 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a5 + 48), 1u, 1u, Size);
                  v24 = (ULONG_PTR)v23;
                  if ( !v23 )
                  {
LABEL_18:
                    appended = -1073741701;
                    goto LABEL_45;
                  }
                  v25 = (_QWORD *)(*(_QWORD *)(a5 + 48) + *v23);
                  v26 = *(_QWORD *)(a5 + 48) + v23[4];
                  if ( *v25 )
                  {
                    v27 = BaseOfImage;
                    *(_QWORD *)(a5 + 176) = v88;
                    v89 = a5;
                    v61 = v95;
                    *(_QWORD *)&Source.Length = 0LL;
                    RtlImageNtHeaderEx(1u, v27, 0LL, (PIMAGE_NT_HEADERS *)&Source);
                    v98 = 33554436;
                    v96 = v27;
                    v97 = *(_DWORD *)(*(_QWORD *)&Source.Length + 80LL);
                    v90 = &v61;
                    RegionSize[2] = v24;
                    v91 = 1;
                    appended = LdrpPrepareImportAddressTableForSnap((__int64)v88);
                    if ( appended >= 0 )
                    {
                      if ( v92 )
                      {
                        v29 = BaseOfImage;
                        v30 = v26 - (_QWORD)v25;
                        while ( 1 )
                        {
                          appended = LdrpGetProcedureAddress(
                                       (unsigned __int64)v29,
                                       (const char *)(*(unsigned int *)v25 + *(_QWORD *)(a5 + 48) + 2LL),
                                       0,
                                       (char **)((char *)v25 + v30));
                          if ( appended < 0 )
                            break;
                          if ( !*++v25 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              &v92,
                              RegionSize,
                              NewProtect,
                              &OldProtect);
                            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
                            {
                              appended = LdrpUnsuppressAddressTakenIat(*(char **)(v89 + 48), 0, 0);
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
                    v29 = BaseOfImage;
LABEL_63:
                    v31 = *(_DWORD *)(a5 + 104);
                    if ( (v31 & 0x2004) == 4 )
                    {
                      v32 = LdrpGenRandom();
                      LdrInitSecurityCookie(*(unsigned __int64 **)(a5 + 48), *(_DWORD *)(a5 + 64), 0LL, v32 ^ v33, &v62);
                      appended = LdrpCfgProcessLoadConfig(a5, v12, v62);
                      if ( appended < 0 )
                        goto LABEL_45;
                      v31 = *(_DWORD *)(a5 + 104) | 0x2000;
                      *(_DWORD *)(a5 + 104) = v31;
                    }
                    if ( (v31 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable(BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v34 = *(_QWORD *)(a5 + 48);
                    v35 = *(_QWORD *)(a5 + 56);
                    v70 = RtlpGetStackTraceAddress;
                    v69[0] = 152;
                    v81 = RtlpGetStackTraceAddressEx;
                    v80 = v29;
                    v71 = AVrfInternalHeapFreeNotification;
                    v72 = RtlLogStackTrace;
                    v82 = RtlReleaseStackTrace;
                    v83 = RtlStdInitializeStackDatabase;
                    v84 = RtlStdDeleteStackDatabase;
                    v85 = RtlStdLogStackTrace;
                    v86 = RtlStdReleaseStackTrace;
                    v73 = v64;
                    v79 = v65;
                    v74 = RtlCommitDebugInfo;
                    v75 = RtlSetProcessDebugInformation;
                    v76 = RtlQueryImageFileExecutionOptions;
                    v55 = v69;
                    v77 = 0LL;
                    v78 = 0LL;
                    if ( LdrpCallInitRoutine(v35, v34, 5u, (__int64)&v55)
                      && v55 == v69
                      && (v36 = v78) != 0LL
                      && *v78 == 80
                      && (v37 = (_OWORD *)*((_QWORD *)&v77 + 1)) != 0LL
                      && **((_DWORD **)&v77 + 1) == 176 )
                    {
                      v38 = *(_OWORD *)(*((_QWORD *)&v77 + 1) + 16LL);
                      *(_OWORD *)&dword_1801C4598 = **((_OWORD **)&v77 + 1);
                      v39 = *(_OWORD *)(*((_QWORD *)&v77 + 1) + 32LL);
                      *((_OWORD *)&dword_1801C4598 + 1) = v38;
                      v40 = v37[3];
                      *((_OWORD *)&dword_1801C4598 + 2) = v39;
                      v41 = v37[4];
                      *((_OWORD *)&dword_1801C4598 + 3) = v40;
                      v42 = v37[5];
                      *((_OWORD *)&dword_1801C4598 + 4) = v41;
                      v43 = v37[6];
                      *((_OWORD *)&dword_1801C4598 + 5) = v42;
                      v44 = v37[8];
                      *((_OWORD *)&dword_1801C4598 + 6) = v43;
                      *((_OWORD *)&dword_1801C4598 + 7) = v37[7];
                      v45 = v37[9];
                      *((_OWORD *)&dword_1801C4598 + 8) = v44;
                      v46 = v37[10];
                      *((_OWORD *)&dword_1801C4598 + 9) = v45;
                      *((_OWORD *)&dword_1801C4598 + 10) = v46;
                      RtlpDebugPageHeapTable = (_UNKNOWN *)v77;
                      v36[10] = AVrfpVerifierFlags;
                      v36[11] = AVrfpDebug;
                      v47 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      LdrpLogDllState(v47, a5 + 72, 0x14AEu);
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
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  if ( LinkHandle )
    NtClose(LinkHandle);
  return (unsigned int)appended;
}
