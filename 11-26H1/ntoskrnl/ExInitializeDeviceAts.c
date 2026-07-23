/*
 * XREFs of ExInitializeDeviceAts @ 0x1406D4260
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpPrepareNewAtsDevice @ 0x1406D46DC (ExpPrepareNewAtsDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoQueryInterface @ 0x1409DC050 (IoQueryInterface.c)
 */

__int64 __fastcall ExInitializeDeviceAts(ULONG_PTR BugCheckParameter1, int a2)
{
  char v4; // r14
  int Interface; // esi
  __int64 v7; // rdx
  struct _KLOCK_ENTRIES *v8; // r9
  AutoBoost *v9; // rax
  volatile unsigned __int8 *v10; // rdx
  AutoBoost *v11; // rdi
  struct _KTHREAD *Blink; // rax
  void *SListFaultAddress; // rdx
  struct _KTHREAD *v14; // rcx
  __int64 v15; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-69h]
  _OWORD v17[3]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v18[8]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v19; // [rsp+78h] [rbp-11h]
  struct _KTHREAD *v20; // [rsp+F0h] [rbp+67h] BYREF

  memset(v17, 0, sizeof(v17));
  memset_0(v18, 0, 0x50uLL);
  v4 = 0;
  v20 = 0LL;
  if ( !BugCheckParameter1 )
    return 3221225485LL;
  Interface = IoQueryInterface(BugCheckParameter1, 0LL, &GUID_IOMMU_BUS_INTERFACE, 80LL, 1, BugCheckParameter1, v18);
  if ( Interface >= 0 )
  {
    LOWORD(BugCheckParameter4) = 1;
    Interface = IoQueryInterface(
                  BugCheckParameter1,
                  0LL,
                  &GUID_PCI_ATS_INTERFACE,
                  48LL,
                  BugCheckParameter4,
                  BugCheckParameter1,
                  v17);
    if ( Interface >= 0 )
    {
      v4 = 1;
      v9 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.152, 0LL, 0LL, v8);
      v11 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.152, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
          v9,
          (__int64)&ExSaPageGroupDescriptorArrayLock.152);
      if ( v11 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v10) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v11 + 33), v10, 1);
        }
        else
        {
          *((_BYTE *)v11 + 10) = 1;
        }
      }
      Blink = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
      if ( (unsigned __int8 *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink == &ExSaPageGroupDescriptorArrayLock.ApcStateFill[8] )
        goto LABEL_16;
      while ( 1 )
      {
        SListFaultAddress = Blink->SListFaultAddress;
        v14 = Blink;
        v20 = Blink;
        if ( SListFaultAddress == (void *)BugCheckParameter1 )
          break;
        Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
        if ( Blink == (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.ApcStateFill[8] )
        {
          if ( SListFaultAddress != (void *)BugCheckParameter1 )
          {
            v20 = 0LL;
            goto LABEL_16;
          }
          break;
        }
      }
      if ( !v14 )
      {
LABEL_16:
        Interface = ExpPrepareNewAtsDevice(BugCheckParameter1, a2, (unsigned int)v18, (unsigned int)v17, (__int64)&v20);
      }
      else
      {
        if ( HIDWORD(v14->QuantumTarget) )
          KeBugCheckEx(0x1E9u, BugCheckParameter1, 0LL, 0LL, 0LL);
        ++LODWORD(v14->QuantumTarget);
      }
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152);
      KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.152);
    }
    guard_dispatch_icall_no_overrides(v19, v7);
    if ( v4 )
      guard_dispatch_icall_no_overrides(*((_QWORD *)&v17[0] + 1), v15);
  }
  return (unsigned int)Interface;
}
