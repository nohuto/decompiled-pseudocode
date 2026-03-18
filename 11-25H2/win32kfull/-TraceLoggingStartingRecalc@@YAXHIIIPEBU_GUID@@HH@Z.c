/*
 * XREFs of ?TraceLoggingStartingRecalc@@YAXHIIIPEBU_GUID@@HH@Z @ 0x140028C78
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14002860C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5555555AEBU?$_tlgWrapperByRef@$0BA@@@555@Z @ 0x14002A074 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingStartingRecalc(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        const struct _GUID *a5,
        int a6,
        int a7)
{
  const struct _GUID *v7; // rdi
  unsigned int v10; // ebx
  int v11; // r15d
  __int64 UserSessionState; // r9
  unsigned __int64 v13; // rcx
  unsigned __int128 v14; // rax
  int v15; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 ProcessImageFileName; // rax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // [rsp+98h] [rbp-31h] BYREF
  int v22; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v23; // [rsp+A0h] [rbp-29h] BYREF
  int v24; // [rsp+A4h] [rbp-25h] BYREF
  int v25; // [rsp+A8h] [rbp-21h] BYREF
  int v26; // [rsp+ACh] [rbp-1Dh] BYREF
  int v27; // [rsp+B0h] [rbp-19h] BYREF
  int v28; // [rsp+B4h] [rbp-15h] BYREF
  int v29; // [rsp+B8h] [rbp-11h] BYREF
  int v30; // [rsp+BCh] [rbp-Dh] BYREF
  int v31; // [rsp+C0h] [rbp-9h] BYREF
  const struct _GUID *v32; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v33; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+Fh] BYREF
  __int128 v35; // [rsp+E0h] [rbp+17h] BYREF

  v7 = (const struct _GUID *)&v35;
  if ( a5 )
    v7 = a5;
  v10 = a2;
  v11 = a1;
  v35 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v13 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v14 = v13 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  if ( *(_QWORD *)(UserSessionState + 63424) )
    v15 = DWORD2(v14) - *(_DWORD *)(UserSessionState + 63424);
  else
    v15 = 0;
  *(_QWORD *)(UserSessionState + 63424) = *((_QWORD *)&v14 + 1);
  if ( (unsigned int)dword_14039BBC0 > 5
    && (qword_14039BBD0 & 0x400000000000LL) != 0
    && (qword_14039BBD8 & 0x400000000000LL) == qword_14039BBD8 )
  {
    v21 = a7;
    v22 = a6;
    v23 = v15;
    v26 = (v10 >> 4) & 1;
    v32 = v7;
    v27 = (v10 >> 3) & 1;
    v24 = a4;
    v28 = (v10 >> 2) & 1;
    v25 = a3;
    v29 = (v10 >> 1) & 1;
    v30 = v10 & 1;
    v31 = v11;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)CurrentProcessWin32Process);
    v34 = 50331648LL;
    v33 = ProcessImageFileName;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      (unsigned int)&unk_14036964A,
      v19,
      v20,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v32,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
}
