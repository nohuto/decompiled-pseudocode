/*
 * XREFs of HvlWheaInUsePageOfflineNotificationCallback @ 0x1405BB960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall HvlWheaInUsePageOfflineNotificationCallback(
        PFN_NUMBER Page,
        BOOLEAN PlatformDirected,
        __int64 Poisoned,
        _DWORD *Context)
{
  char v4; // bl
  int v6; // eax

  v4 = 0;
  if ( !PlatformDirected )
  {
    *(_QWORD *)Poisoned = Page << 12;
    *(_DWORD *)(Poisoned + 28) = 1;
    *(_QWORD *)(Poisoned + 16) = 0LL;
    *(_QWORD *)(Poisoned + 6184) = 0LL;
    *(_DWORD *)(Poisoned + 24) = 0;
    *(_BYTE *)(Poisoned + 8) = 0;
    *(_DWORD *)(Poisoned + 10) = 0x1000000;
    *(_BYTE *)(Poisoned + 14) = 0;
    v6 = guard_dispatch_icall_no_overrides(Poisoned, 0LL);
    *Context = v6;
    return v6 >= 0;
  }
  return v4;
}
