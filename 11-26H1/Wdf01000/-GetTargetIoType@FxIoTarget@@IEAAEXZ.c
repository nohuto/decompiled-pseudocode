/*
 * XREFs of ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x140007914
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140006830 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x14001D928 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?UpdateTargetIoType@FxIoTarget@@QEAAXXZ @ 0x14003CA30 (-UpdateTargetIoType@FxIoTarget@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxIoTarget::GetTargetIoType(FxIoTarget *this)
{
  unsigned int Flags; // eax

  Flags = this->m_TargetDevice->Flags;
  if ( (Flags & 4) != 0 )
    return 2;
  else
    return (Flags >> 3) & 2 | 1;
}
