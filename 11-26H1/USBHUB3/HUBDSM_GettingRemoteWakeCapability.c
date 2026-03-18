/*
 * XREFs of HUBDSM_GettingRemoteWakeCapability @ 0x140022F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EE1C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingRemoteWakeCapability(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 408) & 0x1C;
  *(_BYTE *)(v1 + 409) = 0;
  *(_DWORD *)(v1 + 412) = 0x20000;
  *(_BYTE *)(v1 + 408) = v2 | 0x81;
  *(_WORD *)(v1 + 410) = 0;
  v3 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 256,
         (__int64)HUBDTX_ControlTransferComplete,
         v1 + 1740,
         2,
         1,
         *(_BYTE *)(v1 + 1520));
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x1Eu,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v5);
    }
    HUBSM_AddEvent(v1 + 512, 4004);
  }
  return 1000LL;
}
