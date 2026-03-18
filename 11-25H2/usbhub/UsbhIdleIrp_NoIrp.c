/*
 * XREFs of UsbhIdleIrp_NoIrp @ 0x14001634C
 * Callers:
 *     UsbhIdleIrp_Event @ 0x140033A44 (UsbhIdleIrp_Event.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x140016858 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhQueueWorkItemWithRetry @ 0x140016AA0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhSetPdoIdleReady @ 0x140017984 (UsbhSetPdoIdleReady.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x140033E40 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhSetIdleIrpState @ 0x14003705C (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIdleIrp_NoIrp(__int64 a1, __int64 a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v7; // r15
  _DWORD *v10; // r14
  unsigned int v11; // ebx
  _DWORD *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ecx
  KSPIN_LOCK *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  KSPIN_LOCK *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9

  v7 = a4;
  v10 = PdoExt(a2);
  v11 = 0;
  v12 = FdoExt(a1);
  if ( _bittest(&UsbhLogMask, 0x10u) )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 1229878131;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 24) = a3;
      }
    }
  }
  if ( _bittest(&UsbhLogMask, 0x10u) )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 844002163;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = 0LL;
        *(_QWORD *)(v16 + 24) = v7;
      }
    }
  }
  if ( (_DWORD)v7 != 1 )
  {
    switch ( (_DWORD)v7 )
    {
      case 3:
        UsbhSetIdleIrpState(0, a2, 3, 0, NewIrql);
        return v11;
      case 5:
        if ( !a3 )
          goto LABEL_40;
        UsbhSetIdleIrpState(0, a2, 5, 0, NewIrql);
        v29 = (unsigned int)v10[360];
        break;
      case 6:
        if ( !a3 )
          goto LABEL_40;
        UsbhSetIdleIrpState(0, a2, 6, 0, NewIrql);
        v29 = 3221225760LL;
        break;
      case 7:
        if ( !a3 )
          goto LABEL_40;
        UsbhSetIdleIrpState(1, a2, 7, 5, NewIrql);
        UsbhSetPdoIdleReady(a1, a2, a3);
        a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        Log(*((_QWORD *)v10 + 148), 16, 1768180020, 0, (__int64)a3);
        goto LABEL_24;
      default:
        UsbhSetIdleIrpState(v7 - 6, a2, v7, a5, NewIrql);
        v29 = 3221225473LL;
        break;
    }
    return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v29);
  }
  UsbhEtwLogDeviceIrpEvent(v10, a3, &USBHUB_ETW_EVENT_DEVICE_IDLE_NOTIFICATION_DISPATCH, 0LL);
  if ( (v10[355] & 2) == 0 && v12[820] != 6 )
  {
    if ( UsbhLatchPdo(a1, *((_WORD *)v10 + 714), (__int64)v10, 0x656C6449u) == a2 )
    {
      v18 = (KSPIN_LOCK *)PdoExt(a2);
      v19 = 4 * (*((unsigned int *)v18 + 447) + 56LL);
      LODWORD(v18[v19]) = 1;
      *((_DWORD *)v18 + 384) = 1;
      LODWORD(v18[v19 + 1]) = 1;
      *((_DWORD *)v18 + 447) = ((unsigned __int8)*((_DWORD *)v18 + 447) + 1) & 7;
      KeReleaseSpinLock(v18 + 256, NewIrql);
      v10[360] = 0;
      a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v20 = *((_QWORD *)v10 + 148);
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 64);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
            *(_DWORD *)v22 = 843670633;
            *(_QWORD *)(v22 + 8) = 0LL;
            *(_QWORD *)(v22 + 16) = 0LL;
            *(_QWORD *)(v22 + 24) = a3;
          }
        }
      }
      IoCsqInsertIrp((PIO_CSQ)(v10 + 366), a3, 0LL);
      UsbhQueueWorkItemWithRetry(a1, (_DWORD)v10 + 1544, (unsigned int)UsbhPdoIdleCC_Worker, 0, a2, 0, 1766871891);
      return 259;
    }
    if ( a3 )
    {
      UsbhSetIdleIrpState(v17, a2, 1, 0, NewIrql);
      Log(a1, 0x10000, 1768180019, a2, (__int64)a3);
      v29 = 3221225486LL;
      return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v29);
    }
LABEL_40:
    UsbhTrapFatal_Dbg(a1, a1);
  }
  v24 = (KSPIN_LOCK *)PdoExt(a2);
  v25 = 4 * (*((unsigned int *)v24 + 447) + 56LL);
  LODWORD(v24[v25]) = 1;
  *((_DWORD *)v24 + 384) = 1;
  LODWORD(v24[v25 + 1]) = 1;
  *((_DWORD *)v24 + 447) = ((unsigned __int8)*((_DWORD *)v24 + 447) + 1) & 7;
  KeReleaseSpinLock(v24 + 256, NewIrql);
  a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v26 = *((_QWORD *)v10 + 148);
    if ( v26 )
    {
      v27 = *(_QWORD *)(v26 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 826893417;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = 0LL;
        *(_QWORD *)(v28 + 24) = a3;
      }
    }
  }
LABEL_24:
  IoCsqInsertIrp((PIO_CSQ)(v10 + 366), a3, 0LL);
  return 259;
}
