/*
 * XREFs of Isoch_EP_Enable @ 0x14002CEE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall Isoch_EP_Enable(__int64 a1)
{
  __int64 v2; // rcx
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = *(_QWORD *)(a1 + 56);
    v5 = *(_DWORD *)(v2 + 152);
    v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v2 + 80),
      4u,
      0xEu,
      0xDu,
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      v4,
      v5);
  }
  *(_BYTE *)(a1 + 342) = 1;
  return 0LL;
}
