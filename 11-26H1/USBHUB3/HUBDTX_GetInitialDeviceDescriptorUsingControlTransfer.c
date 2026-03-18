/*
 * XREFs of HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x14002B990
 * Callers:
 *     HUBDSM_GettingDeviceDescriptorInReEnumAtZero @ 0x140022860 (HUBDSM_GettingDeviceDescriptorInReEnumAtZero.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x14002B5F0 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h]

  result = HUBDTX_GetDescriptor(a1, a1 + 1740, 64, 1, 0, 0);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v3) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x2Au,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v3);
    }
    return HUBSM_AddEvent(a1 + 512, 4004);
  }
  return result;
}
