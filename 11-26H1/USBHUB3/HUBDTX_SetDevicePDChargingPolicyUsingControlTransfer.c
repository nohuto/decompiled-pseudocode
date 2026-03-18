/*
 * XREFs of HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x14002C1D0
 * Callers:
 *     HUBDSM_SettingDevicePDChargingPolicy @ 0x1400245F0 (HUBDSM_SettingDevicePDChargingPolicy.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EE1C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 408) &= 0x1Cu;
  *(_BYTE *)(a1 + 409) = 3;
  *(_WORD *)(a1 + 414) = 0;
  *(_WORD *)(a1 + 410) = 54;
  *(_WORD *)(a1 + 412) = (*(_DWORD *)(*(_QWORD *)a1 + 92LL) == 100) + 1;
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 24),
             a1,
             (int)a1 + 256,
             (__int64)HUBDTX_ControlTransferComplete,
             0LL,
             0,
             1,
             *(_BYTE *)(a1 + 1520));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v3) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x6Eu,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v3);
    }
    return HUBSM_AddEvent(a1 + 512, 4004);
  }
  return result;
}
