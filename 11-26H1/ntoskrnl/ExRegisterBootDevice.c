/*
 * XREFs of ExRegisterBootDevice @ 0x1406D15F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExRegisterBootDevice(__int64 a1, __int64 *a2)
{
  NTSTATUS v4; // ebx
  __int64 Pool2; // rsi
  void *v6; // rcx
  KIRQL v7; // al
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF

  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = 0;
  KeWaitForSingleObject(&word_140EFF280, Executive, 0, 0, 0LL);
  if ( !ExSaPageGroupDescriptorArrayLock.Padding[2] )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ExpWaitForBootDevices, 0LL);
    if ( v4 >= 0 )
    {
      Object = 0LL;
      v4 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      ExSaPageGroupDescriptorArrayLock.Padding[2] = (unsigned __int64)Object;
      ZwClose(ThreadHandle);
      KeSetPriorityThread((PKTHREAD)ExSaPageGroupDescriptorArrayLock.Padding[2], 31);
    }
  }
  KeSetEvent(&word_140EFF280, 0, 0);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)a1 == 1 && *(_QWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 4) && *(_QWORD *)(a1 + 24) )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( Pool2 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
        v6 = *(void **)(a1 + 16);
        if ( v6 )
          ObfReferenceObjectWithTag(v6, 0x746C6644u);
        *(_DWORD *)Pool2 = 1347306562;
        *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a1;
        *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a1 + 16);
        *(_QWORD *)(Pool2 + 56) = *(_QWORD *)(a1 + 32);
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistYieldCounter);
        v8 = (_QWORD *)ExSaPageGroupDescriptorArrayLock.Padding[4];
        v9 = (_QWORD *)(Pool2 + 8);
        if ( *(struct _KTHREAD **)ExSaPageGroupDescriptorArrayLock.Padding[4] != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.Padding[3] )
          __fastfail(3u);
        *(_QWORD *)(Pool2 + 16) = ExSaPageGroupDescriptorArrayLock.Padding[4];
        *v9 = &ExSaPageGroupDescriptorArrayLock.Padding[3];
        *v8 = v9;
        ExSaPageGroupDescriptorArrayLock.Padding[4] = Pool2 + 8;
        KeReleaseSpinLock((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistYieldCounter, v7);
        *a2 = Pool2;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
