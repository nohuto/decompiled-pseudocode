/*
 * XREFs of UsbhWaitForPortResume @ 0x140035AC8
 * Callers:
 *     UsbhSyncResumePort @ 0x1400358D0 (UsbhSyncResumePort.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140028E50 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhPCE_ResumeTimeout @ 0x140044568 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPortResumeTimeout @ 0x140047ED8 (UsbhPortResumeTimeout.c)
 */

__int64 __fastcall UsbhWaitForPortResume(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rsi
  __int64 v7; // r8
  void *DeviceExtension; // rdx
  __int64 v9; // rcx
  KSPIN_LOCK *v10; // rsi
  KIRQL v11; // al
  __int64 result; // rax

  v6 = FdoExt((__int64)a1);
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v9 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_DWORD *)v9 = 827806288;
        *(_QWORD *)(v9 + 24) = v7;
      }
    }
  }
  *(_BYTE *)(a2 + 2838) = 0;
  v10 = (KSPIN_LOCK *)(v6 + 1236);
  while ( 1 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(v10);
    if ( *(_DWORD *)(a2 + 696) != 3 )
      break;
    KeReleaseSpinLock(v10, v11);
    result = UsbhWaitEventWithTimeoutEx((__int64)a1, (void *)(a2 + 712), 500, 1347573623, 0xBu, a2);
    if ( (_DWORD)result != 258 )
      goto LABEL_10;
    UsbhPCE_ResumeTimeout(a1, a3, *(unsigned __int16 *)(a2 + 4));
  }
  KeReleaseSpinLock(v10, v11);
  result = 0LL;
LABEL_10:
  if ( *(_BYTE *)(a2 + 2838) )
    return UsbhPortResumeTimeout(a1);
  return result;
}
