/*
 * XREFs of WPP_RECORDER_SF_dDq @ 0x1400575F0
 * Callers:
 *     NdisOidRequest @ 0x140057410 (NdisOidRequest.c)
 *     ndisFIndicateNicSwitchCapabilitiesChange @ 0x14009C438 (ndisFIndicateNicSwitchCapabilitiesChange.c)
 *     ndisFIndicateReceiveFilterCapabilitiesChange @ 0x14009C5AC (ndisFIndicateReceiveFilterCapabilitiesChange.c)
 *     ndisFIndicateSriovCapabilitiesChange @ 0x14009C71C (ndisFIndicateSriovCapabilitiesChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_dDq(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v9; // rdi
  unsigned int v11; // esi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 4LL, &a7, 4LL, va, 8LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v14, &a6, 4LL, &a7);
}
