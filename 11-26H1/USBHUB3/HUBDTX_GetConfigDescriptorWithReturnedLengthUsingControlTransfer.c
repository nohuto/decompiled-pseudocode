/*
 * XREFs of HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x14002B4EC
 * Callers:
 *     HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength @ 0x140022690 (HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x14002B5F0 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer(__int64 a1)
{
  __int64 Pool2; // rax
  int v3; // edx
  int v4; // r9d
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-20h]

  Pool2 = ExAllocatePool2(64LL, *(unsigned __int16 *)(a1 + 1742), 1681082453LL);
  *(_QWORD *)(a1 + 2024) = Pool2;
  if ( Pool2 )
  {
    LOBYTE(v4) = 2;
    result = HUBDTX_GetDescriptor(a1, Pool2, *(unsigned __int16 *)(a1 + 1742), v4, 0, 0);
    if ( (int)result >= 0 )
      return result;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        v3,
        5,
        38,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
    }
    LODWORD(result) = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x27u,
      (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
      v6);
  }
  return HUBSM_AddEvent(a1 + 512, 4004);
}
