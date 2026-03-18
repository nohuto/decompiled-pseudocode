/*
 * XREFs of UsbhIdleIrp_Event @ 0x1400152D4
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x140010A24 (UsbhCompletePdoIdleIrp.c)
 *     UsbhPdoIdleCC_Worker @ 0x1400122D0 (UsbhPdoIdleCC_Worker.c)
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 *     UsbhCompleteCanceledPdoIdleIrp @ 0x140036E50 (UsbhCompleteCanceledPdoIdleIrp.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140041094 (UsbhFdoSubmitPdoIdleNotification.c)
 * Callees:
 *     UsbhIdleIrp_NoIrp @ 0x14000F28C (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x140013D04 (UsbhIdleIrp_ReleaseIrp.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1400347F0 (UsbhIdleIrp_CB_Pending.c)
 *     UsbhSetIdleIrpState @ 0x140035280 (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleExIrp_IdleReady @ 0x14005E288 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x14005E40C (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_WaitWorker @ 0x14005E508 (UsbhIdleIrp_WaitWorker.c)
 */

__int64 __fastcall UsbhIdleIrp_Event(__int64 a1, ULONG_PTR a2, IRP *a3, unsigned int a4, int a5)
{
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rbx
  KIRQL NewIrql; // r12
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  signed __int32 v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // ebx
  unsigned int v35; // ebx
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // [rsp+30h] [rbp-28h]

  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v39 = 1447392115;
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = 1447392115;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = (int)a4;
        *(_QWORD *)(v13 + v12 + 24) = a3;
      }
    }
  }
  v14 = PdoExt(a2);
  v15 = PdoExt(a2);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 2048));
  v17 = *(int *)(v15 + 1536);
  v18 = 32 * (*(unsigned int *)(v15 + 1788) + 56LL);
  *(_DWORD *)(v18 + v15 + 4) = v17;
  *(_DWORD *)(v18 + v15) = 0;
  *(_DWORD *)(v14 + 1440) = a5;
  if ( _bittest(&UsbhLogMask, 0x10u) )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 880), 0xFFFFFFFF);
        v21 = *(_DWORD *)(v19 + 884);
        v22 = *(_QWORD *)(v19 + 888);
        v23 = 32LL * ((v20 - 1) & v21);
        *(_DWORD *)(v23 + v22) = 826635123;
        *(_QWORD *)(v23 + v22 + 8) = 0LL;
        *(_QWORD *)(v23 + v22 + 16) = a2;
        *(_QWORD *)(v23 + v22 + 24) = v17;
      }
    }
  }
  switch ( (_DWORD)v17 )
  {
    case 0:
      return (unsigned int)UsbhIdleIrp_NoIrp(a1, a2, a3, a4, 0, NewIrql);
    case 1:
      return (unsigned int)UsbhIdleIrp_WaitWorker(a1, a2, a3, a4, 1, NewIrql, v39);
    case 2:
      return (unsigned int)UsbhIdleIrp_CB_Pending(a1, a2, a3, a4, 2, NewIrql, v39);
    case 3:
      return (unsigned int)UsbhIdleIrp_CB_Canceled(a1, a2, a3, a4, 3, NewIrql, v39);
    case 4:
      if ( _bittest(&UsbhLogMask, 0x10u) )
      {
        if ( a1 )
        {
          v24 = *(_QWORD *)(a1 + 64);
          if ( v24 )
          {
            v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 880), 0xFFFFFFFF);
            v26 = *(_DWORD *)(v24 + 884);
            v27 = *(_QWORD *)(v24 + 888);
            v28 = 32LL * ((v25 - 1) & v26);
            *(_DWORD *)(v28 + v27) = 1666675571;
            *(_QWORD *)(v28 + v27 + 8) = 0LL;
            *(_QWORD *)(v28 + v27 + 16) = a2;
            *(_QWORD *)(v28 + v27 + 24) = a3;
          }
        }
      }
      v30 = PdoExt(a2);
      switch ( a4 )
      {
        case 1u:
          if ( a3 )
          {
            UsbhSetIdleIrpState(v29, a2, 1, 4, NewIrql);
            v33 = -2147483631;
            return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v33);
          }
          break;
        case 5u:
          if ( a3 )
          {
            UsbhSetIdleIrpState(v29, a2, 5, 0, NewIrql);
            v33 = *(_DWORD *)(v30 + 1440);
            return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v33);
          }
          break;
        case 6u:
          if ( a3 )
          {
            v37 = PdoExt(a2);
            v38 = 32 * (*(unsigned int *)(v37 + 1788) + 56LL);
            *(_DWORD *)(v38 + v37) = 6;
            *(_DWORD *)(v37 + 1536) = 0;
            *(_DWORD *)(v38 + v37 + 8) = 0;
            *(_DWORD *)(v37 + 1788) = ((unsigned __int8)*(_DWORD *)(v37 + 1788) + 1) & 7;
            KeReleaseSpinLock((PKSPIN_LOCK)(v37 + 2048), NewIrql);
            v33 = -1073741536;
            return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v33);
          }
          break;
        default:
          v31 = PdoExt(a2);
          v32 = 32 * (*(unsigned int *)(v31 + 1788) + 56LL);
          *(_DWORD *)(v32 + v31) = a4;
          *(_DWORD *)(v31 + 1536) = 4;
          *(_DWORD *)(v32 + v31 + 8) = 4;
          *(_DWORD *)(v31 + 1788) = ((unsigned __int8)*(_DWORD *)(v31 + 1788) + 1) & 7;
          KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 2048), NewIrql);
          v33 = -1073741823;
          return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v33);
      }
      UsbhTrapFatal_Dbg(a1, a1);
  }
  if ( (_DWORD)v17 != 5 )
  {
    v35 = -1073741823;
    UsbhSetIdleIrpState(v17 - 4, a2, a4, v17, NewIrql);
    return v35;
  }
  return (unsigned int)UsbhIdleExIrp_IdleReady(a1, a2, a3, a4, 5, NewIrql, v39);
}
