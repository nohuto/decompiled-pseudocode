/*
 * XREFs of CreateMiniNtBootKey @ 0x140CAFD20
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExTryToAcquireFastMutex @ 0x140470010 (ExTryToAcquireFastMutex.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void CreateMiniNtBootKey()
{
  NTSTATUS v0; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // cl
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  struct _FAST_MUTEX FastMutex; // [rsp+80h] [rbp+7h] BYREF
  ULONG Disposition; // [rsp+E0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp+77h] BYREF

  Disposition = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v0 = 0;
  DestinationString = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 0x200uLL, 0x74696E49u);
  v2 = Pool2;
  if ( !Pool2 )
    goto LABEL_13;
  swprintf_s(Pool2, 0x100uLL, L"%s\\Control", PspSiloMonitorLock.OtherTransferCount);
  v2[255] = 0;
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    Handle = 0LL;
    RtlInitUnicodeString(&DestinationString, L"MiniNT");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v0 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    if ( v0 >= 0 )
      ZwClose(Handle);
    ZwClose(KeyHandle);
  }
  if ( v0 < 0 )
LABEL_13:
    KeBugCheckEx(0x32u, v0, 6uLL, 0LL, 0LL);
  ExFreePoolWithTag(v2, 0);
  if ( InitForceInline == 1 )
  {
    memset(&FastMutex, 0, 52);
    ExTryToAcquireFastMutex(&FastMutex);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    KeLeaveGuardedRegion();
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
}
