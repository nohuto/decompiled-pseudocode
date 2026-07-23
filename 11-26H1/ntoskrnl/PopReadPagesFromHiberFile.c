/*
 * XREFs of PopReadPagesFromHiberFile @ 0x140778074
 * Callers:
 *     PopReadResumeContext @ 0x140B6413C (PopReadResumeContext.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IoPageRead @ 0x1404F2190 (IoPageRead.c)
 *     RtlLongLongAdd @ 0x1405347AC (RtlLongLongAdd.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadPagesFromHiberFile(unsigned int a1, unsigned int a2, PVOID *a3)
{
  unsigned __int64 v4; // rsi
  int Status; // edi
  unsigned __int64 v6; // r11
  void *Pool2; // rax
  PMDL Mdl; // rax
  struct _MDL *v9; // rsi
  LARGE_INTEGER StartingOffset; // [rsp+30h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+38h] BYREF

  v14 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( !LOBYTE(PpmIdlePolicyLock.Padding[2])
    || (char *)PopHiberInfo - 1 > (char *)0xFFFFFFFFFFFFFFFDLL
    || (unsigned __int64)&FileObject[-1].FileObjectExtension + 7 > 0xFFFFFFFFFFFFFFFDuLL
    || qword_140F108F0 < 0x1000 )
  {
    Status = -1073741637;
LABEL_23:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0x206D654Du);
      *a3 = 0LL;
    }
    return (unsigned int)Status;
  }
  v4 = (unsigned __int64)a2 << 12;
  if ( v4 > 0xFFFFFFFF || (StartingOffset.QuadPart = 0LL, !is_mul_ok(a1, 0x1000uLL)) )
  {
    Status = -1073741675;
    goto LABEL_23;
  }
  StartingOffset.QuadPart = (unsigned __int64)a1 << 12;
  Status = RtlLongLongAdd(StartingOffset.QuadPart, (unsigned int)v4, &v14);
  if ( Status < 0 )
    goto LABEL_23;
  if ( v14 > v6 )
  {
    Status = -1073741807;
    goto LABEL_23;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  *a3 = Pool2;
  if ( !Pool2 )
  {
    Status = -1073741801;
    goto LABEL_23;
  }
  Mdl = IoAllocateMdl(Pool2, v4, 0, 0, 0LL);
  v9 = Mdl;
  if ( !Mdl )
  {
    Status = -1073741670;
    goto LABEL_23;
  }
  Status = MmProbeAndLockPagesEx((__int64)Mdl, 0LL);
  if ( Status >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    IoStatusBlock = 0LL;
    Status = IoPageRead(FileObject, v9, &StartingOffset, &Event, &IoStatusBlock);
    if ( Status == 259 )
    {
      Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( Status >= 0 )
        Status = IoStatusBlock.Status;
    }
    MmUnlockPages(v9);
  }
  IoFreeMdl(v9);
  if ( Status < 0 )
    goto LABEL_23;
  return (unsigned int)Status;
}
