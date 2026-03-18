/*
 * XREFs of ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1402F1E38
 * Callers:
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x140249BB4 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402F1C44 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x14025F274 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402FCB84 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 */

__int64 __fastcall InteractiveControlManager::RemoveDevice(InteractiveControlManager *this, void **a2)
{
  void *v2; // r8
  __int64 v4; // rcx
  int Device; // esi
  __int64 v6; // rbx
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v8 = 0;
  Device = InteractiveControlManager::FindDevice(this, 0, v2, 0LL, &v8);
  if ( Device >= 0 )
  {
    v6 = v8;
    InteractiveControlDevice::Deinitialize(*(InteractiveControlDevice **)(v4 + 8LL * v8 + 40));
    Win32FreePool(*((void **)this + v6 + 5));
    *((_QWORD *)this + v6 + 5) = 0LL;
    --*((_DWORD *)this + 20);
  }
  return (unsigned int)Device;
}
