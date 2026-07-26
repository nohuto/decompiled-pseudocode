/*
 * XREFs of WPP_RECORDER_SF_ZqD @ 0x140061880
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140157420 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140158470 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZqD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rbx
  __int64 v11; // rax
  const wchar_t *v12; // rcx
  const wchar_t *v13; // r8
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v15 = va_arg(va1, _QWORD);
  v6 = L"NULL";
  v7 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( !a6 )
  {
    v11 = 8LL;
    goto LABEL_14;
  }
  v11 = *a6;
  if ( !(_WORD)v11 )
  {
LABEL_14:
    v12 = L"NULL";
    goto LABEL_15;
  }
  v12 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_15:
  v13 = a6;
  if ( !a6 )
    v13 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
    a4,
    v13,
    2LL,
    v12,
    v11,
    va,
    8LL,
    va1,
    4LL,
    0LL);
LABEL_2:
  if ( a6 && *a6 )
    v6 = (const wchar_t *)*((_QWORD *)a6 + 1);
  if ( !a6 )
    v7 = L"\b";
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 4LL, 28LL, &WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids, v14, v7, 2LL, v6);
}
