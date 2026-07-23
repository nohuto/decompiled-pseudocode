/*
 * XREFs of CmpSaveBootControlSet @ 0x140852EC8
 * Callers:
 *     CmpAcceptBoot @ 0x140854B2C (CmpAcceptBoot.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x14072ACE0 (ZwQuerySecurityObject.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140864FF0 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1408651EC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408B5EAC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpCleanupRollbackPacket @ 0x1408B7570 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B75D4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpRebuildKcbCache @ 0x1408C31A8 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpCopySyncTree @ 0x140948D9C (CmpCopySyncTree.c)
 *     CmpRetryBackOff @ 0x140B3E90C (CmpRetryBackOff.c)
 *     CmpInvalidateSubtree @ 0x140B494F4 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x140B4E8A4 (CmpAbortRollbackPacket.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  unsigned int v1; // r12d
  char v2; // r13
  _QWORD *v3; // rdi
  char v4; // si
  ULONG_PTR *v5; // r15
  struct _PRIVILEGE_SET *Pool; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG_PTR *v14; // r14
  ULONG_PTR v15; // r12
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  HANDLE v22; // rcx
  char *v23; // rdx
  int LengthNeeded; // [rsp+28h] [rbp-E0h]
  char v26; // [rsp+49h] [rbp-BFh]
  ULONG v27; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Length[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Disposition[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v32[3]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+118h] [rbp+10h] BYREF
  ULONG *v39; // [rsp+138h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+38h]
  __int64 *v41; // [rsp+148h] [rbp+40h]
  __int64 v42; // [rsp+150h] [rbp+48h]
  char v43; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  Disposition[0] = 0;
  DestinationString = 0LL;
  v2 = 0;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v3 = 0LL;
  memset(v32, 0, sizeof(v32));
  v4 = 0;
  v34 = 0LL;
  Disposition[1] = 0;
  v5 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  Handle = 0LL;
  Pool = 0LL;
  v29 = 0LL;
  Length[0] = 0;
  v27 = 0;
  CmpInitializeDelayDerefContext(&v34);
  v26 = CmpAcquireShutdownRundown(v8, v7);
  if ( v26 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.WriteTransferCount;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v9 >= 0 )
    {
      if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, Length) == -1073741789 )
      {
        Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
        if ( Pool )
        {
          if ( ZwQuerySecurityObject(KeyHandle, 4u, Pool, Length[0], Length) < 0 )
          {
            CmSiFreeMemory(Pool);
            Pool = 0LL;
          }
        }
      }
      DestinationString.MaximumLength = 256;
      DestinationString.Buffer = (wchar_t *)&v43;
      RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", v1);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = Pool;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v9 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, Disposition);
      if ( Pool )
        CmSiFreeMemory(Pool);
      if ( v9 >= 0 )
      {
        v9 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v10, 0, (__int64)v32, 0LL);
        if ( v9 < 0 )
        {
          v3 = (_QWORD *)v32[0];
        }
        else
        {
          v9 = CmObReferenceObjectByHandle((_DWORD)Handle, 131078, v11, 0, (__int64)&v29, 0LL);
          if ( v9 < 0 )
          {
            v3 = (_QWORD *)v32[0];
            v5 = (ULONG_PTR *)v29;
          }
          else
          {
            ((void (*)(void))CmpLockRegistryExclusive)();
            v3 = (_QWORD *)v32[0];
            v5 = (ULONG_PTR *)v29;
            while ( 1 )
            {
              v2 = 0;
              v9 = CmpPerformKeyBodyDeletionCheck(v3, 0LL);
              v4 = 1;
              if ( v9 < 0 )
                break;
              v9 = CmpPerformKeyBodyDeletionCheck(v5, 0LL);
              if ( v9 < 0 )
                break;
              v14 = v5 + 1;
              LOBYTE(v12) = 1;
              v15 = v5[1];
              v16 = CmpTryAcquireKcbIXLocks(v15, v12, v13, &v32[1], LengthNeeded);
              v9 = v16;
              if ( v16 == -1073741267 )
              {
                v2 = 1;
              }
              else if ( v16 < 0 )
              {
                break;
              }
              v17 = CmpPrepareToInvalidateAllHigherLayerKcbs(v15, 0LL, &v32[1]);
              v9 = v17;
              if ( v17 == -1073741267 )
              {
                v2 = 1;
              }
              else
              {
                v4 = 1;
                if ( v17 < 0 )
                  goto LABEL_31;
              }
              v18 = CmpPrepareForSubtreeInvalidation(v15, 0LL, &v32[1]);
              v9 = v18;
              if ( v18 != -1073741267 )
              {
                v4 = 1;
                if ( v18 < 0 )
                {
LABEL_31:
                  v2 = 0;
                  break;
                }
                if ( !v2 )
                {
                  CmpInvalidateAllHigherLayerKcbs(v15, 8LL, 0LL, &v34);
                  CmpInvalidateSubtree(v15, 8, 0, (unsigned int)&v34, (__int64)&Disposition[1]);
                  CmpAttachToRegistryProcess(&ApcState);
                  v2 = 1;
                  v9 = CmpCopySyncTree(
                         *(_QWORD *)(v3[1] + 32LL),
                         *(_DWORD *)(v3[1] + 40LL),
                         *(_QWORD *)(*v14 + 32),
                         *(_DWORD *)(*v14 + 40),
                         2,
                         Disposition[0] != 1);
                  CmpRebuildKcbCache(*v14);
                  break;
                }
              }
              LengthNeeded = v32[1];
              CmpLogTransactionAbortedWithChildName(v15, 0LL, 12LL);
              CmpUnlockRegistry(v19);
              v4 = 0;
              v9 = CmpAbortRollbackPacket(&v32[1], 0LL);
              if ( v9 < 0 )
              {
                v2 = 0;
                break;
              }
              CmpRetryBackOff(&v27);
              CmpCleanupRollbackPacket(&v32[1]);
              *(_OWORD *)&v32[1] = 0LL;
              CmpLockRegistryExclusive(v20);
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = -1073741431;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v34);
  if ( v4 )
    CmpUnlockRegistry(v21);
  if ( v2 )
    CmpDetachFromRegistryProcess(&ApcState);
  CmpCleanupRollbackPacket(&v32[1]);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v22 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    CmpReleaseShutdownRundown(v22);
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
    {
      v27 = v9;
      v23 = byte_140056B13;
      goto LABEL_53;
    }
  }
  else if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
  {
    v23 = &byte_140056ABF;
    v27 = Disposition[1];
LABEL_53:
    v29 = 0x1000000LL;
    v40 = 4LL;
    v39 = &v27;
    v42 = 8LL;
    v41 = &v29;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)v23, 0LL, 0LL, 4u, &v38);
  }
  return (unsigned int)v9;
}
