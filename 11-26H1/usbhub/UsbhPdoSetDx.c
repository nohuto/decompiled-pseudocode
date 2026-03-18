/*
 * XREFs of UsbhPdoSetDx @ 0x140012618
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhCompletePdoWakeIrp @ 0x14001087C (UsbhCompletePdoWakeIrp.c)
 *     UsbhCompletePdoIdleIrp @ 0x140010A24 (UsbhCompletePdoIdleIrp.c)
 *     UsbhSyncSuspendPdoPort @ 0x1400113C4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x140011644 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSetPdoIdleReady @ 0x1400116C0 (UsbhSetPdoIdleReady.c)
 *     GET_FDO_POWER_STATE @ 0x140012D8C (GET_FDO_POWER_STATE.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x140034138 (UsbhSetPdoPowerState.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoSetDx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  KIRQL v39; // dl
  unsigned int v40; // ebx
  int v41; // edx
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  KIRQL v48; // dl
  int v50; // edx
  int v51; // edx
  char v52; // [rsp+70h] [rbp+8h]
  int v53; // [rsp+80h] [rbp+18h]
  int v54; // [rsp+88h] [rbp+20h]

  v6 = PdoExt(a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  FdoExt(v7, v9, v10, v11);
  v12 = *(_QWORD *)(a3 + 184);
  v13 = *(_DWORD *)(v12 + 24);
  v53 = v13;
  v54 = *(_DWORD *)(v12 + 8);
  FdoExt(*(_QWORD *)(a1 + 8), v12, v14, v15);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( v7 )
    {
      v16 = *(_QWORD *)(v7 + 64);
      if ( v16 )
      {
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 880), 0xFFFFFFFF);
        v18 = *(_DWORD *)(v16 + 884);
        v19 = *(_QWORD *)(v16 + 888);
        v20 = 32LL * ((v17 - 1) & v18);
        *(_DWORD *)(v20 + v19) = 2017739856;
        *(_QWORD *)(v20 + v19 + 8) = 0LL;
        *(_QWORD *)(v20 + v19 + 16) = a3;
        *(_QWORD *)(v20 + v19 + 24) = a2;
      }
    }
  }
  *(_DWORD *)(v8 + 1420) &= ~0x2000000u;
  v21 = GET_FDO_POWER_STATE(a1);
  if ( v21 <= 206 )
  {
    if ( v21 == 206 )
      goto LABEL_24;
    v24 = v21 - 201;
    if ( !v24 )
    {
      v25 = PdoExt(a2);
      v27 = *(_DWORD *)(v25 + 1128);
      if ( v27 == 1 )
      {
        v28 = PdoExt(a2);
        FdoExt(*(_QWORD *)(a1 + 8), v29, v30, v31);
        v32 = ((unsigned __int8)*(_DWORD *)(v28 + 8) + 1) & 7;
        *(_DWORD *)(v28 + 8) = v32;
        v32 *= 32LL;
        v52 = v53 == 4;
        *(_DWORD *)(v32 + v28 + 272) = 4;
        *(_DWORD *)(v32 + v28 + 276) = *(_DWORD *)(v28 + 1128);
        *(_DWORD *)(v32 + v28 + 280) = 4;
        *(_DWORD *)(v28 + 1128) = 4;
        v35 = FdoExt(v7, v32, v33, v34);
        FdoExt(*(_QWORD *)(a1 + 8), v36, v37, v38);
        *(_DWORD *)(a1 + 32) = 1734964085;
        v39 = *(_BYTE *)(v35 + 5064);
        *(_QWORD *)(v35 + 1344) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v35 + 5056), v39);
        UsbhPdoAbortAllDevicePipes(v7, a2);
        v40 = 0;
        if ( !*(_DWORD *)(v8 + 2800) || (v54 & 0xF000) != 0x5000 )
          UsbhSyncSuspendPdoPort(a1, a2, v52);
        *(_DWORD *)(v8 + 2384) = v53 != 4;
LABEL_12:
        UsbhSetPdoIdleReady(v7, a2, a3);
        if ( !v52 )
          return v40;
        goto LABEL_13;
      }
      switch ( *(_DWORD *)(v25 + 1128) )
      {
        case 2:
        case 3:
          goto LABEL_33;
        case 4:
        case 5:
          *(_DWORD *)(v8 + 2384) = v13 != 4;
          UsbhSetPdoPowerState(a1, a2, v26, v27, 4);
          UsbhReleaseFdoPwrLock(v7, a1);
          v40 = 0;
          v52 = v53 == 4;
          goto LABEL_12;
        case 6:
LABEL_33:
          UsbhSetPdoPowerState(a1, a2, v26, v27, 5);
          break;
      }
      UsbhReleaseFdoPwrLock(v7, a1);
      v40 = -1073741101;
LABEL_13:
      UsbhCompletePdoWakeIrp(v7, *(_QWORD *)(v8 + 840), -1073741101);
      if ( (*(_DWORD *)(v8 + 1420) & 0x100000) == 0 )
        UsbhCompletePdoIdleIrp(v7, *(_QWORD *)(v8 + 840), -1073741101);
      return v40;
    }
    v50 = v24 - 1;
    if ( !v50 )
      goto LABEL_24;
    v51 = v50 - 1;
    if ( !v51 )
      goto LABEL_24;
    v43 = (unsigned int)(v51 - 1);
    if ( !(_DWORD)v43 )
      goto LABEL_24;
    goto LABEL_18;
  }
  v41 = v21 - 209;
  if ( v41 )
  {
    v42 = v41 - 1;
    if ( v42 )
    {
      v43 = (unsigned int)(v42 - 1);
      if ( (_DWORD)v43 )
      {
LABEL_18:
        if ( (_DWORD)v43 != 1 )
        {
          v44 = FdoExt(v7, v43, v22, v23);
          FdoExt(*(_QWORD *)(a1 + 8), v45, v46, v47);
          *(_DWORD *)(a1 + 32) = 1734964085;
          v48 = *(_BYTE *)(v44 + 5064);
          *(_QWORD *)(v44 + 1344) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v44 + 5056), v48);
          return (unsigned int)-1073741823;
        }
LABEL_24:
        v40 = -1073741101;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            19,
            (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
            *(_WORD *)(v8 + 1428));
        UsbhSetPdoPowerState(a1, a2, v22, 4, 5);
        UsbhReleaseFdoPwrLock(v7, a1);
        return v40;
      }
    }
  }
  UsbhSetPdoPowerState(a1, a2, v22, 5, 4);
  Log(v7, 16, 1349862520, a3, a2);
  UsbhReleaseFdoPwrLock(v7, a1);
  v40 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *(_WORD *)(v8 + 1428));
  return v40;
}
