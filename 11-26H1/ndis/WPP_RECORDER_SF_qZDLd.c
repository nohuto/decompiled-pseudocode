/*
 * XREFs of WPP_RECORDER_SF_qZDLd @ 0x1400ABC84
 * Callers:
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x14004CD50 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZDLd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v7; // rcx
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rax
  int v11; // [rsp+20h] [rbp-88h]
  __int64 v12; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  unsigned __int16 *v14; // [rsp+E0h] [rbp+38h]
  __int64 v15; // [rsp+E8h] [rbp+40h] BYREF
  va_list va1; // [rsp+E8h] [rbp+40h]
  __int64 v17; // [rsp+F0h] [rbp+48h] BYREF
  va_list va2; // [rsp+F0h] [rbp+48h]
  va_list va3; // [rsp+F8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, unsigned __int16 *);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v5 = v14;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !v14 )
  {
    v7 = 8LL;
    goto LABEL_7;
  }
  v7 = *v14;
  if ( !*v14 )
  {
LABEL_7:
    v8 = L"NULL";
    goto LABEL_8;
  }
  v8 = (const wchar_t *)*((_QWORD *)v14 + 1);
LABEL_8:
  v9 = v14;
  if ( !v14 )
    v9 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
    0x36u,
    va,
    8LL,
    v9,
    2LL,
    v8,
    v7,
    va1,
    4LL,
    va2,
    4LL,
    va3,
    4LL,
    0LL);
LABEL_11:
  if ( !v5 )
    v5 = L"\b";
  LOWORD(v11) = 54;
  return WppAutoLogTrace(a1, 4LL, 14LL, &WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids, v11, (__int64 *)va, 8LL, v5);
}
