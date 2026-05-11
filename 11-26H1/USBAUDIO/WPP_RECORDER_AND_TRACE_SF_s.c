/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_s @ 0x140014D38
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1400103D0 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_s(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9)
{
  _UNKNOWN **result; // rax
  const char *v10; // rbx
  __int64 v11; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  bool v19; // zf
  int v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-18h]
  __int64 v22; // [rsp+48h] [rbp-10h]
  __int64 v23; // [rsp+50h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  v15 = 5LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_5beda4ce5be130d4523b4ac6acb25968_Traceguids,
                            32LL,
                            v18,
                            v17,
                            0LL);
  }
  if ( a3 )
  {
    v19 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v15 = v11 + 1;
      v19 = a9 == 0LL;
    }
    if ( v19 )
      v10 = "NULL";
    LOWORD(v20) = 32;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          0LL,
                          9LL,
                          &WPP_5beda4ce5be130d4523b4ac6acb25968_Traceguids,
                          v20,
                          v10,
                          v15,
                          0LL,
                          v21,
                          v22,
                          v23);
  }
  return result;
}
