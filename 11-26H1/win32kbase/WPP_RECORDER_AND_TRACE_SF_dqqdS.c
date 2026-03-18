/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqqdS @ 0x1401C5198
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x14021164C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_dqqdS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        char a11,
        char a12,
        const wchar_t *a13)
{
  _UNKNOWN **result; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  const wchar_t *v21; // rax
  int v22; // [rsp+20h] [rbp-98h]
  _DWORD v23[4]; // [rsp+80h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  result = &retaddr;
  v14 = (__int64)a13;
  v15 = -1LL;
  v23[0] = 2;
  if ( a2 )
  {
    if ( a13 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a13[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      v20 = 10LL;
    }
    v21 = a13;
    if ( !a13 )
      v21 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, _DWORD *, __int64, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_47fcb3e514af360b9e8befda87f2f516_Traceguids,
                            10LL,
                            v23,
                            4LL,
                            &a10,
                            8LL,
                            &a11,
                            8LL,
                            &a12,
                            4LL,
                            v21,
                            v20,
                            0LL);
  }
  if ( a3 )
  {
    if ( v14 )
    {
      do
        ++v15;
      while ( *(_WORD *)(v14 + 2 * v15) );
    }
    LOWORD(v22) = 10;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          1LL,
                          &WPP_47fcb3e514af360b9e8befda87f2f516_Traceguids,
                          v22,
                          v23,
                          4LL,
                          &a10,
                          8LL,
                          &a11);
  }
  return result;
}
