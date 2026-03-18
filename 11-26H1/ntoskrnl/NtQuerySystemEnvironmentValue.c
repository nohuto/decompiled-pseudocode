/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x14083DE30
 * Callers:
 *     DifNtQuerySystemEnvironmentValueWrapper @ 0x140685D40 (DifNtQuerySystemEnvironmentValueWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     HalGetEnvironmentVariable @ 0x14057C330 (HalGetEnvironmentVariable.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeToMultiByteSize @ 0x14096C100 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x14096C2C0 (RtlUnicodeStringToAnsiString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySystemEnvironmentValue(
        __m128i *Address,
        volatile void *a2,
        unsigned __int16 a3,
        unsigned __int16 *a4)
{
  SIZE_T v5; // r15
  KPROCESSOR_MODE PreviousMode; // di
  unsigned __int16 v10; // bx
  const WCHAR *v11; // r14
  __int16 UShortFromUser; // ax
  unsigned __int16 v13; // bx
  NTSTATUS v14; // ebx
  void *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int EnvironmentVariable; // ebx
  unsigned int v18; // ebx
  ULONG BytesInMultiByteString; // [rsp+24h] [rbp-64h] BYREF
  STRING DestinationString; // [rsp+28h] [rbp-60h] BYREF
  __m128i Addressa; // [rsp+38h] [rbp-50h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h]

  v5 = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  DestinationString.Buffer = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v23 = 1LL;
    ProbeForRead(Address, 1uLL, 4u);
    Addressa = *Address;
    v10 = _mm_cvtsi128_si32(Addressa);
    if ( !v10 )
      return 3221225477LL;
    v11 = (const WCHAR *)Addressa.m128i_i64[1];
    ProbeForRead((volatile void *)Addressa.m128i_i64[1], v10, 2u);
    ProbeForWrite(a2, v5, 2u);
    if ( a4 )
    {
      UShortFromUser = RtlReadUShortFromUser(a4);
      RtlWriteUShortToUser(a4, UShortFromUser);
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    Addressa = *Address;
    v11 = (const WCHAR *)_mm_srli_si128(Addressa, 8).m128i_u64[0];
    v10 = _mm_cvtsi128_si32(Addressa);
  }
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v11, v10);
  v13 = BytesInMultiByteString + 1;
  LODWORD(P) = BytesInMultiByteString + 1;
  DestinationString.Buffer = (char *)ExAllocatePool2(0x40uLL);
  if ( !DestinationString.Buffer )
    return 3221225626LL;
  DestinationString.MaximumLength = v13;
  v14 = RtlUnicodeStringToAnsiString(&DestinationString, (PCUNICODE_STRING)&Addressa, 0);
  if ( v14 >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    P = Pool2;
    if ( Pool2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 0x400u, (char *)Pool2);
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( EnvironmentVariable )
      {
        ExFreePoolWithTag(Pool2, 0);
        return 3221225473LL;
      }
      else
      {
        RtlInitAnsiString(&DestinationString, (PCSZ)Pool2);
        Addressa.m128i_i64[1] = (__int64)a2;
        Addressa.m128i_i16[1] = v5;
        Addressa.m128i_i16[0] = 0;
        v18 = RtlAnsiStringToUnicodeString((PUNICODE_STRING)&Addressa, &DestinationString, 0);
        if ( a4 )
          *a4 = Addressa.m128i_i16[0];
        ExFreePoolWithTag(Pool2, 0);
        return v18;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return 3221225626LL;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return (unsigned int)v14;
  }
}
