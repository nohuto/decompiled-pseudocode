/*
 * XREFs of UsbhFdoReturnPortStatus @ 0x140017DD0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x14004F3E4 (USBHUB_TriggerCallBacks.c)
 */

__int64 __fastcall UsbhFdoReturnPortStatus(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int *SecurityContext; // r14
  _DWORD *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rbx
  KIRQL v17; // al
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
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
  _DWORD *v39; // rax
  int v40; // eax
  KIRQL v41; // dl
  int v42; // eax
  unsigned __int16 v43; // cx
  int v44; // edi
  __int64 v45; // r8
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rsi
  _QWORD *v52; // rbx
  KIRQL v53; // r15
  _QWORD *v54; // rcx
  _QWORD *v55; // rdx
  _QWORD *v56; // r8
  _DWORD *v58; // r12
  _QWORD *v59; // rbx
  KIRQL v60; // r14
  _QWORD *v61; // rcx
  _QWORD *v62; // rax
  _DWORD *v63; // rsi
  _QWORD *v64; // rbx
  KIRQL v65; // r14
  _QWORD *v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  _QWORD *v71; // rdx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // [rsp+78h] [rbp+10h] BYREF
  int v76; // [rsp+80h] [rbp+18h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v76 = 0;
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a2 + 64);
  if ( !v7 )
    goto LABEL_86;
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, v7);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v75 = 1045647431;
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = v75;
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
    v63 = PdoExt(a2);
    v64 = v63 + 306;
    v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v63 + 152);
    v66 = (_QWORD *)*((_QWORD *)v63 + 153);
    if ( v66 == (_QWORD *)(v63 + 306) || !v66 )
    {
LABEL_88:
      v72 = v63[316];
      if ( !v72 )
        goto LABEL_96;
      v63[316] = v72 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( v66 == v64 )
          goto LABEL_88;
        v67 = (_QWORD *)*v66;
        if ( (IRP *)v66[2] == a3 )
          break;
        v66 = (_QWORD *)*v66;
      }
      if ( (_QWORD *)v67[1] != v66 )
        goto LABEL_93;
      v71 = (_QWORD *)v66[1];
      if ( (_QWORD *)*v71 != v66 )
        goto LABEL_93;
      *v71 = v67;
      v67[1] = v71;
      ExFreePoolWithTag(v66 - 1, 0);
    }
    if ( (_QWORD *)*v64 != v64 || v63[316] )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v63 + 152, v65);
      return 3221225485LL;
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v63 + 152, v65);
      KeSetEvent((PRKEVENT)(v63 + 310), 0, 0);
      return 3221225485LL;
    }
  }
  SecurityContext = (unsigned int *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1196446497, (__int64)a3, 0LL);
    return 3221225485LL;
  }
  *SecurityContext = 0;
  v14 = *(_DWORD **)(a2 + 64);
  if ( !v14 )
