/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dsds @ 0x1401AF6AC
 * Callers:
 *     IsPrivilegedEx @ 0x1401AF540 (IsPrivilegedEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_Dsds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  const char *v8; // rdi
  __int64 v9; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  const char *v15; // rcx
  __int64 v16; // rbx
  int v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  const char *v20; // [rsp+D8h] [rbp+50h]
  va_list va1; // [rsp+E0h] [rbp+58h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, const char *);
  v8 = v20;
  v9 = -1LL;
  if ( a2 )
  {
    if ( v20 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v20[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = v20;
    if ( !v20 )
      v15 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_20c321d9287c31f9341f7bf0995cc22c_Traceguids,
      10LL,
      (__int64 *)va,
      4LL,
      v15,
      v14,
      va1,
      4LL,
      "privilege",
      10LL,
      0LL);
  }
  if ( a3 )
  {
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v16 = v9 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    if ( !v8 )
      v8 = "NULL";
    LOWORD(v17) = 10;
    WppAutoLogTrace(
      a4,
      4LL,
      14LL,
      &WPP_20c321d9287c31f9341f7bf0995cc22c_Traceguids,
      v17,
      (__int64 *)va,
      4LL,
      v8,
      v16,
      va1,
      4LL,
      "privilege");
  }
}
