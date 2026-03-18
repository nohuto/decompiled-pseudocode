/*
 * XREFs of WPP_RECORDER_SF_qDqssdddd @ 0x1400437D8
 * Callers:
 *     ACPIThermalDeviceControl @ 0x14002ACF0 (ACPIThermalDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qDqssdddd(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  const char *v5; // rbx
  __int64 v6; // rdi
  const char *v7; // rsi
  __int64 v10; // r14
  __int64 v11; // rax
  bool v12; // zf
  __int64 v14; // rax
  __int64 v15; // r8
  const char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  const char *v19; // rax
  int v20; // [rsp+28h] [rbp-99h]
  __int64 v21; // [rsp+110h] [rbp+4Fh] BYREF
  va_list va; // [rsp+110h] [rbp+4Fh]
  __int64 v23; // [rsp+118h] [rbp+57h] BYREF
  va_list va1; // [rsp+118h] [rbp+57h]
  __int64 v25; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+5Fh]
  const char *v27; // [rsp+128h] [rbp+67h]
  const char *v28; // [rsp+130h] [rbp+6Fh]
  __int64 v29; // [rsp+138h] [rbp+77h] BYREF
  va_list va3; // [rsp+138h] [rbp+77h]
  __int64 v31; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+140h] [rbp+7Fh]
  __int64 v33; // [rsp+148h] [rbp+87h] BYREF
  va_list va5; // [rsp+148h] [rbp+87h]
  va_list va6; // [rsp+150h] [rbp+8Fh] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  v27 = va_arg(va3, const char *);
  v28 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v29 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v31 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v33 = va_arg(va6, _QWORD);
  v5 = v28;
  v6 = -1LL;
  v7 = v27;
  v10 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v28 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v28[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = v28;
    if ( !v28 )
      v16 = "NULL";
    if ( v27 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v27[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = v27;
    if ( !v27 )
      v19 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      v19,
      v18,
      v16,
      v15,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      va6,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v5[v11] );
  }
  if ( !v5 )
    v5 = "NULL";
  v12 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v6;
    while ( v7[v6] );
    v10 = v6 + 1;
    v12 = v7 == 0LL;
  }
  if ( v12 )
    v7 = "NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
           v20,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           8LL,
           v7,
           v10,
           v5);
}
