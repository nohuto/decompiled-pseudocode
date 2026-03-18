/*
 * XREFs of ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x14020FA34
 * Callers:
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140214564 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 * Callees:
 *     LockProcessByClientId @ 0x140123294 (LockProcessByClientId.c)
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CBaseInput::GetSensorHostingProcessHandle(CBaseInput *this)
{
  void *v3; // rcx
  void *Handle; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Handle = (void *)-1LL;
  if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( ObOpenObjectByPointer(*(PVOID *)(*((_QWORD *)this + 2) + 32LL), 0x200u, 0LL, 0x20000u, 0LL, 0, &Handle) < 0 )
      return -1LL;
  }
  else
  {
    v3 = (void *)*((int *)this + 328);
    Object = 0LL;
    if ( (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) >= 0 )
    {
      if ( ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x20000u, 0LL, 0, &Handle) < 0 )
        Handle = (void *)-1LL;
      ObfDereferenceObject(Object);
    }
  }
  return (__int64)Handle;
}
