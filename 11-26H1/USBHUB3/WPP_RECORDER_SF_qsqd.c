/*
 * XREFs of WPP_RECORDER_SF_qsqd @ 0x140034D20
 * Callers:
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qsqd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const char *v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  const char *v10; // rcx
  bool v11; // zf
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const char *v16; // [rsp+B0h] [rbp+38h]
  __int64 v17; // [rsp+B8h] [rbp+40h] BYREF
  va_list va1; // [rsp+B8h] [rbp+40h]
  va_list va2; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v5 = v16;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v16 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v16[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = v16;
    if ( !v16 )
      v10 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      84LL,
      (__int64 *)va,
      8LL,
      v10,
      v9,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  }
  v11 = v5 == 0LL;
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v11 = v5 == 0LL;
  }
  if ( v11 )
    v5 = "NULL";
  LOWORD(v13) = 84;
  return WppAutoLogTrace(a1, 2LL, 2LL, &WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids, v13, (__int64 *)va, 8LL, v5);
}
