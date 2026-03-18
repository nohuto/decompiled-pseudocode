/*
 * XREFs of EtwTraceInputProcessDelay @ 0x14016D040
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140062E7C (_GetTopLevelWindow.c)
 *     Is_GetTopLevelWindowSupported @ 0x140062EB8 (Is_GetTopLevelWindowSupported.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400A5530 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1400CD474 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqzzzqx_EtwWriteTransfer @ 0x140117778 (McTemplateK0qqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqzzzzqx_EtwWriteTransfer @ 0x140120658 (McTemplateK0qqqzzzzqx_EtwWriteTransfer.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x140124058 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140140798 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x140140EEC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1@@-.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned int v3; // r8d
  int ThreadInfoFlags; // r14d
  const wchar_t *Buffer; // rdi
  const wchar_t *v6; // rsi
  struct tagWND *v7; // rax
  __int64 v8; // r12
  __int64 (__fastcall *TopLevelWindow)(__int64); // rax
  PEPROCESS ThreadProcess; // rax
  unsigned int *v11; // rdx
  __int64 v12; // r8
  wchar_t *v13; // r9
  ULONG64 v14; // rdx
  unsigned __int64 v15; // rax
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  wchar_t *v18; // r15
  int v19; // eax
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const WCHAR *v25; // rax
  const WCHAR *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // [rsp+80h] [rbp-2C8h] BYREF
  unsigned int v31; // [rsp+84h] [rbp-2C4h] BYREF
  unsigned int v32; // [rsp+88h] [rbp-2C0h] BYREF
  __int64 ProcessPeb; // [rsp+90h] [rbp-2B8h]
  int v34; // [rsp+98h] [rbp-2B0h]
  int v35; // [rsp+9Ch] [rbp-2ACh] BYREF
  unsigned int v36; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned int v37; // [rsp+A4h] [rbp-2A4h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp-2A0h] BYREF
  const WCHAR *v39; // [rsp+B0h] [rbp-298h]
  struct tagTHREADINFO *v40; // [rsp+B8h] [rbp-290h] BYREF
  unsigned __int64 v41; // [rsp+C0h] [rbp-288h] BYREF
  PWSTR v42; // [rsp+C8h] [rbp-280h]
  wchar_t *v43; // [rsp+D0h] [rbp-278h]
  const wchar_t *v44; // [rsp+D8h] [rbp-270h]
  int v45; // [rsp+E0h] [rbp-268h] BYREF
  const WCHAR *v46; // [rsp+E8h] [rbp-260h] BYREF
  const WCHAR *v47; // [rsp+F0h] [rbp-258h] BYREF
  const WCHAR *v48; // [rsp+F8h] [rbp-250h] BYREF
  const WCHAR *v49; // [rsp+100h] [rbp-248h] BYREF
  const WCHAR *v50; // [rsp+108h] [rbp-240h] BYREF
  unsigned __int64 v51; // [rsp+110h] [rbp-238h]
  __int64 v52; // [rsp+118h] [rbp-230h] BYREF
  __int64 v53; // [rsp+120h] [rbp-228h] BYREF
  unsigned __int64 v54; // [rsp+128h] [rbp-220h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+130h] [rbp-218h] BYREF
  struct _UNICODE_STRING v56; // [rsp+140h] [rbp-208h] BYREF
  __int128 v57; // [rsp+150h] [rbp-1F8h]
  unsigned __int64 v58; // [rsp+170h] [rbp-1D8h]
  _BYTE v59[144]; // [rsp+180h] [rbp-1C8h] BYREF
  _BYTE v60[256]; // [rsp+210h] [rbp-138h] BYREF

  v40 = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_14029EDB8 - 1) <= 2u
     || (qword_14029EDA0 & 0x8001000000040000uLL) == 0
     || (qword_14029EDA8 & 0x8001000000040000uLL) != qword_14029EDA8
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_14029EF38 <= 5
      || !tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL)
      && (v3 <= 5 || !tlgKeywordOn((__int64)&dword_14029EF38, 0x40000LL)) )
    {
      return;
    }
  }
  v31 = 0;
  v30 = 0;
  v32 = 0;
  v41 = 0LL;
  UnicodeString = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  EtwpGetLastInputProcessTime(
    *((struct tagQ *const *)a1 + 59),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v31,
    &v30,
    &v32,
    &v41);
  if ( v31 < 0x32 )
    return;
  if ( v30 < 0x32 )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v34 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 0x28) == 0 )
    return;
  Buffer = 0LL;
  v44 = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  v7 = (struct tagWND *)ValidateHwndEx(*((_QWORD *)a1 + 164), 1LL, 0);
  v8 = (__int64)v7;
  if ( v7 )
  {
    if ( (int)EtwpGetClassName(v7, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v44 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() < 0 )
      TopLevelWindow = 0LL;
    else
      TopLevelWindow = GetTopLevelWindow(v8);
    if ( TopLevelWindow )
    {
      if ( (__int64 (__fastcall *)(__int64))v8 == TopLevelWindow )
      {
        v6 = Buffer;
        v42 = (PWSTR)Buffer;
      }
      else if ( (int)EtwpGetClassName((struct tagWND *const)TopLevelWindow, &v56) >= 0 )
      {
        v6 = v56.Buffer;
        v42 = v56.Buffer;
      }
    }
  }
  v43 = 0LL;
  v39 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v11 = (unsigned int *)(*(_QWORD *)(ProcessPeb + 32) + 96LL);
  if ( (unsigned __int64)v11 >= MmUserProbeAddress )
    v11 = (unsigned int *)MmUserProbeAddress;
  v12 = *v11;
  LODWORD(ProcessPeb) = v12;
  LODWORD(v57) = v12;
  v13 = (wchar_t *)*((_QWORD *)v11 + 1);
  *((_QWORD *)&v57 + 1) = v13;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  if ( v14 <= (unsigned __int64)v13 || v14 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v12 > WORD1(ProcessPeb) )
  {
    if ( (v12 & 1) == 0 )
      goto LABEL_47;
    goto LABEL_46;
  }
  if ( (v12 & 1) != 0 )
  {
LABEL_46:
    LODWORD(ProcessPeb) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1137LL);
LABEL_47:
    ExRaiseAccessViolation();
  }
  v43 = v13;
  if ( (_WORD)v12 )
  {
    v58 = (unsigned __int64)(unsigned __int16)v12 >> 1;
    v15 = v58;
    v51 = v58;
    while ( v15 )
    {
      if ( v13[v15 - 1] == 92 )
      {
        if ( v15 == (unsigned __int64)(unsigned __int16)v12 >> 1 )
          v16 = L"Invalid";
        else
          v16 = &v13[v15];
        v39 = v16;
        break;
      }
      v51 = --v15;
    }
  }
  if ( !v39 )
    v39 = v43;
  v17 = *((_QWORD *)a1 + 58);
  if ( (*(_BYTE *)(v17 + 808) & 0x30) == 0x10 )
  {
    v18 = (wchar_t *)PsReferencePrimaryToken(*(PEPROCESS *)v17);
    v43 = v18;
    v53 = 256LL;
    v52 = 130LL;
    v19 = RtlQueryPackageIdentity(v18, v60, &v53, v59, &v52, 0LL);
    v34 = v19;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v20 = (const wchar_t *)v59;
      if ( v19 < 0 )
        v20 = &word_14025FAA8;
      v21 = (const wchar_t *)v60;
      if ( v19 < 0 )
        v21 = &word_14025FAA8;
      McTemplateK0qqqzzzzqx_EtwWriteTransfer(
        (__int64)v21,
        (__int64)v20,
        (unsigned int)v19,
        ThreadInfoFlags,
        v31,
        v30,
        Buffer,
        v6,
        v21,
        v20,
        v32,
        v41);
    }
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000040000LL) )
    {
      v45 = 2;
      v35 = 1;
      v54 = v41;
      v36 = v32;
      v50 = v6;
      v46 = Buffer;
      v47 = v39;
      v25 = (const WCHAR *)v59;
      if ( (int)v23 < 0 )
        v25 = &word_14025FAA8;
      v48 = v25;
      v26 = (const WCHAR *)v60;
      if ( (int)v23 < 0 )
        v26 = &word_14025FAA8;
      v49 = v26;
      v37 = v30;
      v38 = v31;
      LODWORD(v40) = ThreadInfoFlags;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v22,
        byte_140278B13,
        v23,
        v24,
        (__int64)&v40,
        (__int64)&v38,
        (__int64)&v37,
        &v49,
        &v48,
        &v47,
        &v46,
        &v50,
        (__int64)&v36,
        (__int64)&v54,
        (__int64)&v35,
        (__int64)&v45);
    }
    PsDereferencePrimaryToken(v18);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqzzzqx_EtwWriteTransfer(v17, v14, v12, ThreadInfoFlags, v31, v30, Buffer, v6, v43, v32, v41);
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000040000LL) )
    {
      LODWORD(v40) = 1;
      v49 = (const WCHAR *)v41;
      v38 = v32;
      v48 = v6;
      v47 = Buffer;
      v46 = v39;
      v37 = v30;
      v36 = v31;
      v35 = ThreadInfoFlags;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v27,
        byte_140278A59,
        v28,
        v29,
        (__int64)&v35,
        (__int64)&v36,
        (__int64)&v37,
        &v46,
        &v47,
        &v48,
        (__int64)&v38,
        (__int64)&v49,
        (__int64)&v40);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
  {
    if ( Buffer != v6 )
      RtlFreeUnicodeString(&v56);
  }
}
