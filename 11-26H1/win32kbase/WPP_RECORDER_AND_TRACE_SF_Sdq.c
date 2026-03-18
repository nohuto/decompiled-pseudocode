/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1401BA490
 * Callers:
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_Sdq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const wchar_t *a9,
        ...)
{
  const wchar_t *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rcx
  bool v18; // zf
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+C8h] [rbp+50h] BYREF
  va_list va; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v20 = va_arg(va1, _QWORD);
  v9 = a9;
  v10 = -1LL;
  v14 = 10LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      17LL,
      v17,
      v16,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  }
  if ( a3 )
  {
    v18 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v14 = 2 * v10 + 2;
      v18 = a9 == 0LL;
    }
    if ( v18 )
      v9 = L"NULL";
    LOWORD(v19) = 17;
    WppAutoLogTrace(
      a4,
      4LL,
      1LL,
      &WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v19,
      v9,
      v14,
      (__int64 *)va,
      4LL,
      va1);
  }
}
