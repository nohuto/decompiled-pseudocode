/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1408ECAD0
 * Callers:
 *     DifNtAlpcOpenSenderProcessWrapper @ 0x140670B80 (DifNtAlpcOpenSenderProcessWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1408ECEA0 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderProcess(
        PHANDLE ProcessHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r13
  int v10; // ebx
  int v11; // r9d
  __int64 ULong64FromUser; // rax
  PVOID v13; // rsi
  struct _KLOCK_ENTRIES *v14; // r9
  ULONG_PTR v15; // rdi
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // r14
  __int64 v20; // r14
  signed __int64 *v21; // rbx
  void *v22; // rdx
  LegacyAutoBoost *v23; // r15
  signed __int64 v24; // r9
  signed __int64 v25; // r8
  int Object; // [rsp+20h] [rbp-A8h]
  int HandleInformation; // [rsp+28h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-90h] BYREF
  PVOID v29; // [rsp+48h] [rbp-80h] BYREF
  void *v30; // [rsp+50h] [rbp-78h] BYREF
  __int128 v31; // [rsp+58h] [rbp-70h] BYREF
  __int128 v32; // [rsp+68h] [rbp-60h]
  unsigned __int64 ClientViewSize; // [rsp+78h] [rbp-50h]
  OBJECT_ATTRIBUTES v34; // [rsp+80h] [rbp-48h] BYREF

  v31 = 0LL;
  v32 = 0LL;
  ClientViewSize = 0LL;
  memset(&v34, 0, 44);
  v30 = 0LL;
  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = 0LL;
  v10 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v29, 0LL);
  if ( v10 < 0 )
    goto LABEL_12;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(ProcessHandle);
    RtlWriteULong64ToUser(ProcessHandle, ULong64FromUser);
    AlpcpProbeAndCaptureMessageHeader(PortMessage, &v31);
    RtlCopyFromUser(&v34, ObjectAttributes, 0x30uLL);
  }
  else
  {
    v31 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    v32 = *(__int128 *)((char *)&PortMessage->8 + 8);
    ClientViewSize = PortMessage->ClientViewSize;
    v34 = *ObjectAttributes;
  }
  v13 = v29;
  v10 = AlpcpLookupMessage((_DWORD)v29, DWORD2(v32), ClientViewSize, v11, (__int64)BugCheckParameter2);
  if ( v10 < 0 )
  {
    ObfDereferenceObject(v13);
    goto LABEL_12;
  }
  v15 = BugCheckParameter2[0];
  if ( (*(_DWORD *)(BugCheckParameter2[0] + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(BugCheckParameter2[0]);
    ObfDereferenceObject(v13);
    v10 = -1073740029;
    goto LABEL_12;
  }
  v16 = *(_QWORD **)(BugCheckParameter2[0] + 32);
  if ( v16 )
  {
    v17 = v16[161] - *((_QWORD *)&v31 + 1);
    if ( !v17 )
      v17 = v16[162] - v32;
    if ( v17 )
    {
      AlpcpUnlockMessage(BugCheckParameter2[0]);
      ObfDereferenceObject(v13);
      v10 = -1073741813;
      goto LABEL_12;
    }
    v18 = (_QWORD *)v16[68];
    ObfReferenceObjectWithTag(v18, 0x63706C41u);
    goto LABEL_11;
  }
  v20 = *(_QWORD *)(BugCheckParameter2[0] + 24);
  if ( !v20 )
  {
LABEL_34:
    AlpcpUnlockMessage(v15);
    ObfDereferenceObject(v13);
    v10 = -1073741790;
    goto LABEL_12;
  }
  v21 = (signed __int64 *)(v20 + 352);
  v23 = (LegacyAutoBoost *)KeAbPreAcquire(v20 + 352, 0LL, 0LL, v14);
  v24 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 352), 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((signed __int64 *)(v20 + 352), 0, v23, (struct _KTHREAD *)(v20 + 352));
    v24 = 17LL;
  }
  v25 = 0LL;
  if ( v23 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v23, v22);
    else
      *((_BYTE *)v23 + 10) = 1;
  }
  if ( (*(_DWORD *)(v20 + 416) & 0x40) == 0 )
  {
    v18 = *(_QWORD **)(v20 + 24);
    if ( v18[58] == *((_QWORD *)&v31 + 1) )
    {
      ObfReferenceObjectWithTag(v18, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((unsigned __int64)v21);
LABEL_11:
      AlpcpUnlockMessage(v15);
      *(_QWORD *)&v32 = 0LL;
      LOBYTE(HandleInformation) = PreviousMode;
      LOBYTE(Object) = 0;
      v10 = PsOpenProcess(&v30, DesiredAccess, &v34, (char *)&v31 + 8, Object, HandleInformation);
      ObfDereferenceObjectWithTag(v18, 0x63706C41u);
      ObfDereferenceObject(v13);
      if ( v10 >= 0 )
      {
        if ( PreviousMode )
          RtlWriteULong64ToUser(ProcessHandle, (__int64)v30);
        else
          *ProcessHandle = v30;
      }
      goto LABEL_12;
    }
    if ( v24 != _InterlockedCompareExchange64(v21, v25, v24) )
      ExfReleasePushLockShared(v21);
    KeAbPostRelease((unsigned __int64)v21);
    goto LABEL_34;
  }
  if ( v24 != _InterlockedCompareExchange64(v21, v25, v24) )
    ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
  KeAbPostRelease(v20 + 352);
  AlpcpUnlockMessage(v15);
  ObfDereferenceObject(v13);
  v10 = -1073741769;
LABEL_12:
  KeLeaveCriticalRegion();
  return v10;
}
