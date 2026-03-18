/*
 * XREFs of UsbhPoStartNextPowerIrp_Pdo @ 0x14002AE7C
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSystemPowerState @ 0x14002A640 (UsbhPdoSystemPowerState.c)
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x14002A840 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhPdoPower_SetPower @ 0x14002B130 (UsbhPdoPower_SetPower.c)
 *     UsbhPdoPower_QueryPower @ 0x14004B8E0 (UsbhPdoPower_QueryPower.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Pdo(__int64 a1, __int64 a2, IRP *a3, int a4)
{
  _DWORD *v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _DWORD *v9; // r10
  __int64 Options; // rax
  __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rcx
  signed __int32 v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx

  v7 = PdoExt(a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    v11 = (unsigned int)Options;
    v12 = *(_QWORD *)&v9[2 * Options + 200];
    if ( (UsbhLogMask & 0x10) != 0 )
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
          *(_DWORD *)(v17 + v16) = 827212880;
          *(_QWORD *)(v17 + v16 + 8) = 0LL;
          *(_QWORD *)(v17 + v16 + 16) = v12;
          *(_QWORD *)(v17 + v16 + 24) = a3;
        }
      }
    }
    v18 = *(_QWORD *)&v9[2 * v11 + 204];
    if ( (UsbhLogMask & 0x10) != 0 && a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 880), 0xFFFFFFFF);
        v21 = *(_DWORD *)(v19 + 884);
        v22 = *(_QWORD *)(v19 + 888);
        v23 = 32LL * ((v20 - 1) & v21);
        *(_DWORD *)(v23 + v22) = 843990096;
        *(_QWORD *)(v23 + v22 + 8) = 0LL;
        *(_QWORD *)(v23 + v22 + 16) = v18;
        *(_QWORD *)(v23 + v22 + 24) = CurrentStackLocation;
      }
    }
    *(_QWORD *)&v9[2 * v11 + 200] = 0LL;
    *(_QWORD *)&v9[2 * v11 + 204] = 0LL;
    v9[v11 + 208] = a4;
    PoStartNextPowerIrp(a3);
  }
}
