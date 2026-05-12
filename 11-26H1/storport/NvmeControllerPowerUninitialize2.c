/*
 * XREFs of NvmeControllerPowerUninitialize2 @ 0x1400F8A88
 * Callers:
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 * Callees:
 *     NvmeControllerDeregisterPowerSettingChangeNotification @ 0x140126F70 (NvmeControllerDeregisterPowerSettingChangeNotification.c)
 */

void __fastcall NvmeControllerPowerUninitialize2(__int64 a1, char a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  struct _KTIMER *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  if ( !a2 && **(_BYTE **)(*(_QWORD *)(a1 + 128) + 160LL) == 1 )
  {
    NvmeControllerDeregisterPowerSettingChangeNotification();
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
    v4 = *(_QWORD **)(v3 + 8);
    *(_BYTE *)v3 = 0;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL) = 0LL;
    v5 = (struct _KTIMER *)v4[15];
    if ( v5 )
    {
      KeCancelTimer(v5);
      ExFreePoolWithTag((PVOID)v4[15], 0x4F506152u);
      v4[15] = 0LL;
    }
    v6 = (void *)v4[14];
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x4F506152u);
      v4[14] = 0LL;
    }
    v7 = (void *)v4[11];
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x4F506152u);
      v4[11] = 0LL;
      *((_DWORD *)v4 + 21) = 0;
    }
    if ( *v4 )
      PoFxUnregisterDevice(*v4);
    ExFreePoolWithTag(v4, 0x4F506152u);
  }
}
