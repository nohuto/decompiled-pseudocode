/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x18003FCD0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x180066820 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x180158DAC (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlCreateUnicodeString @ 0x180028180 (RtlCreateUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     StringCbPrintfW @ 0x180040C14 (StringCbPrintfW.c)
 *     EtwpAddDebugInfoEvents @ 0x180040C88 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x180040DE0 (EtwpAddBinaryInfoEvents.c)
 *     StringToGuidNoBrackets @ 0x180040F5C (StringToGuidNoBrackets.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     EtwpGetTimeZoneInformation @ 0x1800410CC (EtwpGetTimeZoneInformation.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18004125C (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800413B8 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180041564 (EtwpGetRegDwordValue.c)
 *     wcschr @ 0x18012D710 (wcschr.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     wcsrchr @ 0x18012DCE0 (wcsrchr.c)
 *     wcsstr @ 0x18012DE10 (wcsstr.c)
 *     NtReadFile @ 0x18015EF00 (NtReadFile.c)
 *     NtWriteFile @ 0x18015EF40 (NtWriteFile.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x18015F320 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x18015F760 (ZwQueryVolumeInformationFile.c)
 *     ZwCreateFile @ 0x18015F8E0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, void *a2, unsigned int a3, bool a4)
{
  size_t v4; // r13
  bool v6; // zf
  wchar_t *v9; // rdi
  NTSTATUS v10; // ecx
  SIZE_T v11; // r14
  const wchar_t *v12; // rsi
  int v13; // edx
  _DWORD *Heap_0; // rdi
  size_t v15; // rax
  int v16; // ecx
  HANDLE v17; // r15
  size_t v18; // rax
  int v19; // esi
  char *v20; // rsi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  char *v23; // rdx
  int v24; // eax
  char v25; // al
  char v26; // r8
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  NTSTATUS result; // eax
  struct _PEB *v31; // rcx
  char v32; // al
  char v33; // dl
  __int64 v34; // rcx
  char *v35; // r8
  _DWORD *v36; // rcx
  size_t v37; // rax
  NTSTATUS v38; // r13d
  unsigned __int64 v39; // rax
  __int64 v40; // r13
  int v41; // r14d
  NTSTATUS v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  ULONG v48; // r13d
  size_t v49; // rax
  int RegString; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int RegDwordValue; // eax
  GUID *v54; // r13
  GUID *v55; // r13
  ULONG v56; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+78h] [rbp-88h]
  GUID *v60; // [rsp+80h] [rbp-80h]
  ULONG CreateDisposition[2]; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h] BYREF
  __m128i v63; // [rsp+98h] [rbp-68h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  PVOID BaseAddress[2]; // [rsp+C0h] [rbp-40h] BYREF
  _IO_STATUS_BLOCK v67; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v68[2]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v69[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v70; // [rsp+F8h] [rbp-8h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  __int128 ThreadInformation; // [rsp+140h] [rbp+40h] BYREF
  __int128 v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+160h] [rbp+60h]
  int v76; // [rsp+168h] [rbp+68h]
  _OBJECT_ATTRIBUTES FileInformation; // [rsp+170h] [rbp+70h] BYREF
  __int128 v78; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v79; // [rsp+1B0h] [rbp+B0h]
  __int128 FsInformation; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v81; // [rsp+1D0h] [rbp+D0h]
  _OWORD SystemInformation[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v83[2]; // [rsp+220h] [rbp+120h] BYREF
  __int128 v84; // [rsp+240h] [rbp+140h]
  _BYTE v85[80]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v86[80]; // [rsp+2A0h] [rbp+1A0h] BYREF
  wchar_t pszDest[1024]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v4 = a3;
  Src = a2;
  v6 = (*(_BYTE *)(a1 + 308) & 8) == 0;
  ResultLength = 0;
  v56 = 0;
  v81 = 0LL;
  v75 = 0LL;
  v76 = 0;
  FsInformation = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  v67 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v83, 0, sizeof(v83));
  v84 = 0LL;
  ThreadInformation = 0LL;
  v74 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  if ( !v6 )
  {
    v9 = wcschr(*(const wchar_t **)(a1 + 176), 0x25u);
    if ( v9 && v9 == wcsrchr(*(const wchar_t **)(a1 + 176), 0x25u) && wcsstr(*(const wchar_t **)(a1 + 176), L"%d") )
    {
      if ( !StringCbPrintfW(
              pszDest,
              0x800uLL,
              *(STRSAFE_LPCWSTR *)(a1 + 176),
              (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 184)))
        && memcmp(*(const void **)(a1 + 176), pszDest, *(unsigned __int16 *)(a1 + 168)) )
      {
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 152));
        RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 152), pszDest);
        goto LABEL_10;
      }
      v10 = -1073741776;
    }
    else
    {
      v10 = -1073741773;
    }
    RtlNtStatusToDosError(v10);
  }