LABEL_86:
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v14 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v15 = (__int64)(v14 + 236);
  v16 = FdoExt(a1, v10, v11, v12);
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 5056));
  v18 = *(_DWORD *)(v16 + 4172);
  *(_BYTE *)(v16 + 5064) = v17;
  *(_DWORD *)(v15 + 40) = v18;
  *(_DWORD *)(v15 + 44) = 11;
  *(_DWORD *)(v15 + 32) = 844055622;
  *(_DWORD *)(v15 + 36) = 1953516355;
  *(_QWORD *)(v15 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v16 + 1344) = v15;
  FdoExt(*(_QWORD *)(v15 + 8), v19, v20, v21);
  if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v15 + 8), v22, v23, v24) + 4172) == 213
    || (FdoExt(*(_QWORD *)(v15 + 8), v25, v26, v27),
        *(_DWORD *)(FdoExt(*(_QWORD *)(v15 + 8), v28, v29, v30) + 4172) == 212) )
  {
    UsbhReleaseFdoPwrLock(a1, v15);
    Log(a1, 8, 1196450936, (__int64)a3, 0LL);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return 3221225486LL;
  }
  v34 = FdoExt(a1, v31, v32, v33);
  FdoExt(*(_QWORD *)(v15 + 8), v35, v36, v37);
  *(_DWORD *)(v15 + 32) = 1734964085;
  v38 = *(_BYTE *)(v34 + 5064);
  *(_QWORD *)(v34 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 5056), v38);
  *(_BYTE *)(v15 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(v15 + 136) = 1;
  *(_DWORD *)(v15 + 88) = 2018460752;
  *(_DWORD *)(v15 + 92) = 16;
  qword_140070600 = v15;
  *(_QWORD *)(v15 + 24) = KeGetCurrentThread();
  v39 = *(_DWORD **)(a2 + 64);
  if ( !v39 )
    goto LABEL_86;
  if ( *v39 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v40 = v39[281];
  *(_DWORD *)(v15 + 136) = 0;
  qword_140070600 = 0LL;
  *(_DWORD *)(v15 + 88) = 1734964085;
  v41 = *(_BYTE *)(v15 + 132);
  if ( v40 != 3 )
  {
    KeReleaseSpinLock(&HubG, v41);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    v58 = PdoExt(a2);
    v59 = v58 + 306;
    v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v58 + 152);
    v61 = (_QWORD *)*((_QWORD *)v58 + 153);
    if ( v61 == (_QWORD *)(v58 + 306) || !v61 )
    {
LABEL_91:
      v73 = v58[316];
      if ( !v73 )
        goto LABEL_96;
      v58[316] = v73 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( v61 == v59 )
          goto LABEL_91;
        v62 = (_QWORD *)*v61;
        if ( (IRP *)v61[2] == a3 )
          break;
        v61 = (_QWORD *)*v61;
      }
      if ( (_QWORD *)v62[1] != v61 )
        goto LABEL_93;
      v68 = (_QWORD *)v61[1];
      if ( (_QWORD *)*v68 != v61 )
        goto LABEL_93;
      *v68 = v62;
      v62[1] = v68;
      ExFreePoolWithTag(v61 - 1, 0);
    }
    if ( (_QWORD *)*v59 != v59 || v58[316] )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v58 + 152, v60);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v58 + 152, v60);
      KeSetEvent((PRKEVENT)(v58 + 310), 0, 0);
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v69 = *(_QWORD *)(a1 + 64);
        if ( v69 )
        {
          v75 = 2018725959;
          v70 = *(_QWORD *)(v69 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v69 + 880)) & *(_DWORD *)(v69 + 884));
          *(_DWORD *)v70 = v75;
          *(_QWORD *)(v70 + 8) = 0LL;
          *(_QWORD *)(v70 + 16) = a3;
          *(_QWORD *)(v70 + 24) = 0LL;
        }
      }
    }
    return 3221225486LL;
  }
  KeReleaseSpinLock(&HubG, v41);
  if ( (Usbh_SSH_Event(*(_QWORD *)(v15 + 8), 5LL, v15) & 0xC0000000) == 0xC0000000 )
  {
    *SecurityContext |= 3u;
    v44 = 0;
  }
  else
  {
    v42 = UsbhQueryPortState(a1, *(unsigned __int16 *)(v7 + 1428), &v76, &v75);
    v43 = v76;
    v44 = v42;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v45 = *(_QWORD *)(a1 + 64);
        if ( v45 )
        {
          v75 = 861098055;
          v46 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884))
              + *(_QWORD *)(v45 + 888);
          *(_DWORD *)v46 = v75;
          *(_QWORD *)(v46 + 16) = v43;
          *(_QWORD *)(v46 + 8) = 0LL;
          *(_QWORD *)(v46 + 24) = v42;
        }
      }
    }
    if ( v42 < 0 )
      goto LABEL_30;
    if ( (v43 & 1) != 0 )
      *SecurityContext |= 2u;
    else
      v44 = -1073741810;
    v47 = *SecurityContext;
    if ( (v43 & 2) != 0 )
    {
      v47 |= 1u;
      *SecurityContext = v47;
    }
    if ( *(_DWORD *)(v7 + 2384) == 2 )
      *SecurityContext = v47 & 0xFFFFFFFE;
    if ( (v76 & 0x10000) != 0 )
LABEL_30:
      v44 = -1073741810;
  }
  v48 = *SecurityContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v49 = *(_QWORD *)(a1 + 64);
      if ( v49 )
      {
        v75 = 877875271;
        v50 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884))
            + *(_QWORD *)(v49 + 888);
        *(_DWORD *)v50 = v75;
        *(_QWORD *)(v50 + 24) = v44;
        *(_QWORD *)(v50 + 8) = 0LL;
        *(_QWORD *)(v50 + 16) = v48;
      }
    }
  }
  a3->IoStatus.Status = v44;
  IofCompleteRequest(a3, 0);
  v51 = *(_QWORD *)(a2 + 64);
  if ( !v51 )
    goto LABEL_86;
  if ( *(_DWORD *)v51 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v52 = (_QWORD *)(v51 + 1224);
  v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v51 + 1216));
  v54 = *(_QWORD **)(v51 + 1224);
  if ( v54 != (_QWORD *)(v51 + 1224) && v54 )
  {
    while ( 1 )
    {
      if ( v54 == v52 )
        goto LABEL_94;
      v55 = (_QWORD *)*v54;
      if ( (IRP *)v54[2] == a3 )
        break;
      v54 = (_QWORD *)*v54;
    }
    if ( (_QWORD *)v55[1] == v54 )
    {
      v56 = (_QWORD *)v54[1];
      if ( (_QWORD *)*v56 == v54 )
      {
        *v56 = v55;
        v55[1] = v56;
        ExFreePoolWithTag(v54 - 1, 0);
        goto LABEL_45;
      }
    }
LABEL_93:
    __fastfail(3u);
  }
LABEL_94:
  v74 = *(_DWORD *)(v51 + 1264);
  if ( !v74 )
  {
LABEL_96:
    USBHUB_TriggerCallBacks(a2);
    KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, (ULONG_PTR)a3);
  }
  *(_DWORD *)(v51 + 1264) = v74 - 1;
LABEL_45:
  if ( (_QWORD *)*v52 != v52 || *(_DWORD *)(v51 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v51 + 1216), v53);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v51 + 1216), v53);
    KeSetEvent((PRKEVENT)(v51 + 1240), 0, 0);
  }
  return (unsigned int)v44;
}
