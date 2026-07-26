/*
 * XREFs of ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1400160A0
 * Callers:
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140029030 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 */

char __fastcall ndisNblTrackerCanNblBeTracked(struct _NET_BUFFER_LIST *a1)
{
  char *SourceHandle; // rax
  int v2; // edx
  char v3; // cl
  char v5; // [rsp+28h] [rbp-20h]

  SourceHandle = (char *)a1->SourceHandle;
  v2 = (int)a1;
  if ( SourceHandle )
  {
    v3 = *SourceHandle;
    if ( *SourceHandle == 17 || v3 == 5 || v3 == 18 )
      return 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = v2;
      LOBYTE(v2) = 3;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v2,
        27,
        12,
        (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
        v5,
        v3);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 3;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      27,
      11,
      (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
      (char)a1);
  }
  return 0;
}
