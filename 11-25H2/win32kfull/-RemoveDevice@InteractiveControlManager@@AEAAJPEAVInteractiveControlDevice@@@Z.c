/*
 * XREFs of ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1402E096C
 * Callers:
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x14020E218 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402E0780 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x140225AB4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402ED240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 */

__int64 __fastcall InteractiveControlManager::RemoveDevice(InteractiveControlManager *this, void **a2)
{
  __int64 v3; // rcx
  int Device; // esi
  __int64 v5; // rbx
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  Device = InteractiveControlManager::FindDevice(this, 0, *a2, 0LL, &v7);
  if ( Device >= 0 )
  {
    v5 = v7;
    InteractiveControlDevice::Deinitialize(*(InteractiveControlDevice **)(v3 + 8LL * v7 + 40));
    Win32FreePool(*((void **)this + v5 + 5));
    *((_QWORD *)this + v5 + 5) = 0LL;
    --*((_DWORD *)this + 20);
  }
  return (unsigned int)Device;
}
