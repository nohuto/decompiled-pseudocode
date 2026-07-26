/*
 * XREFs of NdisFreeNetBufferPool @ 0x14008C140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z @ 0x140067450 (-ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z.c)
 */

void __stdcall NdisFreeNetBufferPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      21,
      13,
      (struct _GUID *)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
      (char)PoolHandle);
  if ( PoolHandle )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_14011E888);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 8);
    if ( v3[1] != (char *)PoolHandle + 64
      || (v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9), *v4 != (char *)PoolHandle + 64) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&qword_14011E888, v2);
    ndisPplDestroyPool((char *)PoolHandle);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        21,
        14,
        (struct _GUID *)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
        (char)PoolHandle);
  }
}
