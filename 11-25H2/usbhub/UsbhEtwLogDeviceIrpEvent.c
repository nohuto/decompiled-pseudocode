/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x140016858
 * Callers:
 *     UsbhCompletePdoWakeIrp @ 0x14000E4EC (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoPower_WaitWake @ 0x1400161E0 (UsbhPdoPower_WaitWake.c)
 *     UsbhIdleIrp_NoIrp @ 0x14001634C (UsbhIdleIrp_NoIrp.c)
 *     UsbhPdoPnp_StartDevice @ 0x140017090 (UsbhPdoPnp_StartDevice.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x140033E40 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhFdoResetPdoPort @ 0x140040B3C (UsbhFdoResetPdoPort.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x14004BBE0 (UsbhCompleteCanceledPdoWakeIrp.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, int a4)
{
  _DWORD *v7; // rax
  int ActivityIdIrp; // eax
  const GUID *v9; // rdx
  int v10; // [rsp+50h] [rbp-29h] BYREF
  int v11; // [rsp+58h] [rbp-21h] BYREF
  __int16 v12; // [rsp+5Ch] [rbp-1Dh]
  __int16 v13; // [rsp+5Eh] [rbp-1Bh]
  __int16 v14; // [rsp+60h] [rbp-19h]
  __int16 v15; // [rsp+62h] [rbp-17h]
  __int64 v16; // [rsp+68h] [rbp-11h] BYREF
  __int16 v17; // [rsp+70h] [rbp-9h]
  __int16 v18; // [rsp+72h] [rbp-7h]
  int v19; // [rsp+74h] [rbp-5h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  int v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+84h] [rbp+Bh]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  int v26; // [rsp+90h] [rbp+17h]
  __int128 v27; // [rsp+98h] [rbp+1Fh] BYREF

  v10 = a4;
  v27 = 0LL;
  if ( dword_14006F690 )
  {
    v7 = FdoExt(*(_QWORD *)(a1 + 1184));
    v11 = v7[1298];
    v12 = *((_WORD *)v7 + 2598);
    v13 = v7[1300];
    v14 = *((_WORD *)v7 + 2614);
    v15 = *((_WORD *)v7 + 2615);
    v16 = *(_QWORD *)(a1 + 1160);
    v17 = *(_WORD *)(a1 + 1408);
    v18 = *(_WORD *)(a1 + 1410);
    v19 = *(_DWORD *)(a1 + 2688);
    v20 = *(_DWORD *)(a1 + 2692);
    v21 = *(_DWORD *)(a1 + 2696);
    v22 = *(_DWORD *)(a1 + 2700);
    v23 = *(_DWORD *)(a1 + 2704);
    v24 = *(_DWORD *)(a1 + 2708);
    v25 = *(_DWORD *)(a1 + 2712);
    v26 = *(_DWORD *)(a1 + 1168);
    if ( a2 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v27);
    else
      ActivityIdIrp = -1073741823;
    v9 = (const GUID *)&v27;
    if ( ActivityIdIrp < 0 )
      v9 = 0LL;
    UsbhEtwWrite(a3, v9, &v11, 12LL, &v16, 44LL, &v10, 4LL, 0LL);
  }
}
