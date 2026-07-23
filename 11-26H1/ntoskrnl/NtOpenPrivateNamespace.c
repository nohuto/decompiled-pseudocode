/*
 * XREFs of NtOpenPrivateNamespace @ 0x140ADB620
 * Callers:
 *     DifNtOpenPrivateNamespaceWrapper @ 0x140681F20 (DifNtOpenPrivateNamespaceWrapper.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1408EED68 (ObpCaptureBoundaryDescriptor.c)
 *     ObpLookupNamespaceEntry @ 0x1408EF0CC (ObpLookupNamespaceEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  KPROCESSOR_MODE AccessMode; // r15
  int ULongFromUser; // esi
  ULONG v9; // edi
  NTSTATUS result; // eax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r13
  struct _KTHREAD *CurrentThread; // rcx
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbx
  _QWORD *v17; // rsi
  signed __int64 *v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  signed __int64 v21; // rtt
  __int64 ULong64FromUser; // rax
  void *v23; // rsi
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  NTSTATUS v27; // ebx
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  int v29; // [rsp+58h] [rbp-40h]
  HANDLE Handle; // [rsp+60h] [rbp-38h] BYREF

  P = 0LL;
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  ULongFromUser = 0;
  if ( AccessMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(NamespaceHandle);
    RtlWriteULong64ToUser(NamespaceHandle, ULong64FromUser);
    if ( ObjectAttributes )
    {
      if ( ((unsigned __int8)ObjectAttributes & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      ULongFromUser = RtlReadULongFromUser(&ObjectAttributes->Attributes);
      v29 = ULongFromUser;
    }
  }
  else if ( ObjectAttributes )
  {
    ULongFromUser = ObjectAttributes->Attributes;
  }
  v9 = ULongFromUser & (AccessMode != 0 ? 7666 : 73714);
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor, (__int64 *)&P);
  if ( result >= 0 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[45], 0LL, 0LL, v13);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[45], 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&CurrentServerSiloGlobals[45],
        v14,
        (__int64)&CurrentServerSiloGlobals[45]);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    v17 = ObpLookupNamespaceEntry((__int64)&CurrentServerSiloGlobals[8], (__int64)P);
    ExFreePoolWithTag(P, 0x534E624Fu);
    v18 = (signed __int64 *)&CurrentServerSiloGlobals[45];
    if ( v17 && (v23 = (void *)v17[2]) != 0LL )
    {
      PsReferenceSiloContext(v23);
      _m_prefetchw(v18);
      v24 = *v18;
      v25 = *v18 - 16;
      if ( (*v18 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v25 = 0LL;
      if ( (v24 & 2) != 0 || (v26 = *v18, v26 != _InterlockedCompareExchange64(v18, v25, v24)) )
        ExfReleasePushLock(&CurrentServerSiloGlobals[45].Flink);
      KeAbPostRelease((unsigned __int64)&CurrentServerSiloGlobals[45]);
      KeLeaveCriticalRegion();
      v27 = ObOpenObjectByPointer(v23, v9, 0LL, DesiredAccess, ObpDirectoryObjectType, AccessMode, &Handle);
      LODWORD(P) = v27;
      ObfDereferenceObject(v23);
      if ( AccessMode )
        RtlWriteULong64ToUser(NamespaceHandle, (__int64)Handle);
      else
        *NamespaceHandle = Handle;
      return v27;
    }
    else
    {
      v19 = *v18;
      v20 = *v18 - 16;
      if ( (*v18 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v20 = 0LL;
      _m_prefetchw(v18);
      if ( (v19 & 2) != 0 || (v21 = *v18, v21 != _InterlockedCompareExchange64(v18, v20, v19)) )
        ExfReleasePushLock(&CurrentServerSiloGlobals[45].Flink);
      KeAbPostRelease((unsigned __int64)&CurrentServerSiloGlobals[45]);
      KeLeaveCriticalRegion();
      return -1073741766;
    }
  }
  return result;
}
