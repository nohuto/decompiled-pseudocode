/*
 * XREFs of UsbhFdoReturnPortStatus @ 0x140009E40
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1400089B0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x14004EEC4 (USBHUB_TriggerCallBacks.c)
 */

__int64 __fastcall UsbhFdoReturnPortStatus(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *SecurityContext; // r14
  _DWORD *v11; // rdi
  __int64 v12; // rdi
  KSPIN_LOCK *v13; // rbx
  KIRQL v14; // al
  int v15; // ecx
  _DWORD *v16; // rbx
  KIRQL v17; // dl
  _DWORD *v18; // rax
  KIRQL v19; // dl
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  char v23; // al
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  _QWORD *v29; // rbx
  KIRQL v30; // r15
  _QWORD *v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // r8
  _DWORD *v35; // r12
  _QWORD *v36; // rbx
  KIRQL v37; // r14
  _QWORD *v38; // rcx
  _QWORD *v39; // rax
  _DWORD *v40; // rsi
  _QWORD *v41; // rbx
  KIRQL v42; // r14
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rdx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // [rsp+80h] [rbp+18h] BYREF
  int v53; // [rsp+88h] [rbp+20h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v52 = 0;
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a2 + 64);
  if ( !v7 )
    goto LABEL_87;
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, v7);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1045647431;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a3;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    v40 = PdoExt(a2);
    v41 = v40 + 306;
    v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v40 + 152);
    v43 = (_QWORD *)*((_QWORD *)v40 + 153);
    if ( v43 == (_QWORD *)(v40 + 306) || !v43 )
    {
LABEL_89:
      v49 = v40[316];
      if ( !v49 )
        goto LABEL_97;
      v40[316] = v49 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( v43 == v41 )
          goto LABEL_89;
        v44 = (_QWORD *)*v43;
        if ( (IRP *)v43[2] == a3 )
          break;
        v43 = (_QWORD *)*v43;
      }
      if ( (_QWORD *)v44[1] != v43 )
        goto LABEL_94;
      v48 = (_QWORD *)v43[1];
      if ( (_QWORD *)*v48 != v43 )
        goto LABEL_94;
      *v48 = v44;
      v44[1] = v48;
      ExFreePoolWithTag(v43 - 1, 0);
    }
    if ( (_QWORD *)*v41 != v41 || v40[316] )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v40 + 152, v42);
      return 3221225485LL;
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v40 + 152, v42);
      KeSetEvent((PRKEVENT)(v40 + 310), 0, 0);
      return 3221225485LL;
    }
  }
  SecurityContext = (unsigned int *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1196446497, (_DWORD)a3, 0LL);
    return 3221225485LL;
  }
  *SecurityContext = 0;
  v11 = *(_DWORD **)(a2 + 64);
  if ( !v11 )
