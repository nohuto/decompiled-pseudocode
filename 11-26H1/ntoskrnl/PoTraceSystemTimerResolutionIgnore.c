/*
 * XREFs of PoTraceSystemTimerResolutionIgnore @ 0x1405319F0
 * Callers:
 *     ExUpdateTimerResolutionPolicy @ 0x140A7374C (ExUpdateTimerResolutionPolicy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PoTraceSystemTimerResolutionIgnore(__int64 a1)
{
  BOOLEAN result; // al
  int v3; // eax
  int v4; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  __int64 v8; // [rsp+60h] [rbp-18h]

  result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_KERNEL_TIME_RESOLUTION_IGNORE);
  if ( result )
  {
    v5 = *(_DWORD *)(a1 + 464);
    v3 = (*(_DWORD *)(a1 + 1532) >> 26) & 1;
    *(_QWORD *)&UserData.Size = 4LL;
    v4 = v3;
    UserData.Ptr = (ULONGLONG)&v4;
    v7 = &v5;
    v8 = 4LL;
    return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_KERNEL_TIME_RESOLUTION_IGNORE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
