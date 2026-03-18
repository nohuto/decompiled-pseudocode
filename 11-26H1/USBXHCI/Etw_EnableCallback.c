/*
 * XREFs of Etw_EnableCallback @ 0x140002020
 * Callers:
 *     McGenControlCallbackV2 @ 0x140001D30 (McGenControlCallbackV2.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140002294 (McTemplateK0_EtwWriteTransfer.c)
 *     Etw_ControllerRundown @ 0x140002800 (Etw_ControllerRundown.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Etw_EnableCallback(__int64 a1, int a2)
{
  __int64 v2; // rcx
  KIRQL v3; // al
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _QWORD *Pool2; // rdi
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // si
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rcx
  unsigned int v14; // r14d
  _QWORD *v15; // rsi
  __int64 v16; // rbp
  GUID v17; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
  {
    v17 = 0LL;
    EtwActivityIdControl(3u, &v17);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      McTemplateK0_EtwWriteTransfer(v2, &USBXHCI_ETW_EVENT_RUNDOWN_START, &v17);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16));
    v4 = *(_DWORD *)(g_WdfDriverUsbXhciContext + 24);
    KeReleaseSpinLock((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16), v3);
    if ( v4 )
    {
      while ( 1 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8LL * v4, 1229146200LL);
        if ( !Pool2 )
          break;
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16));
        v8 = g_WdfDriverUsbXhciContext;
        v9 = v7;
        if ( v4 >= *(_DWORD *)(g_WdfDriverUsbXhciContext + 24) )
        {
          v10 = *(_QWORD *)g_WdfDriverUsbXhciContext;
          v11 = 0LL;
          while ( 1 )
          {
            v12 = v10 - 24;
            if ( v8 == v10 )
              break;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01033 + 1640))(
              WdfDriverGlobals,
              *(_QWORD *)(v12 + 8),
              Etw_EnableCallback,
              160LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            v8 = g_WdfDriverUsbXhciContext;
            Pool2[v11] = v12;
            v11 = (unsigned int)(v11 + 1);
            v10 = *(_QWORD *)(v12 + 24);
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 16), v9);
          v14 = 0;
          if ( v4 )
          {
            v15 = Pool2;
            do
            {
              v16 = *v15;
              if ( !*v15 )
                break;
              Etw_ControllerRundown(&v17, *v15);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01033 + 1648))(
                WdfDriverGlobals,
                *(_QWORD *)(v16 + 8),
                Etw_EnableCallback,
                197LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
              ++v14;
              ++v15;
            }
            while ( v14 < v4 );
          }
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
            McTemplateK0_EtwWriteTransfer(v13, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v17);
          ExFreePoolWithTag(Pool2, 0x49434858u);
          return;
        }
        v4 = *(_DWORD *)(g_WdfDriverUsbXhciContext + 24);
        KeReleaseSpinLock((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16), v7);
        ExFreePoolWithTag(Pool2, 0x49434858u);
      }
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    {
      McTemplateK0_EtwWriteTransfer(v5, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v17);
    }
  }
}