LABEL_87:
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v11 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v12 = (__int64)(v11 + 236);
  v13 = (KSPIN_LOCK *)FdoExt(a1);
  v14 = KeAcquireSpinLockRaiseToDpc(v13 + 632);
  v15 = *((_DWORD *)v13 + 1043);
  *((_BYTE *)v13 + 5064) = v14;
  *(_DWORD *)(v12 + 40) = v15;
  *(_DWORD *)(v12 + 44) = 11;
  *(_DWORD *)(v12 + 32) = 844055622;
  *(_DWORD *)(v12 + 36) = 1953516355;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v13[168] = v12;
  FdoExt(*(_QWORD *)(v12 + 8));
  if ( FdoExt(*(_QWORD *)(v12 + 8))[1043] == 213
    || (FdoExt(*(_QWORD *)(v12 + 8)), FdoExt(*(_QWORD *)(v12 + 8))[1043] == 212) )
  {
    UsbhReleaseFdoPwrLock(a1, v12);
    Log(a1, 8, 1196450936, (_DWORD)a3, 0LL);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return 3221225486LL;
  }
  v16 = FdoExt(a1);
  FdoExt(*(_QWORD *)(v12 + 8));
  *(_DWORD *)(v12 + 32) = 1734964085;
  v17 = *((_BYTE *)v16 + 5064);
  *((_QWORD *)v16 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v16 + 632, v17);
  *(_BYTE *)(v12 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(v12 + 136) = 1;
  *(_DWORD *)(v12 + 88) = 2018460752;
  *(_DWORD *)(v12 + 92) = 16;
  qword_14006F5A0 = v12;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v18 = *(_DWORD **)(a2 + 64);
  if ( !v18 )
    goto LABEL_87;
  if ( *v18 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  if ( v18[281] != 3 )
  {
    *(_DWORD *)(v12 + 136) = 0;
    qword_14006F5A0 = 0LL;
    *(_DWORD *)(v12 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(v12 + 132));
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    v35 = PdoExt(a2);
    v36 = v35 + 306;
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v35 + 152);
    v38 = (_QWORD *)*((_QWORD *)v35 + 153);
    if ( v38 == (_QWORD *)(v35 + 306) || !v38 )
    {
LABEL_92:
      v50 = v35[316];
      if ( !v50 )
        goto LABEL_97;
      v35[316] = v50 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( v38 == v36 )
          goto LABEL_92;
        v39 = (_QWORD *)*v38;
        if ( (IRP *)v38[2] == a3 )
          break;
        v38 = (_QWORD *)*v38;
      }
      if ( (_QWORD *)v39[1] != v38 )
        goto LABEL_94;
      v45 = (_QWORD *)v38[1];
      if ( (_QWORD *)*v45 != v38 )
        goto LABEL_94;
      *v45 = v39;
      v39[1] = v45;
      ExFreePoolWithTag(v38 - 1, 0);
    }
    if ( (_QWORD *)*v36 != v36 || v35[316] )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v35 + 152, v37);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v35 + 152, v37);
      KeSetEvent((PRKEVENT)(v35 + 310), 0, 0);
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v46 = *(_QWORD *)(a1 + 64);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
          *(_DWORD *)v47 = 2018725959;
          *(_QWORD *)(v47 + 8) = 0LL;
          *(_QWORD *)(v47 + 16) = a3;
          *(_QWORD *)(v47 + 24) = 0LL;
        }
      }
    }
    return 3221225486LL;
  }
  *(_DWORD *)(v12 + 136) = 0;
  qword_14006F5A0 = 0LL;
  v19 = *(_BYTE *)(v12 + 132);
  *(_DWORD *)(v12 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, v19);
  if ( (Usbh_SSH_Event(*(struct _DEVICE_OBJECT **)(v12 + 8), 5u, v12) & 0xC0000000) == 0xC0000000 )
  {
    *SecurityContext |= 3u;
    LODWORD(v20) = 0;
  }
  else
  {
    v20 = (int)UsbhQueryPortState(a1, *(_WORD *)(v7 + 1428), (__int64)&v52, &v53);
    if ( (UsbhLogMask & 8) != 0 && a1 && (v21 = *(_QWORD *)(a1 + 64)) != 0 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 861098055;
      v23 = v52;
      *(_QWORD *)(v22 + 16) = (unsigned __int16)v52;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 24) = v20;
    }
    else
    {
      v23 = v52;
    }
    if ( (int)v20 < 0 )
      goto LABEL_30;
    if ( (v23 & 1) != 0 )
      *SecurityContext |= 2u;
    else
      LODWORD(v20) = -1073741810;
    v24 = *SecurityContext;
    if ( (v23 & 2) != 0 )
    {
      v24 |= 1u;
      *SecurityContext = v24;
    }
    if ( *(_DWORD *)(v7 + 2384) == 2 )
      *SecurityContext = v24 & 0xFFFFFFFE;
    if ( (v52 & 0x10000) != 0 )
LABEL_30:
      LODWORD(v20) = -1073741810;
  }
  v25 = *SecurityContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v26 = *(_QWORD *)(a1 + 64);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
        *(_DWORD *)v27 = 877875271;
        *(_QWORD *)(v27 + 24) = (int)v20;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 16) = v25;
      }
    }
  }
  a3->IoStatus.Status = v20;
  IofCompleteRequest(a3, 0);
  v28 = *(_QWORD *)(a2 + 64);
  if ( !v28 )
    goto LABEL_87;
  if ( *(_DWORD *)v28 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v29 = (_QWORD *)(v28 + 1224);
  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 1216));
  v31 = *(_QWORD **)(v28 + 1224);
  if ( v31 != (_QWORD *)(v28 + 1224) && v31 )
  {
    while ( 1 )
    {
      if ( v31 == v29 )
        goto LABEL_95;
      v32 = (_QWORD *)*v31;
      if ( (IRP *)v31[2] == a3 )
        break;
      v31 = (_QWORD *)*v31;
    }
    if ( (_QWORD *)v32[1] == v31 )
    {
      v33 = (_QWORD *)v31[1];
      if ( (_QWORD *)*v33 == v31 )
      {
        *v33 = v32;
        v32[1] = v33;
        ExFreePoolWithTag(v31 - 1, 0);
        goto LABEL_45;
      }
    }
LABEL_94:
    __fastfail(3u);
  }
LABEL_95:
  v51 = *(_DWORD *)(v28 + 1264);
  if ( !v51 )
  {
LABEL_97:
    USBHUB_TriggerCallBacks(a2);
    KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, (ULONG_PTR)a3);
  }
  *(_DWORD *)(v28 + 1264) = v51 - 1;
LABEL_45:
  if ( (_QWORD *)*v29 != v29 || *(_DWORD *)(v28 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v28 + 1216), v30);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v28 + 1216), v30);
    KeSetEvent((PRKEVENT)(v28 + 1240), 0, 0);
  }
  return (unsigned int)v20;
}
