/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDs @ 0x14013B674
 * Callers:
 *     ?Freeze@tagPROCESSINFO@@AEAAXXZ @ 0x1401B9914 (-Freeze@tagPROCESSINFO@@AEAAXXZ.c)
 *     ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401B9A48 (-Thaw@tagPROCESSINFO@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qDs(
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
        const char *a11)
{
  const char *v11; // rbx
  __int64 v12; // rdi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-58h]

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
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
      a7,
      &a9,
      8LL,
      &a10,
      4LL,
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
      v11 = "NULL";
    LOWORD(v20) = a7;
    WppAutoLogTrace(a4, 4LL, 14LL, &WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids, v20, &a9, 8LL, &a10, 4LL, v11);
  }
}
