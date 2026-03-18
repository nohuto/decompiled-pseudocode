/*
 * XREFs of ?Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ @ 0x1400076A8
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x140005E2C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140006830 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall FxIoTargetRemoteOpenParams::Clear(FxIoTargetRemoteOpenParams *this)
{
  void *EaBuffer; // rcx
  wchar_t *Buffer; // rcx

  EaBuffer = this->EaBuffer;
  if ( EaBuffer )
    FxPoolFree(EaBuffer);
  Buffer = this->TargetDeviceName.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  memset(this, 0, sizeof(FxIoTargetRemoteOpenParams));
}
