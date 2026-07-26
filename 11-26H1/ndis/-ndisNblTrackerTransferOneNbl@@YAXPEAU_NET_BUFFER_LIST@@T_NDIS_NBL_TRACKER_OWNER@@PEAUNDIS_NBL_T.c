/*
 * XREFs of ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x140037CA0
 * Callers:
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400A4A70 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 */

void __fastcall ndisNblTrackerTransferOneNbl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // r8

  if ( a2 )
  {
    if ( (a2 & 4) != 0 )
    {
LABEL_16:
      a4 |= 4uLL;
      goto LABEL_7;
    }
  }
  else if ( !a1[15] )
  {
    v11 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v11 & 1) != 0 )
      v11 = *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    a1[15] = v11;
  }
  v9 = (unsigned __int8 *)a1[15];
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        27,
        11,
        (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
        (char)a1);
    }
    goto LABEL_16;
  }
  v10 = *v9;
  if ( *v9 != 17 && v10 != 5 && v10 != 18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0xCu,
        (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
        (char)a1,
        *v9);
    goto LABEL_16;
  }
  if ( v9 != a5 || a1[3] )
  {
    ++*a6;
LABEL_7:
    a1[45] = a4;
    return;
  }
  ++*a7;
  ++*a6;
  a1[45] = 24LL;
}
