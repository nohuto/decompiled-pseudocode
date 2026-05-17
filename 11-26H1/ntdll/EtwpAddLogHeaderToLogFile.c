/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x180055750
 * Callers:
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x180078000 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x180158EDC (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlCreateUnicodeString @ 0x18003DC10 (RtlCreateUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     StringCbPrintfW @ 0x180056694 (StringCbPrintfW.c)
 *     EtwpAddDebugInfoEvents @ 0x180056708 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x180056860 (EtwpAddBinaryInfoEvents.c)
 *     StringToGuidNoBrackets @ 0x1800569DC (StringToGuidNoBrackets.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     EtwpGetTimeZoneInformation @ 0x180056B4C (EtwpGetTimeZoneInformation.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180056CDC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x180056E38 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180056FE4 (EtwpGetRegDwordValue.c)
 *     wcschr @ 0x18012D9A0 (wcschr.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     wcsrchr @ 0x18012DF70 (wcsrchr.c)
 *     wcsstr @ 0x18012E0A0 (wcsstr.c)
 *     NtReadFile @ 0x18015F000 (NtReadFile.c)
 *     NtWriteFile @ 0x18015F040 (NtWriteFile.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x18015F420 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x18015F860 (ZwQueryVolumeInformationFile.c)
 *     ZwCreateFile @ 0x18015F9E0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, void *a2, unsigned int a3, bool a4)
{
  size_t v4; // r13
  bool v6; // zf
  wchar_t *v9; // rdi
  NTSTATUS v10; // ecx
  unsigned int v11; // r14d
  const wchar_t *v12; // rsi
  int v13; // edx
  __int64 Heap_0; // rdi
  size_t v15; // rax
  int v16; // ecx
  void *v17; // r15
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
  __int64 v35; // r8
  _DWORD *v36; // rcx
  size_t v37; // rax
  int v38; // r13d
  unsigned __int64 v39; // rax
  __int64 v40; // r13
  int v41; // r14d
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  int v48; // r13d
  size_t v49; // rax
  int RegString; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int RegDwordValue; // eax
  _OWORD *v54; // r13
  __int64 v55; // r13
  BOOL v56; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v57; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h] BYREF
  __m128i v63; // [rsp+98h] [rbp-68h] BYREF
  void *v64; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v65[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v66; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v68[2]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v69[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v70; // [rsp+F8h] [rbp-8h]
  __int128 v71; // [rsp+100h] [rbp+0h] BYREF
  __int128 v72; // [rsp+110h] [rbp+10h] BYREF
  __int128 v73; // [rsp+120h] [rbp+20h]
  __int128 v74; // [rsp+130h] [rbp+30h]
  __int128 v75; // [rsp+140h] [rbp+40h] BYREF
  __int128 v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+160h] [rbp+60h]
  int v78; // [rsp+168h] [rbp+68h]
  __int128 v79; // [rsp+170h] [rbp+70h] BYREF
  __int128 v80; // [rsp+180h] [rbp+80h]
  __int128 v81; // [rsp+190h] [rbp+90h]
  __int128 v82; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v83; // [rsp+1B0h] [rbp+B0h]
  __int128 v84; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v85; // [rsp+1D0h] [rbp+D0h]
  _OWORD SystemInformation[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v87[2]; // [rsp+220h] [rbp+120h] BYREF
  __int128 v88; // [rsp+240h] [rbp+140h]
  _BYTE v89[80]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v90[80]; // [rsp+2A0h] [rbp+1A0h] BYREF
  wchar_t pszDest[1024]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v4 = a3;
  Src = a2;
  v6 = (*(_BYTE *)(a1 + 308) & 8) == 0;
  v57 = 0;
  v56 = 0;
  v85 = 0LL;
  v77 = 0LL;
  v78 = 0;
  v84 = 0LL;
  v65[0] = 0LL;
  v67 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v87, 0, sizeof(v87));
  v88 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
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
        RtlCreateUnicodeString(a1 + 152, pszDest);
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
  v11 = *(_DWORD *)(a1 + 192);
  v12 = *(const wchar_t **)(a1 + 160);
  LODWORD(Handle) = v11;
  if ( a2 )
  {
    LODWORD(v60) = v4;
    v13 = v4 + 79;
    goto LABEL_12;
  }
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = ZwQueryInformationThread(-2LL, 0LL, &v75, 48LL, 0LL);
    if ( result >= 0 )
    {
      result = ZwQueryInformationThread(-2LL, 1LL, &v82, 32LL, 0LL);
      if ( result >= 0 )
      {
        result = NtQuerySystemInformation(SystemTimeOfDayInformation, v87, 0x30u, 0LL);
        if ( result >= 0 )
        {
          result = EtwpGetCpuSpeedFromRegistry(&v56);
          if ( result >= 0 )
          {
            v45 = *(unsigned __int16 *)(a1 + 136) + *(unsigned __int16 *)(a1 + 152);
            v46 = v45 + 316;
            v13 = v45 + 395;
            LODWORD(v60) = v46;
            v57 = v56;
LABEL_12:
            v59 = v13;
            Heap_0 = RtlAllocateHeap_0();
            if ( !Heap_0 )
              return -1073741801;
            *(_QWORD *)&v74 = 0LL;
            DWORD2(v74) = 0;
            LODWORD(v15) = 3;
            v64 = 0LL;
            v16 = 5;
            v17 = 0LL;
            if ( !a4 )
              LODWORD(v15) = 5;
            LODWORD(v61) = v15;
            LOWORD(v15) = 0;
            v72 = 0LL;
            v73 = 0LL;
            v71 = 0LL;
            if ( v12 )
            {
              v15 = 2 * wcslen(v12);
              v16 = 65532;
              if ( v15 >= 0xFFFE )
                LOWORD(v15) = -4;
            }
            LOBYTE(v16) = 0;
            v66 = 0uLL;
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
            v19 = RtlpDosPathNameToRelativeNtPathName(0, &v63, 0LL, (unsigned __int16 *)&v66, 0LL, 0LL, 0LL);
            if ( v19 >= 0 )
            {
              LODWORD(v72) = 48;
              *(_QWORD *)&v73 = &v66;
              *((_QWORD *)&v72 + 1) = 0LL;
              DWORD2(v73) = 64;
              v74 = 0LL;
              v19 = ZwCreateFile(&v64, 3222274176LL, &v72, &v71, 0LL, 128, 5, v61, 104, 0LL, 0);
              if ( v19 >= 0 )
              {
                if ( a4 )
                  a4 = *((_QWORD *)&v71 + 1) != 2LL;
                if ( !v56 )
                {
                  *(_QWORD *)&v81 = 0x2000LL;
                  v79 = 0LL;
                  v80 = 0LL;
                  v19 = ZwSetInformationFile(v64, &v71, &v79, 40LL, 4);
                }
                v17 = v64;
              }
            }
LABEL_30:
            if ( *((_QWORD *)&v66 + 1) )
            {
              RtlpSysVolFree(*((__int64 *)&v66 + 1));
              v66 = 0LL;
            }
            if ( v19 >= 0 )
            {
              if ( !a4 )
              {
                v20 = (char *)Src;
                v21 = v59 & 0xFFFFFFF8;
                *(_DWORD *)Heap_0 = v11;
                *(_DWORD *)(Heap_0 + 52) = 262145;
                *(_DWORD *)(Heap_0 + 48) = v21;
                if ( v20 )
                {
                  v22 = 0;
                  if ( (_DWORD)v4 )
                  {
                    do
                    {
                      v23 = &v20[v22];
                      v24 = *(_DWORD *)(a1 + 308) & 0x4101000 | 0x10001;
                      v65[0] = v23 + 32;
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
                    v11 = (unsigned int)Handle;
                  }
                  v27 = 264LL;
                  if ( *(_DWORD *)(v65[0] + 44LL) != 4 )
                    v27 = 272LL;
                  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v27 + v65[0]);
                  memmove((void *)(Heap_0 + 72), v20, v4);
                }
                else
                {
                  *(_DWORD *)(Heap_0 + 76) = v60;
                  *(_DWORD *)(Heap_0 + 72) = -1073610752;
                  *(_DWORD *)(Heap_0 + 84) = v76;
                  *(_DWORD *)(Heap_0 + 80) = DWORD2(v76);
                  *(_DWORD *)(Heap_0 + 96) = (__int64)v83 / DWORD1(SystemInformation[0]);
                  *(_DWORD *)(Heap_0 + 100) = *((_QWORD *)&v83 + 1) / (__int64)DWORD1(SystemInformation[0]);
                  *(_QWORD *)(Heap_0 + 88) = *(_QWORD *)(a1 + 8);
                  v31 = NtCurrentPeb();
                  *(_BYTE *)(Heap_0 + 108) = v31->OSMajorVersion;
                  *(_BYTE *)(Heap_0 + 109) = v31->OSMinorVersion;
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
                  *(_BYTE *)(Heap_0 + 110) = v33;
                  *(_BYTE *)(Heap_0 + 111) = v32;
                  *(_DWORD *)(Heap_0 + 112) = v31->OSBuildNumber;
                  *(_DWORD *)(Heap_0 + 376) = *(_DWORD *)(a1 + 16);
                  *(_DWORD *)(Heap_0 + 116) = *(_DWORD *)(a1 + 188);
                  *(_DWORD *)(Heap_0 + 148) = 8;
                  *(_DWORD *)(Heap_0 + 144) = 1;
                  *(_DWORD *)(Heap_0 + 104) = v11;
                  *(_DWORD *)(Heap_0 + 140) = 1;
                  *(_DWORD *)(Heap_0 + 132) = *(_DWORD *)(a1 + 304);
                  *(_DWORD *)(Heap_0 + 136) = *(_DWORD *)(a1 + 308);
                  *(_DWORD *)(Heap_0 + 128) = DWORD1(SystemInformation[0]);
                  *(_QWORD *)(Heap_0 + 352) = *(_QWORD *)&v87[0] - v88;
                  *(_DWORD *)(Heap_0 + 156) = v57;
                  *(_QWORD *)(Heap_0 + 160) = 0LL;
                  *(_QWORD *)(Heap_0 + 168) = 0LL;
                  memmove((void *)(Heap_0 + 384), *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
                  memmove(
                    (void *)(Heap_0 + *(unsigned __int16 *)(a1 + 136) + 386LL),
                    *(const void **)(a1 + 160),
                    *(unsigned __int16 *)(a1 + 152) + 2LL);
                  EtwpGetTimeZoneInformation((void *)(Heap_0 + 176));
                  *(_QWORD *)(Heap_0 + 360) = MEMORY[0x7FFE0300];
                  *(_QWORD *)(Heap_0 + 368) = *(_QWORD *)a1;
                  v34 = *(unsigned int *)(Heap_0 + 48);
                  if ( (unsigned int)(v34 + 80) <= *(_DWORD *)Heap_0 )
                  {
                    v35 = Heap_0 + v34;
                    v68[0] = 4980812LL;
                    *(_DWORD *)(v35 + 4) = 5242960;
                    *(_DWORD *)v35 = -1073610750;
                    *(_DWORD *)(v35 + 8) = DWORD2(v76);
                    *(_DWORD *)(v35 + 12) = v76;
                    v60 = Heap_0 + v34;
                    v69[1] = 0;
                    *(_DWORD *)(v35 + 24) = (__int64)v83 / DWORD1(SystemInformation[0]);
                    v36 = (_DWORD *)(Heap_0 + v34 + 36);
                    *(_DWORD *)(v35 + 28) = *((_QWORD *)&v83 + 1) / (__int64)DWORD1(SystemInformation[0]);
                    *(_QWORD *)(v35 + 16) = *(_QWORD *)(a1 + 8);
                    *(_DWORD *)(v35 + 32) = 0;
                    *v36 = 0;
                    Src = v36;
                    memset_thunk_772440563353939046(v89, 0, 0x4CuLL);
                    memset_thunk_772440563353939046(v90, 0, 0x4CuLL);
                    v57 = 38;
                    v68[1] = v89;
                    DWORD1(v79) = 0;
                    Handle = 0LL;
                    v63.m128i_i32[1] = 0;
                    v63.m128i_i64[1] = (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
                    v37 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
                    v79 = 0x30uLL;
                    *((_QWORD *)&v80 + 1) = 64LL;
                    if ( v37 >= 0xFFFE )
                      LOWORD(v37) = -4;
                    v63.m128i_i16[0] = v37;
                    v63.m128i_i16[1] = v37 + 2;
                    *(_QWORD *)&v80 = &v63;
                    v81 = 0LL;
                    v38 = NtOpenKey(&Handle, 131097LL, &v79);
                    if ( v38 >= 0 )
                    {
                      v39 = 2LL * v57;
                      if ( v39 > 0xFFFFFFFF || (v48 = v39 + 12, (int)v39 + 12 < (unsigned int)v39) )
                      {
                        NtClose(Handle);
                        goto LABEL_45;
                      }
                      v61 = RtlAllocateHeap_0();
                      if ( v61 )
                      {
                        HIDWORD(v65[0]) = 0;
                        v65[1] = L"ContainerId";
                        v49 = 2 * wcslen(L"ContainerId");
                        if ( v49 >= 0xFFFE )
                          LOWORD(v49) = -4;
                        LOWORD(v65[0]) = v49;
                        WORD1(v65[0]) = v49 + 2;
                        v38 = NtQueryValueKey(Handle, v65, 2LL, v61, v48, &v57);
                        if ( v38 >= 0 )
                          memmove(v89, (const void *)(v61 + 12), *(unsigned int *)(v61 + 8));
                        RtlFreeHeap_0();
                      }
                      else
                      {
                        v38 = -1073741801;
                      }
                      NtClose(Handle);
                    }
                    if ( !v38 || v38 == -1073741772 )
                    {
                      v69[0] = 4980812;
                      v70 = v90;
                      RegString = EtwpQueryRegString(
                                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control",
                                    L"ContainerCorrelationId",
                                    v90,
                                    38LL);
                      if ( !RegString || RegString == -1073741772 )
                      {
                        RegDwordValue = EtwpGetRegDwordValue(v52, v51, Src);
                        if ( !RegDwordValue || RegDwordValue == -1073741772 )
                        {
                          v54 = (_OWORD *)(v60 + 48);
                          *(_QWORD *)(v60 + 40) = 0LL;
                          if ( (unsigned int)StringToGuidNoBrackets(v68, v54) )
                            *v54 = NullGuid;
                          v55 = v60;
                          if ( (unsigned int)StringToGuidNoBrackets(v69, v60 + 64) )
                            *(_OWORD *)(v55 + 64) = NullGuid;
                          *(_DWORD *)(Heap_0 + 48) += 80;
                        }
                      }
                    }
                  }
                }
LABEL_45:
                if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
                {
                  *(_DWORD *)(Heap_0 + 44) = 3;
                  if ( (int)ZwQueryVolumeInformationFile(v17, &v67, &v84, 24LL, 3) >= 0 )
                  {
                    v47 = *(_DWORD *)(Heap_0 + 48) + 80;
                    if ( !v20 )
                      v47 = *(_DWORD *)(Heap_0 + 48);
                    v11 = -HIDWORD(v85) & (v47 + HIDWORD(v85) - 1);
                    *(_DWORD *)Heap_0 = v11;
                  }
                }
                v28 = *(_DWORD *)(Heap_0 + 48);
                *(_DWORD *)(Heap_0 + 4) = v28;
                if ( (*(_QWORD *)(a1 + 464) != a1 + 464 || *(_QWORD *)(a1 + 448) != a1 + 448)
                  && v28 < v11
                  && v28 >= 0x180 )
                {
                  if ( *(_QWORD *)(a1 + 448) != a1 + 448 )
                    EtwpAddDebugInfoEvents(a1, Heap_0, v11);
                  if ( *(_QWORD *)(a1 + 464) != a1 + 464 )
                    EtwpAddBinaryInfoEvents(a1, Heap_0, v11);
                }
                v29 = *(unsigned int *)(Heap_0 + 48);
                if ( (unsigned int)v29 < v11 && (unsigned int)v29 > 0x48 )
                  memset_thunk_772440563353939046((void *)(Heap_0 + v29), 255, v11 - (unsigned int)v29);
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
                  v19 = ZwSetInformationFile(v17, &v67, &Src, 8LL, 20);
                  if ( v19 >= 0 )
                  {
LABEL_86:
                    v6 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
                    *(_DWORD *)(a1 + 376) = 1;
                    *(_DWORD *)(a1 + 320) = 1;
                    *(_QWORD *)(a1 + 344) = v11;
                    *(_QWORD *)(a1 + 336) = v11;
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
              Handle = 0LL;
              v19 = NtReadFile(v17, 0LL, 0LL, 0LL, &v67, Heap_0, v11, &Handle, 0LL);
              if ( v19 >= 0 )
              {
                if ( (*(_BYTE *)(Heap_0 + 136) & 2) == 0
                  && *(_BYTE *)(Heap_0 + 108) == MEMORY[0x7FFE026C]
                  && *(_BYTE *)(Heap_0 + 109) == MEMORY[0x7FFE0270]
                  && *(_DWORD *)(Heap_0 + 148) == 8 )
                {
                  v40 = *(unsigned int *)(Heap_0 + 104);
                  v41 = *(_DWORD *)(Heap_0 + 140);
                  if ( (unsigned int)(v40 - 1024) <= 0xFFFC00
                    && v41
                    && *(_QWORD *)(Heap_0 + 120)
                    && *(_DWORD *)(Heap_0 + 116) == *(_DWORD *)(a1 + 188) )
                  {
                    *(_QWORD *)(Heap_0 + 120) = 0LL;
                    v42 = NtWriteFile(v17, 0LL, 0LL, 0LL, &v67, Heap_0, *(_DWORD *)(a1 + 192), &Handle, 0LL);
                    *(_DWORD *)(a1 + 376) = v41;
                    v19 = v42;
                    *(_DWORD *)(a1 + 320) = v41;
                    *(_DWORD *)(a1 + 192) = v40;
                    *(_QWORD *)(a1 + 336) = v40;
                    *(_QWORD *)(a1 + 128) = v17;
                    *(_QWORD *)(a1 + 344) = (unsigned int)(v40 * v41);
LABEL_58:
                    RtlFreeHeap_0();
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
