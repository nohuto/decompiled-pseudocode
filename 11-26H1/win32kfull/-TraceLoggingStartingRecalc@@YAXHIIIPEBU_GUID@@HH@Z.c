/*
 * XREFs of ?TraceLoggingStartingRecalc@@YAXHIIIPEBU_GUID@@HH@Z @ 0x14015C8F4
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5555555AEBU?$_tlgWrapperByRef@$0BA@@@555@Z @ 0x14015B814 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  _QWORD *v17; // rcx
  void *ProcessImageFileName; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+98h] [rbp-31h] BYREF
  int v23; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v24; // [rsp+A0h] [rbp-29h] BYREF
  int v25; // [rsp+A4h] [rbp-25h] BYREF
  int v26; // [rsp+A8h] [rbp-21h] BYREF
  int v27; // [rsp+ACh] [rbp-1Dh] BYREF
  int v28; // [rsp+B0h] [rbp-19h] BYREF
  int v29; // [rsp+B4h] [rbp-15h] BYREF
  int v30; // [rsp+B8h] [rbp-11h] BYREF
  int v31; // [rsp+BCh] [rbp-Dh] BYREF
  int v32; // [rsp+C0h] [rbp-9h] BYREF
  const struct _GUID *v33; // [rsp+C8h] [rbp-1h] BYREF
  void *v34; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+Fh] BYREF
  __int128 v36; // [rsp+E0h] [rbp+17h] BYREF

  v7 = (const struct _GUID *)&v36;
  if ( a5 )
    v7 = a5;
  v10 = a2;
  v11 = a1;
  v36 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v13 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v14 = v13 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  if ( *(_QWORD *)(UserSessionState + 63408) )
    v15 = DWORD2(v14) - *(_DWORD *)(UserSessionState + 63408);
  else
    v15 = 0;
  *(_QWORD *)(UserSessionState + 63408) = *((_QWORD *)&v14 + 1);
  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x400000000000LL) != 0
    && (qword_1403AAA48 & 0x400000000000LL) == qword_1403AAA48 )
  {
    v22 = a7;
    v23 = a6;
    v24 = v15;
    v27 = (v10 >> 4) & 1;
    v33 = v7;
    v28 = (v10 >> 3) & 1;
    v25 = a4;
    v29 = (v10 >> 2) & 1;
    v26 = a3;
    v30 = (v10 >> 1) & 1;
    v31 = v10 & 1;
    v32 = v11;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    v17 = (_QWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v17 = (_QWORD *)(((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process);
    ProcessImageFileName = (void *)PsGetProcessImageFileName(*v17);
    v35 = 50331648LL;
    v34 = ProcessImageFileName;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      byte_140376D05,
      v20,
      v21,
      (__int64)&v35,
      &v34,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64 *)&v33,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22);
  }
}
