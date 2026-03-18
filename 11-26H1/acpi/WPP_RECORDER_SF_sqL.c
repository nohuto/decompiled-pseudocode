/*
 * XREFs of WPP_RECORDER_SF_sqL @ 0x140018CD4
 * Callers:
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x140018ADC (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1400D14C8 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_sqL(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  __int64 v6; // rdi
  unsigned __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rbp
  const char *v12; // rbx
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rax
  __int64 v17; // rdx
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+60h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-20h]
  __int64 v22; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v23 = va_arg(va1, _QWORD);
  v22 = a1;
  v6 = -1LL;
  v8 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = 5LL;
  v12 = a6;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
  {
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      v18,
      v17,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
    a1 = v22;
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v10 = v6 + 1;
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v12 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v19, v12, v10, (__int64 *)va, 8LL, va1, 4LL, 0LL, v20, v21);
}
