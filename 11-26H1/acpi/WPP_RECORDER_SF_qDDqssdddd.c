/*
 * XREFs of WPP_RECORDER_SF_qDDqssdddd @ 0x14002C90C
 * Callers:
 *     ACPIThermalDeviceControl @ 0x14002ACF0 (ACPIThermalDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDDqssdddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        __int64 a11)
{
  __int64 v11; // rbx
  const char *v12; // rsi
  __int64 v13; // rdi
  __int64 v15; // rax
  bool v16; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // [rsp+28h] [rbp-A9h]

  v11 = a11;
  v12 = a10;
  v13 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(a11 + v18) );
    }
    if ( a10 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a10[v19] );
    }
    v20 = &a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids);
  }
  if ( v11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(v11 + v15) );
  }
  v16 = v12 == 0LL;
  if ( v12 )
  {
    do
      ++v13;
    while ( v12[v13] );
    v16 = v12 == 0LL;
  }
  if ( v16 )
    v12 = "NULL";
  LOWORD(v20) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
           (_DWORD)v20,
           &a6,
           8LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v12);
}
