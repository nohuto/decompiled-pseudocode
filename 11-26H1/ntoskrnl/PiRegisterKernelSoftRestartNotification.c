/*
 * XREFs of PiRegisterKernelSoftRestartNotification @ 0x1407B2BE4
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PnpInitializeNotifyEntry @ 0x1409092E4 (PnpInitializeNotifyEntry.c)
 *     PnpDeferNotification @ 0x140909368 (PnpDeferNotification.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiRegisterKernelSoftRestartNotification(__int64 a1, int a2, int a3, _QWORD *a4)
{
  int v8; // edi
  __int64 Pool2; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax

  if ( PnpKsrEnabled )
  {
    if ( !PnpKsrPrepared || PnpKsrIsHhrPrepare )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v10 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        v8 = PnpInitializeNotifyEntry(Pool2, 4, a2, a3, a1, (__int64)&PnpKsrNotifyLock);
        if ( v8 < 0 || (v8 = PnpDeferNotification(v10), v8 < 0) )
        {
          ExFreePoolWithTag(v10, 0x61706E50u);
        }
        else
        {
          ExAcquireFastMutex(&PnpKsrNotifyLock);
          v11 = (_QWORD *)qword_140F82628;
          if ( *(PVOID **)qword_140F82628 != &PnpKsrNotifyList )
            __fastfail(3u);
          *v10 = &PnpKsrNotifyList;
          v10[1] = v11;
          *v11 = v10;
          qword_140F82628 = (__int64)v10;
          KeReleaseGuardedMutex(&PnpKsrNotifyLock);
          *a4 = v10;
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741058;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
