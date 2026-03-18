/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum @ 0x14004EA40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDqqss @ 0x14005D7F4 (WPP_RECORDER_SF_qDqqss.c)
 */

__int64 __fastcall ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r10d
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r9d
  __int64 v7; // rcx

  v3 = *(_DWORD *)(a3 + 56);
  if ( (*(_BYTE *)(a1 + 16) & 8) != 0 )
  {
    v4 = *(_QWORD *)(a3 + 40);
    v5 = 0;
    *(_DWORD *)(a3 + 56) = v3 | 0x1000000;
    if ( v4 )
      v5 = v4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 44;
LABEL_12:
      WPP_RECORDER_SF_qDqqss(WPP_GLOBAL_Control->DeviceExtension, v5, a3, v6);
    }
  }
  else if ( (v3 & 0x10000000) == 0
         && (unsigned int)(_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 1, 1) - 3) <= 1 )
  {
    v7 = *(_QWORD *)(a3 + 40);
    v5 = 0;
    *(_DWORD *)(a3 + 56) |= 0x10000000u;
    if ( v7 )
      v5 = v7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 45;
      goto LABEL_12;
    }
  }
  return 0LL;
}
