/*
 * XREFs of NdisFreeNetBufferListPool @ 0x140067350
 * Callers:
 *     ndisUnloadPeriodicReceives @ 0x140190AAC (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z @ 0x140067450 (-ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z.c)
 */

void __stdcall NdisFreeNetBufferListPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8
  unsigned int v5; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      21,
      15,
      (struct _GUID *)&WPP_36a745c202a83a4a454afaf507a1e2bb_Traceguids,
      (char)PoolHandle);
  if ( PoolHandle )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_14011E890);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9);
    if ( v3[1] != (char *)PoolHandle + 72
      || (v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 10), *v4 != (char *)PoolHandle + 72) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&qword_14011E890, v2);
    ndisPplDestroyPool(PoolHandle, v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        21,
        16,
        (struct _GUID *)&WPP_36a745c202a83a4a454afaf507a1e2bb_Traceguids,
        (char)PoolHandle);
  }
}
