/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400F79BC
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1400F77EC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1402521D0 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402FFFBC (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1401405E0 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  __int64 v2; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v4; // rdi

  memset_0(this, 0, 0xF8uLL);
  *((_BYTE *)this + 248) = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v2);
  v4 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    if ( *CurrentThreadWin32Thread )
    {
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        if ( *(_DWORD *)(*v4 + 368LL) )
        {
          *(_QWORD *)this = *v4;
          if ( (int)ReferenceW32Thread(*v4) <= 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 101LL);
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
