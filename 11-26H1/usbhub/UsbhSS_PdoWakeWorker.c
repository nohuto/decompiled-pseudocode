/*
 * XREFs of UsbhSS_PdoWakeWorker @ 0x1400145D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCompletePdoWakeIrp @ 0x14001087C (UsbhCompletePdoWakeIrp.c)
 *     GET_FDO_POWER_STATE @ 0x140012D8C (GET_FDO_POWER_STATE.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhSS_PdoWakeWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  KIRQL v14; // al
  bool v15; // zf
  KIRQL v16; // dl
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  KIRQL v21; // al
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r15d
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  KIRQL v38; // dl
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  signed __int32 v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rcx

  FdoExt(a1, a2, a3, a4);
  v6 = PdoExt(a3);
  v7 = PdoExt(a3) + 944;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
      *(_WORD *)(v6 + 1428));
  v8 = *(unsigned __int16 *)(v6 + 1428);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = 1466987379;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = a3;
        *(_QWORD *)(v13 + v12 + 24) = v8;
      }
    }
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(v7 + 136) = 1;
  *(_BYTE *)(v7 + 132) = v14;
  *(_DWORD *)(v7 + 88) = 2018460752;
  *(_DWORD *)(v7 + 92) = 12;
  qword_140070600 = v7;
  *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
  v15 = *(_DWORD *)(PdoExt(a3) + 1124) == 3;
  *(_DWORD *)(v7 + 136) = 0;
  qword_140070600 = 0LL;
  *(_DWORD *)(v7 + 88) = 1734964085;
  v16 = *(_BYTE *)(v7 + 132);
  if ( v15 )
  {
    KeReleaseSpinLock(&HubG, v16);
    v20 = FdoExt(a1, v17, v18, v19);
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 5056));
    v22 = *(_DWORD *)(v20 + 4172);
    *(_BYTE *)(v20 + 5064) = v21;
    *(_DWORD *)(v7 + 40) = v22;
    *(_DWORD *)(v7 + 44) = 126;
    *(_DWORD *)(v7 + 32) = 844055622;
    *(_DWORD *)(v7 + 36) = 1986356311;
    *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
    *(_QWORD *)(v20 + 1344) = v7;
    LODWORD(v20) = GET_FDO_POWER_STATE(v7, v23, v24, v25);
    v26 = *(_DWORD *)(PdoExt(a3) + 1128);
    if ( (_DWORD)v20 == 201 && (v26 != 1 || (*(_DWORD *)(v6 + 1420) & 4) != 0) )
    {
      v27 = PdoExt(a3);
      FdoExt(*(_QWORD *)(v7 + 8), v28, v29, v30);
      v31 = ((unsigned __int8)*(_DWORD *)(v27 + 8) + 1) & 7;
      *(_DWORD *)(v27 + 8) = v31;
      v31 *= 32LL;
      *(_DWORD *)(v31 + v27 + 272) = 12;
      *(_DWORD *)(v31 + v27 + 276) = *(_DWORD *)(v27 + 1128);
      *(_DWORD *)(v31 + v27 + 280) = v26;
      *(_DWORD *)(v27 + 1128) = v26;
      v34 = FdoExt(a1, v31, v32, v33);
      FdoExt(*(_QWORD *)(v7 + 8), v35, v36, v37);
      *(_DWORD *)(v7 + 32) = 1734964085;
      v38 = *(_BYTE *)(v34 + 5064);
      *(_QWORD *)(v34 + 1344) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 5056), v38);
      v40 = (unsigned __int8)UsbhCompletePdoWakeIrp(a1, a3, 0);
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        if ( a1 )
        {
          v41 = *(_QWORD *)(a1 + 64);
          if ( v41 )
          {
            v42 = _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 880), 0xFFFFFFFF);
            v43 = *(_DWORD *)(v41 + 884);
            v44 = *(_QWORD *)(v41 + 888);
            v39 = 32LL * ((v42 - 1) & v43);
            *(_DWORD *)(v39 + v44) = 827814771;
            *(_QWORD *)(v39 + v44 + 8) = 0LL;
            *(_QWORD *)(v39 + v44 + 16) = v40;
            *(_QWORD *)(v39 + v44 + 24) = a3;
          }
        }
      }
      if ( (_BYTE)v40
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v39,
          v40,
          11,
          (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
          *(_WORD *)(v6 + 1428),
          a3);
      }
    }
    else
    {
      UsbhReleaseFdoPwrLock(a1, v7);
    }
  }
  else
  {
    KeReleaseSpinLock(&HubG, v16);
  }
  UsbhUnlatchPdo(a1, a3, 0LL, 0x73737057u);
}
