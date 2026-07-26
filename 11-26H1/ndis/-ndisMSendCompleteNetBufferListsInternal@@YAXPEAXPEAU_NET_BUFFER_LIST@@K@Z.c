/*
 * XREFs of ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140038FC0
 * Callers:
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140038E40 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x140024390 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(_DWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  struct _NET_BUFFER_LIST *v3; // rbx
  unsigned int Number; // esi
  char v5; // di
  struct _NDIS_OPEN_BLOCK *v6; // rbp
  struct _NDIS_OPEN_BLOCK *v7; // r10
  _QWORD *p_Alignment; // r14
  unsigned __int64 v9; // r9
  __int64 v10; // r12
  __int16 v11; // r15
  unsigned int v12; // r13d
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *v14; // rdi
  _SLIST_HEADER *v15; // rax
  unsigned int v16; // edi
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  struct _NDIS_OPEN_BLOCK *v20; // r9
  __int64 v21; // r14
  char v22; // r8
  unsigned __int64 NblTracker; // rdi
  unsigned int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // r10
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  _SLIST_HEADER *v29; // r14
  unsigned __int64 v30; // rdi
  unsigned __int8 *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r10
  __int64 v34; // rcx
  KIRQL v35; // al
  unsigned __int64 v36; // rdx
  _SLIST_HEADER *v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  _SLIST_HEADER *Alignment; // rdx
  unsigned int v41; // r8d
  _QWORD *Region; // rcx
  int i; // eax
  KIRQL CurrentIrql; // al
  __int64 v45; // rcx
  __int64 v46; // r14
  unsigned __int64 v47; // rdi
  unsigned int v48; // r8d
  __int64 v49; // r9
  struct _NET_BUFFER_LIST *v50; // rbp
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rbx
  _SLIST_HEADER *v53; // r14
  unsigned __int64 v54; // rdi
  unsigned __int8 *v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // r9
  __int64 v58; // rcx
  unsigned __int64 v59; // rbp
  unsigned __int64 v60; // rdx
  KIRQL v61; // al
  __int64 v62; // rcx
  __int64 v63; // [rsp+30h] [rbp-C8h]
  __int64 v64; // [rsp+40h] [rbp-B8h]
  __int64 v65; // [rsp+40h] [rbp-B8h]
  struct _NET_BUFFER_LIST *v66; // [rsp+48h] [rbp-B0h]
  struct _NET_BUFFER_LIST *v67; // [rsp+48h] [rbp-B0h]
  struct _NET_BUFFER_LIST *v68; // [rsp+48h] [rbp-B0h]
  __int64 v69; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v70; // [rsp+50h] [rbp-A8h]
  __int16 v71; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v72; // [rsp+60h] [rbp-98h]
  unsigned __int64 v73; // [rsp+60h] [rbp-98h]
  struct _NDIS_OPEN_BLOCK *v74; // [rsp+68h] [rbp-90h]
  char v75; // [rsp+70h] [rbp-88h]
  __int64 v76; // [rsp+78h] [rbp-80h]
  unsigned __int64 v77; // [rsp+78h] [rbp-80h]
  struct _NET_BUFFER_LIST *v78; // [rsp+80h] [rbp-78h]
  __int64 v79; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 v80; // [rsp+90h] [rbp-68h]
  int v81; // [rsp+98h] [rbp-60h]
  struct _NDIS_OPEN_BLOCK *v82; // [rsp+A0h] [rbp-58h]
  struct _NET_BUFFER_LIST *v83; // [rsp+100h] [rbp+8h]
  char v84; // [rsp+100h] [rbp+8h]
  char v85; // [rsp+100h] [rbp+8h]
  KIRQL v86; // [rsp+108h] [rbp+10h]
  char v88; // [rsp+118h] [rbp+20h]
  char v89; // [rsp+118h] [rbp+20h]

  v3 = a2;
  LODWORD(a2) = a1[12];
  Number = -1;
  v82 = 0LL;
  v5 = a3;
  v74 = 0LL;
  v6 = 0LL;
  v66 = 0LL;
  v7 = 0LL;
  v78 = 0LL;
  p_Alignment = 0LL;
  v83 = 0LL;
  v9 = 0LL;
  v79 = 0LL;
  v10 = 0LL;
  v75 = 0;
  v11 = 0;
  v80 = 0LL;
  LOWORD(v12) = 0;
  v71 = 0;
  v81 = -1;
  if ( (_DWORD)a2 || a1[20] )
  {
    v10 = *((_QWORD *)a1 + 5);
    v11 = (__int16)a2;
    v12 = a1[20];
    v75 = (char)a2;
    v80 = __PAIR64__(v12, (unsigned int)a2);
    v71 = v12;
    v79 = v10;
    if ( !v10 )
    {
      v10 = *((_QWORD *)a1 + 5);
      v79 = v10;
    }
  }
  v86 = 2;
  if ( (v11 & 0x280) != 0 || (v12 & 0x200) != 0 )
  {
    if ( (a3 & 1) == 0 )
    {
      v86 = KfRaiseIrql(2u);
      v9 = 0LL;
      v7 = 0LL;
    }
    if ( (v11 & 0x200) != 0 )
    {
      Alignment = (_SLIST_HEADER *)v3;
      v41 = 0;
      if ( v3 )
      {
        do
        {
          Region = (_QWORD *)Alignment->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          v41 += i;
        }
        while ( Alignment );
      }
      Number = KeGetPcr()->Prcb.Number;
      LODWORD(a2) = ndisPcwOffsetToPerCpuData;
      v81 = Number;
      *(_QWORD *)(v10 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 72) += v41;
    }
  }
  if ( v3 )
  {
    while ( 1 )
    {
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)v3->SourceHandle;
      v14 = (struct _NET_BUFFER_LIST *)v3->Link.Alignment;
      v3->Link.Alignment = 0LL;
      if ( SourceHandle == v6 )
      {
        *p_Alignment = v3;
        p_Alignment = &v3->Link.Alignment;
      }
      else if ( SourceHandle == v7 )
      {
        *(_QWORD *)v9 = v3;
        v83 = v3;
      }
      else if ( v6 )
      {
        if ( v7 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, v3, a3, (struct NDIS_PCW_CONTEXT *)&v79);
        }
        else
        {
          v74 = SourceHandle;
          v78 = v3;
          v83 = v3;
        }
      }
      else
      {
        v6 = SourceHandle;
        v66 = v3;
        p_Alignment = &v3->Link.Alignment;
      }
      v9 = (unsigned __int64)v83;
      v3 = v14;
      if ( !v14 )
        break;
      v7 = v74;
    }
    LOWORD(v12) = WORD2(v80);
    LOBYTE(v11) = v80;
    Number = v81;
    v10 = v79;
    v5 = a3;
    v71 = WORD2(v80);
    v75 = v80;
    v82 = v6;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v21 = ndisNblTrackerEpoch;
    v22 = v5;
    NblTracker = (unsigned __int64)v6->NblTracker;
    v24 = v22 & 1;
    v88 = v24;
    v25 = 0LL;
    v69 = 0LL;
    v26 = 0LL;
    v76 = 0LL;
    v64 = 0LL;
    v84 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v66, 0LL, 0x95u, (void *)NblTracker, v24);
      v25 = 0LL;
      LOBYTE(v24) = v88;
      v26 = 0LL;
    }
    v27 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    v72 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    v28 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (NblTracker & 1) != 0 )
    {
      v28 = (2 * v21) ^ (NblTracker ^ (2 * v21)) & 0xFFFFFFFFFFFFFFFDuLL;
      v27 = *(_QWORD *)((NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v72 = v27;
    }
    v29 = (_SLIST_HEADER *)v66;
    if ( v66 )
    {
      while ( 1 )
      {
        v30 = v29[22].Region;
        while ( v29[22].Region == v30 )
        {
          if ( v30 )
          {
            if ( (v30 & 4) != 0 )
              goto LABEL_99;
          }
          else if ( !v29[7].Region )
          {
            v29[7].Region = 0LL;
          }
          v31 = (unsigned __int8 *)v29[7].Region;
          if ( v31 )
          {
            LODWORD(a2) = *v31;
            if ( (_BYTE)a2 == 17 || (_BYTE)a2 == 5 || (_BYTE)a2 == 18 )
            {
              if ( v31 != (unsigned __int8 *)v27 || v29[1].Region )
              {
                ++v25;
                v32 = v28;
                v69 = v25;
              }
              else
              {
                ++v26;
                v32 = 24LL;
                ++v25;
                v64 = v26;
                v69 = v25;
              }
              goto LABEL_51;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v63) = *v31;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                (char)v29,
                v63);
LABEL_158:
              v27 = v72;
              v25 = v69;
              v26 = v64;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a2) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)a2,
              27,
              11,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)v29);
            goto LABEL_158;
          }
LABEL_99:
          v32 = v28 | 4;
LABEL_51:
          v29[22].Region = v32;
          v29 = (_SLIST_HEADER *)v29->Alignment;
          if ( !v29 )
            break;
        }
        v33 = v76 - v25;
        LOBYTE(v24) = v88;
        v77 = v76 - v25;
        if ( (v30 & 1) == 0 || !v33 )
          goto LABEL_57;
        if ( v88 || v84 )
        {
          a2 = (struct _NET_BUFFER_LIST *)(16 * ((v30 >> 1) & 1) + (v30 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( !v88 )
            goto LABEL_88;
          goto LABEL_56;
        }
        v84 = 1;
        CurrentIrql = KeGetCurrentIrql();
        v25 = v69;
        v33 = v77;
        if ( CurrentIrql == 2 )
        {
          LOBYTE(v24) = 1;
          v88 = 1;
          a2 = (struct _NET_BUFFER_LIST *)(16 * ((v30 >> 1) & 1) + (v30 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_56:
          v34 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v34 + a2->Link.Alignment) += v33;
          goto LABEL_57;
        }
        LOBYTE(v24) = 0;
        v88 = 0;
        a2 = (struct _NET_BUFFER_LIST *)(16 * ((v30 >> 1) & 1) + (v30 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_88:
        _InterlockedAdd64((volatile signed __int64 *)&a2->FirstNetBuffer, v33);
LABEL_57:
        v27 = v72;
        v26 = v64;
        v76 = v25;
        if ( !v29 )
        {
          v6 = v82;
          LOWORD(v12) = v71;
          break;
        }
      }
    }
    v9 = v25 - v26;
    v70 = v9;
    if ( (v28 & 1) == 0 || !v9 )
      goto LABEL_17;
    if ( (_BYTE)v24 || v84 )
    {
      v36 = 16 * ((v28 >> 1) & 1) + (v28 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v24 )
        goto LABEL_65;
    }
    else
    {
      v35 = KeGetCurrentIrql();
      v9 = v70;
      if ( v35 != 2 )
      {
        v36 = 16 * ((v28 >> 1) & 1) + (v28 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_65:
        _InterlockedAdd64((volatile signed __int64 *)(v36 + 8), v9);
        goto LABEL_17;
      }
      v36 = 16 * ((v28 >> 1) & 1) + (v28 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v45 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(v45 + *(_QWORD *)v36) += v9;
  }
LABEL_17:
  if ( byte_14011F740 )
  {
    v15 = (_SLIST_HEADER *)v66;
    if ( v66 )
    {
      do
      {
        v15[15].Region = 0LL;
        v15 = (_SLIST_HEADER *)v15->Alignment;
      }
      while ( v15 );
    }
  }
  if ( (v11 & 0x80u) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v10 + ndisPcwPerCpuDataStride * Number + 56);
  }
  if ( (v12 & 0x200) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v10 + ndisPcwPerCpuDataStride * Number + 376) = __rdtsc();
  }
  v16 = a3;
  ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, unsigned __int64))v6->ProtSendNetBufferListsComplete)(
    v6->SendCompleteNetBufferListsContext,
    v66,
    a3,
    v9);
  if ( (v12 & 0x200) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v18 = ndisPcwOffsetToPerCpuData + v10 + ndisPcwPerCpuDataStride * Number;
    v19 = __rdtsc();
    v17 = (unsigned __int64)HIDWORD(v19) << 32;
    *(_QWORD *)(v18 + 176) += (v17 | (unsigned int)v19) - *(_QWORD *)(v18 + 376);
    *(_QWORD *)(v18 + 376) = 0LL;
  }
  v20 = v74;
  if ( v74 )
  {
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_67;
    v46 = ndisNblTrackerEpoch;
    v67 = 0LL;
    v47 = (unsigned __int64)v74->NblTracker;
    v48 = a3 & 1;
    v49 = 0LL;
    v89 = a3 & 1;
    v50 = 0LL;
    v65 = 0LL;
    v85 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v78, 0LL, 0x95u, (void *)v47, v48);
      LOBYTE(v48) = a3 & 1;
      v49 = 0LL;
    }
    v51 = v47 & 0xFFFFFFFFFFFFFFFDuLL;
    v73 = v47 & 0xFFFFFFFFFFFFFFFDuLL;
    v52 = v47 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v47 & 1) != 0 )
    {
      v52 = (2 * v46) ^ (v47 ^ (2 * v46)) & 0xFFFFFFFFFFFFFFFDuLL;
      v51 = *(_QWORD *)((v47 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v73 = v51;
    }
    v53 = (_SLIST_HEADER *)v78;
    if ( v78 )
    {
LABEL_105:
      v54 = v53[22].Region;
      while ( 1 )
      {
        if ( v53[22].Region != v54 )
        {
LABEL_114:
          v57 = (char *)v67 - (char *)v50;
          LOBYTE(v48) = v89;
          v68 = (struct _NET_BUFFER_LIST *)((char *)v67 - (char *)v50);
          if ( (v54 & 1) == 0 || !v57 )
            goto LABEL_119;
          if ( v89 || v85 )
          {
            v17 = 16 * ((v54 >> 1) & 1) + (v54 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !v89 )
              goto LABEL_135;
            goto LABEL_118;
          }
          v85 = 1;
          v61 = KeGetCurrentIrql();
          v57 = (unsigned __int64)v68;
          if ( v61 == 2 )
          {
            LOBYTE(v48) = 1;
            v89 = 1;
            v17 = 16 * ((v54 >> 1) & 1) + (v54 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_118:
            v58 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(v58 + *(_QWORD *)v17) += v57;
            goto LABEL_119;
          }
          LOBYTE(v48) = 0;
          v89 = 0;
          v17 = 16 * ((v54 >> 1) & 1) + (v54 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_135:
          _InterlockedAdd64((volatile signed __int64 *)(v17 + 8), v57);
LABEL_119:
          v51 = v73;
          v49 = v65;
          v67 = v50;
          if ( !v53 )
          {
            LOBYTE(v11) = v75;
            LOWORD(v12) = v71;
            break;
          }
          goto LABEL_105;
        }
        if ( v54 )
        {
          if ( (v54 & 4) != 0 )
            goto LABEL_147;
        }
        else if ( !v53[7].Region )
        {
          v53[7].Region = 0LL;
        }
        v55 = (unsigned __int8 *)v53[7].Region;
        if ( v55 )
        {
          LODWORD(v17) = *v55;
          if ( (_BYTE)v17 == 17 || (_BYTE)v17 == 5 || (_BYTE)v17 == 18 )
          {
            if ( v55 != (unsigned __int8 *)v51 || v53[1].Region )
            {
              v50 = (struct _NET_BUFFER_LIST *)((char *)v50 + 1);
              v56 = v52;
            }
            else
            {
              ++v49;
              v56 = 24LL;
              v65 = v49;
              v50 = (struct _NET_BUFFER_LIST *)((char *)v50 + 1);
            }
            goto LABEL_113;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v63) = *v55;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)v53,
              v63);
LABEL_159:
            v51 = v73;
            v49 = v65;
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
            (char)v53);
          goto LABEL_159;
        }
LABEL_147:
        v56 = v52 | 4;
LABEL_113:
        v53[22].Region = v56;
        v53 = (_SLIST_HEADER *)v53->Alignment;
        if ( !v53 )
          goto LABEL_114;
      }
    }
    v59 = (unsigned __int64)v50 - v49;
    if ( (v52 & 1) == 0 || !v59 )
    {
LABEL_138:
      v16 = a3;
      v20 = v74;
LABEL_67:
      if ( byte_14011F740 )
      {
        v37 = (_SLIST_HEADER *)v78;
        if ( v78 )
        {
          do
          {
            v37[15].Region = 0LL;
            v37 = (_SLIST_HEADER *)v37->Alignment;
          }
          while ( v37 );
        }
      }
      if ( (v11 & 0x80u) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v10 + ndisPcwPerCpuDataStride * Number + 56);
      }
      if ( (v12 & 0x200) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwOffsetToPerCpuData + v10 + ndisPcwPerCpuDataStride * Number + 376) = __rdtsc();
        v20->ProtSendNetBufferListsComplete(v20->SendCompleteNetBufferListsContext, v78, v16);
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        v38 = v10 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
        v39 = __rdtsc();
        *(_QWORD *)(v38 + 176) += (((unsigned __int64)HIDWORD(v39) << 32) | (unsigned int)v39) - *(_QWORD *)(v38 + 376);
        *(_QWORD *)(v38 + 376) = 0LL;
      }
      else
      {
        v20->ProtSendNetBufferListsComplete(v20->SendCompleteNetBufferListsContext, v78, v16);
      }
      goto LABEL_33;
    }
    if ( (_BYTE)v48 || v85 )
    {
      v60 = 16 * ((v52 >> 1) & 1) + (v52 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v48 )
        goto LABEL_127;
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v60 = 16 * ((v52 >> 1) & 1) + (v52 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_127:
        _InterlockedAdd64((volatile signed __int64 *)(v60 + 8), v59);
        goto LABEL_138;
      }
      v60 = 16 * ((v52 >> 1) & 1) + (v52 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v62 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(v62 + *(_QWORD *)v60) += v59;
    goto LABEL_138;
  }
LABEL_33:
  if ( v86 != 2 )
    KeLowerIrql(v86);
}
