/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x14000FA88
 * Callers:
 *     UsbhPortResumeFailed @ 0x1400587A0 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x14000FB5C (UsbhQueueWorkItemWithRetry.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // esi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx

  v4 = PdoExt(a2);
  v5 = v4;
  UsbhLatchPdo(a1, *(unsigned __int16 *)(v4 + 1428), 0LL, 1936945239LL);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
        v8 = *(_DWORD *)(v6 + 884);
        v9 = *(_QWORD *)(v6 + 888);
        v10 = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(v10 + v9) = 1262573427;
        *(_QWORD *)(v10 + v9 + 8) = 0LL;
        *(_QWORD *)(v10 + v9 + 16) = a2;
        *(_QWORD *)(v10 + v9 + 24) = 0LL;
      }
    }
  }
  return UsbhQueueWorkItemWithRetry(a1, v5 + 1624, (unsigned int)UsbhSS_PdoWakeWorker, 0, a2, 0, 2001752915);
}
