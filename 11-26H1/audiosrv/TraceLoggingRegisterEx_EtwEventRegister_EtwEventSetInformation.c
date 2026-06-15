/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180088150
 * Callers:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800ADC60 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  bool v3; // zf
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 + 4;
  v3 = a1[4] == 0LL;
  v8 = *(_OWORD *)(a1[1] - 16LL);
  if ( !v3 )
    __fastfail(5u);
  a1[5] = a2;
  a1[6] = 0LL;
  v5 = ((__int64 (__fastcall *)(__int128 *, void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *), _QWORD *, _QWORD *))EtwEventRegister)(
         &v8,
         tlgEnableCallback,
         a1,
         v2);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(*v2, 2LL, a1[1], *(unsigned __int16 *)a1[1], v8, *((_QWORD *)&v8 + 1));
  }
  return v6;
}
