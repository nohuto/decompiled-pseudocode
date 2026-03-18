/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1400DB7E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1400DB128 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1@@-.c)
 *     McTemplateK0qqqzzzzqx_EtwWriteTransfer @ 0x1400DB2B4 (McTemplateK0qqqzzzzqx_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1400DB454 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@.c)
 *     McTemplateK0qqqzzzqx_EtwWriteTransfer @ 0x1400DB678 (McTemplateK0qqqzzzqx_EtwWriteTransfer.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400DD4A0 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1400DD664 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1400DD6E8 (Is_GetTopLevelWindowSupported.c)
 *     _GetTopLevelWindow @ 0x1400DD720 (_GetTopLevelWindow.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // r13d
  unsigned int v6; // esi
  __int64 v7; // rax
  const wchar_t *Buffer; // r14
  const wchar_t *v9; // r15
  WCHAR *v10; // rax
  struct tagWND *TopLevelWindow; // rax
  PEPROCESS ThreadProcess; // rax
  char *v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 ULong64FromUser; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  ULONG64 v18; // r9
  unsigned __int64 v19; // rax
  const WCHAR *v20; // rax
  PEPROCESS *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  const WCHAR *v27; // rax
  const WCHAR *v28; // rax
  const wchar_t *v29; // rdx
  const wchar_t *v30; // rcx
  unsigned int ThreadInfoFlags; // [rsp+80h] [rbp-2B8h] BYREF
  unsigned int v32; // [rsp+84h] [rbp-2B4h] BYREF
  unsigned int v33; // [rsp+88h] [rbp-2B0h] BYREF
  unsigned int v34; // [rsp+8Ch] [rbp-2ACh] BYREF
  const WCHAR *v35; // [rsp+90h] [rbp-2A8h] BYREF
  volatile void *Address; // [rsp+98h] [rbp-2A0h] BYREF
  const wchar_t *v37; // [rsp+A0h] [rbp-298h] BYREF
  void *v38; // [rsp+A8h] [rbp-290h] BYREF
  PWSTR v39; // [rsp+B0h] [rbp-288h]
  PACCESS_TOKEN PrimaryToken[2]; // [rsp+C0h] [rbp-278h] BYREF
  const wchar_t *v41; // [rsp+D0h] [rbp-268h]
  __int64 v42; // [rsp+D8h] [rbp-260h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-258h] BYREF
  const WCHAR *v44; // [rsp+E8h] [rbp-250h] BYREF
  const WCHAR *v45; // [rsp+F0h] [rbp-248h] BYREF
  const WCHAR *v46[3]; // [rsp+F8h] [rbp-240h] BYREF
  unsigned __int64 v47; // [rsp+110h] [rbp-228h]
  const WCHAR *v48; // [rsp+118h] [rbp-220h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+120h] [rbp-218h] BYREF
  struct _UNICODE_STRING v50; // [rsp+130h] [rbp-208h] BYREF
  __int128 v51; // [rsp+140h] [rbp-1F8h]
  _BYTE v52[144]; // [rsp+170h] [rbp-1C8h] BYREF
  _BYTE v53[256]; // [rsp+200h] [rbp-138h] BYREF

  v42 = (__int64)a1;
  v43 = (__int64)a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1402A9DD8 - 1) <= 2u
     || (qword_1402A9DC0 & 0x8001000000040000uLL) == 0
     || (qword_1402A9DC8 & 0x8001000000040000uLL) != qword_1402A9DC8
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1402A9F58 <= 5
      || ((qword_1402A9F68 & 0x400000000000LL) == 0 || (qword_1402A9F70 & 0x400000000000LL) != qword_1402A9F70)
      && ((unsigned int)dword_1402A9F58 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1402A9F58, 0x40000LL)) )
    {
      return;
    }
  }
  v33 = 0;
  v38 = 0LL;
  UnicodeString = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_QWORD *)a1 + 58);
  if ( v4 )
  {
    v5 = v3 - *(_DWORD *)(v4 + 456);
    v32 = v5;
    if ( *(_DWORD *)(v4 + 40) )
    {
      v7 = *(_QWORD *)(v4 + 24);
      v6 = v3 - *(_DWORD *)(v7 + 48);
      v34 = v6;
      v33 = *(_DWORD *)(v7 + 24);
      v38 = *(void **)(v7 + 32);
      goto LABEL_10;
    }
  }
  else
  {
    v5 = 0;
    v32 = 0;
  }
  v34 = 0;
  v6 = 0;
