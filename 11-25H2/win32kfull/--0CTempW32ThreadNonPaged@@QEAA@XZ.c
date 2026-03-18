/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14023E998
 * Callers:
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x14027B4E0 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028D484 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402F0868 (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x140017DB0 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v7; // rdi

  memset_0(this, 0, 0xF8uLL);
  *((_BYTE *)this + 248) = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v3, v2, v4, v5);
  v7 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    if ( *CurrentThreadWin32Thread )
    {
      if ( !IsThreadCrossSessionAttached() )
      {
        if ( *(_DWORD *)(*v7 + 376LL) )
        {
          *(_QWORD *)this = *v7;
          if ( (int)ReferenceW32Thread(*v7) <= 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 99LL);
        }
      }
    }
  }
  else
  {
    ExInitializeFastOwnerEntry((char *)this + 32);
    ExInitializeFastOwnerEntry((char *)this + 104);
    ExInitializeFastOwnerEntry((char *)this + 176);
    *((_DWORD *)this + 6) |= 1u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), this, 0LL);
    *((_BYTE *)this + 248) = 1;
  }
  return this;
}
