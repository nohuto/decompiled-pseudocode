/*
 * XREFs of HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x14002B224
 * Callers:
 *     HUBDSM_GettingBOSDescriptorHeader @ 0x140022630 (HUBDSM_GettingBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x14002B5F0 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(_QWORD *a1)
{
  void *v2; // rcx
  PVOID *v3; // rax
  void *v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-20h]

  v2 = (void *)a1[258];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  v3 = (PVOID *)a1[332];
  if ( v3 && *v3 )
    ExFreePoolWithTag(*v3, 0x64334855u);
  v4 = (void *)a1[332];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x64334855u);
  a1[258] = 0LL;
  a1[332] = 0LL;
  result = HUBDTX_GetDescriptor((_DWORD)a1, (int)a1 + 1740, 255, 15, 0, 0);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        5u,
        0x3Du,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v6);
    }
    return HUBSM_AddEvent((__int64)(a1 + 64), 4004);
  }
  return result;
}
