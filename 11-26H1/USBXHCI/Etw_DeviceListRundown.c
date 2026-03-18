/*
 * XREFs of Etw_DeviceListRundown @ 0x140002B50
 * Callers:
 *     Etw_ControllerRundown @ 0x140002800 (Etw_ControllerRundown.c)
 * Callees:
 *     Etw_DeviceRundown @ 0x140002D24 (Etw_DeviceRundown.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Etw_DeviceListRundown(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  __int64 v3; // r13
  KIRQL v5; // al
  unsigned int v6; // ebx
  _QWORD *Pool2; // rsi
  KIRQL v8; // al
  KIRQL v9; // r14
  _QWORD *v10; // rbp
  __int64 v11; // r12
  _QWORD *v12; // r15
  _QWORD *v13; // rax
  unsigned int v14; // ebp
  _QWORD *v15; // rdi
  _QWORD *v16; // r14

  v2 = (KSPIN_LOCK *)(a2 + 40);
  v3 = a1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 40));
  v6 = *(_DWORD *)(a2 + 64);
  KeReleaseSpinLock(v2, v5);
  if ( v6 )
  {
    while ( 1 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8LL * v6, 1229146200LL);
      if ( !Pool2 )
        break;
      v8 = KeAcquireSpinLockRaiseToDpc(v2);
      v9 = v8;
      if ( v6 >= *(_DWORD *)(a2 + 64) )
      {
        v10 = (_QWORD *)(a2 + 48);
        v11 = 0LL;
        v12 = (_QWORD *)(*v10 - 80LL);
        if ( v10 != (_QWORD *)*v10 )
        {
          do
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD), __int64, const char *))(WdfFunctions_01033 + 1640))(
              WdfDriverGlobals,
              *v12,
              Etw_DeviceListRundown,
              662LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            Pool2[v11] = v12;
            v11 = (unsigned int)(v11 + 1);
            v13 = (_QWORD *)v12[10];
            v12 = v13 - 10;
          }
          while ( v10 != v13 );
          v3 = a1;
        }
        KeReleaseSpinLock(v2, v9);
        v14 = 0;
        if ( v6 )
        {
          v15 = Pool2;
          do
          {
            v16 = (_QWORD *)*v15;
            if ( !*v15 )
              break;
            Etw_DeviceRundown(v3, *v15);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD), __int64, const char *))(WdfFunctions_01033 + 1648))(
              WdfDriverGlobals,
              *v16,
              Etw_DeviceListRundown,
              698LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v14;
            ++v15;
          }
          while ( v14 < v6 );
        }
        ExFreePoolWithTag(Pool2, 0x49434858u);
        return;
      }
      v6 = *(_DWORD *)(a2 + 64);
      KeReleaseSpinLock(v2, v8);
      ExFreePoolWithTag(Pool2, 0x49434858u);
    }
  }
}
