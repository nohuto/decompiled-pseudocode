/*
 * XREFs of TR_Enable_Internal @ 0x14001F0B0
 * Callers:
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140035FF0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140048FE0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x14001DDB8 (WPP_RECORDER_SF_DDqd.c)
 *     TR_InitializeTransferRing @ 0x14001E854 (TR_InitializeTransferRing.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_Enable_Internal(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  int v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+40h] [rbp-18h]

  TR_InitializeTransferRing((__int64)a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(a1[4] + 32LL))(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = a1[7];
    v7 = v2;
    v6 = *(_DWORD *)(v3 + 152);
    v5 = *(unsigned __int8 *)(a1[6] + 143LL);
    WPP_RECORDER_SF_DDqd(
      *(_QWORD *)(a1[5] + 72LL),
      4u,
      *(unsigned __int8 *)(a1[6] + 143LL),
      0x12u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      v5,
      v6,
      *(_QWORD *)(v3 + 24),
      v7);
  }
  return v2;
}
