/*
 * XREFs of ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1400325E0
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x1400305B0 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140031270 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisSortNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1, __int64 a2, __int64 a3)
{
  char v4; // r13
  int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r12
  struct _NDIS_FILTER_BLOCK *v9; // rdx
  _QWORD *v10; // r10
  __int64 *v11; // rsi
  unsigned __int16 v12; // di
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebp
  __int64 v17; // r15
  PVOID v18; // r8
  PVOID v19; // rax
  char v20; // al
  __int64 v21; // r10
  unsigned int v22; // ecx
  _WORD *v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rcx
  bool v26; // zf
  char *v27; // rdx
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  struct _NET_BUFFER_LIST *v30; // r15
  struct _NDIS_FILTER_BLOCK *v31; // r12
  unsigned int v32; // r13d
  PNET_BUFFER_LIST Alignment; // rcx
  _SLIST_HEADER *v34; // rax
  struct _NET_BUFFER_LIST *v35; // r14
  _QWORD *p_Alignment; // rsi
  struct _NET_BUFFER_LIST *v37; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v39; // rdi
  _MDL *CurrentMdl; // rbx
  unsigned __int64 v41; // rbx
  __int64 v42; // rbp
  __int64 v43; // rsi
  __int64 v44; // r14
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // rdi
  _SLIST_HEADER *v47; // rsi
  _UNKNOWN **v48; // rdx
  unsigned __int64 Region; // rbx
  unsigned __int8 *v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // rdx
  unsigned __int8 v54; // al
  unsigned __int64 v55; // rbp
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rbx
  void (__fastcall *v59)(unsigned __int64, unsigned __int64, __int64); // rsi
  unsigned __int64 v60; // rbp
  unsigned __int64 v61; // r14
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r8
  __int64 v65; // rcx
  int v66; // ecx
  unsigned __int64 *p_LowLimit; // rdi
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r15
  __int64 v70; // r14
  unsigned __int64 v71; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v72; // rax
  __int64 v73; // r8
  unsigned __int64 v74; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v75; // rax
  __int64 v76; // r8
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v79; // rax
  __int64 v80; // r8
  unsigned __int64 v81; // rdi
  unsigned int v82; // eax
  char *v83; // r8
  unsigned __int64 v84; // rax
  __int64 v85; // [rsp+30h] [rbp-B8h]
  struct _NDIS_FILTER_BLOCK *v86; // [rsp+40h] [rbp-A8h]
  int v87; // [rsp+48h] [rbp-A0h]
  _QWORD *v88; // [rsp+50h] [rbp-98h]
  unsigned int Number; // [rsp+50h] [rbp-98h]
  __int64 *v90; // [rsp+58h] [rbp-90h]
  Rtl::KString *value; // [rsp+58h] [rbp-90h]
  PNET_BUFFER_LIST NetBufferList; // [rsp+60h] [rbp-88h]
  unsigned __int64 LowLimit; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 HighLimit; // [rsp+70h] [rbp-78h] BYREF
  void (__fastcall *v95)(unsigned __int64, unsigned __int64, __int64); // [rsp+78h] [rbp-70h]
  struct _NET_BUFFER_LIST *v96; // [rsp+80h] [rbp-68h]
  __int64 v97; // [rsp+88h] [rbp-60h]
  int v98; // [rsp+90h] [rbp-58h]
  int v99; // [rsp+94h] [rbp-54h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF
  unsigned __int16 v101; // [rsp+F0h] [rbp+8h]
  char v102; // [rsp+F0h] [rbp+8h]
  unsigned __int16 v103; // [rsp+F8h] [rbp+10h]
  char v104; // [rsp+F8h] [rbp+10h]
  unsigned int v105; // [rsp+100h] [rbp+18h]
  KIRQL v106; // [rsp+100h] [rbp+18h]
  int v107; // [rsp+108h] [rbp+20h]
  unsigned int v108; // [rsp+108h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v107 = 0;
  v6 = 0LL;
  v105 = 0;
  v7 = *((_QWORD *)a1 + 1);
  LODWORD(v8) = 0;
  v9 = *(struct _NDIS_FILTER_BLOCK **)a1;
  v10 = 0LL;
  v11 = (__int64 *)*((_QWORD *)a1 + 3);
  *((_DWORD *)a1 + 172) = 0;
  v86 = v9;
  v88 = 0LL;
  NetBufferList = 0LL;
  if ( *(_QWORD *)(v7 + 328) || (*((_DWORD *)a1 + 4) & 2) != 0 )
  {
    *((_QWORD *)a1 + 8) = v11;
    *((_QWORD *)a1 + 9) = *((_QWORD *)a1 + 4);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
    return;
  }
  v12 = 0;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      v13 = (__int64 *)*v11;
      *v11 = 0LL;
      v90 = v13;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 464LL) )
        break;
      v14 = v11[1];
      v15 = *(_QWORD *)(v14 + 8);
      if ( !v15 )
        goto LABEL_47;
      v16 = *(_DWORD *)(v15 + 40);
      v17 = *(unsigned int *)(v14 + 16);
      if ( v16 < 0xE || v16 <= (unsigned int)v17 || v16 - (unsigned int)v17 < 0xE )
        goto LABEL_47;
      if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
      {
        v18 = *(PVOID *)(v15 + 24);
      }
      else
      {
        v19 = MmMapLockedPages((PMDL)v15, 0);
        v6 = v105;
        v18 = v19;
        v5 = v107;
        v10 = v88;
      }
      a3 = (__int64)v18 + v17;
      HIBYTE(v103) = *(_BYTE *)(a3 + 12);
      LOBYTE(v103) = *(_BYTE *)(a3 + 13);
      v101 = *(_WORD *)(a3 + 12);
      if ( v103 > 0x600u )
      {
        if ( v103 == 0x8100 )
        {
          if ( v16 < 0x12 || v16 - (unsigned int)v17 < 0x12 )
          {
            v9 = v86;
LABEL_47:
            if ( v10 )
              *v10 = v11;
            else
              NetBufferList = (PNET_BUFFER_LIST)v11;
            ++v9[2].Characteristics.CancelSendNetBufferListsHandler;
            v10 = v11;
            v88 = v11;
            goto LABEL_51;
          }
          v101 = *(_WORD *)(a3 + 16);
        }
        v12 = v101;
        goto LABEL_23;
      }
      v20 = 0;
      if ( *(_BYTE *)(a3 + 14) == 0xAA && *(_BYTE *)(a3 + 15) == 0xAA && *(_BYTE *)(a3 + 16) == 3 )
      {
        v12 = *(_WORD *)(a3 + 20);
        goto LABEL_23;
      }
LABEL_24:
      v21 = *((_QWORD *)a1 + 1);
      if ( v20 )
      {
        if ( v5 == v12 )
        {
          v107 = v5;
          a3 = (unsigned int)v6;
          v105 = v6;
          if ( v4 == 1 )
            goto LABEL_38;
        }
        else
        {
          v22 = *(_DWORD *)(v21 + 24);
          a3 = 0LL;
          v107 = v12;
          v5 = v12;
          if ( v22 )
          {
            v23 = (_WORD *)(v21 + 32);
            while ( v12 != *v23 )
            {
              a3 = (unsigned int)(a3 + 1);
              v23 += 8;
              if ( (unsigned int)a3 >= v22 )
                goto LABEL_32;
            }
            v105 = a3;
            v4 = 1;
LABEL_38:
            if ( *((_WORD *)a1 + 20 * (unsigned int)v8 + 24) == v12 )
            {
              v24 = v8;
            }
            else
            {
              v6 = *((unsigned int *)a1 + 172);
              v24 = 1;
              if ( (_DWORD)v6 )
              {
                while ( *((_WORD *)a1 + 20 * v24 + 24) != v12 )
                {
                  if ( ++v24 > (unsigned int)v6 )
                    goto LABEL_43;
                }
                LODWORD(v8) = v24;
              }
              else
              {
LABEL_43:
                v8 = (unsigned int)(v6 + 1);
                *((_DWORD *)a1 + 172) = v8;
                v29 = 5 * v8;
                *((_WORD *)a1 + 4 * v29 + 24) = v12;
                v24 = v6 + 1;
                *((_QWORD *)a1 + v29 + 7) = *(_QWORD *)(v21 + 16 * ((unsigned int)a3 + 1LL) + 24);
                *((_QWORD *)a1 + v29 + 8) = 0LL;
              }
            }
            goto LABEL_34;
          }
LABEL_32:
          v4 = 0;
          v105 = 0;
        }
      }
      v24 = 0;
LABEL_34:
      v25 = v24 + 2LL;
      v26 = *((_QWORD *)a1 + 5 * v24 + 8) == 0LL;
      v27 = (char *)a1 + 40 * v24;
      v28 = (_DWORD *)((char *)a1 + 40 * v25);
      if ( v26 )
      {
        *((_QWORD *)v27 + 8) = v11;
        if ( (*((_DWORD *)a1 + 4) & 0x100) == 0 )
        {
          v10 = v88;
          *((_QWORD *)v27 + 9) = v11;
          v9 = v86;
          *v28 = 1;
          goto LABEL_51;
        }
        *((_QWORD *)v27 + 9) = 0LL;
        *v11 = (__int64)v90;
        *v28 = *((_DWORD *)a1 + 11);
LABEL_54:
        v30 = NetBufferList;
        if ( !NetBufferList )
          return;
        v31 = v86;
        if ( byte_14011F740 && ((__int64)v86[4].PendingOidRequest & 2) != 0 )
          PktMonClientNblDropNdis(
            (__int64)&v86[4].HigherFilter,
            (__int64)NetBufferList,
            a3,
            1LL,
            -1073676273,
            -536866810);
        if ( (*((_DWORD *)a1 + 4) & 2) != 0 )
          return;
        v32 = *((_DWORD *)a1 + 4) & 1;
        v106 = 2;
        v108 = v32;
        value = 0LL;
        LOBYTE(v87) = 0;
        Number = -1;
        if ( LODWORD(v86->FilterFriendlyName) || *(_DWORD *)&v86->Ref.ReferenceCount )
        {
          v87 = *(_DWORD *)&v86->Ref.ReferenceCount;
          value = v86->FilterInstanceName.__ptr_.__value_;
          if ( !value )
            value = v86->FilterInstanceName.__ptr_.__value_;
        }
        Alignment = NetBufferList;
        do
        {
          Alignment->Flags = Alignment->Flags & 0xFFFFFFF4 | 8;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        }
        while ( Alignment );
        if ( Microsoft_Windows_Networking_CorrelationEnabled
          || byte_14011F740 != (_BYTE)Microsoft_Windows_Networking_CorrelationEnabled )
        {
          v34 = (_SLIST_HEADER *)NetBufferList;
          if ( byte_14011F740 )
          {
            do
            {
              v34[15].Region = 0LL;
              v34 = (_SLIST_HEADER *)v34->Alignment;
            }
            while ( v34 );
          }
          else
          {
            do
            {
              v34[15].Region |= 0x8000000000000000uLL;
              v34 = (_SLIST_HEADER *)v34->Alignment;
            }
            while ( v34 );
          }
        }
        if ( *(_DWORD *)&v86[2].XState )
        {
          v35 = 0LL;
          p_Alignment = 0LL;
          do
          {
            v37 = (struct _NET_BUFFER_LIST *)v30->Link.Alignment;
            v30->Link.Alignment = 0LL;
            if ( v30->NdisPoolHandle == PoolHandle )
            {
              _InterlockedDecrement((volatile signed __int32 *)&v86[2].XState);
              FirstNetBuffer = v30->FirstNetBuffer;
              v39 = (struct _NPAGED_LOOKASIDE_LIST *)v30->MiniportReserved[1];
              CurrentMdl = FirstNetBuffer->CurrentMdl;
              if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
                MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
              if ( v39 )
                ExFreeToNPagedLookasideList(v39, CurrentMdl);
              else
                ExFreePoolWithTag(CurrentMdl, 0);
              NdisFreeNetBufferList(v30);
            }
            else
            {
              if ( v35 )
                *p_Alignment = v30;
              else
                v35 = v30;
              p_Alignment = &v30->Link.Alignment;
            }
            v30 = v37;
          }
          while ( v37 );
          NetBufferList = v35;
          v30 = v35;
          if ( !v35 )
            return;
        }
        if ( !*(_DWORD *)ndisNblTrackerMode )
          goto LABEL_133;
        v41 = *(_QWORD *)&v86[1].NicSwitchHwCapabilities.MaxNumQueuePairsForDefaultVPort;
        v42 = 0LL;
        v43 = ndisNblTrackerEpoch;
        v44 = 0LL;
        LowLimit = 0LL;
        v102 = v32;
        v104 = 0;
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal(v30, 0LL, 0x87u, (void *)v41, v32);
        v45 = v41 & 0xFFFFFFFFFFFFFFFDuLL;
        v46 = v41 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v41 & 1) != 0 )
        {
          NetBufferList = v30;
          v46 = (2 * v43) ^ ((2 * v43) ^ v41) & 0xFFFFFFFFFFFFFFFDuLL;
          v45 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        }
        v47 = (_SLIST_HEADER *)v30;
        v48 = &WPP_RECORDER_INITIALIZED;
        while ( 2 )
        {
          Region = v47[22].Region;
LABEL_93:
          if ( v47[22].Region != Region )
          {
LABEL_104:
            v52 = LowLimit - v42;
            if ( (Region & 1) != 0 && v52 )
            {
              if ( v102 || v104 )
              {
                v53 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
                if ( !v102 )
                  goto LABEL_120;
LABEL_129:
                v57 = KeGetPcr()->Prcb.Number << 12;
                *(_QWORD *)(v57 + *(_QWORD *)v53) += v52;
              }
              else
              {
                v104 = 1;
                if ( KeGetCurrentIrql() == 2 )
                {
                  v102 = 1;
                  v53 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
                  goto LABEL_129;
                }
                v102 = 0;
                v53 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_120:
                _InterlockedAdd64((volatile signed __int64 *)(v53 + 8), v52);
              }
            }
            LowLimit = v42;
            v48 = &WPP_RECORDER_INITIALIZED;
            if ( !v47 )
            {
              v30 = NetBufferList;
              v55 = v42 - v44;
              if ( (v46 & 1) != 0 && v55 )
              {
                if ( v102 || v104 )
                {
                  v56 = 16 * ((v46 >> 1) & 1) + (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
                  if ( !v102 )
                    goto LABEL_131;
LABEL_150:
                  v65 = KeGetPcr()->Prcb.Number << 12;
                  *(_QWORD *)(v65 + *(_QWORD *)v56) += v55;
                }
                else
                {
                  if ( KeGetCurrentIrql() == 2 )
                  {
                    v56 = 16 * ((v46 >> 1) & 1) + (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
                    goto LABEL_150;
                  }
                  v56 = 16 * ((v46 >> 1) & 1) + (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_131:
                  _InterlockedAdd64((volatile signed __int64 *)(v56 + 8), v55);
                }
              }
              v31 = v86;
              v32 = v108;
LABEL_133:
              if ( (v87 & 0x20) != 0 )
              {
                if ( !v32 )
                  v106 = KfRaiseIrql(2u);
                Number = KeGetPcr()->Prcb.Number;
                *(wchar_t **)((char *)&value[21].Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData) = (wchar_t *)__rdtsc();
              }
              v58 = *(_QWORD *)&v31[1].NicSwitchCurrentCapabilities.Flags;
              v59 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))&v31[1].NicSwitchCurrentCapabilities.NdisReserved14;
              v60 = *(_QWORD *)&v31[1].NicSwitchHwCapabilities.NumberOfIndirectionTableEntriesForDefaultVPort;
              if ( *(_BYTE *)v58 == 17 )
                goto LABEL_183;
              if ( v32 || KeGetCurrentIrql() == 2 )
              {
                LODWORD(v31) = KeGetPcr()->Prcb.Number;
                p_LowLimit = &LowLimit;
                v30->ChildRefCount = v32;
                v30->Scratch = 0LL;
                v26 = *(_BYTE *)v58 == 5;
                v95 = 0LL;
                LowLimit = (unsigned __int64)v30;
                HighLimit = (unsigned __int64)v30;
                if ( v26 )
                {
                  do
                  {
                    v68 = *p_LowLimit;
                    if ( !*p_LowLimit )
                      break;
                    v69 = v58;
                    v70 = *(_QWORD *)(v58 + 424) + 96LL * (_QWORD)v31;
                    if ( *(_BYTE *)(v70 + 88) )
                    {
                      *p_LowLimit = 0LL;
                      do
                      {
                        v75 = ndisVerifierNdisDispatch;
                        v76 = *(unsigned int *)(v68 + 132);
                        v77 = *(_QWORD *)(v68 + 112);
                        *(_DWORD *)(v68 + 132) = 0;
                        if ( v75 && *(_BYTE *)v58 == 5 && *(_QWORD *)(v58 + 776) )
                          (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v75 + 17))(
                            v60,
                            v68,
                            v76);
                        else
                          v59(v60, v68, v76);
                        v68 = v77;
                      }
                      while ( v77 );
                      break;
                    }
                    *(_BYTE *)(v70 + 88) = 1;
                    v71 = *p_LowLimit;
                    *p_LowLimit = 0LL;
                    if ( v71 )
                    {
                      do
                      {
                        v72 = ndisVerifierNdisDispatch;
                        v73 = *(unsigned int *)(v71 + 132);
                        v74 = *(_QWORD *)(v71 + 112);
                        *(_DWORD *)(v71 + 132) = 0;
                        if ( v72 && *(_BYTE *)v58 == 5 && *(_QWORD *)(v58 + 776) )
                          (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v72 + 17))(
                            v60,
                            v71,
                            v73);
                        else
                          v59(v60, v71, v73);
                        v71 = v74;
                      }
                      while ( v74 );
                    }
                    *(_BYTE *)(v70 + 88) = 0;
                    p_LowLimit = (unsigned __int64 *)(v70 + 72);
                    v58 = *(_QWORD *)(v58 + 552);
                    v59 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(v69 + 528);
                    v60 = *(_QWORD *)(v69 + 536);
                  }
                  while ( *(_BYTE *)v58 == 5 );
                }
                v78 = *p_LowLimit;
                if ( *p_LowLimit )
                {
                  *p_LowLimit = 0LL;
                  do
                  {
                    v79 = ndisVerifierNdisDispatch;
                    v80 = *(unsigned int *)(v78 + 132);
                    v81 = *(_QWORD *)(v78 + 112);
                    *(_DWORD *)(v78 + 132) = 0;
                    if ( v79 && *(_BYTE *)v58 == 5 && *(_QWORD *)(v58 + 776) )
                      (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v79 + 17))(v60, v78, v80);
                    else
                      v59(v60, v78, v80);
                    v78 = v81;
                  }
                  while ( v81 );
                }
              }
              else
              {
                if ( v31->Header.Type != 5 )
                  goto LABEL_183;
                v61 = (unsigned int)Size;
                v62 = KeGetPcr()->Prcb.Number << 12;
                v63 = *(_QWORD *)(v62 + qword_14011EF88);
                LowLimit = v63;
                v64 = *(_QWORD *)(v62 + qword_14011EF80);
                HighLimit = v64;
                if ( v63 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v64 )
                {
                  IoGetStackLimits(&LowLimit, &HighLimit);
                  v63 = LowLimit;
                }
                if ( (unsigned __int64)&retaddr - v63 >= v61 )
                {
                  if ( ndisVerifierNdisDispatch )
                  {
                    if ( *(_BYTE *)v58 == 5 )
                    {
                      v6 = *(_QWORD *)(v58 + 776);
                      if ( v6 )
                      {
                        (*((void (__fastcall **)(unsigned __int64, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch
                         + 17))(
                          v60,
                          v30,
                          0LL);
                        goto LABEL_184;
                      }
                    }
                  }
LABEL_183:
                  ((void (__fastcall *)(unsigned __int64, struct _NET_BUFFER_LIST *, _QWORD, __int64))v59)(
                    v60,
                    v30,
                    v32,
                    v6);
                  goto LABEL_184;
                }
                v66 = 24576;
                v99 = 0;
                LowLimit = v58;
                HighLimit = v60;
                v95 = v59;
                v96 = v30;
                v97 = 0LL;
                v98 = 0;
                if ( (unsigned int)Size > 0x6000 )
                  v66 = Size;
                if ( KeExpandKernelStackAndCalloutEx(
                       ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
                       &LowLimit,
                       v66,
                       0,
                       0LL) < 0 )
                  ndisQueueStackExpansionFallbackNbls(v31, v30, 0);
              }
LABEL_184:
              if ( (v87 & 0x20) != 0 )
              {
                v82 = Number;
                if ( Number == -1 )
                  v82 = KeGetPcr()->Prcb.Number;
                v83 = (char *)value + ndisPcwPerCpuDataStride * v82 + ndisPcwOffsetToPerCpuData;
                v84 = __rdtsc();
                *((_QWORD *)v83 + 18) += (((unsigned __int64)HIDWORD(v84) << 32) | (unsigned int)v84)
                                       - *((_QWORD *)v83 + 43);
                *((_QWORD *)v83 + 43) = 0LL;
                if ( v106 != 2 )
                  KeLowerIrql(v106);
              }
              return;
            }
            continue;
          }
          break;
        }
        if ( Region )
        {
          if ( (Region & 4) == 0 )
            goto LABEL_98;
          goto LABEL_102;
        }
        if ( !v47[7].Region )
          v47[7].Region = 0LL;
LABEL_98:
        v50 = (unsigned __int8 *)v47[7].Region;
        if ( !v50 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v48) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v48,
              27,
              11,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)v47);
            goto LABEL_101;
          }
          goto LABEL_102;
        }
        v54 = *v50;
        if ( *v50 == 17 || v54 == 5 || v54 == 18 )
        {
          if ( v50 != (unsigned __int8 *)v45 || v47[1].Region )
          {
            ++v42;
            v51 = v46;
          }
          else
          {
            ++v44;
            v51 = 24LL;
            ++v42;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v85) = *v50;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)v47,
              v85);
LABEL_101:
            v48 = &WPP_RECORDER_INITIALIZED;
          }
LABEL_102:
          v51 = v46 | 4;
        }
        v47[22].Region = v51;
        v47 = (_SLIST_HEADER *)v47->Alignment;
        if ( !v47 )
          goto LABEL_104;
        goto LABEL_93;
      }
      v10 = v88;
      **((_QWORD **)v27 + 9) = v11;
      ++*v28;
      *((_QWORD *)v27 + 9) = v11;
      v9 = v86;
LABEL_51:
      if ( !v90 )
        goto LABEL_54;
      v6 = v105;
      v11 = v90;
    }
    v12 = *((_WORD *)v11 + 100);
LABEL_23:
    v20 = 1;
    goto LABEL_24;
  }
}
