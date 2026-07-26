/*
 * XREFs of ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x140084DD0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline @ 0x1400A1F90 (Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_LLq @ 0x1400A33C4 (WPP_RECORDER_SF_LLq_ea_1400A33C4.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisMIndicateOffloadChange(struct _NDIS_MINIPORT_BLOCK *a1, int a2, _WORD *a3, unsigned int a4)
{
  unsigned __int8 v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  KIRQL v11; // r12
  bool v12; // zf
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // eax
  int v16; // ebp
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  size_t v18; // rdi
  char v19; // r14
  _NDIS_MINIPORT_OFFLOAD *v20; // rcx
  unsigned int Flags; // eax
  unsigned int v22; // eax

  v8 = 0;
  v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v12 = a1->Offload == 0LL;
  a1->MiniportThread = KeGetCurrentThread();
  if ( !v12 && a4 >= 0x70 && *(_BYTE *)a3 == 0xA7 && a3[1] >= 0x70u && *((_BYTE *)a3 + 1) )
  {
    if ( (unsigned int)Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline(v10, v9)
      && (v15 = (unsigned __int16)a3[1], v15 > a4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_LLq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          v14,
          12,
          (struct _GUID *)&WPP_f6ad9d2418363d9c6bf307c7a58137f6_Traceguids,
          v15,
          a4,
          (char)a1);
    }
    else
    {
      v16 = -7;
      Offload = a1->Offload;
      if ( (a1->DeviceFlags & 2) == 0 )
        v16 = -1;
      v18 = 220LL;
      if ( a2 == 1073872902 )
      {
        memset(&Offload->MiniportCurrentConfig, 0, sizeof(Offload->MiniportCurrentConfig));
        if ( a3[1] < 0xDCu )
          v18 = (unsigned __int16)a3[1];
        memmove(&a1->Offload->MiniportCurrentConfig, a3, v18);
        a1->Offload->MiniportCurrentConfig.Flags &= v16;
      }
      else
      {
        v19 = Offload->MiniportHardwareCapabilities.Flags & 1;
        memset(&Offload->MiniportHardwareCapabilities, 0, sizeof(Offload->MiniportHardwareCapabilities));
        if ( a3[1] < 0xDCu )
          v18 = (unsigned __int16)a3[1];
        memmove(&a1->Offload->MiniportHardwareCapabilities, a3, v18);
        v20 = a1->Offload;
        Flags = v20->MiniportHardwareCapabilities.Flags;
        if ( v19 )
          v22 = Flags | 1;
        else
          v22 = Flags & 0xFFFFFFFE;
        v20->MiniportHardwareCapabilities.Flags = v22;
        a1->Offload->MiniportHardwareCapabilities.Flags &= v16;
      }
      v8 = 1;
    }
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v11);
  return v8;
}
