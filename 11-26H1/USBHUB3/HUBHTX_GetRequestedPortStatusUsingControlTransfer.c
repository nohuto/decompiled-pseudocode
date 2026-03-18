/*
 * XREFs of HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x140005170
 * Callers:
 *     HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer @ 0x140009350 (HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EE1C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetRequestedPortStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // al
  unsigned __int16 v4; // bp
  __int64 *v5; // rdi
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 2600);
  v3 = *(_BYTE *)(a1 + 968) & 0x1C;
  *(_BYTE *)(a1 + 969) = 0;
  *(_BYTE *)(a1 + 968) = v3 | 0xA3;
  *(_WORD *)(a1 + 972) = *(_WORD *)(v1 + 200);
  v4 = (*(_DWORD *)(v1 + 204) & 0x100) != 0 ? 8 : 4;
  *(_WORD *)(a1 + 970) = (*(_DWORD *)(v1 + 204) & 0x100) != 0 ? 2 : 0;
  *(_WORD *)(a1 + 974) = v4;
  v5 = (__int64 *)(a1 + 2536);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *(unsigned __int16 *)(v1 + 200);
    WPP_RECORDER_SF_d(*v5, 4u, 3u, 0x70u, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v7);
  }
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 248),
             a1,
             (int)a1 + 816,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1 + 184,
             v4,
             0,
             *(_BYTE *)(a1 + 2288));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = result;
      WPP_RECORDER_SF_d(*v5, 2u, 3u, 0x71u, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v8);
    }
    return HUBSM_AddEvent(a1 + 1280, 2004LL);
  }
  return result;
}
