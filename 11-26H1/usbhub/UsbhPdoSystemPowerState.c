/*
 * XREFs of UsbhPdoSystemPowerState @ 0x14002A640
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x14002B130 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x14002AE7C (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x140034138 (UsbhSetPdoPowerState.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhPdoSystemPowerState(__int64 a1, __int64 a2, IRP *a3)
{
  _DWORD *v6; // r13
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int LowPart; // r15d
  int v14; // r8d
  int v15; // r12d
  _DWORD *v16; // rbx
  __int64 v17; // r8
  int v18; // edx
  _DWORD *v19; // rax

  v6 = PdoExt(a2);
  v7 = PdoExt(a2) + 236;
  if ( (UsbhLogMask & 0x10) != 0 )
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
        *(_DWORD *)(v12 + v11) = 1934648432;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = a2;
        *(_QWORD *)(v12 + v11 + 24) = a3;
      }
    }
  }
  LowPart = a3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1937339216LL);
  v15 = PdoExt(a2)[282];
  if ( LowPart == 1 )
  {
    UsbhSetPdoPowerState((_DWORD)v7, a2, v14, v15, 10);
  }
  else
  {
    v16 = PdoExt(a2);
    FdoExt(*((_QWORD *)v7 + 1));
    v17 = ((unsigned __int8)v16[2] + 1) & 7;
    v16[2] = v17;
    v17 *= 32LL;
    *(_DWORD *)((char *)v16 + v17 + 272) = 11;
    *(_DWORD *)((char *)v16 + v17 + 276) = v16[282];
    *(_DWORD *)((char *)v16 + v17 + 280) = v15;
    v16[282] = v15;
  }
  v6[198] = LowPart;
  UsbhReleaseFdoPwrLock(a1, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      1,
      21,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *((_WORD *)v6 + 714),
      LowPart);
  v19 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v19 + 148), a2, a3, 1757LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
