/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x140194A18
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x14041A370 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_140168F50 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID)))(v1 + 936))(*(_QWORD *)(v1 + 864), DpiAcpiEventCallback);
    if ( !--dword_140168F50 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  ReleaseMiniportListMutex();
}
