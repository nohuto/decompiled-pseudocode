/*
 * XREFs of WPP_RECORDER_SF_qZD @ 0x14006CED0
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v8; // rcx
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rax
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  unsigned __int16 *v14; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, unsigned __int16 *);
  v5 = v14;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( !v14 )
  {
    v8 = 8LL;
    goto LABEL_10;
  }
  v8 = *v14;
  if ( !(_WORD)v8 )
  {
LABEL_10:
    v9 = L"NULL";
    goto LABEL_11;
  }
  v9 = (const wchar_t *)*((_QWORD *)v14 + 1);
LABEL_11:
  v10 = v14;
  if ( !v14 )
    v10 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
    0x2Fu,
    va,
    8LL,
    v10,
    2LL,
    v9,
    v8,
    va1,
    4LL,
    0LL);
LABEL_2:
  if ( !v5 )
    v5 = L"\b";
  LOWORD(v11) = 47;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids, v11, (__int64 *)va, 8LL, v5);
}
