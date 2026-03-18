/*
 * XREFs of Isoch_CommonBufferCallback @ 0x140038250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     Isoch_MapTransfers @ 0x1400101E0 (Isoch_MapTransfers.c)
 */

__int64 __fastcall Isoch_CommonBufferCallback(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 344) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      a2,
      14,
      12,
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      *(_DWORD *)(a1 + 108));
  }
  return Isoch_MapTransfers(a1, a2);
}
