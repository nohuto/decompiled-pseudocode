/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x1409C1390
 * Callers:
 *     DifNtAlpcImpersonateClientOfPortWrapper @ 0x14066CE20 (DifNtAlpcImpersonateClientOfPortWrapper.c)
 *     NtImpersonateClientOfPort @ 0x1407BFBD0 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14046C9F0 (ExHandleLogBadReference.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     AlpcpImpersonateMessage @ 0x1409281A0 (AlpcpImpersonateMessage.c)
 *     SeImpersonateClientEx @ 0x1409286E0 (SeImpersonateClientEx.c)
 *     AlpcpReferenceConnectedPort @ 0x140929760 (AlpcpReferenceConnectedPort.c)
 *     AlpcReferenceBlobByHandle @ 0x1409BED80 (AlpcReferenceBlobByHandle.c)
 *     AlpcpReferenceBlob @ 0x1409BEEB8 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1409BEF10 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 *     ExUnlockHandleTableEntry @ 0x140A33080 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall NtAlpcImpersonateClientOfPort(HANDLE Handle, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned int *v4; // rbx
  HANDLE v5; // r10
  void *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  int ULongFromUser; // esi
  unsigned int v9; // r14d
  _QWORD *v10; // r13
  KPROCESSOR_MODE PreviousMode; // cl
  char v12; // di
  __int16 UShortFromUser; // ax
  __int64 v14; // rdi
  BOOL v15; // r15d
  int v16; // ebx
  struct _KLOCK_ENTRIES *v17; // r9
  ULONG_PTR v18; // r15
  char v19; // al
  __int64 *v20; // rbx
  unsigned __int64 HandlePointer; // rax
  ULONG_PTR v22; // rdi
  _DWORD *v23; // rax
  bool v24; // zf
  volatile __int64 *v26; // rcx
  ULONG_PTR v27; // rbx
  __int64 v28; // rcx
  signed __int32 v29; // eax
  __int64 v30; // rax
  signed __int32 v31[8]; // [rsp+0h] [rbp-D8h] BYREF
  PVOID v32; // [rsp+30h] [rbp-A8h]
  int v33; // [rsp+38h] [rbp-A0h]
  unsigned int v34; // [rsp+3Ch] [rbp-9Ch]
  unsigned __int64 v35; // [rsp+48h] [rbp-90h]
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+50h] [rbp-88h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+10h] BYREF
  int v39; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v4 = (unsigned int *)a2;
  v5 = Handle;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ULongFromUser = 0;
  v9 = 0;
  v10 = 0LL;
  v32 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v39) = PreviousMode;
  LOBYTE(Object) = PreviousMode;
  if ( a2 )
  {
    v12 = KeGetCurrentThread()->PreviousMode;
    if ( v12 )
      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)(a2 + 4));
    else
      UShortFromUser = *(_WORD *)(a2 + 4);
    if ( (UShortFromUser & 0x1000) != 0 )
    {
      if ( v12 )
        ULongFromUser = RtlReadULongFromUser(v4 + 4);
      else
        ULongFromUser = v4[4];
      v33 = ULongFromUser;
      if ( v12 )
        v9 = RtlReadULongFromUser(v4 + 5);
      else
        v9 = v4[5];
    }
    else
    {
      if ( v12 )
        ULongFromUser = RtlReadULongFromUser(v4 + 6);
      else
        ULongFromUser = v4[6];
      v33 = ULongFromUser;
      if ( v12 )
        v9 = RtlReadULongFromUser(v4 + 8);
      else
        v9 = v4[8];
    }
    v34 = v9;
    if ( !ULongFromUser )
      goto LABEL_82;
    PreviousMode = v39;
    v5 = Handle;
  }
  v32 = (PVOID)(v3 >> 2);
  if ( (unsigned int)(v3 >> 2) > 3 )
  {
LABEL_82:
    v16 = -1073741811;
    goto LABEL_55;
  }
  v35 = v3 & 1;
  v14 = (unsigned int)v3 & ((4 * (unsigned int)(v3 >> 2)) | 2);
  v15 = v14 != 0;
  v39 = v15;
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(v5, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v10 = Object;
  if ( v16 < 0 )
    goto LABEL_55;
  if ( ULongFromUser )
  {
    if ( ULongFromUser < 0 )
    {
      if ( !Object )
      {
        v16 = -1073740030;
        v22 = 0LL;
        goto LABEL_49;
      }
      v27 = 0LL;
      v28 = *((_QWORD *)Object + 2);
      if ( v28 )
        v27 = AlpcReferenceBlobByHandle((_QWORD *)(v28 + 40), ULongFromUser & 0x7FFFFFFF, AlpcReserveType, v17);
      if ( v27 )
      {
        v22 = *(_QWORD *)(v27 + 24);
        AlpcpLockForCachedReferenceBlob(v22, a2, a3, v17);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 40), 1, 0) )
        {
          AlpcpUnlockMessage(v22, a2, a3, v17);
          AlpcpDereferenceBlobEx(v27, 1);
          v16 = -1073740024;
          v22 = 0LL;
          goto LABEL_49;
        }
        *(_DWORD *)(v22 + 264) &= ~0x80000000;
        do
          v29 = _InterlockedIncrement(&AlpcpNextCallbackId);
        while ( !v29 );
        *(_DWORD *)(v22 + 272) = v29;
LABEL_48:
        v16 = 0;
        goto LABEL_49;
      }
      v16 = -1073741072;
      v22 = 0LL;
    }
    else
    {
      if ( (ULongFromUser & 0xFC000000) != 0 )
      {
        if ( AlpcpSecondaryMessageTables )
          v18 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)(unsigned int)ULongFromUser >> 26));
        else
          v18 = 0LL;
      }
      else
      {
        v18 = AlpcMessageTable;
      }
      if ( v18 )
      {
        v19 = KeGetCurrentThread()->PreviousMode;
        LOBYTE(Object) = v19;
        if ( (ULongFromUser & 0x3FC) != 0 )
        {
          v20 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v18, ULongFromUser & 0x3FFFFFF);
          v19 = (char)Object;
        }
        else
        {
          v20 = 0LL;
        }
        if ( v20 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              _m_prefetchw(v20);
              a3 = *v20;
              if ( (*v20 & 1) == 0 )
                break;
              if ( a3 == _InterlockedCompareExchange64(v20, a3 - 1, a3) )
                goto LABEL_32;
            }
            if ( !a3 )
              break;
            ExpBlockOnLockedHandleEntry(v18, v20, a3);
          }
          v19 = (char)Object;
        }
        v20 = 0LL;
        ExHandleLogBadReference(v18, ULongFromUser & 0x3FFFFFF, v19);
