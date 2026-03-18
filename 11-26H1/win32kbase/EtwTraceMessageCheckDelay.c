/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1400DCB00
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400DD4A0 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1400DD664 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1400DD6E8 (Is_GetTopLevelWindowSupported.c)
 *     _GetTopLevelWindow @ 0x1400DD720 (_GetTopLevelWindow.c)
 *     McTemplateK0qqqqzzzqx_EtwWriteTransfer @ 0x1400DD75C (McTemplateK0qqqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x1400DE5C8 (McTemplateK0qqqqzzzzqx_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@335@Z @ 0x1400DE780 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@35@Z @ 0x1400F1D60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // r14d
  unsigned int ThreadInfoFlags; // eax
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // r15d
  int v10; // ecx
  PWSTR Buffer; // r12
  PWSTR v12; // r13
  struct tagWND *v13; // rax
  struct tagWND *TopLevelWindow; // rax
  __int64 v15; // rcx
  int v16; // esi
  PEPROCESS ThreadProcess; // rax
  char *v18; // rdi
  __int64 v19; // rdx
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // r8d
  __int64 v24; // r9
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  const WCHAR *v28; // rax
  const WCHAR *v29; // rax
  const WCHAR *v30; // rdx
  const WCHAR *v31; // rcx
  int v32; // [rsp+90h] [rbp-2B8h] BYREF
  unsigned int v33; // [rsp+94h] [rbp-2B4h] BYREF
  unsigned int v34; // [rsp+98h] [rbp-2B0h] BYREF
  int v35; // [rsp+9Ch] [rbp-2ACh] BYREF
  int v36; // [rsp+A0h] [rbp-2A8h] BYREF
  int v37; // [rsp+A4h] [rbp-2A4h] BYREF
  struct tagWND *v38; // [rsp+A8h] [rbp-2A0h] BYREF
  volatile void *Address; // [rsp+B0h] [rbp-298h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-290h] BYREF
  PWSTR v41; // [rsp+C0h] [rbp-288h]
  PWSTR v42; // [rsp+C8h] [rbp-280h]
  PACCESS_TOKEN PrimaryToken[2]; // [rsp+D0h] [rbp-278h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-268h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-260h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-258h] BYREF
  PWSTR v47; // [rsp+F8h] [rbp-250h] BYREF
  void *v48; // [rsp+100h] [rbp-248h] BYREF
  _QWORD v49[4]; // [rsp+108h] [rbp-240h] BYREF
  __int64 v50; // [rsp+128h] [rbp-220h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+130h] [rbp-218h] BYREF
  struct _UNICODE_STRING v52; // [rsp+140h] [rbp-208h] BYREF
  _OWORD v53[3]; // [rsp+150h] [rbp-1F8h] BYREF
  _BYTE v54[144]; // [rsp+180h] [rbp-1C8h] BYREF
  _BYTE v55[256]; // [rsp+210h] [rbp-138h] BYREF

  v45 = (__int64)a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1402A9DD8 - 1) <= 2u
     || (qword_1402A9DC0 & 0x8001000000040000uLL) == 0
     || (qword_1402A9DC8 & 0x8001000000040000uLL) != qword_1402A9DC8
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1402A9F58 <= 5
      || (qword_1402A9F68 & 0x40000) == 0
      || (qword_1402A9F70 & 0x40000) != qword_1402A9F70 )
    {
      return;
    }
  }
  UnicodeString = 0LL;
  v52 = 0LL;
  v53[0] = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 326);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v36 = v3 - v4;
  if ( (unsigned int)(v3 - v4) < 0xC8 )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v9 = ThreadInfoFlags;
  v37 = ThreadInfoFlags;
  LOBYTE(v10) = (ThreadInfoFlags & 3) == 0;
  if ( (unsigned __int8)v10 | ((ThreadInfoFlags & 0x28) == 0) )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 )
  {
    LOBYTE(v7) = v10 | ((ThreadInfoFlags & 0x28) == 0);
    if ( v5 < *(_DWORD *)(W32GetUserSessionState(v10, v7, v8) + 69104) )
      return;
  }
  Buffer = 0LL;
  v42 = 0LL;
  v12 = 0LL;
  v41 = 0LL;
  v13 = (struct tagWND *)ValidateHwndEx(*((_QWORD *)a1 + 164), 1, 0);
  v38 = v13;
  if ( v13 )
  {
    if ( EtwpGetClassName(v13, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v42 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() >= 0 )
    {
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow(v38);
      if ( TopLevelWindow )
      {
        if ( v38 == TopLevelWindow )
        {
          v12 = Buffer;
          v41 = Buffer;
        }
        else if ( EtwpGetClassName(TopLevelWindow, &v52) >= 0 )
        {
          v12 = v52.Buffer;
          v41 = v52.Buffer;
        }
      }
    }
  }
  v15 = *((_QWORD *)a1 + 58);
  if ( !v15 )
  {
    v33 = 0;
    goto LABEL_26;
  }
  v33 = v3 - *(_DWORD *)(v15 + 456);
  if ( !*(_DWORD *)(v15 + 40) )
  {
LABEL_26:
    v16 = 0;
    goto LABEL_27;
  }
  v16 = v3 - *(_DWORD *)(*(_QWORD *)(v15 + 24) + 48LL);
LABEL_27:
  v34 = v16;
  v32 = *((_DWORD *)a1 + 330);
  v35 = v32;
  v40 = *((_QWORD *)a1 + 166);
  v44 = v40;
  v38 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  Address = (volatile void *)PsGetProcessPeb(ThreadProcess);
  v49[1] = 1LL;
  ProbeForRead(Address, 1uLL, 1u);
  v18 = (char *)*((_QWORD *)Address + 4);
  v49[2] = 1LL;
  ProbeForRead(v18, 1uLL, 1u);
  HIDWORD(PrimaryToken[0]) = 0;
  LODWORD(PrimaryToken[0]) = RtlReadULongFromUser(v18 + 96, v19);
  LODWORD(Address) = HIWORD(LODWORD(PrimaryToken[0]));
  ULong64FromUser = RtlReadULong64FromUser(v18 + 104);
  PrimaryToken[1] = (PACCESS_TOKEN)ULong64FromUser;
  v53[0] = *(_OWORD *)PrimaryToken;
  if ( (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = ULong64FromUser + LOWORD(PrimaryToken[0]) + 2LL;
  if ( v21 <= ULong64FromUser || v21 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( LOWORD(PrimaryToken[0]) > (unsigned __int16)Address )
  {
    if ( ((__int64)PrimaryToken[0] & 1) == 0 )
      goto LABEL_36;
    goto LABEL_35;
  }
  if ( ((__int64)PrimaryToken[0] & 1) != 0 )
  {
LABEL_35:
    v32 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 896LL);
LABEL_36:
    ExRaiseAccessViolation();
  }
  v49[3] = v53;
  v22 = v33;
  v23 = v40;
  if ( v53 )
    v38 = (struct tagWND *)*((_QWORD *)&v53[0] + 1);
  v24 = *((_QWORD *)a1 + 57);
  if ( (*(_BYTE *)(v24 + 808) & 0x30) == 0x10 )
  {
    PrimaryToken[0] = PsReferencePrimaryToken(*(PEPROCESS *)v24);
    v44 = 256LL;
    v45 = 130LL;
    v26 = RtlQueryPackageIdentity(PrimaryToken[0], v55, &v44, v54, &v45, 0LL);
    v35 = v26;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v30 = (const WCHAR *)v54;
      if ( v26 < 0 )
        v30 = &word_14026AF94;
      v31 = (const WCHAR *)v55;
      if ( v26 < 0 )
        v31 = &word_14026AF94;
      McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        (_DWORD)v31,
        (_DWORD)v30,
        v26,
        v9,
        v5,
        v33,
        v16,
        (__int64)Buffer,
        (__int64)v12,
        (__int64)v31,
        (__int64)v30,
        v32,
        v40);
      v26 = v35;
    }
    if ( (unsigned int)dword_1402A9F58 > 5
      && (qword_1402A9F68 & 0x40000) != 0
      && (qword_1402A9F70 & 0x40000) == qword_1402A9F70 )
    {
      v50 = 0x1000000LL;
      v35 = 2;
      v37 = 1;
      v36 = v32;
      v46 = (__int64)v12;
      v47 = Buffer;
      v28 = (const WCHAR *)v54;
      if ( v26 < 0 )
        v28 = &word_14026AF94;
      v48 = (void *)v28;
      v29 = (const WCHAR *)v55;
      if ( v26 < 0 )
        v29 = &word_14026AF94;
      v49[0] = v29;
      LODWORD(Address) = v16;
      v34 = v33;
      v32 = v5;
      v33 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v25,
        (unsigned int)&unk_140282F88,
        v26,
        v27,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v34,
        (__int64)&Address,
        (__int64)v49,
        (__int64)&v48,
        (__int64)&v38,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v36,
        (__int64)&v40,
        (__int64)&v37,
        (__int64)&v35,
        (__int64)&v50);
    }
    PsDereferencePrimaryToken(PrimaryToken[0]);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqqzzzqx_EtwWriteTransfer(
        v33,
        v32,
        v40,
        v9,
        v5,
        v33,
        v16,
        (__int64)Buffer,
        (__int64)v12,
        (__int64)v38,
        v32,
        v40);
    if ( (unsigned int)dword_1402A9F58 > 5
      && (qword_1402A9F68 & 0x40000) != 0
      && (qword_1402A9F70 & 0x40000) == qword_1402A9F70 )
    {
      PrimaryToken[0] = (PACCESS_TOKEN)0x1000000;
      v35 = 1;
      v49[0] = v40;
      v37 = v32;
      v48 = v12;
      v47 = Buffer;
      v46 = (__int64)v38;
      v36 = v16;
      LODWORD(Address) = v33;
      v34 = v5;
      v32 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v22,
        (unsigned int)&unk_140282EB1,
        v23,
        v24,
        (__int64)&v32,
        (__int64)&v34,
        (__int64)&Address,
        (__int64)&v36,
        (__int64)&v46,
        (__int64)&v47,
        (__int64)&v48,
        (__int64)&v37,
        (__int64)v49,
        (__int64)&v35,
        (__int64)PrimaryToken);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v12 )
  {
    if ( Buffer != v12 )
      RtlFreeUnicodeString(&v52);
  }
}
