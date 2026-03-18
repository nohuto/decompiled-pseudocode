/*
 * XREFs of ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x14025F274
 * Callers:
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1402F11F0 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1402F15D0 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1402F17BC (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402F19B0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402F1C44 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1402F1E38 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlManager::FindDevice(
        InteractiveControlManager *this,
        int a2,
        void *a3,
        struct InteractiveControlDevice **a4,
        unsigned int *a5)
{
  unsigned int v6; // r11d
  __int64 i; // r10
  struct InteractiveControlDevice *v8; // r8

  v6 = -1073741275;
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    v8 = (struct InteractiveControlDevice *)*((_QWORD *)this + i + 5);
    if ( v8 && (*(void **)v8 == a3 || *((_DWORD *)v8 + 2) == a2) )
    {
      if ( a4 )
        *a4 = v8;
      if ( a5 )
        *a5 = i;
      return 0;
    }
  }
  return v6;
}