LABEL_10:
  v11 = *(unsigned int *)(a1 + 192);
  v12 = *(const wchar_t **)(a1 + 160);
  LODWORD(KeyHandle) = *(_DWORD *)(a1 + 192);
  if ( a2 )
  {
    LODWORD(v60) = v4;
    v13 = v4 + 79;
    goto LABEL_12;
  }
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = ZwQueryInformationThread(
               (HANDLE)0xFFFFFFFFFFFFFFFELL,
               ThreadBasicInformation,
               &ThreadInformation,
               0x30u,
               0LL);
    if ( result >= 0 )
    {
      result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadTimes, &v78, 0x20u, 0LL);
      if ( result >= 0 )
      {
        result = NtQuerySystemInformation(SystemTimeOfDayInformation, v83, 0x30u, 0LL);
        if ( result >= 0 )
        {
          result = EtwpGetCpuSpeedFromRegistry(&v56);
          if ( result >= 0 )
          {
            v45 = *(unsigned __int16 *)(a1 + 136) + *(unsigned __int16 *)(a1 + 152);
            v46 = v45 + 316;
            v13 = v45 + 395;
            LODWORD(v60) = v46;
            ResultLength = v56;
LABEL_12:
            v59 = v13;
            Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v11);
            if ( !Heap_0 )
              return -1073741801;
            ObjectAttributes.SecurityDescriptor = 0LL;
            LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
            LODWORD(v15) = 3;
            FileHandle = 0LL;
            v16 = 5;
            v17 = 0LL;
            if ( !a4 )
              LODWORD(v15) = 5;
            CreateDisposition[0] = v15;
            LOWORD(v15) = 0;
            memset(&ObjectAttributes, 0, 32);
            IoStatusBlock = 0LL;
            if ( v12 )
            {
              v15 = 2 * wcslen(v12);
              v16 = 65532;
              if ( v15 >= 0xFFFE )
                LOWORD(v15) = -4;
            }
            LOBYTE(v16) = 0;
            BaseAddress[0] = 0LL;
            BaseAddress[1] = 0LL;
            v56 = v16;
            if ( (unsigned __int16)v15 > 1u )
              v56 = v12[((unsigned __int64)(unsigned __int16)v15 >> 1) - 1] == 92;
            v63.m128i_i64[0] = 0LL;
            v63.m128i_i64[1] = (__int64)v12;
            if ( v12 )
            {
              v18 = wcslen(v12);
              if ( v18 > 0x7FFE )
              {
                v19 = -1073741562;
                goto LABEL_30;
              }
              v63.m128i_i16[0] = 2 * v18;
              v63.m128i_i16[1] = 2 * v18 + 2;
            }
            v19 = RtlpDosPathNameToRelativeNtPathName(0, &v63, 0LL, (unsigned __int16 *)BaseAddress, 0LL, 0LL, 0LL);
            if ( v19 >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 64;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v19 = ZwCreateFile(
                      &FileHandle,
                      0xC0100080,
                      &ObjectAttributes,
                      &IoStatusBlock,
                      0LL,
                      0x80u,
                      5u,
                      CreateDisposition[0],
                      0x68u,
                      0LL,
                      0);
              if ( v19 >= 0 )
              {
                if ( a4 )
                  a4 = IoStatusBlock.Information != 2;
                if ( !(_BYTE)v56 )
                {
                  FileInformation.SecurityDescriptor = (PVOID)0x2000;
                  memset(&FileInformation, 0, 32);
                  v19 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
                }
                v17 = FileHandle;
              }
            }
LABEL_30:
            if ( BaseAddress[1] )
            {
              RtlpSysVolFree(BaseAddress[1]);
              *(_OWORD *)BaseAddress = 0LL;
            }
            if ( v19 >= 0 )
            {
              if ( !a4 )
              {
                v20 = (char *)Src;
                v21 = v59 & 0xFFFFFFF8;
                *Heap_0 = v11;
                Heap_0[13] = 262145;
                Heap_0[12] = v21;
                if ( v20 )
                {
                  v22 = 0;
                  if ( (_DWORD)v4 )
                  {
                    do
                    {
                      v23 = &v20[v22];
                      v24 = *(_DWORD *)(a1 + 308) & 0x4101000 | 0x10001;
                      *(_QWORD *)&ValueName.Length = v23 + 32;
                      *((_DWORD *)v23 + 16) = v24;
                      *((_DWORD *)v23 + 17) = 1;
                      *((_DWORD *)v23 + 8) = *(_DWORD *)(a1 + 192);
                      if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
                        || *(_DWORD *)(a1 + 192) > 0x100000u
                        || *((_DWORD *)v23 + 11) > 0x100u )
                      {
                        v25 = 0;
                        v26 = 2;
                      }
                      else
                      {
                        v25 = 5;
                        v26 = 1;
                      }
                      v23[38] = v26;
                      v23[39] = v25;
                      v22 += (*((unsigned __int16 *)v23 + 2) + 7) & 0xFFFFFFF8;
                    }
                    while ( v22 < (unsigned int)v4 );
                    LODWORD(v11) = (_DWORD)KeyHandle;
                  }
                  v27 = 264LL;
                  if ( *(_DWORD *)(*(_QWORD *)&ValueName.Length + 44LL) != 4 )
                    v27 = 272LL;
                  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v27 + *(_QWORD *)&ValueName.Length);
                  memmove(Heap_0 + 18, v20, v4);
                }
                else
                {
                  Heap_0[19] = (_DWORD)v60;
                  Heap_0[18] = -1073610752;
                  Heap_0[21] = v74;
                  Heap_0[20] = DWORD2(v74);
                  Heap_0[24] = (__int64)v79 / DWORD1(SystemInformation[0]);
                  Heap_0[25] = *((_QWORD *)&v79 + 1) / (__int64)DWORD1(SystemInformation[0]);
                  *((_QWORD *)Heap_0 + 11) = *(_QWORD *)(a1 + 8);
                  v31 = NtCurrentPeb();
                  *((_BYTE *)Heap_0 + 108) = v31->OSMajorVersion;
                  *((_BYTE *)Heap_0 + 109) = v31->OSMinorVersion;
                  if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
                    || *(_DWORD *)(a1 + 192) > 0x100000u
                    || *(_DWORD *)(a1 + 188) > 0x100u )
                  {
                    v32 = 0;
                    v33 = 2;
                  }
                  else
                  {
                    v32 = 5;
                    v33 = 1;
                  }
                  *((_BYTE *)Heap_0 + 110) = v33;
                  *((_BYTE *)Heap_0 + 111) = v32;
                  Heap_0[28] = v31->OSBuildNumber;
                  Heap_0[94] = *(_DWORD *)(a1 + 16);
                  Heap_0[29] = *(_DWORD *)(a1 + 188);
                  Heap_0[37] = 8;
                  Heap_0[36] = 1;
                  Heap_0[26] = v11;
                  Heap_0[35] = 1;
                  Heap_0[33] = *(_DWORD *)(a1 + 304);
                  Heap_0[34] = *(_DWORD *)(a1 + 308);
                  Heap_0[32] = DWORD1(SystemInformation[0]);
                  *((_QWORD *)Heap_0 + 44) = *(_QWORD *)&v83[0] - v84;
                  Heap_0[39] = ResultLength;
                  *((_QWORD *)Heap_0 + 20) = 0LL;
                  *((_QWORD *)Heap_0 + 21) = 0LL;
                  memmove(Heap_0 + 96, *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
                  memmove(
                    (char *)Heap_0 + *(unsigned __int16 *)(a1 + 136) + 386,
                    *(const void **)(a1 + 160),
                    *(unsigned __int16 *)(a1 + 152) + 2LL);
                  EtwpGetTimeZoneInformation(Heap_0 + 44);
                  *((_QWORD *)Heap_0 + 45) = MEMORY[0x7FFE0300];
                  *((_QWORD *)Heap_0 + 46) = *(_QWORD *)a1;
                  v34 = (unsigned int)Heap_0[12];
                  if ( (unsigned int)(v34 + 80) <= *Heap_0 )
                  {
                    v35 = (char *)Heap_0 + v34;
                    v68[0] = 4980812LL;
                    *((_DWORD *)v35 + 1) = 5242960;
                    *(_DWORD *)v35 = -1073610750;
                    *((_DWORD *)v35 + 2) = DWORD2(v74);
                    *((_DWORD *)v35 + 3) = v74;
                    v60 = (GUID *)((char *)Heap_0 + v34);
                    v69[1] = 0;
                    *((_DWORD *)v35 + 6) = (__int64)v79 / DWORD1(SystemInformation[0]);
                    v36 = (_DWORD *)((char *)Heap_0 + v34 + 36);
                    *((_DWORD *)v35 + 7) = *((_QWORD *)&v79 + 1) / (__int64)DWORD1(SystemInformation[0]);
                    *((_QWORD *)v35 + 2) = *(_QWORD *)(a1 + 8);
                    *((_DWORD *)v35 + 8) = 0;
                    *v36 = 0;
                    Src = v36;
                    memset_thunk_772440563353939046(v85, 0, 0x4CuLL);
                    memset_thunk_772440563353939046(v86, 0, 0x4CuLL);
                    ResultLength = 38;
                    v68[1] = v85;
                    *(&FileInformation.Length + 1) = 0;
                    KeyHandle = 0LL;
                    v63.m128i_i32[1] = 0;
                    v63.m128i_i64[1] = (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
                    v37 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
                    *(_QWORD *)&FileInformation.Length = 48LL;
                    *(_QWORD *)&FileInformation.Attributes = 64LL;
                    FileInformation.RootDirectory = 0LL;
                    if ( v37 >= 0xFFFE )
                      LOWORD(v37) = -4;
                    v63.m128i_i16[0] = v37;
                    v63.m128i_i16[1] = v37 + 2;
                    FileInformation.ObjectName = (PUNICODE_STRING)&v63;
                    *(_OWORD *)&FileInformation.SecurityDescriptor = 0LL;
                    v38 = NtOpenKey(&KeyHandle, 0x20019u, &FileInformation);
                    if ( v38 >= 0 )
                    {
                      v39 = 2LL * ResultLength;
                      if ( v39 > 0xFFFFFFFF || (v48 = v39 + 12, (int)v39 + 12 < (unsigned int)v39) )
                      {
                        NtClose(KeyHandle);
                        goto LABEL_45;
                      }
                      *(_QWORD *)CreateDisposition = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v48);
                      if ( *(_QWORD *)CreateDisposition )
                      {
                        *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
                        ValueName.Buffer = (wchar_t *)L"ContainerId";
                        v49 = 2 * wcslen(L"ContainerId");
                        if ( v49 >= 0xFFFE )
                          LOWORD(v49) = -4;
                        ValueName.Length = v49;
                        ValueName.MaximumLength = v49 + 2;
                        v38 = NtQueryValueKey(
                                KeyHandle,
                                &ValueName,
                                KeyValuePartialInformation,
                                *(PVOID *)CreateDisposition,
                                v48,
                                &ResultLength);
                        if ( v38 >= 0 )
                          memmove(
                            v85,
                            (const void *)(*(_QWORD *)CreateDisposition + 12LL),
                            *(unsigned int *)(*(_QWORD *)CreateDisposition + 8LL));
                        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)CreateDisposition);
                      }
                      else
                      {
                        v38 = -1073741801;
                      }
                      NtClose(KeyHandle);
                    }
                    if ( !v38 || v38 == -1073741772 )
                    {
                      v69[0] = 4980812;
                      v70 = v86;
                      RegString = EtwpQueryRegString(
                                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control",
                                    L"ContainerCorrelationId",
                                    v86,
                                    38LL);
                      if ( !RegString || RegString == -1073741772 )
                      {
                        RegDwordValue = EtwpGetRegDwordValue(v52, v51, Src);
                        if ( !RegDwordValue || RegDwordValue == -1073741772 )
                        {
                          v54 = v60 + 3;
                          *(_QWORD *)v60[2].Data4 = 0LL;
                          if ( (unsigned int)StringToGuidNoBrackets(v68, v54) )
                            *v54 = NullGuid;
                          v55 = v60;
                          if ( (unsigned int)StringToGuidNoBrackets(v69, &v60[4]) )
                            v55[4] = NullGuid;
                          Heap_0[12] += 80;
                        }
                      }
                    }
                  }
                }
