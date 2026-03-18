/*
 * XREFs of PoVolumeDevice @ 0x140B52CC8
 * Callers:
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140B47540 (IoVerifyVolume.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopGetDope @ 0x140438170 (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  void ***v2; // rax
  _XSAVE_FORMAT *StateSaveArea; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F10828.SListFaultAddress);
    v2 = (void ***)(Dope + 80);
    if ( !*(_QWORD *)(Dope + 80) )
    {
      StateSaveArea = stru_140F10828.StateSaveArea;
      if ( *(struct _KTHREAD **)stru_140F10828.StateSaveArea != (struct _KTHREAD *)&stru_140F10828.KernelStack )
        __fastfail(3u);
      *v2 = &stru_140F10828.KernelStack;
      *(_QWORD *)(Dope + 88) = StateSaveArea;
      *(_QWORD *)&StateSaveArea->ControlWord = v2;
      stru_140F10828.StateSaveArea = (_XSAVE_FORMAT *)(Dope + 80);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F10828.SListFaultAddress);
  }
}
