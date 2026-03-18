/*
 * XREFs of ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400F790C
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1400F77EC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1402521D0 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402FFFBC (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  __int64 v1; // rcx

  if ( *((_BYTE *)this + 248) )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, this);
  }
  else
  {
    v1 = *(_QWORD *)this;
    if ( v1 )
      DereferenceW32Thread(v1);
  }
}
