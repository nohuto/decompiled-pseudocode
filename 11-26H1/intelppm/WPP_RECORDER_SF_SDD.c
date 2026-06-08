/*
 * XREFs of WPP_RECORDER_SF_SDD @ 0x14000A364
 * Callers:
 *     ValidateAcpiIdleDomain @ 0x140027F1C (ValidateAcpiIdleDomain.c)
 *     AcpiParseLpiObject @ 0x140030110 (AcpiParseLpiObject.c)
 *     ValidateAcpiThrottleStates @ 0x14003430C (ValidateAcpiThrottleStates.c)
 *     ValidateCpcResourcePriorities @ 0x140034D18 (ValidateCpcResourcePriorities.c)
 *     ValidateAcpiCStates @ 0x140041234 (ValidateAcpiCStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_SDD(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  const wchar_t *v13; // rcx
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v10 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = L"NULL";
    pfnWppTraceMessage(WPP_GLOBAL_Control->AttachedDevice, 43LL, a5, a4, v13, v12, va);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v10 = 2 * v7 + 2;
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, a5, v16, v6, v10, va);
}
