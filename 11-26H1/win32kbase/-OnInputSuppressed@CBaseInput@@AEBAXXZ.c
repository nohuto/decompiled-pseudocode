/*
 * XREFs of ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1401892E0
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1401220B0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400D3370 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x140189344 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 */

void __fastcall CBaseInput::OnInputSuppressed(void **this)
{
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rdi
  struct W32_PUSH_LOCK *v4; // rbx

  IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle((CBaseInput *)this, this[6]);
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, (char *)this[6], IsInjectionDeviceFromKernelHandle != 0);
  if ( DeviceInfo )
  {
    v4 = (struct W32_PUSH_LOCK *)this[154];
    W32AcquirePushLockExclusiveEx(v4);
    ++*((_DWORD *)DeviceInfo + 574);
    W32ReleasePushLockExclusiveEx(v4);
  }
}
