/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDqs @ 0x1401A7A38
 * Callers:
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x1401A66A0 (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qDqs(
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
        const char *a12)
{
  _UNKNOWN **result; // rax
  const char *v13; // rdi
  __int64 v14; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  int v21; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v13 = a12;
  v14 = -1LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a12[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a12;
    if ( !a12 )
      v20 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids,
                            31LL,
                            &a9,
                            8LL,
                            &a10,
                            4LL,
                            &a11,
                            8LL,
                            v20,
                            v19,
                            0LL);
  }
  if ( a3 )
  {
    if ( v13 )
    {
      do
        ++v14;
      while ( v13[v14] );
    }
    if ( !v13 )
      v13 = "NULL";
    LOWORD(v21) = 31;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          14LL,
                          &WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids,
                          v21,
                          &a9,
                          8LL,
                          &a10,
                          4LL,
                          &a11,
                          8LL,
                          v13);
  }
  return result;
}
