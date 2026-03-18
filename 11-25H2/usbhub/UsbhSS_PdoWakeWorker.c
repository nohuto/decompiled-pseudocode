/*
 * XREFs of UsbhSS_PdoWakeWorker @ 0x14000D9A0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     GET_FDO_POWER_STATE @ 0x14000DD54 (GET_FDO_POWER_STATE.c)
 *     UsbhCompletePdoWakeIrp @ 0x14000E4EC (UsbhCompletePdoWakeIrp.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhSS_PdoWakeWorker(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // r14
  _DWORD *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  KIRQL v10; // al
  bool v11; // zf
  KIRQL v12; // dl
  KSPIN_LOCK *v13; // rbx
  KIRQL v14; // al
  int v15; // ecx
  int v16; // r15d
  _DWORD *v17; // rbx
  __int64 v18; // rdx
  _DWORD *v19; // rbx
  KIRQL v20; // dl
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx

  FdoExt(a1);
  v5 = PdoExt(a3);
  v6 = PdoExt(a3) + 236;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
      *((_WORD *)v5 + 714));
  v7 = *((unsigned __int16 *)v5 + 714);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1466987379;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a3;
        *(_QWORD *)(v9 + 24) = v7;
      }
    }
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&HubG);
  v6[34] = 1;
  *((_BYTE *)v6 + 132) = v10;
  v6[22] = 2018460752;
  v6[23] = 12;
  qword_14006F5A0 = (__int64)v6;
  *((_QWORD *)v6 + 3) = KeGetCurrentThread();
  v11 = PdoExt(a3)[281] == 3;
  v6[34] = 0;
  qword_14006F5A0 = 0LL;
  v6[22] = 1734964085;
  v12 = *((_BYTE *)v6 + 132);
  if ( v11 )
  {
    KeReleaseSpinLock(&HubG, v12);
    v13 = (KSPIN_LOCK *)FdoExt(a1);
    v14 = KeAcquireSpinLockRaiseToDpc(v13 + 632);
    v15 = *((_DWORD *)v13 + 1043);
    *((_BYTE *)v13 + 5064) = v14;
    v6[10] = v15;
    v6[11] = 126;
    v6[8] = 844055622;
    v6[9] = 1986356311;
    *((_QWORD *)v6 + 3) = KeGetCurrentThread();
    v13[168] = (KSPIN_LOCK)v6;
    LODWORD(v13) = GET_FDO_POWER_STATE(v6);
    v16 = PdoExt(a3)[282];
    if ( (_DWORD)v13 == 201 && (v16 != 1 || (v5[355] & 4) != 0) )
    {
      v17 = PdoExt(a3);
      FdoExt(*((_QWORD *)v6 + 1));
      v18 = ((unsigned __int8)v17[2] + 1) & 7;
      v17[2] = v18;
      v18 *= 32LL;
      *(_DWORD *)((char *)v17 + v18 + 272) = 12;
      *(_DWORD *)((char *)v17 + v18 + 276) = v17[282];
      *(_DWORD *)((char *)v17 + v18 + 280) = v16;
      v17[282] = v16;
      v19 = FdoExt(a1);
      FdoExt(*((_QWORD *)v6 + 1));
      v6[8] = 1734964085;
      v20 = *((_BYTE *)v19 + 5064);
      *((_QWORD *)v19 + 168) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)v19 + 632, v20);
      v22 = (unsigned __int8)UsbhCompletePdoWakeIrp(a1, a3, 0LL);
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        if ( a1 )
        {
          v21 = *(_QWORD *)(a1 + 64);
          if ( v21 )
          {
            v23 = *(_QWORD *)(v21 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
            *(_DWORD *)v23 = 827814771;
            *(_QWORD *)(v23 + 8) = 0LL;
            *(_QWORD *)(v23 + 16) = v22;
            *(_QWORD *)(v23 + 24) = a3;
          }
        }
      }
      if ( (_BYTE)v22
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v21,
          v22,
          11,
          (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
          *((_WORD *)v5 + 714),
          a3);
      }
    }
    else
    {
      UsbhReleaseFdoPwrLock(a1, v6);
    }
  }
  else
  {
    KeReleaseSpinLock(&HubG, v12);
  }
  UsbhUnlatchPdo(a1, a3, 0LL, 0x73737057u);
}
