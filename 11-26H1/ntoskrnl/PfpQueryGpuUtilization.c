/*
 * XREFs of PfpQueryGpuUtilization @ 0x140A5405C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A52EAC (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     PsSessionGetWin32Callouts @ 0x14048806C (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404FB6E0 (PspUpdateCalloutParameters.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExCallCallBack @ 0x140A41008 (ExCallCallBack.c)
 */

__int64 __fastcall PfpQueryGpuUtilization(__int64 a1, char a2, _DWORD *a3)
{
  void *v6; // rdx
  union _RTL_RUN_ONCE *Win32Callouts; // rax
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
