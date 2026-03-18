/*
 * XREFs of AlpcpLookupMessage @ 0x1409BEA70
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C0410 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407C08B0 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcQueryInformationMessage @ 0x1407C0BF0 (NtAlpcQueryInformationMessage.c)
 *     NtAlpcOpenSenderThread @ 0x1408E5160 (NtAlpcOpenSenderThread.c)
 *     NtAlpcOpenSenderProcess @ 0x1408E6510 (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A49448 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcCancelMessage @ 0x140ACCC30 (NtAlpcCancelMessage.c)
 * Callees:
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14046C9F0 (ExHandleLogBadReference.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     AlpcReferenceBlobByHandle @ 0x1409BED80 (AlpcReferenceBlobByHandle.c)
 *     AlpcpReferenceBlob @ 0x1409BEEB8 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1409BEF10 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 *     ExUnlockHandleTableEntry @ 0x140A33080 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, __int64 a2, int a3, __int64 a4, ULONG_PTR *a5)
{
  int v5; // esi
  ULONG_PTR v8; // r14
  char PreviousMode; // bp
  __int64 *v10; // rbx
  __int64 v11; // r8
  ULONG_PTR HandlePointer; // rax
  ULONG_PTR v13; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17; // rbx
  signed __int32 v18; // eax
  __int64 v19; // rdx
  signed __int32 v20[14]; // [rsp+0h] [rbp-38h] BYREF

  v5 = a2;
  if ( (int)a2 >= 0 )
  {
    if ( (a2 & 0xFC000000) != 0 )
    {
      if ( !AlpcpSecondaryMessageTables )
        return 3221227266LL;
      v8 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)(unsigned int)a2 >> 26));
    }
    else
    {
      v8 = AlpcMessageTable;
    }
    if ( v8 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( (a2 & 0x3FC) != 0 && (v10 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v8, a2 & 0x3FFFFFF)) != 0LL )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v10);
            v11 = *v10;
            if ( (*v10 & 1) != 0 )
              break;
            if ( !v11 )
              goto LABEL_30;
            ExpBlockOnLockedHandleEntry(v8, v10, v11);
          }
        }
        while ( v11 != _InterlockedCompareExchange64(v10, v11 - 1, v11) );
        HandlePointer = ExGetHandlePointer(v10);
        v13 = HandlePointer;
        if ( *(_DWORD *)(HandlePointer + 264) != v5 )
        {
          ExUnlockHandleTableEntry(v8, v10);
          return 3221227266LL;
        }
        if ( a3 && *(_DWORD *)(HandlePointer + 272) != a3 )
        {
          _InterlockedIncrement64(v10);
          _InterlockedOr(v20, 0);
          if ( *(_QWORD *)(v8 + 48) )
            ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
        }
        else
        {
          if ( AlpcpReferenceBlob(HandlePointer) )
          {
            AlpcpLockForCachedReferenceBlob(v13);
            --*(_WORD *)(v13 - 30);
            _InterlockedIncrement64(v10);
            _InterlockedOr(v20, 0);
            if ( *(_QWORD *)(v8 + 48) )
              ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
            if ( *(_DWORD *)(v13 + 264) != v5
              || a3 && *(_DWORD *)(v13 + 272) != a3
              || !*(_QWORD *)(v13 + 24) && !*(_QWORD *)(v13 + 16) )
            {
              AlpcpUnlockMessage(v13);
              return 3221227266LL;
            }
            if ( a1 )
            {
              if ( *(_QWORD *)(v13 + 184) == *(_QWORD *)(a1 + 16) || *(_QWORD *)(v13 + 192) == a1 )
                goto LABEL_22;
            }
            else
            {
              v19 = *(_QWORD *)(v13 + 16);
              if ( v19 && *(_KPROCESS **)(v19 + 24) == KeGetCurrentThread()->ApcState.Process )
                goto LABEL_22;
            }
            AlpcpUnlockMessage(v13);
            return 3221225506LL;
          }
          _InterlockedIncrement64(v10);
          _InterlockedOr(v20, 0);
          if ( *(_QWORD *)(v8 + 48) )
          {
            ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
            return 3221227266LL;
          }
        }
      }
      else
      {
LABEL_30:
        ExHandleLogBadReference(v8, v5 & 0x3FFFFFF, PreviousMode);
      }
    }
    return 3221227266LL;
  }
  if ( !a1 )
    return 3221227266LL;
  v15 = *(_QWORD *)(a1 + 16);
  if ( v15 )
  {
    a2 = (unsigned int)a2;
    LODWORD(a2) = a2 & 0x7FFFFFFF;
    v16 = AlpcReferenceBlobByHandle(v15 + 40, a2, AlpcReserveType);
    v17 = v16;
    if ( v16 )
    {
      v13 = *(_QWORD *)(v16 + 24);
      AlpcpLockForCachedReferenceBlob(v13);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 40), 1, 0) )
      {
        AlpcpUnlockMessage(v13);
        AlpcpDereferenceBlobEx(v17);
        return 3221227272LL;
      }
      *(_DWORD *)(v13 + 264) &= ~0x80000000;
      do
        v18 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v18 );
      *(_DWORD *)(v13 + 272) = v18;
LABEL_22:
      *a5 = v13;
      return 0LL;
    }
  }
  return 3221226224LL;
}
