/*
 * XREFs of CrmStateMonitorPowerSettingsStart @ 0x180076DFC
 * Callers:
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorPowerSettingsStart(__int64 a1, const GUID *a2)
{
  _DWORD *v2; // r10
  int v4; // ecx
  unsigned int v6; // eax
  void *v7; // r9
  const void *v8; // r10
  signed int v9; // eax
  unsigned int v10; // ebx
  HPOWERNOTIFY v11; // rcx
  _QWORD Recipient[3]; // [rsp+20h] [rbp-18h] BYREF
  HPOWERNOTIFY RegistrationHandle; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD *)(a1 + 56);
  RegistrationHandle = 0LL;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v4 = *(_DWORD *)a1;
  *v2 = -1;
  v6 = CrmStateMonitorStateSizeGet(v4);
  memcpy_0(v7, v8, v6);
  Recipient[1] = a1;
  Recipient[0] = CrmStateMonitorPowerSettingsCallback;
  v9 = PowerSettingRegisterNotification(a2, 2u, Recipient, &RegistrationHandle);
  v10 = v9;
  if ( v9 )
  {
    v11 = RegistrationHandle;
    if ( v9 > 0 )
      v10 = (unsigned __int16)v9 | 0xC0070000;
  }
  else
  {
    v11 = 0LL;
    *(_QWORD *)(a1 + 64) = RegistrationHandle;
    v10 = 0;
    RegistrationHandle = 0LL;
  }
  if ( v11 )
    PowerSettingUnregisterNotification(v11);
  return v10;
}