LABEL_32:
        if ( v20 )
        {
          HandlePointer = ExGetHandlePointer(v20);
          v22 = HandlePointer;
          if ( *(_DWORD *)(HandlePointer + 264) == ULongFromUser )
          {
            v23 = (_DWORD *)(HandlePointer + 272);
            Object = v23;
            if ( v9 )
            {
              if ( *v23 != v9 )
              {
                _InterlockedIncrement64(v20);
                v26 = (volatile __int64 *)(v18 + 48);
                _InterlockedOr(v31, 0);
                if ( !*(_QWORD *)(v18 + 48) )
                  goto LABEL_65;
                goto LABEL_64;
              }
            }
            else
            {
              Object = v23;
            }
            if ( AlpcpReferenceBlob(v22) )
            {
              AlpcpLockForCachedReferenceBlob(v22, a2, a3, v17);
              --*(_WORD *)(v22 - 30);
              _InterlockedIncrement64(v20);
              _InterlockedOr(v31, 0);
              if ( *(_QWORD *)(v18 + 48) )
                ExfUnblockPushLock((volatile __int64 *)(v18 + 48), 0LL);
              if ( *(_DWORD *)(v22 + 264) != ULongFromUser )
                goto LABEL_81;
              if ( !v9 || *(_DWORD *)Object == v9 )
              {
                if ( !*(_QWORD *)(v22 + 24) && !*(_QWORD *)(v22 + 16) )
                {
LABEL_81:
                  AlpcpUnlockMessage(v22, a2, a3, v17);
                  v16 = -1073740030;
                  v22 = 0LL;
                  v15 = v39;
                  goto LABEL_49;
                }
                if ( v10 )
                {
                  if ( *(_QWORD *)(v22 + 184) == v10[2] )
                  {
LABEL_47:
                    v15 = v39;
                    goto LABEL_48;
                  }
                  v24 = *(_QWORD *)(v22 + 192) == (_QWORD)v10;
                }
                else
                {
                  a2 = *(_QWORD *)(v22 + 16);
                  if ( !a2 )
                  {
LABEL_84:
                    AlpcpUnlockMessage(v22, a2, a3, v17);
                    v16 = -1073741790;
                    v22 = 0LL;
                    v15 = v39;
                    goto LABEL_49;
                  }
                  v24 = *(_KPROCESS **)(a2 + 24) == KeGetCurrentThread()->ApcState.Process;
                }
                if ( v24 )
                  goto LABEL_47;
                goto LABEL_84;
              }
              AlpcpUnlockMessage(v22, a2, a3, v17);
LABEL_65:
              v16 = -1073740030;
              v22 = 0LL;
              v15 = v39;
              goto LABEL_49;
            }
            _InterlockedIncrement64(v20);
            _InterlockedOr(v31, 0);
            if ( !*(_QWORD *)(v18 + 48) )
              goto LABEL_65;
            v26 = (volatile __int64 *)(v18 + 48);
LABEL_64:
            ExfUnblockPushLock(v26, 0LL);
            goto LABEL_65;
          }
          ExUnlockHandleTableEntry(v18, v20);
          v16 = -1073740030;
          v22 = 0LL;
          v15 = v39;
        }
        else
        {
          v16 = -1073740030;
          v22 = 0LL;
          v15 = v39;
        }
      }
      else
      {
        v16 = -1073740030;
        v22 = 0LL;
        v15 = v39;
      }
    }
