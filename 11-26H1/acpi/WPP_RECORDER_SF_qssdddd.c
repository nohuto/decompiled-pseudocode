/*
 * XREFs of WPP_RECORDER_SF_qssdddd @ 0x14003F308
 * Callers:
 *     ACPIThermalRereadTemperature @ 0x14002ABBC (ACPIThermalRereadTemperature.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qssdddd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  const char *v5; // rbx
  __int64 v6; // rdi
  const char *v7; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  __int64 v14; // rax
  __int64 v15; // r9
  const char *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-98h]
  __int64 v21; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  const char *v23; // [rsp+F0h] [rbp+38h]
  const char *v24; // [rsp+F8h] [rbp+40h]
  __int64 v25; // [rsp+100h] [rbp+48h] BYREF
  va_list va1; // [rsp+100h] [rbp+48h]
  va_list va2; // [rsp+108h] [rbp+50h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, const char *);
  v24 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  v5 = v24;
  v6 = -1LL;
  v7 = v23;
  v9 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v24 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v24[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = v24;
    if ( !v24 )
      v16 = "NULL";
    if ( v23 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v23[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = v23;
    if ( !v23 )
      v19 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
      18LL,
      (__int64 *)va,
      8LL,
      v19,
      v18,
      v16,
      v15,
      (__int64 *)va1,
      4LL,
      va2);
  }
  if ( v5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  v12 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v6;
    while ( v7[v6] );
    v9 = v6 + 1;
    v12 = v7 == 0LL;
  }
  if ( v12 )
    v7 = "NULL";
  LOWORD(v20) = 18;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
           v20,
           (__int64 *)va,
           8LL,
           v7,
           v9,
           v5,
           v11,
           (__int64 *)va1,
           4LL,
           va2);
}
