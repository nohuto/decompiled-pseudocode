/*
 * XREFs of WPP_RECORDER_SF_qSD @ 0x14006035C
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1400AFD98 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp-10h]
  __int64 v17; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const wchar_t *v19; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, const wchar_t *);
  v5 = v19;
  v6 = -1LL;
  v8 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v19 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v19[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = v19;
    if ( !v19 )
      v11 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8cd4999731163fb3621cd0c511e30926_Traceguids,
      12LL,
      (__int64 *)va,
      8LL,
      v11,
      v10,
      va1,
      4LL,
      0LL);
  }
  v12 = v5 == 0LL;
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v8 = 2 * v6 + 2;
    v12 = v5 == 0LL;
  }
  if ( v12 )
    v5 = L"NULL";
  LOWORD(v14) = 12;
  return WppAutoLogTrace(
           a1,
           2LL,
           21LL,
           &WPP_8cd4999731163fb3621cd0c511e30926_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           v5,
           v8,
           va1,
           4LL,
           0LL,
           v15,
           v16);
}
