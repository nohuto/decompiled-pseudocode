/*
 * XREFs of UsbhCancelResetTimeout @ 0x140012034
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x140002204 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhReset1DropDevice @ 0x140011DF0 (UsbhReset1DropDevice.c)
 *     UsbhReset1Complete @ 0x140012800 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhCancelEnumeration @ 0x140035C04 (UsbhCancelEnumeration.c)
 *     UsbhSoftDisconnectPdo @ 0x1400487A0 (UsbhSoftDisconnectPdo.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140057DE0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x140058510 (UsbhReset1Debounce.c)
 *     UsbhReset2CycleDevice @ 0x140058C00 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x140058C70 (UsbhReset2DropDevice.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     UsbhDisablePort @ 0x14001C650 (UsbhDisablePort.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 *     UsbhCancelQueuedTimeout @ 0x140039E24 (UsbhCancelQueuedTimeout.c)
 *     UsbhWaitForResetTimeout @ 0x14003A028 (UsbhWaitForResetTimeout.c)
 */

void __fastcall UsbhCancelResetTimeout(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  KSPIN_LOCK *v11; // rdi
  KIRQL v12; // al
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  KIRQL v17; // al
  KIRQL v18; // r14
  void *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx

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
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_DWORD *)v10 = 1414685027;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = v3;
      }
    }
  }
  v11 = (KSPIN_LOCK *)(FdoExt(*(_QWORD *)(a2 + 16)) + 1236);
  if ( KeCancelTimer((PKTIMER)(a2 + 552)) )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(v11);
    v19 = (void *)_InterlockedExchange64((volatile __int64 *)(a2 + 680), 0LL);
    v20 = *(_QWORD *)(a2 + 16);
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 64);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_DWORD *)v22 = 827482467;
          *(_QWORD *)(v22 + 16) = a2;
          *(_QWORD *)(v22 + 24) = v19;
        }
      }
    }
    *(_DWORD *)(a2 + 696) = 0;
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( !a3 )
      *(_DWORD *)(a2 + 696) = 0;
    v23 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 4) != 0 )
    {
      v24 = *(_QWORD *)(a2 + 16);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_DWORD *)v26 = 1482187107;
          *(_QWORD *)(v26 + 16) = a2;
          *(_QWORD *)(v26 + 24) = v23;
        }
      }
    }
    KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
    if ( *(_DWORD *)(a2 + 696) == 1 )
    {
      *(_DWORD *)(a2 + 696) = 0;
      KeReleaseSpinLock(v11, v18);
      UsbhWait(a1, 50LL);
    }
    else
    {
      KeReleaseSpinLock(v11, v18);
    }
    if ( a3 == 1 )
      UsbhDisablePort(a1, a2);
  }
  else
  {
    v7 = 0;
    v12 = KeAcquireSpinLockRaiseToDpc(v11);
    if ( *(_DWORD *)(a2 + 696) == 4 )
    {
      KeReleaseSpinLock(v11, v12);
      if ( !(unsigned __int8)UsbhCancelQueuedTimeout(a1, a2) )
        UsbhWaitForResetTimeout(a1, a2);
    }
    else
    {
      v13 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 4) != 0 )
      {
        v14 = *(_QWORD *)(a2 + 16);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 64);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
            *(_QWORD *)(v16 + 8) = 0LL;
            *(_QWORD *)(v16 + 16) = 0LL;
            *(_DWORD *)v16 = 878802787;
            *(_QWORD *)(v16 + 24) = v13;
          }
        }
      }
      KeReleaseSpinLock(v11, v12);
      UsbhWaitForResetTimeout(a1, a2);
      UsbhCancelQueuedTimeout(a1, a2);
    }
  }
  v17 = KeAcquireSpinLockRaiseToDpc(v11);
  KeReleaseSpinLock(v11, v17);
  if ( v7 )
    UsbhReferenceListRemove(*(_QWORD *)(a2 + 16), a2 + 552);
}
