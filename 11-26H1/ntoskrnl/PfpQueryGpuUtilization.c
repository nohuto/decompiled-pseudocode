/*
 * XREFs of PfpQueryGpuUtilization @ 0x140A5D34C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     PsSessionGetWin32Callouts @ 0x140481BAC (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x140518394 (PspUpdateCalloutParameters.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExCallCallBack @ 0x1409FCA28 (ExCallCallBack.c)
 */

__int64 __fastcall PfpQueryGpuUtilization(__int64 a1, char a2, _DWORD *a3)
{
  void *v6; // rdx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v8; // r10d
  __int64 result; // rax
  void *v10; // rcx
  int SessionId; // [rsp+20h] [rbp-68h] BYREF
  __int128 v12; // [rsp+28h] [rbp-60h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-40h]
  __int128 Src; // [rsp+50h] [rbp-38h] BYREF

  Src = 0LL;
  DWORD1(v12) = 0;
  if ( *(_DWORD *)(a1 + 24) < 0x10u )
    return 3221225990LL;
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x10uLL, 8u);
  v6 = *(void **)(a1 + 16);
  if ( a2 )
    RtlCopyFromUser(&Src, v6, 0x10uLL);
  else
    RtlCopyVolatileMemory(&Src, v6, 0x10uLL);
  if ( (_DWORD)Src != 1 )
    return 3221225561LL;
  SessionId = DWORD1(Src);
  if ( DWORD1(Src) == -1 )
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0;
  v14 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(25, (__int64)&v12, 1, (__int64)&SessionId) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    result = ExCallCallBack((signed __int64 *)Win32Callouts, v8);
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result >= 0 )
  {
    *((_QWORD *)&Src + 1) = v13;
    v10 = *(void **)(a1 + 16);
    if ( a2 )
      RtlCopyToUser(v10, &Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(v10, &Src, 0x10uLL);
    *a3 = 16;
    return 0LL;
  }
  return result;
}
