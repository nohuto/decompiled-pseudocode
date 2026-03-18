/*
 * XREFs of WPP_RECORDER_SF_Zd @ 0x140036188
 * Callers:
 *     HUBREG_OpenPortSubkey @ 0x140088A40 (HUBREG_OpenPortSubkey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_Zd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rbx
  __int64 v9; // rcx
  const wchar_t *v10; // r8
  const wchar_t *v11; // rdx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v7 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0 || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    goto LABEL_11;
  if ( !a6 )
  {
    v9 = 8LL;
    goto LABEL_7;
  }
  v9 = *a6;
  if ( !*a6 )
  {
LABEL_7:
    v10 = L"NULL";
    goto LABEL_8;
  }
  v10 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_8:
  v11 = a6;
  if ( !a6 )
    v11 = L"\b";
  ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
    WPP_GLOBAL_Control->AttachedDevice,
    43LL,
    &WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
    161LL,
    v11,
    2LL,
    v10,
    v9,
    va,
    4LL,
    0LL);
LABEL_11:
  v12 = a6 == 0LL;
  if ( a6 )
  {
    if ( *a6 )
      v6 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v12 = a6 == 0LL;
  }
  if ( v12 )
    v7 = L"\b";
  LOWORD(v14) = 161;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_6348287eaa4439ce1c5af6747761b290_Traceguids, v14, v7, 2LL, v6);
}