LABEL_10:
  if ( v5 >= 0x32 && v6 >= 0x32 )
  {
    ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
    if ( (ThreadInfoFlags & 3) != 0 && (ThreadInfoFlags & 0x28) != 0 )
    {
      Buffer = 0LL;
      v41 = 0LL;
      v9 = 0LL;
      v39 = 0LL;
      v10 = (WCHAR *)ValidateHwndEx(*((_QWORD *)a1 + 164), 1, 0);
      v35 = v10;
      if ( v10 )
      {
        if ( EtwpGetClassName((struct tagWND *const)v10, &UnicodeString) >= 0 )
          Buffer = UnicodeString.Buffer;
        v41 = Buffer;
        if ( (int)Is_GetTopLevelWindowSupported() < 0 )
          TopLevelWindow = 0LL;
        else
          TopLevelWindow = (struct tagWND *)GetTopLevelWindow(v35);
        if ( TopLevelWindow )
        {
          if ( v35 == (const WCHAR *)TopLevelWindow )
          {
            v9 = Buffer;
            v39 = (PWSTR)Buffer;
          }
          else if ( EtwpGetClassName(TopLevelWindow, &v50) >= 0 )
          {
            v9 = v50.Buffer;
            v39 = v50.Buffer;
          }
        }
      }
      v37 = 0LL;
      v35 = 0LL;
      ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
      Address = (volatile void *)PsGetProcessPeb(ThreadProcess);
      v46[1] = (const WCHAR *)1;
      ProbeForRead(Address, 1uLL, 1u);
      v13 = (char *)*((_QWORD *)Address + 4);
      v46[2] = (const WCHAR *)1;
      ProbeForRead(v13, 1uLL, 1u);
      HIDWORD(PrimaryToken[0]) = 0;
      LODWORD(PrimaryToken[0]) = RtlReadULongFromUser(v13 + 96, v14);
      ULong64FromUser = RtlReadULong64FromUser(v13 + 104);
      v16 = ULong64FromUser;
      PrimaryToken[1] = (PACCESS_TOKEN)ULong64FromUser;
      v51 = *(_OWORD *)PrimaryToken;
      if ( (ULong64FromUser & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = LOWORD(PrimaryToken[0]);
      v18 = ULong64FromUser + LOWORD(PrimaryToken[0]) + 2LL;
      if ( v18 <= ULong64FromUser || v18 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( LOWORD(PrimaryToken[0]) > WORD1(PrimaryToken[0]) || ((__int64)PrimaryToken[0] & 1) != 0 )
      {
        if ( ((__int64)PrimaryToken[0] & 1) != 0 )
        {
          LODWORD(Address) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1137LL);
        }
        ExRaiseAccessViolation();
      }
      v37 = (const wchar_t *)ULong64FromUser;
      if ( LOWORD(PrimaryToken[0]) )
      {
        v17 = (unsigned __int64)LOWORD(PrimaryToken[0]) >> 1;
        v19 = v17;
        v47 = v17;
        while ( v19 )
        {
          if ( *(_WORD *)(*((_QWORD *)&v51 + 1) + 2 * v19 - 2) == 92 )
          {
            if ( v19 == v17 )
              v20 = L"Invalid";
            else
              v20 = (const WCHAR *)(*((_QWORD *)&v51 + 1) + 2 * v19);
            v35 = v20;
            break;
          }
          v47 = --v19;
        }
      }
      if ( !v35 )
        v35 = v37;
      v21 = *(PEPROCESS **)(v42 + 456);
      if ( ((_BYTE)v21[101] & 0x30) == 0x10 )
      {
        PrimaryToken[0] = PsReferencePrimaryToken(*v21);
        v42 = 256LL;
        v43 = 130LL;
        v22 = RtlQueryPackageIdentity(PrimaryToken[0], v53, &v42, v52, &v43, 0LL);
        v25 = (unsigned int)v22;
        v32 = v22;
        v26 = ThreadInfoFlags;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
        {
          v29 = (const wchar_t *)v52;
          if ( v22 < 0 )
            v29 = &word_14026AF94;
          v30 = (const wchar_t *)v53;
          if ( v22 < 0 )
            v30 = &word_14026AF94;
          McTemplateK0qqqzzzzqx_EtwWriteTransfer(
            (__int64)v30,
            (__int64)v29,
            v24,
            ThreadInfoFlags,
            v5,
            v6,
            Buffer,
            v9,
            v30,
            v29,
            v33,
            (char)v38);
          v25 = v32;
        }
        if ( (unsigned int)dword_1402A9F58 > 5
          && (qword_1402A9F68 & 0x400000040000LL) != 0
          && (qword_1402A9F70 & 0x400000040000LL) == qword_1402A9F70 )
        {
          v32 = 2;
          LODWORD(Address) = 1;
          v34 = v33;
          v48 = v9;
          v44 = Buffer;
          v27 = (const WCHAR *)v52;
          if ( (int)v25 < 0 )
            v27 = &word_14026AF94;
          v45 = v27;
          v28 = (const WCHAR *)v53;
          if ( (int)v25 < 0 )
            v28 = &word_14026AF94;
          v46[0] = v28;
          ThreadInfoFlags = v6;
          v33 = v5;
          LODWORD(v37) = v26;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v23,
            (__int64)&unk_140282DCD,
            (__int64)&word_14026AF94,
            v25,
            (__int64)&v37,
            (__int64)&v33,
            (__int64)&ThreadInfoFlags,
            v46,
            &v45,
            &v35,
            &v44,
            &v48,
            (__int64)&v34,
            (__int64)&v38,
            (__int64)&Address,
            (__int64)&v32);
        }
        PsDereferencePrimaryToken(PrimaryToken[0]);
      }
      else
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
          McTemplateK0qqqzzzqx_EtwWriteTransfer(
            (__int64)v21,
            v17,
            v16,
            ThreadInfoFlags,
            v5,
            v6,
            Buffer,
            v9,
            v37,
            v33,
            (char)v38);
        if ( (unsigned int)dword_1402A9F58 > 5
          && (qword_1402A9F68 & 0x400000040000LL) != 0
          && (qword_1402A9F70 & 0x400000040000LL) == qword_1402A9F70 )
        {
          LODWORD(v37) = 1;
          PrimaryToken[0] = v38;
          v32 = v33;
          v46[0] = v9;
          v45 = Buffer;
          v44 = v35;
          LODWORD(Address) = v6;
          v34 = v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (__int64)v21,
            (__int64)&unk_140282D13,
            v16,
            v18,
            (__int64)&ThreadInfoFlags,
            (__int64)&v34,
            (__int64)&Address,
            &v44,
            &v45,
            v46,
            (__int64)&v32,
            (__int64)PrimaryToken,
            (__int64)&v37);
        }
      }
      if ( Buffer )
        RtlFreeUnicodeString(&UnicodeString);
      if ( v9 )
      {
        if ( Buffer != v9 )
          RtlFreeUnicodeString(&v50);
      }
    }
  }
}
