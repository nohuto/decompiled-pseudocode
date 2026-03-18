/*
 * XREFs of SetAppCompatFlags @ 0x1402B3320
 * Callers:
 *     <none>
 * Callees:
 *     IsCurrentDesktopComposed @ 0x140060BF0 (IsCurrentDesktopComposed.c)
 *     WPP_RECORDER_AND_TRACE_SF_DS @ 0x1401A5F2C (WPP_RECORDER_AND_TRACE_SF_DS.c)
 *     SetAppImeCompatFlags @ 0x140256310 (SetAppImeCompatFlags.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __report_rangecheckfailure @ 0x1402702E0 (__report_rangecheckfailure.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1402B7D2C (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 v3; // rax
  int v4; // ecx
  unsigned __int16 *v6; // rax
  char v7; // r14
  ULONG64 v8; // rdx
  int v9; // ecx
  ULONG64 v10; // r8
  ULONG64 v11; // rdx
  _WORD *v12; // rcx
  _WORD *v13; // rbx
  _WORD *v14; // rdx
  _WORD *v15; // rsi
  unsigned int v16; // ebx
  __int64 v17; // r15
  _WORD *v18; // rcx
  size_t v19; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  unsigned int *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edx
  __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdx
  bool v34; // si
  __int64 UserSessionState; // rax
  int v36; // r8d
  int v37; // edx
  int v38; // [rsp+20h] [rbp-238h]
  int v39; // [rsp+28h] [rbp-230h]
  int v40; // [rsp+30h] [rbp-228h]
  ULONG Value; // [rsp+54h] [rbp-204h] BYREF
  int v42; // [rsp+58h] [rbp-200h]
  unsigned int v43; // [rsp+5Ch] [rbp-1FCh]
  _WORD *v44; // [rsp+60h] [rbp-1F8h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1F0h] BYREF
  _WORD *v46; // [rsp+78h] [rbp-1E0h]
  __int64 v47; // [rsp+80h] [rbp-1D8h]
  __int64 v48; // [rsp+90h] [rbp-1C8h]
  __int128 v49; // [rsp+98h] [rbp-1C0h] BYREF
  struct _UNICODE_STRING v50; // [rsp+A8h] [rbp-1B0h] BYREF
  WCHAR v51[96]; // [rsp+D0h] [rbp-188h] BYREF
  WCHAR SourceString[80]; // [rsp+190h] [rbp-C8h] BYREF

  Value = 0;
  v50 = 0LL;
  v49 = 0LL;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  *(_QWORD *)&DestinationString.Length = PsGetProcessPeb(ThreadProcess);
  v3 = a1[88];
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 680);
    *((_DWORD *)a1 + 170) = v4;
    a1[86] = *(_QWORD *)(v3 + 688);
    *(_DWORD *)(a1[65] + 20LL) = v4;
    *(_DWORD *)(a1[65] + 24LL) = *((_DWORD *)a1 + 172);
    return 0LL;
  }
  v6 = (unsigned __int16 *)a1[67];
  v7 = 1;
  if ( !v6 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 32LL) + 96LL;
    if ( v8 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    v9 = *(_DWORD *)v8;
    v42 = v9;
    LODWORD(v49) = v9;
    v10 = *(_QWORD *)(v8 + 8);
    *((_QWORD *)&v49 + 1) = v10;
    if ( (v10 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = v10 + (unsigned __int16)v9 + 2LL;
    if ( v11 <= v10 || v11 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v9 > HIWORD(v42) )
    {
      if ( (v9 & 1) == 0 )
        goto LABEL_72;
    }
    else if ( (v9 & 1) == 0 )
    {
      v6 = (unsigned __int16 *)&v49;
      goto LABEL_13;
    }
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 216);
LABEL_72:
    ExRaiseAccessViolation();
  }
LABEL_13:
  v12 = (_WORD *)*((_QWORD *)v6 + 1);
  v13 = &v12[(unsigned __int64)*v6 >> 1];
  v46 = v13;
  v14 = v13;
  v44 = v13;
  while ( v13 != v12 )
  {
    if ( *v13 == 46 )
      goto LABEL_17;
    v46 = --v13;
  }
  v13 = v14;
  v46 = v14;
LABEL_17:
  v15 = v13;
  v44 = v13;
  while ( v15 != v12 )
  {
    if ( *v15 == 92 || *v15 == 58 )
    {
      v44 = ++v15;
      break;
    }
    v44 = --v15;
  }
  v16 = 2 * (v13 - v15);
  v43 = v16;
  if ( v16 >= 0xA4 )
    v16 = 162;
  v43 = v16;
  v17 = v16;
  memmove(v51, v15, v16);
  v18 = (_WORD *)(a1[58] + 976LL);
  if ( !*v18 )
  {
    v19 = 30LL;
    if ( v16 < 0x1E )
      v19 = v16;
    memmove(v18, v15, v19);
    *(_WORD *)(a1[58] + 1006LL) = 0;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
  v47 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v21 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process = v21;
    v47 = v21;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) == 0 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 720LL);
  }
  else
  {
    v22 = (unsigned int *)(PsGetThreadTeb(*a1) + 8240);
    ProbeForRead(v22, 4uLL, 4u);
    v23 = *v22;
    ProbeForRead((volatile void *)(unsigned int)v23, 0x488uLL, 4u);
    v24 = *(_QWORD *)(v23 + 480);
  }
  a1[86] = v24;
  if ( (v24 & 0x800000000000000LL) != 0 )
  {
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling", 0LL);
    v29 = PsGetCurrentProcessWin32Process(v25);
    v48 = v29;
    if ( v29 )
    {
      v29 &= -(__int64)(*(_QWORD *)v29 != 0LL);
      v48 = v29;
    }
    *(_DWORD *)(v29 + 12) |= 0x20000000u;
    TraceLoggingGDIScaledAppEvent();
  }
  v26 = *((unsigned int *)a1 + 172);
  *(_DWORD *)(a1[65] + 24LL) = v26;
  if ( (a1[86] & 0x2000000) != 0 || (v27 = IsCurrentDesktopComposed(v26, v21), v28 = 0, !v27) )
    v28 = 1;
  LOBYTE(v26) = *(_BYTE *)(a1[58] + 808LL) & 0x30;
  if ( (_BYTE)v26 == 16 )
    *(_QWORD *)a1[65] |= 0x10000000uLL;
  if ( v28 )
  {
LABEL_48:
    *(_QWORD *)a1[65] |= 0x20000000uLL;
    goto LABEL_51;
  }
  v26 = 0x880000000000000LL;
  if ( (a1[86] & 0x880000000000000LL) == 0 )
  {
    v26 = a1[58];
    if ( (*(_BYTE *)(v26 + 808) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v26) )
        *(_QWORD *)(a1[65] + 224LL) |= 0x80uLL;
      goto LABEL_51;
    }
    goto LABEL_48;
  }
  *(_QWORD *)(a1[65] + 224LL) |= 0x10uLL;
LABEL_51:
  if ( _bittest64(a1 + 86, 0x38u) )
    *(_QWORD *)(a1[65] + 224LL) |= 0x20uLL;
  v30 = *((_DWORD *)a1 + 172);
  if ( (v30 & 0x10000000) == 0 )
  {
    v26 = 1536LL;
    if ( *((_WORD *)a1 + 336) < 0x600u )
    {
      *((_DWORD *)a1 + 172) = v30 | 0x20000000;
      *(_DWORD *)(a1[65] + 24LL) |= 0x20000000u;
    }
  }
  v31 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v31 >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v51 + v31) = 0;
  v32 = PsGetCurrentProcessWin32Process(v26);
  if ( v32 )
    v32 &= -(__int64)(*(_QWORD *)v32 != 0LL);
  if ( (unsigned int)FastGetProfileStringW(
                       0LL,
                       (*(_DWORD *)(v32 + 12) & 0x80u) != 0 ? 43 : 33,
                       v51,
                       0LL,
                       SourceString,
                       80,
                       0) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v7 = 0;
  }
  v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v33);
    LOBYTE(v36) = v34;
    LOBYTE(v37) = v7;
    WPP_RECORDER_AND_TRACE_SF_DS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v37,
      v36,
      *(_QWORD *)(UserSessionState + 69160),
      v38,
      v39,
      v40);
  }
  *(_DWORD *)(a1[65] + 20LL) = Value;
  *((_DWORD *)a1 + 170) = Value;
  *(WCHAR *)((char *)v51 + v31) = 0;
  RtlInitUnicodeString(&v50, v51);
  return SetAppImeCompatFlags((__int64)a1, &v50);
}
