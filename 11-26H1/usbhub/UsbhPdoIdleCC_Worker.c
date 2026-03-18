/*
 * XREFs of UsbhPdoIdleCC_Worker @ 0x1400122D0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhPdoIdleCC_Worker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  KIRQL v13; // al
  int v14; // ebx
  PIRP v15; // rbx
  __int64 v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // r10
  __int64 v22; // r10

  FdoExt(a1, a2, a3, a4);
  v6 = PdoExt(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
      *(_WORD *)(v6 + 1428));
  v7 = *(unsigned __int16 *)(v6 + 1428);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = 1466721385;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = a3;
        *(_QWORD *)(v12 + v11 + 24) = v7;
      }
    }
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2048));
  v14 = *(_DWORD *)(v6 + 1536);
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2048), v13);
  if ( v14 == 1 )
  {
    KeWaitForSingleObject((PVOID)(v6 + 2056), Executive, 0, 0, 0LL);
    v15 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 1464), 0LL);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v16 = *(_QWORD *)(a1 + 64);
        if ( v16 )
        {
          v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 880), 0xFFFFFFFF);
          v18 = *(_DWORD *)(v16 + 884);
          v19 = *(_QWORD *)(v16 + 888);
          v20 = 32LL * ((v17 - 1) & v18);
          *(_DWORD *)(v20 + v19) = 826895730;
          *(_QWORD *)(v20 + v19 + 8) = 0LL;
          *(_QWORD *)(v20 + v19 + 16) = a3;
          *(_QWORD *)(v20 + v19 + 24) = v15;
        }
      }
    }
    if ( v15 )
    {
      UsbhIdleIrp_Event(a1, a3, v15, 2LL, 0);
      KeSetEvent((PRKEVENT)(v6 + 2056), 0, 0);
      if ( *(_DWORD *)(v6 + 792) == 1 )
      {
        Log(
          a1,
          16,
          1231249969,
          (__int64)v15->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters,
          (__int64)v15);
        if ( v21 )
        {
          if ( *v21 )
          {
            Log(a1, 16, 1231249970, *v21, v21[1]);
            (*(void (__fastcall **)(_QWORD))v22)(*(_QWORD *)(v22 + 8));
          }
        }
      }
      KeWaitForSingleObject((PVOID)(v6 + 2056), Executive, 0, 0, 0LL);
      UsbhIdleIrp_Event(a1, a3, v15, 4LL, *(_DWORD *)(v6 + 1440));
      KeSetEvent((PRKEVENT)(v6 + 2056), 0, 0);
    }
    else
    {
      KeSetEvent((PRKEVENT)(v6 + 2056), 0, 0);
      UsbhIdleIrp_Event(a1, a3, 0LL, 3LL, 0);
    }
    UsbhUnlatchPdo(a1, a3, v6, 1701602377LL);
  }
  else
  {
    UsbhUnlatchPdo(a1, a3, v6, 1701602377LL);
    Log(a1, 0x10000, 1768189006, a3, *(unsigned __int16 *)(v6 + 1428));
  }
}
