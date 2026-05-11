/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qZ @ 0x14000C5DC
 * Callers:
 *     DriverEntry @ 0x14002F13C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qZ(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        unsigned __int16 *a10)
{
  _UNKNOWN **result; // rax
  const wchar_t *v11; // rbx
  const wchar_t *v12; // rdi
  __int64 v16; // rdx
  const wchar_t *v17; // r8
  const wchar_t *v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v11 = a10;
  v12 = L"NULL";
  if ( !a2 )
    goto LABEL_10;
  if ( !a10 )
  {
    v16 = 8LL;
    goto LABEL_6;
  }
  v16 = *a10;
  if ( !*a10 )
  {
LABEL_6:
    v17 = L"NULL";
    goto LABEL_7;
  }
  v17 = (const wchar_t *)*((_QWORD *)a10 + 1);
LABEL_7:
  v18 = a10;
  if ( !a10 )
    v18 = L"\b";
  result = (_UNKNOWN **)pfnWppTraceMessage(
                          a1,
                          43LL,
                          &WPP_9385499e5bb03f2485fcdf1eb6a96ba7_Traceguids,
                          43LL,
                          &a9,
                          8LL,
                          v18,
                          2LL,
                          v17,
                          v16,
                          0LL);
LABEL_10:
  if ( a3 )
  {
    if ( v11 )
    {
      v19 = *v11;
      if ( *v11 )
        v12 = (const wchar_t *)*((_QWORD *)v11 + 1);
    }
    else
    {
      v19 = 8LL;
    }
    if ( !v11 )
      v11 = L"\b";
    LOWORD(v20) = 43;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          0LL,
                          1LL,
                          &WPP_9385499e5bb03f2485fcdf1eb6a96ba7_Traceguids,
                          v20,
                          &a9,
                          8LL,
                          v11,
                          2LL,
                          v12,
                          v19,
                          0LL);
  }
  return result;
}
