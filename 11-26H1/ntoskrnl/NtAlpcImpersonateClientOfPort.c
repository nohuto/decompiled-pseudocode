/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x140992370
 * Callers:
 *     DifNtAlpcImpersonateClientOfPortWrapper @ 0x140670A00 (DifNtAlpcImpersonateClientOfPortWrapper.c)
 *     NtImpersonateClientOfPort @ 0x1407C2C30 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     AlpcpImpersonateMessage @ 0x140903CB0 (AlpcpImpersonateMessage.c)
 *     SeImpersonateClientEx @ 0x1409041F0 (SeImpersonateClientEx.c)
 *     AlpcpReferenceConnectedPort @ 0x140905270 (AlpcpReferenceConnectedPort.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     AlpcReferenceBlobByHandle @ 0x14098FD60 (AlpcReferenceBlobByHandle.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  HANDLE v5; // r10
  void *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  int ULongFromUser; // esi
  int CallbackId; // r14d
  _QWORD *v10; // r13
  KPROCESSOR_MODE PreviousMode; // cl
  char v12; // di
  __int16 UShortFromUser; // ax
  __int64 v14; // rdi
  ULONG_PTR v15; // r15
  __int64 v16; // rdx
  NTSTATUS v17; // ebx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  char v20; // al
  __int64 *v21; // rbx
  unsigned __int64 HandlePointer; // rax
  ULONG_PTR v23; // rdi
  _DWORD *v24; // rax
  bool v25; // zf
  volatile __int64 *v27; // rcx
  ULONG_PTR v28; // rbx
  __int64 v29; // rcx
  signed __int32 v30; // eax
  __int64 v31; // rax
  signed __int32 v32[8]; // [rsp+0h] [rbp-D8h] BYREF
  PVOID v33; // [rsp+30h] [rbp-A8h]
  int v34; // [rsp+38h] [rbp-A0h]
  int v35; // [rsp+3Ch] [rbp-9Ch]
  __int64 v36; // [rsp+48h] [rbp-90h]
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+50h] [rbp-88h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+10h] BYREF
  BOOL v40; // [rsp+F8h] [rbp+20h]

  v5 = PortHandle;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ULongFromUser = 0;
  CallbackId = 0;
  v10 = 0LL;
  v33 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v40) = PreviousMode;
  LOBYTE(Object) = PreviousMode;
  if ( Message )
  {
    v12 = KeGetCurrentThread()->PreviousMode;
    if ( v12 )
      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)&Message->u2);
    else
      UShortFromUser = Message->u2.s2.Type;
    if ( (UShortFromUser & 0x1000) != 0 )
    {
      if ( v12 )
        ULongFromUser = RtlReadULongFromUser((unsigned int *)&Message->DoNotUseThisField + 2);
      else
        ULongFromUser = *((_DWORD *)&Message->DoNotUseThisField + 2);
      v34 = ULongFromUser;
      if ( v12 )
        CallbackId = RtlReadULongFromUser((unsigned int *)&Message->DoNotUseThisField + 3);
      else
        CallbackId = *((_DWORD *)&Message->DoNotUseThisField + 3);
    }
    else
    {
      if ( v12 )
        ULongFromUser = RtlReadULongFromUser(&Message->MessageId);
      else
        ULongFromUser = Message->MessageId;
      v34 = ULongFromUser;
      if ( v12 )
        CallbackId = RtlReadULongFromUser((unsigned int *)&Message->32);
      else
        CallbackId = Message->CallbackId;
    }
    v35 = CallbackId;
    if ( !ULongFromUser )
      goto LABEL_82;
    PreviousMode = v40;
    v5 = PortHandle;
  }
  v33 = (PVOID)((unsigned __int64)Flags >> 2);
  if ( (unsigned int)((unsigned __int64)Flags >> 2) > 3 )
  {
LABEL_82:
    v17 = -1073741811;
    goto LABEL_55;
  }
  v36 = (unsigned __int8)Flags & 1;
  v14 = (unsigned int)Flags & ((4 * (unsigned int)((unsigned __int64)Flags >> 2)) | 2);
  v15 = v14 != 0;
  v40 = v14 != 0;
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(v5, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v10 = Object;
  if ( v17 < 0 )
    goto LABEL_55;
  if ( ULongFromUser )
  {
    if ( ULongFromUser < 0 )
    {
      if ( !Object )
      {
        v17 = -1073740030;
        v23 = 0LL;
        goto LABEL_49;
      }
      v28 = 0LL;
      v29 = *((_QWORD *)Object + 2);
      if ( v29 )
        v28 = AlpcReferenceBlobByHandle((_QWORD *)(v29 + 40), ULongFromUser & 0x7FFFFFFF, AlpcReserveType, v19);
      if ( v28 )
      {
        v23 = *(_QWORD *)(v28 + 24);
        AlpcpLockForCachedReferenceBlob(v23, v16, v18, v19);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 40), 1, 0) )
        {
          AlpcpUnlockMessage(v23, v16, v18, v19);
          AlpcpDereferenceBlobEx(v28, 1);
          v17 = -1073740024;
          v23 = 0LL;
          goto LABEL_49;
        }
        *(_DWORD *)(v23 + 264) &= ~0x80000000;
        do
          v30 = _InterlockedIncrement(&AlpcpNextCallbackId);
        while ( !v30 );
        *(_DWORD *)(v23 + 272) = v30;
LABEL_48:
        v17 = 0;
        goto LABEL_49;
      }
      v17 = -1073741072;
      v23 = 0LL;
    }
    else
    {
      if ( (ULongFromUser & 0xFC000000) != 0 )
      {
        if ( AlpcpSecondaryMessageTables )
          v15 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)(unsigned int)ULongFromUser >> 26));
        else
          v15 = 0LL;
      }
      else
      {
        v15 = AlpcMessageTable;
      }
      if ( v15 )
      {
        v20 = KeGetCurrentThread()->PreviousMode;
        LOBYTE(Object) = v20;
        if ( (ULongFromUser & 0x3FC) != 0 )
        {
          v21 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v15, ULongFromUser & 0x3FFFFFF);
          v20 = (char)Object;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v21 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              _m_prefetchw(v21);
              v18 = *v21;
              if ( (*v21 & 1) == 0 )
                break;
              if ( v18 == _InterlockedCompareExchange64(v21, v18 - 1, v18) )
                goto LABEL_32;
            }
            if ( !v18 )
              break;
            ExpBlockOnLockedHandleEntry(v15, v21, v18);
          }
          v20 = (char)Object;
        }
        v21 = 0LL;
        ExHandleLogBadReference(v15, ULongFromUser & 0x3FFFFFF, v20);
