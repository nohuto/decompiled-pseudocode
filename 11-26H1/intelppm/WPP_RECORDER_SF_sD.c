/*
 * XREFs of WPP_RECORDER_SF_sd @ 0x14000A74C
 * Callers:
 *     AcpiEval_PSD_TSD @ 0x14002ECE4 (AcpiEval_PSD_TSD.c)
 *     AcpiParseCore @ 0x140040F74 (AcpiParseCore.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_sd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, const char *a6, ...)
{
  const char *v6; // rbx
  __int64 v7; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  const char *v13; // rcx
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v10 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
      a4,
      v13,
      v12,
      va);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v10 = v7 + 1;
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = "NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_a2054a8aebda3d51da79f0036784113c_Traceguids, v16, v6, v10, va);
}
