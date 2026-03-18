/*
 * XREFs of WPP_RECORDER_SF_sqqD @ 0x140066DC8
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1400545E0 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400B51C0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_sqqD(
        __int64 a1,
        _DWORD a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  const char *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v10; // rsi
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  const char *v16; // rcx
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v22; // [rsp+C8h] [rbp+40h] BYREF
  va_list va1; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  v6 = a6;
  v7 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = 5LL;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= 2u )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      &WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
      a4,
      v16,
      v15,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = v7 + 1;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v6 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           a3,
           &WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
           v19,
           v6,
           v12,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