LABEL_32:
        if ( v21 )
        {
          HandlePointer = ExGetHandlePointer(v21);
          v23 = HandlePointer;
          if ( *(_DWORD *)(HandlePointer + 264) == ULongFromUser )
          {
            v24 = (_DWORD *)(HandlePointer + 272);
            Object = v24;
            if ( CallbackId )
            {
              if ( *v24 != CallbackId )
              {
                _InterlockedIncrement64(v21);
                v27 = (volatile __int64 *)(v15 + 48);
                _InterlockedOr(v32, 0);
                if ( !*(_QWORD *)(v15 + 48) )
                  goto LABEL_65;
                goto LABEL_64;
              }
            }
            else
            {
              Object = v24;
            }
            if ( AlpcpReferenceBlob(v23) )
            {
              AlpcpLockForCachedReferenceBlob(v23, v16, v18, v19);
              --*(_WORD *)(v23 - 30);
              _InterlockedIncrement64(v21);
              _InterlockedOr(v32, 0);
              if ( *(_QWORD *)(v15 + 48) )
                ExfUnblockPushLock((volatile __int64 *)(v15 + 48), 0LL);
              if ( *(_DWORD *)(v23 + 264) != ULongFromUser )
                goto LABEL_81;
              if ( !CallbackId || *(_DWORD *)Object == CallbackId )
              {
                if ( !*(_QWORD *)(v23 + 24) && !*(_QWORD *)(v23 + 16) )
                {
LABEL_81:
                  AlpcpUnlockMessage(v23, v16, v18, v19);
                  v17 = -1073740030;
                  v23 = 0LL;
                  LODWORD(v15) = v40;
                  goto LABEL_49;
                }
                if ( v10 )
                {
                  if ( *(_QWORD *)(v23 + 184) == v10[2] )
                  {
LABEL_47:
                    LODWORD(v15) = v40;
                    goto LABEL_48;
                  }
                  v25 = *(_QWORD *)(v23 + 192) == (_QWORD)v10;
                }
                else
                {
                  v16 = *(_QWORD *)(v23 + 16);
                  if ( !v16 )
                  {
LABEL_84:
                    AlpcpUnlockMessage(v23, v16, v18, v19);
                    v17 = -1073741790;
                    v23 = 0LL;
                    LODWORD(v15) = v40;
                    goto LABEL_49;
                  }
                  v25 = *(_KPROCESS **)(v16 + 24) == KeGetCurrentThread()->ApcState.Process;
                }
                if ( v25 )
                  goto LABEL_47;
                goto LABEL_84;
              }
              AlpcpUnlockMessage(v23, v16, v18, v19);
LABEL_65:
              v17 = -1073740030;
              v23 = 0LL;
              LODWORD(v15) = v40;
              goto LABEL_49;
            }
            _InterlockedIncrement64(v21);
            _InterlockedOr(v32, 0);
            if ( !*(_QWORD *)(v15 + 48) )
              goto LABEL_65;
            v27 = (volatile __int64 *)(v15 + 48);
LABEL_64:
            ExfUnblockPushLock(v27, 0LL);
            goto LABEL_65;
          }
          ExUnlockHandleTableEntry(v15, v21);
          v17 = -1073740030;
          v23 = 0LL;
          LODWORD(v15) = v40;
        }
        else
        {
          v17 = -1073740030;
          v23 = 0LL;
          LODWORD(v15) = v40;
        }
      }
      else
      {
        v17 = -1073740030;
        v23 = 0LL;
        LODWORD(v15) = v40;
      }
    }
