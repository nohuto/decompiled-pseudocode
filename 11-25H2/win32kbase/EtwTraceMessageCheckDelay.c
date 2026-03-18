/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x14016D900
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140062E7C (_GetTopLevelWindow.c)
 *     Is_GetTopLevelWindowSupported @ 0x140062EB8 (Is_GetTopLevelWindowSupported.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@35@Z @ 0x14007B368 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400A5530 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1400CD474 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqqzzzqx_EtwWriteTransfer @ 0x1400F82DC (McTemplateK0qqqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x14010BCA4 (McTemplateK0qqqqzzzzqx_EtwWriteTransfer.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x140124058 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@335@Z @ 0x140126390 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned __int64 v3; // r13
  int v4; // eax
  unsigned int v5; // r12d
  int ThreadInfoFlags; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r15d
  const wchar_t *Buffer; // rdi
  const wchar_t *v11; // rsi
  wchar_t *v12; // rax
  __int64 (__fastcall *TopLevelWindow)(__int64); // rax
  int v14; // r13d
  PEPROCESS ThreadProcess; // rax
  ULONG64 v16; // rdx
  int v17; // ecx
  unsigned __int64 v18; // r8
  ULONG64 v19; // rdx
  __int64 v20; // rdx
  WCHAR *v21; // r14
  __int64 v22; // r8
  int v23; // r9d
  const wchar_t *v24; // rdx
  const wchar_t *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  const WCHAR *v29; // rax
  const WCHAR *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // [rsp+90h] [rbp-2D8h] BYREF
  unsigned int v35; // [rsp+94h] [rbp-2D4h] BYREF
  __int64 ProcessPeb; // [rsp+98h] [rbp-2D0h]
  int v37; // [rsp+A0h] [rbp-2C8h]
  int v38; // [rsp+A4h] [rbp-2C4h] BYREF
  int v39; // [rsp+A8h] [rbp-2C0h] BYREF
  unsigned int v40; // [rsp+ACh] [rbp-2BCh] BYREF
  unsigned int v41; // [rsp+B0h] [rbp-2B8h] BYREF
  int v42; // [rsp+B4h] [rbp-2B4h] BYREF
  wchar_t *v43; // [rsp+B8h] [rbp-2B0h]
  struct tagTHREADINFO *v44; // [rsp+C0h] [rbp-2A8h] BYREF
  const WCHAR *v45; // [rsp+C8h] [rbp-2A0h]
  PWSTR v46; // [rsp+D0h] [rbp-298h]
  const wchar_t *v47; // [rsp+D8h] [rbp-290h]
  int v48; // [rsp+E0h] [rbp-288h]
  int v49; // [rsp+E4h] [rbp-284h]
  int v50; // [rsp+E8h] [rbp-280h] BYREF
  const WCHAR *v51; // [rsp+F0h] [rbp-278h]
  const WCHAR *v52; // [rsp+F8h] [rbp-270h] BYREF
  const WCHAR *v53; // [rsp+100h] [rbp-268h] BYREF
  const WCHAR *v54; // [rsp+108h] [rbp-260h] BYREF
  const WCHAR *v55; // [rsp+110h] [rbp-258h] BYREF
  __int64 v56; // [rsp+118h] [rbp-250h] BYREF
  _QWORD v57[3]; // [rsp+120h] [rbp-248h] BYREF
  __int64 v58; // [rsp+138h] [rbp-230h] BYREF
  __int64 v59; // [rsp+140h] [rbp-228h] BYREF
  __int64 v60; // [rsp+148h] [rbp-220h] BYREF
  __int128 v61; // [rsp+150h] [rbp-218h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+160h] [rbp-208h] BYREF
  struct _UNICODE_STRING v63; // [rsp+170h] [rbp-1F8h] BYREF
  _BYTE v64[144]; // [rsp+1A0h] [rbp-1C8h] BYREF
  _BYTE v65[256]; // [rsp+230h] [rbp-138h] BYREF

  v44 = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_14029EDB8 - 1) <= 2u
     || (qword_14029EDA0 & 0x8001000000040000uLL) == 0
     || (qword_14029EDA8 & 0x8001000000040000uLL) != qword_14029EDA8
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_14029EF38 <= 5 || !tlgKeywordOn((__int64)&dword_14029EF38, 0x40000LL) )
      return;
  }
  v35 = 0;
  v34 = 0;
  UnicodeString = 0LL;
  v63 = 0LL;
  v61 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 326);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v48 = v3 - v4;
  if ( (unsigned int)(v3 - v4) < 0xC8 )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v9 = ThreadInfoFlags;
  v49 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < *(_DWORD *)(W32GetUserSessionState(v8, v7) + 69112) )
    return;
  Buffer = 0LL;
  v47 = 0LL;
  v11 = 0LL;
  v46 = 0LL;
  v12 = (wchar_t *)ValidateHwndEx(*((_QWORD *)a1 + 164), 1LL, 0);
  v43 = v12;
  if ( v12 )
  {
    if ( (int)EtwpGetClassName((struct tagWND *const)v12, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v47 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() < 0 )
      TopLevelWindow = 0LL;
    else
      TopLevelWindow = GetTopLevelWindow((__int64)v43);
    if ( TopLevelWindow )
    {
      if ( v43 == (wchar_t *)TopLevelWindow )
      {
        v11 = Buffer;
        v46 = (PWSTR)Buffer;
      }
      else if ( (int)EtwpGetClassName((struct tagWND *const)TopLevelWindow, &v63) >= 0 )
      {
        v11 = v63.Buffer;
        v46 = v63.Buffer;
      }
    }
  }
  EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 59), v3, &v35, &v34, 0LL, 0LL);
  v14 = *((_DWORD *)a1 + 330);
  v37 = v14;
  v45 = (const WCHAR *)*((_QWORD *)a1 + 166);
  v51 = v45;
  v43 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v16 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
  if ( v16 >= MmUserProbeAddress )
    v16 = MmUserProbeAddress;
  v17 = *(_DWORD *)v16;
  LODWORD(ProcessPeb) = v17;
  LODWORD(v61) = v17;
  v18 = *(_QWORD *)(v16 + 8);
  *((_QWORD *)&v61 + 1) = v18;
  if ( (v18 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = v18 + (unsigned __int16)v17 + 2LL;
  if ( v19 <= v18 || v19 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v17 > WORD1(ProcessPeb) )
  {
    if ( (v17 & 1) == 0 )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( (v17 & 1) != 0 )
  {
LABEL_38:
    LODWORD(ProcessPeb) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 896LL);
LABEL_39:
    ExRaiseAccessViolation();
  }
  v57[1] = &v61;
  if ( &v61 )
    v43 = (wchar_t *)*((_QWORD *)&v61 + 1);
  v20 = *((_QWORD *)a1 + 58);
  if ( (*(_BYTE *)(v20 + 808) & 0x30) == 0x10 )
  {
    v21 = (WCHAR *)PsReferencePrimaryToken(*(PEPROCESS *)v20);
    v51 = v21;
    v59 = 256LL;
    v58 = 130LL;
    v23 = RtlQueryPackageIdentity(v21, v65, &v59, v64, &v58, 0LL);
    v37 = v23;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v24 = (const wchar_t *)v64;
      if ( v23 < 0 )
        v24 = &word_14025FAA8;
      v25 = (const wchar_t *)v65;
      if ( v23 < 0 )
        v25 = &word_14025FAA8;
      McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        (__int64)v25,
        (__int64)v24,
        v22,
        v9,
        v5,
        v35,
        v34,
        Buffer,
        v11,
        v25,
        v24,
        v14,
        (char)v45);
    }
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x40000LL) )
    {
      v60 = 0x1000000LL;
      v50 = 2;
      v38 = 1;
      v57[0] = v45;
      v39 = v14;
      v52 = v11;
      v53 = Buffer;
      v54 = v43;
      v29 = (const WCHAR *)v64;
      if ( (int)v28 < 0 )
        v29 = (const WCHAR *)v27;
      v55 = v29;
      v30 = (const WCHAR *)v65;
      if ( (int)v28 < 0 )
        v30 = (const WCHAR *)v27;
      v56 = (__int64)v30;
      v40 = v34;
      v41 = v35;
      v42 = v5;
      LODWORD(v44) = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v26,
        byte_140278CCE,
        v27,
        v28,
        (__int64)&v44,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v40,
        (const WCHAR **)&v56,
        &v55,
        &v54,
        &v53,
        &v52,
        (__int64)&v39,
        (__int64)v57,
        (__int64)&v38,
        (__int64)&v50,
        (__int64)&v60);
    }
    PsDereferencePrimaryToken(v21);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqqzzzqx_EtwWriteTransfer((__int64)v45, v20, v18, v9, v5, v35, v34, Buffer, v11, v43, v14, (char)v45);
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x40000LL) )
    {
      v56 = 0x1000000LL;
      LODWORD(v44) = 1;
      v55 = v45;
      v42 = v14;
      v54 = v11;
      v53 = Buffer;
      v52 = v43;
      v41 = v34;
      v40 = v35;
      v39 = v5;
      v38 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v31,
        byte_140278BF7,
        v32,
        v33,
        (__int64)&v38,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v41,
        &v52,
        &v53,
        &v54,
        (__int64)&v42,
        (__int64)&v55,
        (__int64)&v44,
        (__int64)&v56);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v11 )
  {
    if ( Buffer != v11 )
      RtlFreeUnicodeString(&v63);
  }
}
