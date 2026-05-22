/*
 * XREFs of ??1?$unique_ptr@UDeviceListEntry@GameControllerRawInputProvider@@U?$default_delete@UDeviceListEntry@GameControllerRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800CD2BC
 * Callers:
 *     ?DeviceRemovalCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x1800CD570 (-DeviceRemovalCallback@GameControllerRawInputProvider@@CAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<GameControllerRawInputProvider::DeviceListEntry>::~unique_ptr<GameControllerRawInputProvider::DeviceListEntry>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x20);
}
