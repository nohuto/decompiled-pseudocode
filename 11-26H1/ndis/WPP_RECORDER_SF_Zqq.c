/*
 * XREFs of WPP_RECORDER_SF_Zqq @ 0x140058AC0
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1401581C0 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140158470 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140166840 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ndisFindRootDevice @ 0x140179510 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Zqq(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6,
        char a7,
        ...)
{
  const wchar_t *v7; // rbx
  const wchar_t *v8; // rbp
  unsigned __int64 v11; // rdi
  int v13; // eax
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  const wchar_t *v17; // r8
  int v18; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a6;
  v8 = L"NULL";
  v11 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v13, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) < 4u )
    goto LABEL_2;
  if ( !a6 )
  {
    v15 = 8LL;
    goto LABEL_14;
  }
  v15 = *a6;
  if ( !(_WORD)v15 )
  {
LABEL_14:
    v16 = L"NULL";
    goto LABEL_15;
  }
  v16 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_15:
  v17 = a6;
  if ( !a6 )
    v17 = L"\b";
  ndisWppFastTraceMessage(a5, a4, v17, 2LL, v16, v15, &a7, 8LL, va, 8LL, 0LL);
LABEL_2:
  if ( a6 && *a6 )
    v8 = (const wchar_t *)*((_QWORD *)a6 + 1);
  if ( !a6 )
    v7 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v18, v7, 2LL, v8);
}
