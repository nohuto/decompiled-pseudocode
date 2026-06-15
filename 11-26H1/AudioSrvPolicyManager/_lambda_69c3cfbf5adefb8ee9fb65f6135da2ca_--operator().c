/*
 * XREFs of _lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_::operator() @ 0x1800435D0
 * Callers:
 *     wil::init_once_nothrow__lambda_69c3cfbf5adefb8ee9fb65f6135da2ca___ @ 0x18001F790 (wil--init_once_nothrow__lambda_69c3cfbf5adefb8ee9fb65f6135da2ca___.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180020290 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800227C8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003D660 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U?$function_deleter@P6AXPEAX@Z$1?WTSFreeMemory@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800432D0 (--1-$out_param_t@V-$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U-$function_deleter@P6AXPEAX@Z$1-WTSF.c)
 *     ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180043E7C (-QueueVolumeRefreshForAllTsSessions@@YAXXZ.c)
 */

__int64 lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_::operator()()
{
  BOOL v0; // ebx
  DWORD i; // ebx
  BOOL v2; // esi
  const char *v3; // r9
  int v4; // esi
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r10
  int v7; // ecx
  PVOID v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  PVOID v13; // rcx
  PVOID v14; // rcx
  unsigned int v15; // ebx
  bool v17; // [rsp+38h] [rbp-59h] BYREF
  int v18; // [rsp+40h] [rbp-51h] BYREF
  PVOID v19; // [rsp+48h] [rbp-49h] BYREF
  PVOID pMemory; // [rsp+50h] [rbp-41h] BYREF
  DWORD pCount; // [rsp+58h] [rbp-39h] BYREF
  DWORD pBytesReturned; // [rsp+5Ch] [rbp-35h] BYREF
  int v23; // [rsp+60h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-29h] BYREF
  int *v25; // [rsp+78h] [rbp-19h]
  __int64 v26; // [rsp+80h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+88h] [rbp-9h] BYREF
  int *v28; // [rsp+A8h] [rbp+17h]
  __int64 v29; // [rsp+B0h] [rbp+1Fh]
  bool *v30; // [rsp+B8h] [rbp+27h]
  __int64 v31; // [rsp+C0h] [rbp+2Fh]
  int *v32; // [rsp+C8h] [rbp+37h]
  __int64 v33; // [rsp+D0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  LOBYTE(v25) = 1;
  v19 = 0LL;
  v24.Ptr = (ULONGLONG)&v19;
  pCount = 0;
  *(_QWORD *)&v24.Size = 0LL;
  v0 = WTSEnumerateSessionsW(0LL, 0, 1u, (PWTS_SESSION_INFOW *)&v24.Size, &pCount);
  wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&v24);
  if ( v0 )
  {
    for ( i = 0; i < pCount; ++i )
    {
      v24.Ptr = (ULONGLONG)&pMemory;
      pMemory = 0LL;
      pBytesReturned = 0;
      *(_QWORD *)&v24.Size = 0LL;
      LOBYTE(v25) = 1;
      v2 = WTSQuerySessionInformationW(
             0LL,
             *((_DWORD *)v19 + 6 * i),
             WTSSessionInfoEx,
             (LPWSTR *)&v24.Size,
             &pBytesReturned);
      if ( !v2 )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x707,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          v3);
      wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&v24);
      if ( v2 )
      {
        v4 = *((_DWORD *)pMemory + 4);
        v5 = AudioSrvPolicyManagerTelemetryProvider::Provider();
        if ( *(_DWORD *)v5 > 4u && tlgKeywordOn((__int64)v5, 0x20000LL) )
        {
          v17 = g_GlobalUserPresent;
          v23 = v4;
          v33 = 4LL;
          v7 = *((_DWORD *)v19 + 6 * i);
          v32 = &v23;
          v30 = &v17;
          v28 = &v18;
          v18 = v7;
          v31 = 1LL;
          v29 = 4LL;
          tlgWriteTransfer_EventWriteTransfer(v6, byte_18005B296, 0LL, 0LL, 5u, &v27);
        }
        if ( v4 == 1 )
        {
          g_GlobalUserPresent = 1;
          v9 = AudioSrvPolicyManagerTelemetryProvider::Provider();
          v10 = (__int64)v9;
          if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x20000LL) )
          {
            v18 = *((_DWORD *)v19 + 6 * i);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
              v10,
              byte_18005B261,
              v10,
              v11,
              (__int64)&v18);
          }
          if ( (Microsoft_Windows_AudioEnableBits & 0x10) != 0 )
          {
            v26 = 4LL;
            v12 = *((unsigned int *)v19 + 6 * i);
            v25 = &v18;
            v18 = v12;
            McGenEventWrite_EventWriteTransfer(v12, &EVT_GlobalUser_Presence, v10, 2u, &v24);
          }
          QueueVolumeRefreshForAllTsSessions();
          v13 = pMemory;
          pMemory = 0LL;
          if ( v13 )
            WTSFreeMemory(v13);
          break;
        }
      }
      v8 = pMemory;
      pMemory = 0LL;
      if ( v8 )
        WTSFreeMemory(v8);
    }
  }
  v14 = v19;
  v19 = 0LL;
  v15 = !g_GlobalUserPresent ? 0x80004004 : 0;
  if ( v14 )
    WTSFreeMemory(v14);
  return v15;
}
