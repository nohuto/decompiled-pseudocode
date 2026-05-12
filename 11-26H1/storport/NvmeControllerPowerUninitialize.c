/*
 * XREFs of NvmeControllerPowerUninitialize @ 0x1400F8984
 * Callers:
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerStop @ 0x1400FADAC (NvmeControllerStop.c)
 * Callees:
 *     NvmeControllerDeregisterPowerSettingChangeNotification @ 0x140126F70 (NvmeControllerDeregisterPowerSettingChangeNotification.c)
 */

void __fastcall NvmeControllerPowerUninitialize(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  struct _KTIMER *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  if ( **(_BYTE **)(*(_QWORD *)(a1 + 128) + 160LL) == 1 )
  {
    NvmeControllerDeregisterPowerSettingChangeNotification();
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
    v3 = *(_QWORD **)(v2 + 8);
    *(_BYTE *)v2 = 0;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL) = 0LL;
    v4 = (struct _KTIMER *)v3[15];
    if ( v4 )
    {
      KeCancelTimer(v4);
      ExFreePoolWithTag((PVOID)v3[15], 0x4F506152u);
      v3[15] = 0LL;
    }
    v5 = (void *)v3[14];
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x4F506152u);
      v3[14] = 0LL;
    }
    v6 = (void *)v3[11];
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x4F506152u);
      v3[11] = 0LL;
      *((_DWORD *)v3 + 21) = 0;
    }
    if ( *v3 )
      PoFxUnregisterDevice(*v3);
    ExFreePoolWithTag(v3, 0x4F506152u);
  }
}
