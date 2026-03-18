/*
 * XREFs of IopAllocateBackpocketIrp @ 0x140531A0C
 * Callers:
 *     MiSynchronousPageWrite @ 0x14026B4C4 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026B73C (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026B9F0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x14026E454 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IopIsActivityTracingEnabled @ 0x14045BD70 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x1404766A0 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x140481F80 (IopInitActivityIdIrp.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  struct _LIST_ENTRY *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 KernelShadowStackInitial; // rbx
  __int64 v9; // rdx
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 > SLOBYTE(IopSessionNotificationLock.Spare36) )
    return 0LL;
  CurrentThread = (struct _LIST_ENTRY *)KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _LIST_ENTRY *)IopSessionNotificationLock.KernelShadowStackLimit.AllFields != CurrentThread )
    {
      Timeout.QuadPart = -300000000LL;
      while ( _InterlockedExchange((volatile __int32 *)&IopSessionNotificationLock.KernelShadowStackBase, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&IopSessionNotificationLock.ExtendedFeatureDisableMask, Executive, 0, 0, &Timeout) == 258 )
        {
          LOBYTE(v9) = v3;
          result = IopAllocateIrpExReturn(a1, v9, 0LL);
          if ( result )
            return result;
        }
      }
      KernelShadowStackInitial = (__int64)IopSessionNotificationLock.KernelShadowStackInitial;
      IoInitializeIrp((PIRP)IopSessionNotificationLock.KernelShadowStackInitial, 72 * v3 + 352, v3 + 2);
      *(_BYTE *)(KernelShadowStackInitial + 71) = 33;
      IopSessionNotificationLock.KernelShadowStackLimit.AllFields = (unsigned __int64)KeGetCurrentThread();
      goto LABEL_10;
    }
    KernelShadowStackInitial = IopSessionNotificationLock.Spare35[1];
    if ( IopSessionNotificationLock.Spare35[1] )
    {
LABEL_21:
      IopSessionNotificationLock.Spare35[1] = *(_QWORD *)IopSessionNotificationLock.Spare35[1];
      IoInitializeIrp((PIRP)KernelShadowStackInitial, 72 * a2 + 352, a2 + 2);
      *(_QWORD *)(KernelShadowStackInitial + 184) -= 144LL;
      *(_QWORD *)(KernelShadowStackInitial + 200) = *(_QWORD *)(KernelShadowStackInitial + 184);
      *(_BYTE *)(KernelShadowStackInitial + 71) = 33;
      goto LABEL_22;
    }
    return 0LL;
  }
  if ( IopSessionNotificationLock.GlobalUpdateVpThreadPriorityListEntry.Flink == CurrentThread )
  {
    KernelShadowStackInitial = IopSessionNotificationLock.Spare35[1];
    if ( !IopSessionNotificationLock.Spare35[1] )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_21;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange((volatile __int32 *)&IopSessionNotificationLock.UserWaitTime, 1) == 1 )
  {
    if ( KeWaitForSingleObject(
           &IopSessionNotificationLock.InGlobalUpdateVpThreadPriorityList,
           Executive,
           0,
           0,
           &Timeout) == 258 )
    {
      LOBYTE(v6) = v3;
      result = IopAllocateIrpExReturn(a1, v6, 0LL);
      if ( result )
        return result;
    }
  }
  KernelShadowStackInitial = IopSessionNotificationLock.KernelWaitTime;
  IoInitializeIrp((PIRP)IopSessionNotificationLock.KernelWaitTime, 72 * v3 + 352, v3 + 2);
  *(_BYTE *)(KernelShadowStackInitial + 71) = 33;
  IopSessionNotificationLock.GlobalUpdateVpThreadPriorityListEntry.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
LABEL_10:
  *(_QWORD *)(KernelShadowStackInitial + 184) -= 144LL;
  *(_QWORD *)(KernelShadowStackInitial + 200) = *(_QWORD *)(KernelShadowStackInitial + 184);
LABEL_22:
  *(_BYTE *)(KernelShadowStackInitial + 66) -= 2;
  *(_BYTE *)(KernelShadowStackInitial + 67) -= 2;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(KernelShadowStackInitial);
  return KernelShadowStackInitial;
}