LABEL_49:
    if ( v17 >= 0 )
    {
      if ( *(_QWORD *)(v23 + 16) )
        v17 = 0;
      else
        v17 = -1073740030;
      if ( v17 >= 0 )
        v17 = AlpcpImpersonateMessage(
                (__int64)v10,
                v23,
                v36,
                (struct _KLOCK_ENTRIES *)(unsigned int)v15,
                (SECURITY_IMPERSONATION_LEVEL)v33);
      AlpcpUnlockMessage(v23, v16, v18, v19);
    }
    goto LABEL_55;
  }
  v31 = AlpcpReferenceConnectedPort((__int64)Object, v16, v18, v19);
  v6 = (void *)v31;
  if ( !v31 )
  {
    v17 = -1073741790;
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(v31 + 256) & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v31 + 416) & 0x400) != 0 )
    {
      v17 = -1073741790;
    }
    else
    {
      ClientContext = *(struct _SECURITY_CLIENT_CONTEXT *)(v31 + 64);
      if ( v14 )
      {
        if ( (int)v33 > ClientContext.SecurityQos.ImpersonationLevel )
        {
          v17 = -1073741790;
          goto LABEL_55;
        }
        ClientContext.SecurityQos.ImpersonationLevel = (int)v33;
      }
      v17 = SeImpersonateClientEx(&ClientContext, 0LL);
    }
  }
  else
  {
    v17 = -1073741790;
  }
LABEL_55:
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v10 )
    ObfDereferenceObject(v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v17;
}
