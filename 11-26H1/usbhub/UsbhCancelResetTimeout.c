/*
 * XREFs of UsbhCancelResetTimeout @ 0x140023BD8
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1400011C0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhReset1Complete @ 0x14000E460 (UsbhReset1Complete.c)
 *     UsbhReset1DropDevice @ 0x140023990 (UsbhReset1DropDevice.c)
 *     UsbhCancelEnumeration @ 0x140033B08 (UsbhCancelEnumeration.c)
 *     UsbhSoftDisconnectPdo @ 0x1400482F0 (UsbhSoftDisconnectPdo.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140058340 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x140058A70 (UsbhReset1Debounce.c)
 *     UsbhReset2CycleDevice @ 0x140059170 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1400591E0 (UsbhReset2DropDevice.c)
 * Callees:
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhCancelQueuedTimeout @ 0x140023F64 (UsbhCancelQueuedTimeout.c)
 *     UsbhDisablePort @ 0x140024098 (UsbhDisablePort.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 *     UsbhWaitForResetTimeout @ 0x140039A50 (UsbhWaitForResetTimeout.c)
 */

void __fastcall UsbhCancelResetTimeout(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  char v7; // bp
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  KSPIN_LOCK *v14; // rdi
  KIRQL v15; // al
  KIRQL v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  KIRQL v24; // al
  KIRQL v25; // r14
  void *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rdx
  signed __int32 v29; // eax
  unsigned int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rcx
  signed __int32 v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdx

  v3 = *(unsigned __int16 *)(a2 + 4);
  v7 = 1;
  if ( (UsbhLogMask & 4) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 64);
      if ( v9 )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = 1414685027;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = a2;
        *(_QWORD *)(v13 + v12 + 24) = v3;
      }
    }
  }
  v14 = (KSPIN_LOCK *)(FdoExt(*(_QWORD *)(a2 + 16)) + 1236);
  if ( KeCancelTimer((PKTIMER)(a2 + 552)) )
  {
    v25 = KeAcquireSpinLockRaiseToDpc(v14);
    v26 = (void *)_InterlockedExchange64((volatile __int64 *)(a2 + 680), 0LL);
    if ( (UsbhLogMask & 4) != 0 )
    {
      v27 = *(_QWORD *)(a2 + 16);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 64);
        if ( v28 )
        {
          v29 = _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 880), 0xFFFFFFFF);
          v30 = *(_DWORD *)(v28 + 884);
          v31 = *(_QWORD *)(v28 + 888);
          v32 = 32LL * ((v29 - 1) & v30);
          *(_DWORD *)(v32 + v31) = 827482467;
          *(_QWORD *)(v32 + v31 + 8) = 0LL;
          *(_QWORD *)(v32 + v31 + 16) = a2;
          *(_QWORD *)(v32 + v31 + 24) = v26;
        }
      }
    }
    *(_DWORD *)(a2 + 696) = 0;
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    if ( !a3 )
      *(_DWORD *)(a2 + 696) = 0;
    v33 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 4) != 0 )
    {
      v34 = *(_QWORD *)(a2 + 16);
      if ( v34 )
      {
        v35 = *(_QWORD *)(v34 + 64);
        if ( v35 )
        {
          v36 = _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 880), 0xFFFFFFFF);
          v37 = *(_DWORD *)(v35 + 884);
          v38 = *(_QWORD *)(v35 + 888);
          v39 = 32LL * ((v36 - 1) & v37);
          *(_DWORD *)(v39 + v38) = 1482187107;
          *(_QWORD *)(v39 + v38 + 8) = 0LL;
          *(_QWORD *)(v39 + v38 + 16) = a2;
          *(_QWORD *)(v39 + v38 + 24) = v33;
        }
      }
    }
    KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
    if ( *(_DWORD *)(a2 + 696) == 1 )
    {
      *(_DWORD *)(a2 + 696) = 0;
      KeReleaseSpinLock(v14, v25);
      UsbhWait(a1, 0x32u);
    }
    else
    {
      KeReleaseSpinLock(v14, v25);
    }
    if ( a3 == 1 )
      UsbhDisablePort(a1, a2);
  }
  else
  {
    v7 = 0;
    v15 = KeAcquireSpinLockRaiseToDpc(v14);
    v16 = v15;
    if ( *(_DWORD *)(a2 + 696) == 4 )
    {
      KeReleaseSpinLock(v14, v15);
      if ( !(unsigned __int8)UsbhCancelQueuedTimeout(a1, a2) )
        UsbhWaitForResetTimeout(a1, a2);
    }
    else
    {
      v17 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 4) != 0 )
      {
        v18 = *(_QWORD *)(a2 + 16);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 64);
          if ( v19 )
          {
            v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 880), 0xFFFFFFFF);
            v21 = *(_DWORD *)(v19 + 884);
            v22 = *(_QWORD *)(v19 + 888);
            v23 = 32LL * ((v20 - 1) & v21);
            *(_DWORD *)(v23 + v22) = 878802787;
            *(_QWORD *)(v23 + v22 + 8) = 0LL;
            *(_QWORD *)(v23 + v22 + 16) = 0LL;
            *(_QWORD *)(v23 + v22 + 24) = v17;
          }
        }
      }
      KeReleaseSpinLock(v14, v16);
      UsbhWaitForResetTimeout(a1, a2);
      UsbhCancelQueuedTimeout(a1, a2);
    }
  }
  v24 = KeAcquireSpinLockRaiseToDpc(v14);
  KeReleaseSpinLock(v14, v24);
  if ( v7 )
    UsbhReferenceListRemove(*(_QWORD *)(a2 + 16), a2 + 552);
}
