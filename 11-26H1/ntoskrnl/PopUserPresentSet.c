/*
 * XREFs of PopUserPresentSet @ 0x1404384B4
 * Callers:
 *     PoSetUserPresent @ 0x1404382E0 (PoSetUserPresent.c)
 *     PopSetSystemState @ 0x1404383B4 (PopSetSystemState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopCheckForWork @ 0x1404385D4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B41E00 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(__int32 a1)
{
  KIRQL v2; // bl
  KIRQL v3; // al
  int v4; // ebx

  if ( (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x40000) != 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread);
    v4 = HIDWORD(stru_140E66FF0.Padding[3]);
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread, v3);
    DbgkWerCaptureLiveKernelDump((unsigned int)L"UserPresenceSet", 160, 273, v4, dword_140F105A0, 0LL, 0LL, 0LL, 0);
  }
  if ( byte_140F0FB61 == 3 )
  {
    _InterlockedOr((_DWORD *)&stru_140F10828.OtherOperationCount + 1, 1u);
    _InterlockedExchange((volatile __int32 *)&stru_140F10828.ReadTransferCount, a1);
  }
  else
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread);
    if ( dword_140F106D4 )
    {
      if ( !HIDWORD(stru_140E66FF0.Padding[3]) )
        KeSetEvent(&word_140F11020, 0, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread, v2);
    }
    else
    {
      LODWORD(stru_140E66FF0.Padding[3]) = a1;
      if ( !HIDWORD(stru_140E66FF0.Padding[3]) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F11D08.WaitBlockFill11[56], DelayedWorkQueue);
      HIDWORD(stru_140E66FF0.Padding[3]) = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread, v2);
      if ( PopIdleScanInterval )
      {
        _InterlockedOr((volatile signed __int32 *)&PopWeakChargerLock.IoSelfBoostsEntry, 4u);
        PopGetPolicyWorker(128LL);
        PopCheckForWork();
      }
    }
  }
}