LABEL_49:
    if ( v16 >= 0 )
    {
      if ( *(_QWORD *)(v22 + 16) )
        v16 = 0;
      else
        v16 = -1073740030;
      if ( v16 >= 0 )
        v16 = AlpcpImpersonateMessage(
                (__int64)v10,
                v22,
                v35,
                (struct _KLOCK_ENTRIES *)v15,
                (SECURITY_IMPERSONATION_LEVEL)v32);
      AlpcpUnlockMessage(v22, a2, a3, v17);
    }
    goto LABEL_55;
  }
  v30 = AlpcpReferenceConnectedPort((__int64)Object, a2, a3, v17);
  v6 = (void *)v30;
  if ( !v30 )
  {
    v16 = -1073741790;
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(v30 + 256) & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v30 + 416) & 0x400) != 0 )
    {
      v16 = -1073741790;
    }
    else
    {
      ClientContext = *(struct _SECURITY_CLIENT_CONTEXT *)(v30 + 64);
      if ( v14 )
      {
        if ( (int)v32 > ClientContext.SecurityQos.ImpersonationLevel )
        {
          v16 = -1073741790;
          goto LABEL_55;
        }
        ClientContext.SecurityQos.ImpersonationLevel = (int)v32;
      }
      v16 = SeImpersonateClientEx(&ClientContext, 0LL);
    }
  }
  else
  {
    v16 = -1073741790;
  }
LABEL_55:
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v10 )
    ObfDereferenceObject(v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3);
  return (unsigned int)v16;
}
