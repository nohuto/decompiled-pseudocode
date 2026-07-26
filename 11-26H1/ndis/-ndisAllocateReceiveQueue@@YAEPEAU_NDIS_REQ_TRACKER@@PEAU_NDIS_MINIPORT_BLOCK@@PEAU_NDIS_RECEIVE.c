/*
 * XREFs of ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1400AC0E0
 * Callers:
 *     ?ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400ACF70 (-ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14000F160 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

char __fastcall ndisAllocateReceiveQueue(
        struct _NDIS_REQ_TRACKER *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_RECEIVE_FILTER_CAPABILITIES *a3)
{
  struct _NDIS_OID_REQUEST *v3; // r13
  _QWORD *v4; // rsi
  __int64 v5; // r12
  unsigned int v6; // r14d
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  char *InformationBuffer; // r15
  char v10; // bp
  int InformationBufferLength; // ecx
  unsigned __int64 v12; // rax
  int v13; // edx
  char v14; // cl
  char v15; // al
  struct _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  __int64 Pool2; // rax
  size_t BytesRead; // r8
  void *v19; // rcx
  _QWORD *v20; // rax
  char v21; // cl
  char v22; // al
  unsigned int NumReceiveQueues; // ecx
  KIRQL v24; // dl
  KIRQL v25; // dl
  unsigned __int8 *AllocatedQueueIndices; // rdx
  unsigned int AllocatedQueueIndicesLength; // r10d
  __int64 i; // rax
  unsigned __int8 v29; // r8
  __int64 v30; // r9
  char v31; // al
  unsigned int j; // ecx
  _BYTE *v33; // r15
  KIRQL v34; // dl
  struct _NDIS_MINIPORT_BLOCK *Flink; // rax
  KIRQL v36; // dl
  _NDIS_MINIPORT_BLOCK *NextMiniport; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  _QWORD *v41; // rax
  KIRQL v42; // dl
  UINT v43; // eax
  char v45; // [rsp+28h] [rbp-70h]
  char v46; // [rsp+40h] [rbp-58h]
  unsigned int Size; // [rsp+44h] [rbp-54h]
  unsigned __int8 *Size_4; // [rsp+48h] [rbp-50h]
  char *v49; // [rsp+50h] [rbp-48h]
  char v50; // [rsp+A0h] [rbp+8h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+20h] BYREF

  v3 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v4 = 0LL;
  v5 = 0LL;
  NewIrql = 0;
  v6 = 0;
  v46 = 0;
  v7 = a2;
  InformationBuffer = (char *)v3->DATA.QUERY_INFORMATION.InformationBuffer;
  v49 = InformationBuffer;
  v10 = 1;
  v50 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v45 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      25,
      14,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v45);
  }
  InformationBufferLength = 1096;
  *((_DWORD *)a1 + 10) = -1073741637;
  v12 = 1096LL;
  v13 = *((unsigned __int16 *)InformationBuffer + 1);
  if ( (unsigned __int16)v13 < 0x448u )
    v12 = *((unsigned __int16 *)InformationBuffer + 1);
  if ( v12 >= v3->DATA.QUERY_INFORMATION.InformationBufferLength )
  {
    InformationBufferLength = v3->DATA.QUERY_INFORMATION.InformationBufferLength;
  }
  else if ( (unsigned __int16)v13 < 0x448u )
  {
    InformationBufferLength = *((unsigned __int16 *)InformationBuffer + 1);
  }
  v3->DATA.METHOD_INFORMATION.BytesRead = InformationBufferLength;
  v14 = 2;
  v3->DATA.METHOD_INFORMATION.BytesWritten = 0;
  if ( *((_DWORD *)InformationBuffer + 2) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v15 = 0;
    goto LABEL_59;
  }
  if ( !(unsigned __int8)ndisReferenceMiniport(v7, 0x45u) )
  {
LABEL_13:
    *((_DWORD *)a1 + 10) = -1073676286;
    v15 = 0;
    goto LABEL_58;
  }
  v46 = 1;
  OidSourceHandle = (struct _NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v3);
  if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
  {
    v5 = (__int64)OidSourceHandle;
    if ( !(unsigned __int8)ndisReferenceOpenByHandle(OidSourceHandle, 0xAu) )
      goto LABEL_13;
    v50 = 1;
  }
  if ( *((_DWORD *)InformationBuffer + 2) == 1 && !v5 )
  {
LABEL_20:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_21;
  }
  Pool2 = ExAllocatePool2(64LL, 1224LL, 1970357326LL);
  v4 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
LABEL_23:
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_21;
  }
  BytesRead = v3->DATA.METHOD_INFORMATION.BytesRead;
  v19 = (void *)(Pool2 + 128);
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_QWORD *)(Pool2 + 64) = v7;
  *(_QWORD *)(Pool2 + 72) = v5;
  v20 = (_QWORD *)(Pool2 + 32);
  v20[1] = v20;
  *v20 = v20;
  v4[12] = v4 + 11;
  v4[11] = v4 + 11;
  *((_DWORD *)v4 + 20) = 1;
  memmove(v19, InformationBuffer, BytesRead);
  v21 = *((_BYTE *)v4 + 129);
  *((_WORD *)v4 + 65) = v3->DATA.METHOD_INFORMATION.BytesRead;
  v22 = 2;
  if ( (unsigned __int8)v21 < 2u )
    v22 = v21;
  *((_BYTE *)v4 + 129) = v22;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
  NumReceiveQueues = v7->NumReceiveQueues;
  if ( NumReceiveQueues + 1 > 0x3BCBAD )
    goto LABEL_27;
  if ( !a3 )
  {
    v25 = NewIrql;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v25);
    goto LABEL_20;
  }
  if ( NumReceiveQueues == a3->NumQueues )
  {
LABEL_27:
    v24 = NewIrql;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v24);
    goto LABEL_23;
  }
  AllocatedQueueIndices = v7->AllocatedQueueIndices;
  AllocatedQueueIndicesLength = v7->AllocatedQueueIndicesLength;
  Size_4 = AllocatedQueueIndices;
  Size = AllocatedQueueIndicesLength;
  if ( AllocatedQueueIndices )
  {
    for ( i = 0LL; (unsigned int)i < AllocatedQueueIndicesLength; i = (unsigned int)(i + 1) )
    {
      v29 = AllocatedQueueIndices[i];
      v30 = (unsigned int)i;
      if ( v29 != 0xFF )
      {
        v31 = 1;
        for ( j = 0; j < 8; ++j )
        {
          if ( (v29 & (unsigned __int8)v31) == 0 )
          {
            AllocatedQueueIndices[v30] = v29 | v31;
            v6 += j;
            goto LABEL_47;
          }
          v31 *= 2;
        }
        break;
      }
      v6 += 8;
    }
  }
  v33 = (_BYTE *)ExAllocatePool2(66LL, AllocatedQueueIndicesLength + 64, 1970357326LL);
  if ( !v33 )
  {
    v34 = NewIrql;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v34);
    InformationBuffer = v49;
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_21;
  }
  memset(&v33[Size], 0, 0x40uLL);
  if ( Size_4 )
  {
    memmove(v33, Size_4, Size);
    v33[Size] = 1;
    ExFreePoolWithTag(Size_4, 0);
  }
  else
  {
    *v33 = 3;
    v6 = 1;
  }
  v7->AllocatedQueueIndices = v33;
  InformationBuffer = v49;
  v7->AllocatedQueueIndicesLength = Size + 64;
LABEL_47:
  *((_DWORD *)InformationBuffer + 3) = v6;
  Flink = (struct _NDIS_MINIPORT_BLOCK *)v7->ReceiveQueueList.Flink;
  *((_DWORD *)v4 + 35) = v6;
  *((_DWORD *)v4 + 12) = v6;
  while ( 1 )
  {
    if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&v7->ReceiveQueueList )
    {
LABEL_53:
      NextMiniport = Flink->NextMiniport;
      v38 = *(_QWORD *)&NextMiniport->Header.Type;
      if ( *(_NDIS_MINIPORT_BLOCK **)(*(_QWORD *)&NextMiniport->Header.Type + 8LL) == NextMiniport )
      {
        *v4 = v38;
        v4[1] = NextMiniport;
        *(_QWORD *)(v38 + 8) = v4;
        *(_QWORD *)&NextMiniport->Header.Type = v4;
        ++v7->NumReceiveQueues;
        *((_DWORD *)a1 + 10) = 0;
        if ( !v5 )
        {
LABEL_57:
          v42 = NewIrql;
          v7->MiniportThread = 0LL;
          KeReleaseSpinLock(&v7->Lock, v42);
          v15 = 0;
          *((_DWORD *)v4 + 13) = 1;
          v10 = 0;
          v46 = 0;
          goto LABEL_58;
        }
        v39 = (_QWORD *)(v5 + 736);
        v40 = *(_QWORD *)(v5 + 736);
        v41 = v4 + 2;
        if ( *(_QWORD *)(v40 + 8) == v5 + 736 )
        {
          *v41 = v40;
          v4[3] = v39;
          *(_QWORD *)(v40 + 8) = v41;
          *v39 = v41;
          ++*(_DWORD *)(v5 + 752);
          goto LABEL_57;
        }
      }
      __fastfail(3u);
    }
    if ( Flink->PcwDatapathEventMask == v6 )
      break;
    if ( Flink->PcwDatapathEventMask > v6 )
      goto LABEL_53;
    Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
  }
  v36 = NewIrql;
  *((_DWORD *)a1 + 10) = -1073741270;
  v7->MiniportThread = 0LL;
  KeReleaseSpinLock(&v7->Lock, v36);
LABEL_21:
  v15 = v50;
LABEL_58:
  v14 = 2;
LABEL_59:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v15 )
      ndisMDereferenceOpenUnlocked(v5, 0xAu);
    if ( v46 )
      ndisDereferenceMiniport(v7, 0x45u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    v43 = v3->DATA.METHOD_INFORMATION.BytesRead;
    v3->DATA.METHOD_INFORMATION.BytesWritten = v43;
    *((_WORD *)InformationBuffer + 1) = v43;
    if ( (unsigned __int8)InformationBuffer[1] < 2u )
      v14 = InformationBuffer[1];
    InformationBuffer[1] = v14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      0x19u,
      0xFu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v7,
      *((_DWORD *)a1 + 10),
      v6);
  return v10;
}
