/*
 * XREFs of WPP_RECORDER_SF_DDDssDssqq @ 0x14004A548
 * Callers:
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_DDDssDssqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r14
  const char *v8; // r15
  __int64 v9; // r10
  const char *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  const char *v13; // r11
  __int64 v14; // rax
  __int64 v15; // r13
  const char *v16; // r8
  __int64 v17; // rax
  __int64 v18; // r9
  const char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  const char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // zf
  int v28; // [rsp+28h] [rbp-A9h]
  __int64 v30; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va; // [rsp+130h] [rbp+5Fh]
  __int64 v32; // [rsp+138h] [rbp+67h] BYREF
  va_list va1; // [rsp+138h] [rbp+67h]
  __int64 v34; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+6Fh]
  const char *v36; // [rsp+148h] [rbp+77h]
  const char *v37; // [rsp+150h] [rbp+7Fh]
  __int64 v38; // [rsp+158h] [rbp+87h] BYREF
  va_list va3; // [rsp+158h] [rbp+87h]
  __int64 v40; // [rsp+160h] [rbp+8Fh]
  const char *v41; // [rsp+168h] [rbp+97h]
  __int64 v42; // [rsp+170h] [rbp+9Fh] BYREF
  va_list va4; // [rsp+170h] [rbp+9Fh]
  va_list va5; // [rsp+178h] [rbp+A7h] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v30 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v34 = va_arg(va3, _QWORD);
  v36 = va_arg(va3, const char *);
  v37 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v38 = va_arg(va4, _QWORD);
  v40 = va_arg(va4, _QWORD);
  v41 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v42 = va_arg(va5, _QWORD);
  v5 = (__int64)v41;
  v6 = -1LL;
  v7 = v40;
  v8 = v37;
  v9 = a1;
  v10 = v36;
  v11 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v41 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v41[v12] );
      v40 = v12 + 1;
    }
    else
    {
      v40 = 5LL;
    }
    v13 = v41;
    if ( !v41 )
      v13 = "NULL";
    if ( v7 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(v7 + v14) );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = (const char *)v7;
    if ( !v7 )
      v16 = "NULL";
    if ( v37 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v37[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = v37;
    if ( !v37 )
      v19 = "NULL";
    if ( v36 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v36[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = v36;
    if ( !v36 )
      v22 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v22,
      v21,
      v19,
      v18,
      (__int64 *)va3,
      4LL,
      v16,
      v15,
      v13,
      v40,
      (__int64 *)va4,
      8LL,
      va5,
      8LL,
      0LL);
    v9 = a1;
    v5 = (__int64)v41;
  }
  if ( v5 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v5 + v23) );
  }
  if ( v7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v7 + v24) );
  }
  if ( v8 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v8[v25] );
  }
  if ( !v8 )
    v8 = "NULL";
  v26 = v10 == 0LL;
  if ( v10 )
  {
    do
      ++v6;
    while ( v10[v6] );
    v11 = v6 + 1;
    v26 = v10 == 0LL;
  }
  if ( v26 )
    v10 = "NULL";
  LOWORD(v28) = 16;
  return WppAutoLogTrace(
           v9,
           4LL,
           20LL,
           &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
           v28,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           v10,
           v11,
           v8);
}
