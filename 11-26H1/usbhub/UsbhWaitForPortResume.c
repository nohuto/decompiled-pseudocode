/*
 * XREFs of UsbhWaitForPortResume @ 0x140011070
 * Callers:
 *     UsbhSyncResumePort @ 0x140010E74 (UsbhSyncResumePort.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhPCE_ResumeTimeout @ 0x14004408C (UsbhPCE_ResumeTimeout.c)
 *     UsbhPortResumeTimeout @ 0x140047A28 (UsbhPortResumeTimeout.c)
 */

__int64 __fastcall UsbhWaitForPortResume(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // r8
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  KSPIN_LOCK *v14; // rsi
  KIRQL v15; // al
  __int64 result; // rax

  v7 = FdoExt(a1, a2, a3, a4);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v10 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v11 = *((_DWORD *)DeviceExtension + 221);
        v12 = *((_QWORD *)DeviceExtension + 111);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = 827806288;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = 0LL;
        *(_QWORD *)(v13 + v12 + 24) = v8;
      }
    }
  }
  *(_BYTE *)(a2 + 2838) = 0;
  v14 = (KSPIN_LOCK *)(v7 + 4944);
  while ( 1 )
  {
    v15 = KeAcquireSpinLockRaiseToDpc(v14);
    if ( *(_DWORD *)(a2 + 696) != 3 )
      break;
    KeReleaseSpinLock(v14, v15);
    result = UsbhWaitEventWithTimeoutEx((__int64)a1, (void *)(a2 + 712), 500, 1347573623, 0xBu, a2);
    if ( (_DWORD)result != 258 )
      goto LABEL_10;
    UsbhPCE_ResumeTimeout(a1, a3, *(unsigned __int16 *)(a2 + 4));
  }
  KeReleaseSpinLock(v14, v15);
  result = 0LL;
LABEL_10:
  if ( *(_BYTE *)(a2 + 2838) )
    return UsbhPortResumeTimeout(a1);
  return result;
}
