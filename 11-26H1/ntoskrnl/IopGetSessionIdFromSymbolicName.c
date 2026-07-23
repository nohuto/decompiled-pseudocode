/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x140A9BCD0
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x1409A8BF4 (PiUEventProcessBroadcastNotifications.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x140A19910 (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140A9BD2C (IopDeviceObjectFromSymbolicName.c)
 *     IopGetSessionIdFromPDO @ 0x140A9C068 (IopGetSessionIdFromPDO.c)
 */

__int64 IopGetSessionIdFromSymbolicName()
{
  unsigned int SessionIdFromPDO; // edi
  __int64 v1; // rax
  void *v2; // rbx
  __int64 v3; // rax

  SessionIdFromPDO = -1;
  v1 = IopDeviceObjectFromSymbolicName();
  v2 = (void *)v1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 396) & 0x20000) == 0 )
      {
        SessionIdFromPDO = IopGetSessionIdFromPDO(v2);
        ObfDereferenceObject(v2);
      }
    }
  }
  return SessionIdFromPDO;
}
