/*
 * XREFs of UsbhPdoPower_SetPower @ 0x14002B130
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhPdoSystemPowerState @ 0x14002A640 (UsbhPdoSystemPowerState.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x14002AE7C (UsbhPoStartNextPowerIrp_Pdo.c)
 */

__int64 __fastcall UsbhPdoPower_SetPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  _DWORD *v5; // rsi
  __int64 v6; // r14
  _DWORD *v7; // rax
  _IO_STACK_LOCATION *v8; // r9
  _DWORD *v9; // r8
  __int64 Options; // r10
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // ecx
  _DWORD *v23; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = PdoExt((__int64)a1);
  v6 = *((_QWORD *)v5 + 148);
  v7 = PdoExt((__int64)a1);
  v8 = a2->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  Options = v8->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( v6 )
      {
        v11 = *(_QWORD *)(v6 + 64);
        if ( v11 )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 880), 0xFFFFFFFF);
          v13 = *(_DWORD *)(v11 + 884);
          v14 = *(_QWORD *)(v11 + 888);
          v15 = 32LL * ((v12 - 1) & v13);
          *(_DWORD *)(v15 + v14) = 860767312;
          *(_QWORD *)(v15 + v14 + 8) = 0LL;
          *(_QWORD *)(v15 + v14 + 16) = v8;
          *(_QWORD *)(v15 + v14 + 24) = a2;
        }
      }
    }
    *(_QWORD *)&v9[2 * Options + 200] = a2;
    *(_QWORD *)&v9[2 * Options + 204] = v8;
    v9[Options + 208] = 752;
  }
  FdoExt(*((_QWORD *)v5 + 148));
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v16 = *((_QWORD *)v5 + 148);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 64);
      if ( v17 )
      {
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 880), 0xFFFFFFFF);
        v19 = *(_DWORD *)(v17 + 884);
        v20 = *(_QWORD *)(v17 + 888);
        v21 = 32LL * ((v18 - 1) & v19);
        *(_DWORD *)(v21 + v20) = 1347642480;
        *(_QWORD *)(v21 + v20 + 8) = 0LL;
        *(_QWORD *)(v21 + v20 + 16) = a1;
        *(_QWORD *)(v21 + v20 + 24) = a2;
      }
    }
  }
  v22 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v22 )
    return UsbhPdoSystemPowerState(*((_QWORD *)v5 + 148), (__int64)a1, a2);
  if ( v22 == 1 )
    return UsbhPdoDevicePowerState(*((_QWORD *)v5 + 148), a1, a2);
  v23 = PdoExt((__int64)a1);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v23 + 148), (__int64)a1, a2, 767);
  a2->IoStatus.Status = -1073741637;
  IofCompleteRequest(a2, 0);
  return 3221225659LL;
}
