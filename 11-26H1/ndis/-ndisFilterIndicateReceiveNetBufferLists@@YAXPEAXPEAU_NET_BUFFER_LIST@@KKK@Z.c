/*
 * XREFs of ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x140040600 (--$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@A.c)
 *     ?NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x140050860 (-NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        _UNKNOWN **a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // r12d
  unsigned int v8; // r14d
  int v9; // r15d
  struct _NET_BUFFER_LIST *v10; // r13
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 v14; // r10
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  _SLIST_HEADER *Alignment; // rsi
  unsigned __int64 Region; // rbx
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int8 *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // r12d
  unsigned __int64 v26; // rdx
  unsigned __int8 v27; // al
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // edi
  int v32; // r12d
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  struct _NET_BUFFER_LIST *v36; // rcx
  unsigned int v37; // r8d
  struct _NET_BUFFER_LIST **p_Next; // rax
  unsigned __int64 v39; // rcx
  void (__fastcall *v40)(__int64, struct _NET_BUFFER_LIST *, __int64, _QWORD, unsigned int); // r15
  __int64 v41; // rsi
  __int64 v42; // rbx
  __int64 *v43; // r14
  unsigned __int64 v44; // rcx
  struct _NET_BUFFER_LIST *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rax
  struct _NET_BUFFER_LIST *v48; // rdi
  unsigned int v49; // esi
  struct _NET_BUFFER_LIST *v50; // r14
  unsigned int v51; // r12d
  unsigned int v52; // r13d
  __int64 v53; // rax
  unsigned int v54; // r15d
  bool v55; // zf
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int ChildRefCount; // edx
  __int64 NdisReserved2; // r8
  struct _NET_BUFFER_LIST *Scratch; // r13
  unsigned int v61; // r12d
  __int64 v62; // rax
  __int64 v63; // rcx
  struct _NET_BUFFER_LIST *v64; // rdi
  unsigned int v65; // edx
  struct _NET_BUFFER_LIST *v66; // r12
  unsigned int v67; // r13d
  unsigned int v68; // r14d
  __int64 v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // r9d
  unsigned __int64 v72; // r12
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // r8
  int v76; // ecx
  __int64 v77; // r8
  char v78[8]; // [rsp+30h] [rbp-A1h]
  char v79; // [rsp+40h] [rbp-91h]
  unsigned int v80; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int64 v81; // [rsp+50h] [rbp-81h] BYREF
  __int64 v82; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int64 v83; // [rsp+60h] [rbp-71h] BYREF
  unsigned __int64 v84; // [rsp+68h] [rbp-69h] BYREF
  __int128 Parameter; // [rsp+70h] [rbp-61h] BYREF
  __int128 v86; // [rsp+80h] [rbp-51h]
  unsigned __int64 v87; // [rsp+90h] [rbp-41h]
  unsigned int v88; // [rsp+98h] [rbp-39h]
  int v89; // [rsp+9Ch] [rbp-35h]
  unsigned __int64 LowLimit; // [rsp+A0h] [rbp-31h] BYREF
  unsigned __int64 HighLimit; // [rsp+A8h] [rbp-29h] BYREF
  void (__fastcall *v92)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // [rsp+B0h] [rbp-21h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-19h] BYREF
  _QWORD v94[12]; // [rsp+C0h] [rbp-11h] BYREF
  _UNKNOWN *retaddr; // [rsp+128h] [rbp+57h] BYREF
  __int64 v97; // [rsp+130h] [rbp+5Fh]
  unsigned int v98; // [rsp+130h] [rbp+5Fh]
  unsigned int v100; // [rsp+140h] [rbp+6Fh]
  unsigned int v102; // [rsp+150h] [rbp+7Fh]
  unsigned int v103; // [rsp+150h] [rbp+7Fh]
  unsigned int v104; // [rsp+150h] [rbp+7Fh]

  v100 = (unsigned int)a3;
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v6 = a1;
  v7 = a5;
  v8 = a4;
  v9 = (int)a3;
  v10 = a2;
  v11 = a1[53] + 96 * v5;
  v82 = v11;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_51;
  a3 = 0LL;
  v12 = a1[64];
  v13 = ndisNblTrackerEpoch;
  v81 = 0LL;
  v14 = a1[81];
  v5 = a5 & 2;
  v15 = 0LL;
  v84 = v14;
  v16 = 0LL;
  v80 = a5 & 1;
  v79 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    LOBYTE(a3) = (_DWORD)v5 != 0;
    ndisNblTrackerRecordEventInternal(a2, v14, (_DWORD)a3 + 130, (void *)v12, a5 & 1);
  }
  v17 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  v83 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  v18 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v12 & 1) != 0 )
  {
    v5 = 2 * v13;
    v18 = (2 * v13) ^ (v12 ^ (2 * v13)) & 0xFFFFFFFFFFFFFFFDuLL;
    v17 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v83 = v17;
  }
  Alignment = (_SLIST_HEADER *)v10;
  if ( v10 )
  {
    while ( 1 )
    {
      Region = Alignment[22].Region;
      v21 = v84;
      while ( Alignment[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_19;
        }
        else if ( !Alignment[7].Region )
        {
          v22 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (v21 & 1) != 0 )
            v22 = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
          Alignment[7].Region = v22;
        }
        v23 = (unsigned __int8 *)Alignment[7].Region;
        if ( v23 )
        {
          v27 = *v23;
          if ( *v23 == 17 || v27 == 5 || v27 == 18 )
          {
            if ( v23 != (unsigned __int8 *)v17 || Alignment[1].Region )
            {
              ++v15;
              v24 = v18;
            }
            else
            {
              ++v16;
              v24 = 24LL;
              ++v15;
            }
            goto LABEL_20;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v78 = *v23;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)Alignment,
              *(_QWORD *)v78);
            goto LABEL_18;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            27,
            11,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)Alignment);
LABEL_18:
          v17 = v83;
        }
LABEL_19:
        v24 = v18 | 4;
LABEL_20:
        Alignment[22].Region = v24;
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        if ( !Alignment )
          break;
      }
      v25 = v80;
      v5 = v81 - v15;
      v81 -= v15;
      if ( (Region & 1) != 0 && v5 )
      {
        if ( (_BYTE)v80 || v79 )
        {
          v5 = 16 * ((Region >> 1) & 1);
          v26 = v5 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !(_BYTE)v80 )
            goto LABEL_37;
LABEL_47:
          v30 = KeGetPcr()->Prcb.Number << 12;
          v5 = *(_QWORD *)v26;
          *(_QWORD *)(v30 + *(_QWORD *)v26) += v81;
        }
        else
        {
          v79 = 1;
          if ( KeGetCurrentIrql() == 2 )
          {
            LOBYTE(v25) = 1;
            v80 = v25;
            v26 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            goto LABEL_47;
          }
          LOBYTE(v25) = 0;
          v5 = 16 * ((Region >> 1) & 1);
          v80 = v25;
          v26 = v5 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_37:
          _InterlockedAdd64((volatile signed __int64 *)(v26 + 8), v81);
        }
      }
      v17 = v83;
      a3 = &WPP_RECORDER_INITIALIZED;
      v81 = v15;
      if ( !Alignment )
      {
        v10 = a2;
        v7 = a5;
        break;
      }
    }
  }
  v28 = v15 - v16;
  if ( (v18 & 1) != 0 && v28 )
  {
    if ( (_BYTE)v80 || v79 )
    {
      v5 = 16 * ((v18 >> 1) & 1);
      v29 = v5 + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( (_BYTE)v80 )
        goto LABEL_58;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v29 = 16 * ((v18 >> 1) & 1) + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_58:
        v34 = KeGetPcr()->Prcb.Number << 12;
        v5 = *(_QWORD *)v29;
        *(_QWORD *)(v34 + *(_QWORD *)v29) += v28;
        goto LABEL_50;
      }
      v5 = 16 * ((v18 >> 1) & 1);
      v29 = v5 + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v29 + 8), v28);
  }
LABEL_50:
  v9 = v100;
  v11 = v82;
  v6 = a1;
  v8 = a4;
LABEL_51:
  v31 = v7 & 2;
  if ( (v7 & 2) != 0 || (v7 & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v11 + 64) )
  {
    v40 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64, _QWORD, unsigned int))v6[62];
    v41 = v6[63];
    v42 = v6[65];
    v81 = (unsigned __int64)v40;
    v82 = v41;
    if ( *(_BYTE *)v42 == 17 )
    {
      v40(v41, v10, v100, v8, v7);
    }
    else
    {
      if ( (v7 & 2) == 0 && ((v7 & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        LODWORD(v5) = KeGetPcr()->Prcb.Number;
        v43 = v94;
        v10->Status = v100;
        v44 = v10->Link.Alignment;
        v102 = v5;
        v94[2] = 0LL;
        v94[0] = v10;
        v94[1] = v10;
        v10->Scratch = 0LL;
        v10->ChildRefCount = v7;
        if ( v44 )
        {
          *(_QWORD *)(v44 + 112) = a4;
          v5 = (unsigned int)v5;
        }
        if ( *(_BYTE *)v42 == 5 )
        {
          do
          {
            v45 = (struct _NET_BUFFER_LIST *)*v43;
            if ( !*v43 )
              break;
            v46 = v42;
            v47 = 96 * v5 + *(_QWORD *)(v42 + 424) + 48LL;
            v97 = v47;
            if ( *(_BYTE *)(v47 + 16) )
            {
              *v43 = 0LL;
              do
              {
                ChildRefCount = v45->ChildRefCount;
                NdisReserved2 = v45->NdisReserved2;
                Scratch = (struct _NET_BUFFER_LIST *)v45->Scratch;
                v103 = ChildRefCount;
                v98 = v45->NdisReserved2;
                if ( v45->Link.Alignment )
                  v61 = *(_DWORD *)(v45->Link.Alignment + 112);
                else
                  v61 = 1;
                v45->ChildRefCount = 0;
                if ( byte_14011F740 )
                {
                  if ( *(_BYTE *)v42 == 5 )
                  {
                    v62 = *(_QWORD *)(v42 + 872);
                    if ( v62 )
                    {
                      if ( (*(_DWORD *)(v62 + 56) & 1) != 0 )
                      {
                        PktMonClientNblLogNdis(v42 + 848, v45, NdisReserved2, 1LL);
                        ChildRefCount = v103;
                        NdisReserved2 = v98;
                      }
                    }
                  }
                }
                if ( ndisVerifierNdisDispatch && *(_BYTE *)v42 == 5 && (v63 = *(_QWORD *)(v42 + 776)) != 0 )
                  (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64, _QWORD, unsigned int, __int64, void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64, _QWORD, unsigned int)))ndisVerifierNdisDispatch
                   + 14))(
                    v41,
                    v45,
                    NdisReserved2,
                    v61,
                    ChildRefCount,
                    v63,
                    v40);
                else
                  v40(v41, v45, NdisReserved2, v61, ChildRefCount);
                v45 = Scratch;
              }
              while ( Scratch );
              break;
            }
            *(_BYTE *)(v47 + 16) = 1;
            v48 = (struct _NET_BUFFER_LIST *)*v43;
            *v43 = 0LL;
            if ( v48 )
            {
              do
              {
                v49 = 1;
                v50 = (struct _NET_BUFFER_LIST *)v48->Scratch;
                v51 = v48->ChildRefCount;
                v52 = v48->NdisReserved2;
                if ( v48->Link.Alignment )
                  v49 = *(_DWORD *)(v48->Link.Alignment + 112);
                v48->ChildRefCount = 0;
                if ( byte_14011F740 )
                {
                  if ( *(_BYTE *)v42 == 5 )
                  {
                    v53 = *(_QWORD *)(v42 + 872);
                    if ( v53 )
                    {
                      if ( (*(_DWORD *)(v53 + 56) & 1) != 0 )
                      {
                        v54 = *(_DWORD *)(v42 + 880);
                        v55 = (v48->NblFlags & 0x8000) == 0;
                        Parameter = 0LL;
                        LODWORD(v87) = 0;
                        v86 = 0LL;
                        if ( v55 && ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                        {
                          *((_QWORD *)&Parameter + 1) = v48;
                          v87 = 0LL;
                          v56 = *(_QWORD *)(v42 + 864);
                          LOWORD(Parameter) = 40;
                          LODWORD(v86) = 1;
                          *(_QWORD *)((char *)&v86 + 4) = v54 | 0x100000000LL;
                          (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011F760
                                                                                        + 1)
                                                                                      + 40LL))(
                            xmmword_14011F760,
                            v56,
                            &Parameter,
                            0LL);
                          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                        }
                        v40 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64, _QWORD, unsigned int))v81;
                      }
                    }
                  }
                }
                if ( ndisVerifierNdisDispatch && *(_BYTE *)v42 == 5 && (v57 = *(_QWORD *)(v42 + 776)) != 0 )
                  (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64, _QWORD, unsigned int)))ndisVerifierNdisDispatch
                   + 14))(
                    v82,
                    v48,
                    v52,
                    v49,
                    v51,
                    v57,
                    v40);
                else
                  v40(v82, v48, v52, v49, v51);
                v48 = v50;
              }
              while ( v50 );
              v47 = v97;
              v46 = v42;
            }
            *(_BYTE *)(v47 + 16) = 0;
            v43 = (__int64 *)v47;
            v42 = *(_QWORD *)(v42 + 520);
            v40 = *(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64, _QWORD, unsigned int))(v46 + 496);
            v41 = *(_QWORD *)(v46 + 504);
            v5 = v102;
            v55 = *(_BYTE *)v42 == 5;
            v81 = (unsigned __int64)v40;
            v82 = v41;
          }
          while ( v55 );
        }
        v64 = (struct _NET_BUFFER_LIST *)*v43;
        if ( *v43 )
        {
          *v43 = 0LL;
          do
          {
            v65 = v64->NdisReserved2;
            v66 = (struct _NET_BUFFER_LIST *)v64->Scratch;
            v67 = v64->ChildRefCount;
            v104 = v65;
            if ( v64->Link.Alignment )
              v68 = *(_DWORD *)(v64->Link.Alignment + 112);
            else
              v68 = 1;
            v64->ChildRefCount = 0;
            if ( byte_14011F740 )
            {
              if ( *(_BYTE *)v42 == 5 )
              {
                v69 = *(_QWORD *)(v42 + 872);
                if ( v69 )
                {
                  if ( (*(_DWORD *)(v69 + 56) & 1) != 0 )
                  {
                    PktMonClientNblLogNdis(v42 + 848, v64, a3, 1LL);
                    v65 = v104;
                  }
                }
              }
            }
            if ( ndisVerifierNdisDispatch && *(_BYTE *)v42 == 5 && (v70 = *(_QWORD *)(v42 + 776)) != 0 )
              (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64, _QWORD, unsigned int)))ndisVerifierNdisDispatch
               + 14))(
                v41,
                v64,
                v65,
                v68,
                v67,
                v70,
                v40);
            else
              v40(v41, v64, v65, v68, v67);
            v64 = v66;
          }
          while ( v66 );
        }
        return;
      }
      v71 = v100;
      v80 = v7;
      v72 = (unsigned int)Size;
      v73 = KeGetPcr()->Prcb.Number << 12;
      LODWORD(v83) = v8;
      v92 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v40;
      v82 = v41;
      v74 = *(_QWORD *)(v73 + qword_14011EF88);
      LowLimit = v74;
      v93 = v42;
      LODWORD(v81) = v100;
      v75 = *(_QWORD *)(v73 + qword_14011EF80);
      HighLimit = v75;
      v84 = (unsigned __int64)v10;
      if ( v74 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v75 )
      {
        IoGetStackLimits(&LowLimit, &HighLimit);
        v74 = LowLimit;
        v71 = v100;
      }
      if ( (unsigned __int64)&retaddr - v74 < v72 )
      {
        LOBYTE(v7) = a5;
        v76 = 24576;
        v89 = 0;
        *(_QWORD *)&Parameter = v42;
        *((_QWORD *)&Parameter + 1) = v41;
        *(_QWORD *)&v86 = v40;
        *((_QWORD *)&v86 + 1) = v10;
        v87 = __PAIR64__(a4, v71);
        v88 = a5;
        if ( (unsigned int)Size > 0x6000 )
          v76 = Size;
        if ( KeExpandKernelStackAndCalloutEx(
               ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
               &Parameter,
               v76,
               0,
               0LL) < 0 )
        {
          if ( byte_14011F740 && (*(_DWORD *)(v42 + 840) & 2) != 0 )
            PktMonClientNblDropNdis(v42 + 784, (__int64)v10, v77, 1LL, -1073741670, -536866813);
          NdisSetStatusInNblChain(v10, -1073741670);
          _InterlockedAdd((volatile signed __int32 *)(v42 + 292), NdisNumNblsInNblChain(v10));
          if ( !v31 )
          {
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v42, v10, 0);
            return;
          }
LABEL_74:
          if ( *(_DWORD *)ndisNblTrackerMode )
            ndisNblTrackerTransferOwnershipInternal(
              v10,
              (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[64],
              a1[81],
              0x8Cu,
              v7 & 1);
          return;
        }
      }
      else
      {
        ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
          (unsigned int)&v93,
          (unsigned int)&v92,
          (unsigned int)&v82,
          (unsigned int)&v84,
          (__int64)&v81,
          (__int64)&v83,
          (__int64)&v80);
        LOBYTE(v7) = a5;
      }
    }
    if ( !v31 )
      return;
    goto LABEL_74;
  }
  v32 = v7 | 1;
  v33 = v11 + 56;
  if ( !*(_QWORD *)(v11 + 48) )
  {
    *(_QWORD *)(v11 + 48) = v10;
    goto LABEL_69;
  }
  v35 = *(_QWORD *)v33;
  if ( v9 != *(_DWORD *)(*(_QWORD *)v33 + 140LL) || v32 != *(_DWORD *)(v35 + 132) || (v32 & 0xCB00) != 0 )
  {
    *(_QWORD *)(v35 + 112) = v10;
LABEL_69:
    *(_QWORD *)v33 = v10;
    v39 = v10->Link.Alignment;
    v10->Scratch = 0LL;
    v10->ChildRefCount = v32;
    v10->Status = v9;
    if ( v39 )
      *(_QWORD *)(v39 + 112) = v8;
    return;
  }
  v36 = *(struct _NET_BUFFER_LIST **)v35;
  if ( *(_QWORD *)v35 )
  {
    v37 = v8 + LODWORD(v36->Scratch);
    do
    {
      p_Next = &v36->Next;
      v36 = (struct _NET_BUFFER_LIST *)v36->Link.Alignment;
    }
    while ( v36 );
  }
  else
  {
    v37 = v8 + 1;
    p_Next = *(struct _NET_BUFFER_LIST ***)v33;
  }
  *p_Next = v10;
  if ( *(_QWORD *)v35 )
    *(_QWORD *)(*(_QWORD *)v35 + 112LL) = v37;
}
