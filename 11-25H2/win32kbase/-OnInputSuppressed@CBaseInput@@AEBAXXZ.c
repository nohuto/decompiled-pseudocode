/*
 * XREFs of ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1400FF860
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x14018A660 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400FF970 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1402101A4 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 */

void __fastcall CBaseInput::OnInputSuppressed(void **this)
{
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rdi
  struct W32_PUSH_LOCK *v4; // rbx

  IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle((CBaseInput *)this, this[6]);
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, this[6], IsInjectionDeviceFromKernelHandle != 0);
  if ( DeviceInfo )
  {
    v4 = (struct W32_PUSH_LOCK *)this[154];
    W32AcquirePushLockExclusiveEx(v4, 0);
    ++*((_DWORD *)DeviceInfo + 576);
    W32ReleasePushLockExclusiveEx(v4, 0LL);
  }
}
