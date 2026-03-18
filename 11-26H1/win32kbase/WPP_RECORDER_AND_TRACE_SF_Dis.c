/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dis @ 0x1401CD268
 * Callers:
 *     ?HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z @ 0x1401CCDD4 (-HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_Dis(
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
  _UNKNOWN **result; // rax
  const char *v12; // rbx
  __int64 v13; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  bool v20; // zf
  int v21; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v12 = a11;
  v13 = -1LL;
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
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_8510b3707f3a3974fab59b98bd0c8058_Traceguids,
                            12LL,
                            &a9,
                            4LL,
                            &a10,
                            8LL,
                            v19,
                            v18,
                            0LL);
  }
  if ( a3 )
  {
    v20 = v12 == 0LL;
    if ( v12 )
    {
      do
        ++v13;
      while ( v12[v13] );
      v20 = v12 == 0LL;
    }
    if ( v20 )
      v12 = "NULL";
    LOWORD(v21) = 12;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          8LL,
                          &WPP_8510b3707f3a3974fab59b98bd0c8058_Traceguids,
                          v21,
                          &a9,
                          4LL,
                          &a10,
                          8LL,
                          v12);
  }
  return result;
}
