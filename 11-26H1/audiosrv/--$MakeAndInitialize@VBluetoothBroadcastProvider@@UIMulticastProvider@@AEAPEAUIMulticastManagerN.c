/*
 * XREFs of ??$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800E85C8
 * Callers:
 *     ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x180108340 (-RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180049230 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0BluetoothBroadcastProvider@@QEAA@XZ @ 0x1800E9788 (--0BluetoothBroadcastProvider@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ECD50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastProvid.c)
 *     ?RuntimeClassInitialize@BluetoothBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800ED2BC (-RuntimeClassInitialize@BluetoothBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothBroadcastProvider,IMulticastProvider,IMulticastManagerNotificationClient * &>(
        BluetoothBroadcastProvider **a1,
        struct IMulticastManagerNotificationClient **a2)
{
  void *v4; // rax
  int v5; // edi
  BluetoothBroadcastProvider *v6; // rbx
  const struct _GUID *v7; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new[](0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( v4 )
  {
    v6 = BluetoothBroadcastProvider::BluetoothBroadcastProvider((BluetoothBroadcastProvider *)v4);
    v9 = 0LL;
    v5 = BluetoothBroadcastProvider::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_38b0ed7f_4ec3_40f1_a104_3e0d7a86ce2e, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(BluetoothBroadcastProvider *))(*(_QWORD *)v6 + 8LL))(v6);
        v5 = 0;
      }
      else if ( InlineIsEqualGUID(v7, v7) )
      {
        *a1 = v6;
        v5 = 0;
        (*(void (__fastcall **)(BluetoothBroadcastProvider *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      else
      {
        v5 = -2147467262;
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastProvider>::Release(v6);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v9);
  return (unsigned int)v5;
}
