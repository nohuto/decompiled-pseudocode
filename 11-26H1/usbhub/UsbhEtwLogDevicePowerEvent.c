/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x14002F1E4
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004BC70 (UsbhPdoUnblockPendedD0IrpWI.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, int a4, ...)
{
  _DWORD *v7; // rax
  int ActivityIdIrp; // eax
  const GUID *v9; // rdx
  int v10; // [rsp+60h] [rbp-31h] BYREF
  int v11; // [rsp+68h] [rbp-29h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp-25h]
  __int16 v13; // [rsp+6Eh] [rbp-23h]
  __int16 v14; // [rsp+70h] [rbp-21h]
  __int16 v15; // [rsp+72h] [rbp-1Fh]
  __int64 v16; // [rsp+78h] [rbp-19h] BYREF
  __int16 v17; // [rsp+80h] [rbp-11h]
  __int16 v18; // [rsp+82h] [rbp-Fh]
  int v19; // [rsp+84h] [rbp-Dh]
  int v20; // [rsp+88h] [rbp-9h]
  int v21; // [rsp+8Ch] [rbp-5h]
  int v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+94h] [rbp+3h]
  int v24; // [rsp+98h] [rbp+7h]
  int v25; // [rsp+9Ch] [rbp+Bh]
  int v26; // [rsp+A0h] [rbp+Fh]
  __int128 v27; // [rsp+A8h] [rbp+17h] BYREF
  va_list va; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v10 = a4;
  v27 = 0LL;
  if ( dword_1400706F0 )
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
    UsbhEtwWrite(a3, v9, &v11, 12LL, &v16, 44LL, &v10, 4LL, va, 4LL, 0LL);
  }
}
