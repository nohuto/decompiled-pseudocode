/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1401162E0
 * Callers:
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qqS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        char a9,
        char a10,
        const wchar_t *a11)
{
  const wchar_t *v11; // rbx
  __int64 v12; // rdi
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  const wchar_t *v20; // rcx
  int v21; // [rsp+20h] [rbp-68h]

  v11 = a11;
  v12 = -1LL;
  v16 = 10LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a11[v18] );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v19 = 10LL;
    }
    v20 = a11;
    if ( !a11 )
      v20 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
      a7,
      &a9,
      8LL,
      &a10,
      8LL,
      v20,
      v19,
      0LL);
  }
  if ( a3 )
  {
    v17 = v11 == 0LL;
    if ( v11 )
    {
      do
        ++v12;
      while ( v11[v12] );
      v16 = 2 * v12 + 2;
      v17 = v11 == 0LL;
    }
    if ( v17 )
      v11 = L"NULL";
    LOWORD(v21) = a7;
    WppAutoLogTrace(
      a4,
      4LL,
      1LL,
      &WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
      v21,
      &a9,
      8LL,
      &a10,
      8LL,
      v11,
      v16,
      0LL);
  }
}
