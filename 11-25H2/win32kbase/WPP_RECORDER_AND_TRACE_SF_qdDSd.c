/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdDSd @ 0x1401D5A38
 * Callers:
 *     RIMOpenDevWorker @ 0x1401307BC (RIMOpenDevWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_qdDSd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        ...)
{
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  const wchar_t *v15; // rcx
  bool v16; // zf
  int v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+F0h] [rbp+48h] BYREF
  va_list va; // [rsp+F0h] [rbp+48h]
  __int64 v20; // [rsp+F8h] [rbp+50h] BYREF
  va_list va1; // [rsp+F8h] [rbp+50h]
  __int64 v22; // [rsp+100h] [rbp+58h] BYREF
  va_list va2; // [rsp+100h] [rbp+58h]
  const wchar_t *v24; // [rsp+108h] [rbp+60h]
  va_list va3; // [rsp+110h] [rbp+68h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  v24 = va_arg(va3, const wchar_t *);
  v8 = v24;
  v9 = -1LL;
  if ( a2 )
  {
    if ( v24 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v24[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = v24;
    if ( !v24 )
      v15 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids,
      a7,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v15,
      v14,
      va3,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    v16 = v8 == 0LL;
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v16 = v8 == 0LL;
    }
    if ( v16 )
      v8 = L"NULL";
    LOWORD(v17) = a7;
    WppAutoLogTrace(
      a4,
      2LL,
      1LL,
      &WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids,
      v17,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v8);
  }
}
