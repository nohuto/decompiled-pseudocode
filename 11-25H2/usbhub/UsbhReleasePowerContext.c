/*
 * XREFs of UsbhReleasePowerContext @ 0x140039F54
 * Callers:
 *     UsbhPdoSetD0 @ 0x1400106D0 (UsbhPdoSetD0.c)
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhSet_D0_wQueued_Action @ 0x140030640 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x140030B9C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoDxPoComplete_Action @ 0x14004AE30 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004C0C0 (UsbhPdoUnblockPendedD0IrpWI.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

void __fastcall UsbhReleasePowerContext(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  __int64 v6; // r9
  _QWORD *v7; // r8

  v3 = FdoExt(a1);
  v4 = *(_QWORD *)(a2 + 72);
  v5 = v3;
  *(_BYTE *)(v4 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(v4 + 136) = 1;
  qword_14006F5A0 = (__int64)&dword_14006F5A8;
  if ( *(_BYTE *)(a2 + 136) )
    *((_QWORD *)v5 + 114) = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v6 + 8) != a2 + 8 || (v7 = *(_QWORD **)(a2 + 16), *v7 != a2 + 8) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  ExFreePoolWithTag((PVOID)a2, 0);
  *(_DWORD *)(v4 + 136) = 0;
  qword_14006F5A0 = 0LL;
  KeReleaseSpinLock(&HubG, *(_BYTE *)(v4 + 132));
}
