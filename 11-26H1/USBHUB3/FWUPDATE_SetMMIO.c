/*
 * XREFs of FWUPDATE_SetMMIO @ 0x14004293C
 * Callers:
 *     HUBHSM_WritingUsb4DromMetaData @ 0x14000A730 (HUBHSM_WritingUsb4DromMetaData.c)
 *     HUBHSM_WritingUsb4DromReadOpcode @ 0x14000A7A0 (HUBHSM_WritingUsb4DromReadOpcode.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x14002EE1C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall FWUPDATE_SetMMIO(__int64 a1, __int16 a2, __int64 a3)
{
  char v3; // al
  int v5; // edi
  __int64 v7; // [rsp+28h] [rbp-30h]

  v3 = *(_BYTE *)(a1 + 968);
  *(_BYTE *)(a1 + 969) = 65;
  *(_WORD *)(a1 + 970) = 1024;
  *(_BYTE *)(a1 + 968) = v3 & 0x1C | 0x40;
  *(_WORD *)(a1 + 972) = a2;
  *(_WORD *)(a1 + 974) = 4;
  v5 = HUBMISC_ControlTransfer(
         a1,
         *(_QWORD *)(a1 + 248),
         a1,
         (_QWORD *)(a1 + 816),
         (__int64)FWUPDATE_HubVendorControlTransferComplete,
         a3,
         4,
         0,
         *(_BYTE *)(a1 + 2288));
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v7) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2536),
      2u,
      3u,
      0x31u,
      (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
      v7);
  }
  return (unsigned int)v5;
}
