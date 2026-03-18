/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x140056D00
 * Callers:
 *     UsbhExceptionTrace @ 0x140033C60 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ds(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, const char *a7)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  const char *v12; // rcx
  int v14; // [rsp+20h] [rbp-48h]

  v7 = (__int64)a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = a7;
    if ( !a7 )
      v12 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
      12LL,
      &a6,
      4LL,
      v12,
      v11,
      0LL);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_BYTE *)(v7 + v8) );
  }
  LOWORD(v14) = 12;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids, v14, &a6);
}
