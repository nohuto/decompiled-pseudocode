/*
 * XREFs of WPP_RECORDER_SF_LLq @ 0x1400A33C4
 * Callers:
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007F700 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x140084DD0 (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LLq(__int64 a1, int a2, int a3, unsigned __int16 a4, struct _GUID *a5, char a6, char a7, ...)
{
  int v10; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ndisWppFastTraceMessage(a5, a4, &a6, 4LL, &a7, 4LL, va, 8LL, 0LL);
  LOWORD(v10) = a4;
  return WppAutoLogTrace(a1, 2LL, 24LL, a5, v10, &a6, 4LL, &a7);
}
