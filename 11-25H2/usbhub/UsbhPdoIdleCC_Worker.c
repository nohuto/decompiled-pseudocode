/*
 * XREFs of UsbhPdoIdleCC_Worker @ 0x1400336D0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhIdleIrp_Event @ 0x140033A44 (UsbhIdleIrp_Event.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhPdoIdleCC_Worker(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  KIRQL v9; // al
  int v10; // ebx
  PIRP v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // r10
  __int64 v15; // r10

  FdoExt(a1);
  v5 = PdoExt(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
      *((unsigned __int16 *)v5 + 714));
  v6 = *((unsigned __int16 *)v5 + 714);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 1466721385;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a3;
        *(_QWORD *)(v8 + 24) = v6;
      }
    }
  }
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 256);
  v10 = v5[384];
  KeReleaseSpinLock((PKSPIN_LOCK)v5 + 256, v9);
  if ( v10 == 1 )
  {
    KeWaitForSingleObject(v5 + 514, Executive, 0, 0, 0LL);
    v11 = IoCsqRemoveNextIrp((PIO_CSQ)(v5 + 366), 0LL);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
          *(_DWORD *)v13 = 826895730;
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 16) = a3;
          *(_QWORD *)(v13 + 24) = v11;
        }
      }
    }
    if ( v11 )
    {
      UsbhIdleIrp_Event(a1, a3, v11, 2LL, 0);
      KeSetEvent((PRKEVENT)(v5 + 514), 0, 0);
      if ( v5[198] == 1 )
      {
        Log(
          a1,
          16,
          1231249969,
          (__int64)v11->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters,
          (__int64)v11);
        if ( v14 )
        {
          if ( *v14 )
          {
            Log(a1, 16, 1231249970, *v14, v14[1]);
            (*(void (__fastcall **)(_QWORD))v15)(*(_QWORD *)(v15 + 8));
          }
        }
      }
      KeWaitForSingleObject(v5 + 514, Executive, 0, 0, 0LL);
      UsbhIdleIrp_Event(a1, a3, v11, 4LL, v5[360]);
      KeSetEvent((PRKEVENT)(v5 + 514), 0, 0);
    }
    else
    {
      KeSetEvent((PRKEVENT)(v5 + 514), 0, 0);
      UsbhIdleIrp_Event(a1, a3, 0LL, 3LL, 0);
    }
    UsbhUnlatchPdo(a1, a3, (__int64)v5, 0x656C6449u);
  }
  else
  {
    UsbhUnlatchPdo(a1, a3, (__int64)v5, 0x656C6449u);
    Log(a1, 0x10000, 1768189006, a3, *((unsigned __int16 *)v5 + 714));
  }
}
