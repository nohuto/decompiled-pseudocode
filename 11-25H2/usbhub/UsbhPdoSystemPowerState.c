/*
 * XREFs of UsbhPdoSystemPowerState @ 0x140030D54
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1400302B0 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x140031570 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x1400316B0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x140032544 (UsbhSetPdoPowerState.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhPdoSystemPowerState(__int64 a1, __int64 a2, IRP *a3)
{
  _DWORD *v6; // r13
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int LowPart; // r15d
  int v11; // r8d
  int v12; // r12d
  _DWORD *v13; // rbx
  __int64 v14; // r8
  int v15; // edx
  _DWORD *v16; // rax

  v6 = PdoExt(a2);
  v7 = PdoExt(a2) + 236;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1934648432;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = a3;
      }
    }
  }
  LowPart = a3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1937339216LL);
  v12 = PdoExt(a2)[282];
  if ( LowPart == 1 )
  {
    UsbhSetPdoPowerState((_DWORD)v7, a2, v11, v12, 10);
  }
  else
  {
    v13 = PdoExt(a2);
    FdoExt(*((_QWORD *)v7 + 1));
    v14 = ((unsigned __int8)v13[2] + 1) & 7;
    v13[2] = v14;
    v14 *= 32LL;
    *(_DWORD *)((char *)v13 + v14 + 272) = 11;
    *(_DWORD *)((char *)v13 + v14 + 276) = v13[282];
    *(_DWORD *)((char *)v13 + v14 + 280) = v12;
    v13[282] = v12;
  }
  v6[198] = LowPart;
  UsbhReleaseFdoPwrLock(a1, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      1,
      21,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *((_WORD *)v6 + 714),
      LowPart);
  v16 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v16 + 148), a2, a3, 1757LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