LABEL_45:
                if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
                {
                  Heap_0[11] = 3;
                  if ( ZwQueryVolumeInformationFile(v17, &v67, &FsInformation, 0x18u, FileFsSizeInformation) >= 0 )
                  {
                    v47 = Heap_0[12] + 80;
                    if ( !v20 )
                      v47 = Heap_0[12];
                    LODWORD(v11) = -HIDWORD(v81) & (v47 + HIDWORD(v81) - 1);
                    *Heap_0 = v11;
                  }
                }
                v28 = Heap_0[12];
                Heap_0[1] = v28;
                if ( (*(_QWORD *)(a1 + 464) != a1 + 464 || *(_QWORD *)(a1 + 448) != a1 + 448)
                  && v28 < (unsigned int)v11
                  && v28 >= 0x180 )
                {
                  if ( *(_QWORD *)(a1 + 448) != a1 + 448 )
                    EtwpAddDebugInfoEvents(a1, Heap_0, (unsigned int)v11);
                  if ( *(_QWORD *)(a1 + 464) != a1 + 464 )
                    EtwpAddBinaryInfoEvents(a1, Heap_0, (unsigned int)v11);
                }
                v29 = (unsigned int)Heap_0[12];
                if ( (unsigned int)v29 < (unsigned int)v11 && (unsigned int)v29 > 0x48 )
                  memset_thunk_772440563353939046((char *)Heap_0 + v29, 255, (unsigned int)(v11 - v29));
                v19 = NtWriteFile(v17, 0LL, 0LL, 0LL, &v67, Heap_0, v11, 0LL, 0LL);
                if ( v19 >= 0 )
                {
                  v43 = *(unsigned int *)(a1 + 304);
                  if ( !(_DWORD)v43 || (*(_DWORD *)(a1 + 308) & 0x20) == 0 )
                    goto LABEL_86;
                  v44 = 1024LL;
                  if ( (*(_DWORD *)(a1 + 308) & 0x2000) == 0 )
                    v44 = 0x100000LL;
                  Src = (void *)(v43 * v44);
                  v19 = ZwSetInformationFile(v17, &v67, &Src, 8u, FileEndOfFileInformation);
                  if ( v19 >= 0 )
                  {
LABEL_86:
                    v6 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
                    *(_DWORD *)(a1 + 376) = 1;
                    *(_DWORD *)(a1 + 320) = 1;
                    *(_QWORD *)(a1 + 344) = (unsigned int)v11;
                    *(_QWORD *)(a1 + 336) = (unsigned int)v11;
                    *(_QWORD *)(a1 + 128) = v17;
                    if ( !v6 )
                    {
                      *(_QWORD *)(a1 + 440) = 0LL;
                      *(_DWORD *)(a1 + 436) = 0;
                    }
                    goto LABEL_58;
                  }
                }
                goto LABEL_56;
              }
              KeyHandle = 0LL;
              v19 = NtReadFile(v17, 0LL, 0LL, 0LL, &v67, Heap_0, v11, (PLARGE_INTEGER)&KeyHandle, 0LL);
              if ( v19 >= 0 )
              {
                if ( (Heap_0[34] & 2) == 0
                  && *((_BYTE *)Heap_0 + 108) == MEMORY[0x7FFE026C]
                  && *((_BYTE *)Heap_0 + 109) == MEMORY[0x7FFE0270]
                  && Heap_0[37] == 8 )
                {
                  v40 = (unsigned int)Heap_0[26];
                  v41 = Heap_0[35];
                  if ( (unsigned int)(v40 - 1024) <= 0xFFFC00
                    && v41
                    && *((_QWORD *)Heap_0 + 15)
                    && Heap_0[29] == *(_DWORD *)(a1 + 188) )
                  {
                    *((_QWORD *)Heap_0 + 15) = 0LL;
                    v42 = NtWriteFile(
                            v17,
                            0LL,
                            0LL,
                            0LL,
                            &v67,
                            Heap_0,
                            *(_DWORD *)(a1 + 192),
                            (PLARGE_INTEGER)&KeyHandle,
                            0LL);
                    *(_DWORD *)(a1 + 376) = v41;
                    v19 = v42;
                    *(_DWORD *)(a1 + 320) = v41;
                    *(_DWORD *)(a1 + 192) = v40;
                    *(_QWORD *)(a1 + 336) = v40;
                    *(_QWORD *)(a1 + 128) = v17;
                    *(_QWORD *)(a1 + 344) = (unsigned int)(v40 * v41);
LABEL_58:
                    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
                    return v19;
                  }
                }
                v19 = -1073741811;
              }
            }
LABEL_56:
            if ( v17 )
              NtClose(v17);
            goto LABEL_58;
          }
        }
      }
    }
  }
  return result;
}
