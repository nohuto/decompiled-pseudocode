/*
 * XREFs of UsbhSignalDriverResetEvent @ 0x1400242C0
 * Callers:
 *     UsbhDropDevice @ 0x140023AE8 (UsbhDropDevice.c)
 *     UsbhSignalSyncDeviceReset @ 0x1400482B8 (UsbhSignalSyncDeviceReset.c)
 * Callees:
 *     UsbhLogSignalDriverResetEvent @ 0x140024420 (UsbhLogSignalDriverResetEvent.c)
 */

void __fastcall UsbhSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  KIRQL v10; // al
  __int64 v11; // r10
  KIRQL v12; // r9
  __int64 v13; // r11
  __int64 v14; // rdx
  signed __int32 v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r8

  v3 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 880), 0xFFFFFFFF);
        v7 = *(_DWORD *)(v5 + 884);
        v8 = *(_QWORD *)(v5 + 888);
        v9 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(v9 + v8) = 827486820;
        *(_QWORD *)(v9 + v8 + 8) = 0LL;
        *(_QWORD *)(v9 + v8 + 16) = a2;
        *(_QWORD *)(v9 + v8 + 24) = v3;
      }
    }
  }
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2, v3) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v11 = *(unsigned __int16 *)(a2 + 4);
    v12 = v10;
    v13 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 448) = 1;
    if ( (UsbhLogMask & 0x10) != 0 && a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 880), 0xFFFFFFFF);
        v16 = *(_DWORD *)(v14 + 884);
        v17 = *(_QWORD *)(v14 + 888);
        v18 = 32LL * ((v15 - 1) & v16);
        *(_DWORD *)(v18 + v17) = 1986359664;
        *(_QWORD *)(v18 + v17 + 8) = 0LL;
        *(_QWORD *)(v18 + v17 + 16) = v13;
        *(_QWORD *)(v18 + v17 + 24) = v11;
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1404) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
  }
}
