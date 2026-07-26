/*
 * XREFs of ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140066100
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x140164990 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisRemoveOpenFromGlobalList(struct _NDIS_OPEN_BLOCK *a1)
{
  unsigned __int8 v2; // di
  KIRQL v3; // dl
  struct _NDIS_OPEN_BLOCK **i; // rcx
  struct _NDIS_OPEN_BLOCK *v5; // rax

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      115,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = &ndisGlobalOpenList; ; i = &v5->NextGlobalOpen )
  {
    v5 = *i;
    if ( !*i )
      break;
    if ( v5 == a1 )
    {
      v2 = 1;
      *i = a1->NextGlobalOpen;
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      116,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  return v2;
}
