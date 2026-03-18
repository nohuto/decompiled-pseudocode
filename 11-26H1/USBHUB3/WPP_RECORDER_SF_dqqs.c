/*
 * XREFs of WPP_RECORDER_SF_dqqs @ 0x140034B7C
 * Callers:
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqqs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  const char *v14; // rax
  int v16; // [rsp+20h] [rbp-58h]

  v9 = (__int64)a9;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a9 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a9[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = a9;
    if ( !a9 )
      v14 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      85LL,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v14,
      v13,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_BYTE *)(v9 + v10) );
  }
  LOWORD(v16) = 85;
  return WppAutoLogTrace(a1, 2LL, 2LL, &WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids, v16, &a6, 4LL, &a7);
}
