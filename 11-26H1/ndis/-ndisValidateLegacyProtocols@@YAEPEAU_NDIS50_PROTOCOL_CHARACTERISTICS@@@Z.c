/*
 * XREFs of ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1400BB958
 * Callers:
 *     NdisRegisterProtocol @ 0x1400BBFE0 (NdisRegisterProtocol.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_ZL @ 0x140090870 (WPP_RECORDER_SF_ZL.c)
 */

char __fastcall ndisValidateLegacyProtocols(struct _NDIS50_PROTOCOL_CHARACTERISTICS *a1, __int64 a2, __int64 a3)
{
  char v4; // di
  int v6; // [rsp+20h] [rbp-28h]

  v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x12u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      &a1->Ndis40Chars.Name.Length);
  if ( !a1->Ndis40Chars.BindAdapterHandler
    || !a1->Ndis40Chars.UnbindAdapterHandler
    || !a1->Ndis40Chars.OpenAdapterCompleteHandler
    || !a1->Ndis40Chars.CloseAdapterCompleteHandler )
  {
    DbgPrint("ndisValidateLegacyProtocols: protocol does not have Bind/UnbindAdapterHandler and it is not supported.\n");
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&a1->2 + 88,
      a3,
      0x13u,
      v6,
      &a1->Ndis40Chars.Name.Length);
  return v4;
}
