/*
 * XREFs of PsApplyDeepFreezeOptimizations @ 0x140ADBBC0
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     PsSessionGetWin32Callouts @ 0x140481BAC (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x140518394 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x1409FCA28 (ExCallCallBack.c)
 */

__int64 __fastcall PsApplyDeepFreezeOptimizations(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v5; // r10d
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  int SessionId; // [rsp+68h] [rbp+10h] BYREF

  HIDWORD(v6[0]) = 0;
  result = *a2;
  if ( (result & 1) != 0 && *(_QWORD *)(a1 + 664) )
  {
    SessionId = PsGetSessionIdEx(a1);
    v6[0] = 0LL;
    v6[1] = 0LL;
    v6[2] = a1;
    result = PspUpdateCalloutParameters(43, (__int64)v6, 0, (__int64)&SessionId);
    if ( (_DWORD)result )
    {
      Win32Callouts = PsSessionGetWin32Callouts();
      return ExCallCallBack((signed __int64 *)Win32Callouts, v5);
    }
  }
  return result;
}
