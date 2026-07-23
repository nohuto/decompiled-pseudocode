/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x140AD163C
 * Callers:
 *     NtInitializeNlsFiles @ 0x140AD14E0 (NtInitializeNlsFiles.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(struct _LIST_ENTRY **a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *Blink; // rsi
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  struct _KLOCK_ENTRIES *v6; // r9
  struct _KTHREAD *CurrentThread; // r15
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // r14
  struct _LIST_ENTRY *v11; // r14
  __int64 v12; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE SectionHandle; // [rsp+D0h] [rbp+50h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+58h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  Flink = PsGetCurrentServerSiloGlobals()[64].Flink;
  Blink = Flink->Blink;
  if ( (unsigned __int64)Blink > 1 )
  {
    PsReferenceSiloContext(Flink->Blink);
LABEL_3:
    *a1 = Blink;
    return 0;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    ZwClose(FileHandle);
    if ( v5 < 0 )
      return v5;
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    Blink = (struct _LIST_ENTRY *)Object;
    ZwClose(SectionHandle);
    if ( v5 < 0 )
      return v5;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)Flink, 0LL, 0LL, v6);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Flink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Flink, v8, (__int64)Flink);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    v11 = Flink->Blink;
    if ( v11 == (struct _LIST_ENTRY *)1 )
    {
      PsReferenceSiloContext(Blink);
      Flink->Blink = Blink;
    }
    else if ( v11 )
    {
      ObfDereferenceObject(Blink);
      Blink = v11;
      PsReferenceSiloContext(v11);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Flink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Flink);
    KeAbPostRelease((unsigned __int64)Flink);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12);
    goto LABEL_3;
  }
  return result;
}
