/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dis @ 0x1401A971C
 * Callers:
 *     ?HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z @ 0x1401A90D4 (-HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_Dis(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        const char *a11)
{
  const char *v11; // rdi
  __int64 v12; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  __int64 v19; // rbx
  int v20; // [rsp+20h] [rbp-48h]

  v11 = a11;
  v12 = -1LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_8510b3707f3a3974fab59b98bd0c8058_Traceguids,
      12LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v18,
      v17,
      0LL);
  }
  if ( a3 )
  {
    if ( v11 )
    {
      do
        ++v12;
      while ( v11[v12] );
      v19 = v12 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    if ( !v11 )
      v11 = "NULL";
    LOWORD(v20) = 12;
    WppAutoLogTrace(
      a4,
      4LL,
      8LL,
      &WPP_8510b3707f3a3974fab59b98bd0c8058_Traceguids,
      v20,
      &a9,
      4LL,
      &a10,
      8LL,
      v11,
      v19,
      0LL);
  }
}
