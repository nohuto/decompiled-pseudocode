/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x140844070
 * Callers:
 *     DifNtQuerySystemEnvironmentValueWrapper @ 0x140689920 (DifNtQuerySystemEnvironmentValueWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     HalGetEnvironmentVariable @ 0x14057E860 (HalGetEnvironmentVariable.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeToMultiByteSize @ 0x14097CA40 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValue(
        PUNICODE_STRING VariableName,
        PWSTR VariableValue,
        USHORT ValueLength,
        PUSHORT ReturnLength)
{
  SIZE_T v5; // r15
  KPROCESSOR_MODE PreviousMode; // di
  unsigned __int16 v10; // bx
  const WCHAR *v11; // r14
  __int16 UShortFromUser; // ax
  unsigned __int16 v13; // bx
  int v14; // ebx
  void *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int EnvironmentVariable; // ebx
  NTSTATUS v18; // ebx
  ULONG BytesInMultiByteString; // [rsp+24h] [rbp-64h] BYREF
  _STRING DestinationString; // [rsp+28h] [rbp-60h] BYREF
  __m128i Address; // [rsp+38h] [rbp-50h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h]

  v5 = ValueLength;
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  DestinationString.Buffer = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v23 = 1LL;
    ProbeForRead(VariableName, 1uLL, 4u);
    Address = *(__m128i *)VariableName;
    v10 = _mm_cvtsi128_si32(Address);
    if ( !v10 )
      return -1073741819;
    v11 = (const WCHAR *)Address.m128i_i64[1];
    ProbeForRead((volatile void *)Address.m128i_i64[1], v10, 2u);
    ProbeForWrite(VariableValue, v5, 2u);
    if ( ReturnLength )
    {
      UShortFromUser = RtlReadUShortFromUser(ReturnLength);
      RtlWriteUShortToUser(ReturnLength, UShortFromUser);
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    Address = *(__m128i *)VariableName;
    v11 = (const WCHAR *)_mm_srli_si128(Address, 8).m128i_u64[0];
    v10 = _mm_cvtsi128_si32(Address);
  }
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v11, v10);
  v13 = BytesInMultiByteString + 1;
  LODWORD(P) = BytesInMultiByteString + 1;
  DestinationString.Buffer = (char *)ExAllocatePool2(0x40uLL);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v13;
  v14 = RtlUnicodeStringToAnsiString(&DestinationString, (PCUNICODE_STRING)&Address, 0);
  if ( v14 >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    P = Pool2;
    if ( Pool2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 0x400u, (char *)Pool2);
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( EnvironmentVariable )
      {
        ExFreePoolWithTag(Pool2, 0);
        return -1073741823;
      }
      else
      {
        RtlInitAnsiString(&DestinationString, (PCSZ)Pool2);
        Address.m128i_i64[1] = (__int64)VariableValue;
        Address.m128i_i16[1] = v5;
        Address.m128i_i16[0] = 0;
        v18 = RtlAnsiStringToUnicodeString((PUNICODE_STRING)&Address, &DestinationString, 0);
        if ( ReturnLength )
          *ReturnLength = Address.m128i_i16[0];
        ExFreePoolWithTag(Pool2, 0);
        return v18;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return -1073741670;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return v14;
  }
}
