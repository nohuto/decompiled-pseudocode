/*
 * XREFs of ndisCoIndicateStatusInternal @ 0x1400D9070
 * Callers:
 *     NdisMCoIndicateStatus @ 0x1400D9330 (NdisMCoIndicateStatus.c)
 *     NdisMCoIndicateStatusEx @ 0x1400D9430 (NdisMCoIndicateStatusEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     NdisAcquireRWLockRead @ 0x140033720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140049260 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x140080A10 (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisCoIndicateStatusInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        const struct _NDIS_STATUS_INDICATION *a3)
{
  unsigned int StatusCode; // ebp
  int *StatusBuffer; // r14
  __int64 v6; // rdi
  unsigned int StatusBufferSize; // r15d
  _UNICODE_STRING *pAdapterInstanceName; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  void (__fastcall **v14)(_QWORD, _QWORD, const struct _NDIS_STATUS_INDICATION *); // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  void (__fastcall **v18)(_QWORD, _QWORD, const struct _NDIS_STATUS_INDICATION *); // r8
  _X_FILTER *EthDB; // rcx
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  _NDIS_OPEN_BLOCK *i; // rdi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  $EE152D077C90AE8620C2438F1318113E *v23; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+8h] BYREF

  StatusCode = a3->StatusCode;
  StatusBuffer = (int *)a3->StatusBuffer;
  v6 = a2;
  StatusBufferSize = a3->StatusBufferSize;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      19,
      10,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
  }
  pAdapterInstanceName = (_UNICODE_STRING *)(v6 + 296);
  if ( !v6 )
    pAdapterInstanceName = a1->pAdapterInstanceName;
  if ( pAdapterInstanceName )
    ndisWriteWmiStatusIndication(a1, pAdapterInstanceName, a3, StatusCode, StatusBuffer, StatusBufferSize);
  if ( StatusCode == 1073807371 )
  {
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x20000000u);
    a1->IfBlock->MediaConnectState = MediaConnectStateConnected;
  }
  else
  {
    if ( StatusCode != 1073807372 )
      goto LABEL_12;
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xDFFFFFFF);
    a1->IfBlock->MediaConnectState = MediaConnectStateDisconnected;
  }
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x4000000u);
LABEL_12:
  if ( v6 )
  {
    v10 = *(_QWORD **)(v6 + 72);
    v11 = v10[4];
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 80);
      v13 = *(_QWORD *)(v12 + 24);
      v14 = (void (__fastcall **)(_QWORD, _QWORD, const struct _NDIS_STATUS_INDICATION *))(v13 + 192);
      if ( *(_BYTE *)(v13 + 56) >= 6u && *v14 )
        (*v14)(*(_QWORD *)(v12 + 32), *(_QWORD *)(v6 + 24), a3);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, int *, unsigned int))*v14)(
          *(_QWORD *)(v12 + 32),
          *(_QWORD *)(v6 + 24),
          StatusCode,
          StatusBuffer,
          StatusBufferSize);
    }
    v15 = v10[5];
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 80);
      v17 = *(_QWORD *)(v16 + 24);
      v18 = (void (__fastcall **)(_QWORD, _QWORD, const struct _NDIS_STATUS_INDICATION *))(v17 + 192);
      if ( *(_BYTE *)(v17 + 56) >= 6u && *v18 )
        (*v18)(*(_QWORD *)(v16 + 32), v10[3], a3);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, int *, unsigned int))*v18)(
          *(_QWORD *)(v16 + 32),
          v10[3],
          StatusCode,
          StatusBuffer,
          StatusBufferSize);
    }
  }
  else
  {
    EthDB = a1->EthDB;
    if ( EthDB )
    {
      BindListLock = EthDB->BindListLock;
      *(_WORD *)&LockState.OldIrql = 0;
      LockState.Flags = 0;
      NdisAcquireRWLockRead(BindListLock, &LockState, 0);
      for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
      {
        if ( (i->OpenFlags & 0x8000) == 0 && i->ProtocolHandle->CoStatusHandlerEx )
        {
          ndisMReferenceOpen((__int64)i, 0x11u);
          ProtocolHandle = i->ProtocolHandle;
          v23 = &ProtocolHandle->192;
          if ( ProtocolHandle->MajorNdisVersion >= 6u && v23->CoStatusHandlerEx )
            v23->CoStatusHandlerEx(i->ProtocolBindingContext, 0LL, (_NDIS_STATUS_INDICATION *)a3);
          else
            ((void (__fastcall *)(void *, _QWORD, _QWORD, int *, unsigned int))v23->CoStatusHandlerEx)(
              i->ProtocolBindingContext,
              0LL,
              StatusCode,
              StatusBuffer,
              StatusBufferSize);
          ndisMDereferenceOpenUnlocked((__int64)i, 0x11u);
        }
      }
      NdisReleaseRWLock(a1->EthDB->BindListLock, &LockState);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(pAdapterInstanceName) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)pAdapterInstanceName,
      19,
      11,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
  }
}
