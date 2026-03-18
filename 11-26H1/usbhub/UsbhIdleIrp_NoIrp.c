/*
 * XREFs of UsbhIdleIrp_NoIrp @ 0x14000F28C
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14000F910 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhQueueWorkItemWithRetry @ 0x14000FB5C (UsbhQueueWorkItemWithRetry.c)
 *     UsbhSetPdoIdleReady @ 0x1400116C0 (UsbhSetPdoIdleReady.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x140013D04 (UsbhIdleIrp_ReleaseIrp.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSetIdleIrpState @ 0x140035280 (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIdleIrp_NoIrp(__int64 a1, __int64 a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v7; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // r12
  __int64 v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  signed __int32 v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  signed __int32 v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  signed __int32 v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r9

  v7 = a4;
  v10 = PdoExt(a2);
  v14 = 0;
  v15 = FdoExt(a1, v11, v12, v13);
  if ( _bittest(&UsbhLogMask, 0x10u) )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 880), 0xFFFFFFFF);
        v18 = *(_DWORD *)(v16 + 884);
        v19 = *(_QWORD *)(v16 + 888);
        v20 = 32LL * ((v17 - 1) & v18);
        *(_DWORD *)(v20 + v19) = 1229878131;
        *(_QWORD *)(v20 + v19 + 8) = 0LL;
        *(_QWORD *)(v20 + v19 + 16) = a2;
        *(_QWORD *)(v20 + v19 + 24) = a3;
      }
    }
  }
  if ( _bittest(&UsbhLogMask, 0x10u) )
  {
    if ( a1 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 880), 0xFFFFFFFF);
        v23 = *(_DWORD *)(v21 + 884);
        v24 = *(_QWORD *)(v21 + 888);
        v25 = 32LL * ((v22 - 1) & v23);
        *(_DWORD *)(v25 + v24) = 844002163;
        *(_QWORD *)(v25 + v24 + 8) = 0LL;
        *(_QWORD *)(v25 + v24 + 16) = 0LL;
        *(_QWORD *)(v25 + v24 + 24) = v7;
      }
    }
  }
  if ( (_DWORD)v7 != 1 )
  {
    switch ( (_DWORD)v7 )
    {
      case 3:
        UsbhSetIdleIrpState(0, a2, 3, 0, NewIrql);
        return v14;
      case 5:
        if ( !a3 )
          goto LABEL_40;
        UsbhSetIdleIrpState(0, a2, 5, 0, NewIrql);
        v44 = *(unsigned int *)(v10 + 1440);
        break;
      case 6:
        if ( !a3 )
          goto LABEL_40;
        UsbhSetIdleIrpState(0, a2, 6, 0, NewIrql);
        v44 = 3221225760LL;
        break;
      case 7:
        if ( !a3 )
          goto LABEL_40;
        UsbhSetIdleIrpState(1, a2, 7, 5, NewIrql);
        UsbhSetPdoIdleReady(a1, a2, a3);
        a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        Log(*(_QWORD *)(v10 + 1184), 16, 1768180020, 0LL, (__int64)a3);
        goto LABEL_24;
      default:
        UsbhSetIdleIrpState(v7 - 6, a2, v7, a5, NewIrql);
        v44 = 3221225473LL;
        break;
    }
    return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v44);
  }
  UsbhEtwLogDeviceIrpEvent(v10, a3, &USBHUB_ETW_EVENT_DEVICE_IDLE_NOTIFICATION_DISPATCH, 0LL);
  if ( (*(_DWORD *)(v10 + 1420) & 2) == 0 && *(_DWORD *)(v15 + 3280) != 6 )
  {
    if ( UsbhLatchPdo(a1, *(unsigned __int16 *)(v10 + 1428), v10, 1701602377LL) == a2 )
    {
      v27 = PdoExt(a2);
      v28 = 32 * (*(unsigned int *)(v27 + 1788) + 56LL);
      *(_DWORD *)(v28 + v27) = 1;
      *(_DWORD *)(v27 + 1536) = 1;
      *(_DWORD *)(v28 + v27 + 8) = 1;
      *(_DWORD *)(v27 + 1788) = ((unsigned __int8)*(_DWORD *)(v27 + 1788) + 1) & 7;
      KeReleaseSpinLock((PKSPIN_LOCK)(v27 + 2048), NewIrql);
      *(_DWORD *)(v10 + 1440) = 0;
      a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v29 = *(_QWORD *)(v10 + 1184);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 64);
          if ( v30 )
          {
            v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 880), 0xFFFFFFFF);
            v32 = *(_DWORD *)(v30 + 884);
            v33 = *(_QWORD *)(v30 + 888);
            v34 = 32LL * ((v31 - 1) & v32);
            *(_DWORD *)(v34 + v33) = 843670633;
            *(_QWORD *)(v34 + v33 + 8) = 0LL;
            *(_QWORD *)(v34 + v33 + 16) = 0LL;
            *(_QWORD *)(v34 + v33 + 24) = a3;
          }
        }
      }
      IoCsqInsertIrp((PIO_CSQ)(v10 + 1464), a3, 0LL);
      UsbhQueueWorkItemWithRetry(a1, v10 + 1544, (unsigned int)UsbhPdoIdleCC_Worker, 0, a2, 0, 1766871891);
      return 259;
    }
    if ( a3 )
    {
      UsbhSetIdleIrpState(v26, a2, 1, 0, NewIrql);
      Log(a1, 0x10000, 1768180019, a2, (__int64)a3);
      v44 = 3221225486LL;
      return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v44);
    }
LABEL_40:
    UsbhTrapFatal_Dbg(a1, a1);
  }
  v36 = PdoExt(a2);
  v37 = 32 * (*(unsigned int *)(v36 + 1788) + 56LL);
  *(_DWORD *)(v37 + v36) = 1;
  *(_DWORD *)(v36 + 1536) = 1;
  *(_DWORD *)(v37 + v36 + 8) = 1;
  *(_DWORD *)(v36 + 1788) = ((unsigned __int8)*(_DWORD *)(v36 + 1788) + 1) & 7;
  KeReleaseSpinLock((PKSPIN_LOCK)(v36 + 2048), NewIrql);
  a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v38 = *(_QWORD *)(v10 + 1184);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 64);
      if ( v39 )
      {
        v40 = _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 880), 0xFFFFFFFF);
        v41 = *(_DWORD *)(v39 + 884);
        v42 = *(_QWORD *)(v39 + 888);
        v43 = 32LL * ((v40 - 1) & v41);
        *(_DWORD *)(v43 + v42) = 826893417;
        *(_QWORD *)(v43 + v42 + 8) = 0LL;
        *(_QWORD *)(v43 + v42 + 16) = 0LL;
        *(_QWORD *)(v43 + v42 + 24) = a3;
      }
    }
  }
LABEL_24:
  IoCsqInsertIrp((PIO_CSQ)(v10 + 1464), a3, 0LL);
  return 259;
}
