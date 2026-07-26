/*
 * XREFs of ?ndisBugcheckHandler@@YAXPEAXK@Z @ 0x1400942D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z @ 0x1400A01CC (-ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisBugcheckHandler(struct _NDIS_MINIPORT_BLOCK *Buffer, ULONG Length)
{
  _DEVICE_POWER_STATE CurrentDevicePowerState; // eax

  if ( Length == 6128 )
  {
    Buffer->PnPFlags |= 0x1000000u;
    CurrentDevicePowerState = Buffer->CurrentDevicePowerState;
    if ( CurrentDevicePowerState != PowerDeviceD1 && (unsigned int)(CurrentDevicePowerState - 3) > 1 )
    {
      if ( Buffer->MajorNdisVersion >= 6u )
        ndisMInvokeShutdown(Buffer, NdisShutdownBugCheck);
      else
        Buffer->ShutdownHandler(Buffer->ShutdownContext);
    }
  }
}
