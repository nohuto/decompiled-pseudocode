/*
 * XREFs of WPP_RECORDER_SF_dqssdddd @ 0x14003B65C
 * Callers:
 *     ACPIThermalWorker @ 0x1400C6DC0 (ACPIThermalWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dqssdddd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  const char *v5; // rbx
  const char *v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // r15d
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r9
  const char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  const char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+28h] [rbp-89h]
  __int64 v22; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va; // [rsp+100h] [rbp+4Fh]
  __int64 v24; // [rsp+108h] [rbp+57h] BYREF
  va_list va1; // [rsp+108h] [rbp+57h]
  const char *v26; // [rsp+110h] [rbp+5Fh]
  const char *v27; // [rsp+118h] [rbp+67h]
  va_list va2; // [rsp+120h] [rbp+6Fh] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  v26 = va_arg(va2, const char *);
  v27 = va_arg(va2, const char *);
  v5 = v27;
  v6 = v26;
  v7 = -1LL;
  v8 = a4;
  v10 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v27 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v27[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = v27;
    if ( !v27 )
      v13 = "NULL";
    if ( v26 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v26[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = v26;
    if ( !v26 )
      v16 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
      v8,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      v16,
      v15,
      v13,
      v12,
      va2);
  }
  if ( v5 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v5[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  v19 = v6 == 0LL;
  if ( v6 )
  {
    do
      ++v7;
    while ( v6[v7] );
    v10 = v7 + 1;
    v19 = v6 == 0LL;
  }
  if ( v19 )
    v6 = "NULL";
  LOWORD(v21) = v8;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
           v21,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           v6,
           v10,
           v5,
           v18,
           va2);
}
