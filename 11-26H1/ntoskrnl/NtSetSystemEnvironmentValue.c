/*
 * XREFs of NtSetSystemEnvironmentValue @ 0x14083E6B0
 * Callers:
 *     DifNtSetSystemEnvironmentValueWrapper @ 0x14068D920 (DifNtSetSystemEnvironmentValueWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     HalSetEnvironmentVariable @ 0x14057C3D0 (HalSetEnvironmentVariable.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     RtlUnicodeToMultiByteSize @ 0x14096C100 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x14096C2C0 (RtlUnicodeStringToAnsiString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetSystemEnvironmentValue(void *Src, void *a2)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS v6; // ebx
  unsigned __int16 v7; // r14
  unsigned __int16 v8; // si
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ebx
  volatile void *Address[2]; // [rsp+20h] [rbp-88h] BYREF
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-78h] BYREF
  PVOID P; // [rsp+58h] [rbp-50h]
  PVOID Pool2; // [rsp+60h] [rbp-48h]
  STRING v15; // [rsp+68h] [rbp-40h] BYREF
  STRING DestinationString; // [rsp+78h] [rbp-30h] BYREF
  ULONG BytesInMultiByteString; // [rsp+C0h] [rbp+18h] BYREF
  __int16 v18; // [rsp+C8h] [rbp+20h] BYREF

  DestinationString = 0LL;
  v15 = 0LL;
  *(_OWORD *)Address = 0LL;
  SourceString = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v18 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(BytesInMultiByteString) = PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(Address, Src, 0x10uLL);
  }
  else
  {
    RtlCopyVolatileMemory(Address, Src, 0x10uLL);
  }
  if ( !LOWORD(Address[0]) )
    return 3221225626LL;
  if ( PreviousMode )
  {
    ProbeForRead(Address[1], LOWORD(Address[0]), 2u);
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(&SourceString, a2, 0x10uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&SourceString, a2, 0x10uLL);
  }
  if ( !SourceString.Length )
    return 3221225626LL;
  if ( PreviousMode )
  {
    ProbeForRead(SourceString.Buffer, SourceString.Length, 2u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( Address[1] )
    {
      Pool2 = (PVOID)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        goto LABEL_20;
      if ( LOWORD(Address[0]) && ((__int64)Address[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(Pool2, (void *)Address[1], LOWORD(Address[0]));
    }
    else
    {
      Address[1] = &v18;
      LODWORD(Address[0]) = 0x20000;
    }
    if ( SourceString.Buffer )
    {
      P = (PVOID)ExAllocatePool2(0x40uLL);
      if ( !P )
        goto LABEL_20;
      if ( SourceString.Length && ((__int64)SourceString.Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(P, SourceString.Buffer, SourceString.Length);
    }
    else
    {
      SourceString.Buffer = (wchar_t *)&v18;
      *(_DWORD *)&SourceString.Length = 0x20000;
    }
  }
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, (PCWCH)Address[1], LOWORD(Address[0]));
  v7 = BytesInMultiByteString + 1;
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, SourceString.Buffer, SourceString.Length);
  v8 = BytesInMultiByteString + 1;
  DestinationString.Buffer = (char *)ExAllocatePool2(0x40uLL);
  if ( DestinationString.Buffer )
  {
    DestinationString.MaximumLength = v7;
    v15.Buffer = (char *)ExAllocatePool2(0x40uLL);
    if ( v15.Buffer )
    {
      v15.MaximumLength = v8;
      v6 = RtlUnicodeStringToAnsiString(&DestinationString, (PCUNICODE_STRING)Address, 0);
      if ( v6 >= 0 )
      {
        v6 = RtlUnicodeStringToAnsiString(&v15, &SourceString, 0);
        if ( v6 >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
          v10 = HalSetEnvironmentVariable(DestinationString.Buffer, v15.Buffer);
          ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
          KeLeaveCriticalRegion();
          v6 = v10 != 0 ? 0xC000009A : 0;
        }
      }
      goto LABEL_39;
    }
  }
LABEL_20:
  v6 = -1073741670;
LABEL_39:
  if ( v15.Buffer )
    ExFreePoolWithTag(v15.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v6;
}
