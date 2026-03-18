/*
 * XREFs of UsbhSyncBusPause @ 0x140006D64
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhHardReset_Action @ 0x14004C11C (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x14004C960 (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x14004FC58 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051E30 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhSyncBusPause(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  signed __int32 v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx

  v4 = (int)a3;
  FdoExt(a1, a2, a3, a4);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 1045578064;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = v4;
        *(_QWORD *)(v11 + v10 + 24) = a2;
      }
    }
  }
  *(_DWORD *)(a2 + 128) = v4;
  v12 = (int)UsbhDispatch_BusEvent(a1, a2, 7LL);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 880), 0xFFFFFFFF);
        v15 = *(_DWORD *)(v13 + 884);
        v16 = *(_QWORD *)(v13 + 888);
        v17 = 32LL * ((v14 - 1) & v15);
        *(_DWORD *)(v17 + v16) = 1012023632;
        *(_QWORD *)(v17 + v16 + 8) = 0LL;
        *(_QWORD *)(v17 + v16 + 16) = 0LL;
        *(_QWORD *)(v17 + v16 + 24) = v12;
      }
    }
  }
  return (unsigned int)v12;
}
