/*
 * XREFs of WPP_RECORDER_SF_sdsd @ 0x14003EC30
 * Callers:
 *     UsbhLogStartFailure @ 0x14003D85C (UsbhLogStartFailure.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_sdsd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  const char *v8; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  const char *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  const char *v15; // rcx
  __int64 v16; // rax
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  const char *v22; // [rsp+C8h] [rbp+40h]
  va_list va1; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, const char *);
  v6 = (__int64)v22;
  v7 = -1LL;
  v8 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( v22 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v22[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = v22;
    if ( !v22 )
      v12 = "NULL";
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      20LL,
      v15,
      v14,
      (__int64 *)va,
      4LL,
      v12,
      v11,
      va1,
      4LL,
      0LL);
  }
  if ( v6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v6 + v16) );
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v8 = "NULL";
  LOWORD(v19) = 20;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_17d2bee9f04934815023b5c023c5576c_Traceguids, v19, v8);
}
