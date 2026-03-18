/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqDdS @ 0x1400B64A0
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qqDdS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        const wchar_t *a13)
{
  const wchar_t *v13; // rdi
  __int64 v14; // rbx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  const wchar_t *v20; // rax
  int v21; // [rsp+20h] [rbp-78h]

  v13 = a13;
  v14 = -1LL;
  if ( a2 )
  {
    if ( a13 )
    {
      v18 = -1LL;
      do
        v17 = a13[++v18] == 0;
      while ( !v17 );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v19 = 10LL;
    }
    v20 = a13;
    if ( !a13 )
      v20 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      164LL,
      &a9,
      8LL,
      &a10,
      8LL,
      &a11,
      4LL,
      &a12,
      4LL,
      v20,
      v19,
      0LL);
  }
  if ( a3 )
  {
    v17 = v13 == 0LL;
    if ( v13 )
    {
      do
        v17 = v13[++v14] == 0;
      while ( !v17 );
      v17 = v13 == 0LL;
    }
    if ( v17 )
      v13 = L"NULL";
    LOWORD(v21) = 164;
    WppAutoLogTrace(
      a4,
      4LL,
      1LL,
      &WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v21,
      &a9,
      8LL,
      &a10,
      8LL,
      &a11,
      4LL,
      &a12,
      4LL,
      v13);
  }
}
