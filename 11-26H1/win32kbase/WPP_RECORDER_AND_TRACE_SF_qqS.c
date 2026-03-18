/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqS @ 0x140092F6C
 * Callers:
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
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
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // rcx
  int v20; // [rsp+20h] [rbp-68h]

  v11 = a11;
  v12 = -1LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
      a7,
      &a9,
      8LL,
      &a10,
      8LL,
      v19,
      v18,
      0LL);
  }
  if ( a3 )
  {
    v16 = v11 == 0LL;
    if ( v11 )
    {
      do
        ++v12;
      while ( v11[v12] );
      v16 = v11 == 0LL;
    }
    if ( v16 )
      v11 = L"NULL";
    LOWORD(v20) = a7;
    WppAutoLogTrace(a4, 4LL, 1LL, &WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids, v20, &a9, 8LL, &a10, 8LL, v11);
  }
}
