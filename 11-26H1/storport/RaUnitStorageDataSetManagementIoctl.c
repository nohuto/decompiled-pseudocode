/*
 * XREFs of RaUnitStorageDataSetManagementIoctl @ 0x1401B407C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x14003F330 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaidFreeSrb @ 0x140042768 (RaidFreeSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14004A41C (RaidXrbSetCompletionRoutine.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x140051290 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitStorageDataSetManagementIoctl(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  int v3; // ebx
  _DWORD *v5; // rcx
  unsigned int *Srb; // rsi
  _BYTE **v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  _DWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 ContiguousIoResources; // rax
  __int64 v21; // rdx
  __int64 v22; // r12
  PVOID v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  bool v30; // zf
  unsigned __int64 v31; // rcx
  _BYTE *v32; // rdx
  __int64 v34; // rax
  const EVENT_DESCRIPTOR *v35; // rdx
  int *v36; // rax
  char v37; // al
  __int64 v38; // rdx
  char *v39; // r11
  char v40; // r10
  unsigned int v41; // eax
  char v42; // si
  char v43; // r11
  char v44; // r12
  _BYTE *v45; // r9
  unsigned __int8 v46; // r15
  char *v47; // r12
  __int64 v48; // rax
  unsigned __int64 v49; // r13
  __int64 v50; // r8
  int v51; // ecx
  char v52; // r13
  char v53; // cl
  char v54; // r8
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-59h]
  char v56; // [rsp+60h] [rbp-19h]
  char v57; // [rsp+61h] [rbp-18h]
  int v58; // [rsp+64h] [rbp-15h]
  int v59; // [rsp+64h] [rbp-15h]
  unsigned int v60; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID P; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v62; // [rsp+78h] [rbp-1h]
  GUID v63; // [rsp+80h] [rbp+7h] BYREF

  v2 = *(_QWORD **)(a1 + 24);
  v3 = 0;
  P = 0LL;
  v5 = *(_DWORD **)(a2 + 24);
  v60 = 0;
  Srb = 0LL;
  v62 = v2;
  if ( !v5
    || (v8 = (_BYTE **)(a2 + 184), v9 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 16LL), (unsigned int)v9 < 0x1C)
    || (v10 = (unsigned int)v5[6], v9 < v10 + (unsigned __int64)(unsigned int)v5[5])
    || (v11 = (unsigned int)v5[4], v9 < v11 + (unsigned __int64)(unsigned int)v5[3])
    || v9 < v11 + v10 + 28 )
  {
    v14 = -1073741811;
    v8 = (_BYTE **)(a2 + 184);
    goto LABEL_37;
  }
  v12 = v5[1];
  if ( v12 != -2147483646 )
  {
    if ( v12 == 1 || v12 == -2147483636 )
    {
      if ( ExtendedDSMCommandsSupported )
      {
LABEL_11:
        v58 = 60;
        v13 = RaUnitBuildDsmGeneralBufferForMiniport(a1, a2, (__int64 *)&P, &v60);
        goto LABEL_12;
      }
    }
    else if ( v12 == -2147483634 || v12 == -2147483633 )
    {
      goto LABEL_11;
    }
    v14 = -1073741637;
    goto LABEL_37;
  }
  v58 = 1;
  v13 = RaUnitBuildDsmNotifyBufferForMiniport(a1, a2, (__int64 *)&P, &v60);
LABEL_12:
  v14 = v13;
  if ( v13 >= 0 )
  {
    *((_DWORD *)P + 3) = v58;
    v15 = *(_DWORD **)(a1 + 24);
    if ( *v15 == 1094997074 )
    {
      v16 = (__int64)v15 + 482;
    }
    else
    {
      v16 = (__int64)v15 + 274;
      if ( *v15 != 1314275652 )
        v16 = 106LL;
    }
    Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2, *(_BYTE *)v16, 0);
    if ( !Srb )
      goto LABEL_96;
    v18 = 316LL;
    if ( *(_DWORD *)v2 != 1314275652 )
      v18 = 524LL;
    v19 = (__int64)v2;
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)((char *)v2 + v18) + 7) & 0xFFFFFFF8) + 1200,
                              v17,
                              v2);
    *(_QWORD *)&v63.Data1 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v22 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v21, 0, 0LL);
      v23 = P;
      v24 = v19 + 376;
      *(_QWORD *)(v22 + 184) = P;
      *(_QWORD *)(v22 + 176) = a2;
      *(_QWORD *)(v22 + 168) = Srb;
      *(_QWORD *)(v22 + 224) = a1;
      if ( *(_DWORD *)v19 == 1094997074 )
      {
        v25 = v19 + 376;
      }
      else
      {
        v25 = 0LL;
        if ( *(_DWORD *)v19 == 1314275652 )
          v25 = v19 + 168;
      }
      if ( *(_BYTE *)(v25 + 106) == 1 )
      {
        v26 = Srb[13];
        Srb[15] = v60;
        Srb[10] = v58;
        *((_QWORD *)Srb + 12) = v22;
        *((_QWORD *)Srb + 10) = a2;
        *((_QWORD *)Srb + 8) = v23;
        Srb[6] = 256;
        *(_WORD *)((char *)Srb + v26 + 2) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
        *((_BYTE *)Srb + v26 + 8) = *(_BYTE *)(a1 + 104);
        *((_BYTE *)Srb + v26 + 9) = *(_BYTE *)(a1 + 105);
        *((_BYTE *)Srb + v26 + 10) = *(_BYTE *)(a1 + 106);
      }
      else
      {
        Srb[4] = v60;
        Srb[5] = v58;
        *((_QWORD *)Srb + 6) = v22;
        *((_BYTE *)Srb + 2) = 2;
        *((_QWORD *)Srb + 3) = v23;
        *(_WORD *)Srb = 88;
        Srb[3] = 256;
        *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 104);
        *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 105);
        *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 106);
      }
      v27 = *(_DWORD *)v19;
      v28 = *(_QWORD *)&v63.Data1 + 1200LL;
      if ( *((_BYTE *)Srb + 2) == 40 )
      {
        if ( v27 == 1314275652 )
          v24 = v19 + 168;
        if ( ((*(_DWORD *)(v24 + 148) + 7) & 0xFFFFFFF8) != 0 )
          *((_QWORD *)Srb + 13) = v28;
      }
      else
      {
        if ( v27 == 1314275652 )
          v24 = v19 + 168;
        if ( ((*(_DWORD *)(v24 + 148) + 7) & 0xFFFFFFF8) != 0 )
          *((_QWORD *)Srb + 7) = v28;
      }
      KeInitializeEvent((PRKEVENT)(v22 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v22, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x25u,
          (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
          v22,
          Srb);
      }
      if ( *(_BYTE *)(v19 + 4434) )
        v29 = RaidAdapterRaiseIrqlAndExecuteXrb(v19, (_QWORD *)v22);
      else
        v29 = RaidAdapterPostScatterGatherExecute(v19, v22);
      v14 = v29;
      if ( v29 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v22 + 664), Executive, 0, 0, 0LL);
        if ( !ExtendedDSMCommandsSupported || (v14 = *((_DWORD *)P + 5), v14 >= 0) )
          v14 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = *((unsigned __int8 *)Srb + 3);
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x26u,
          (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
          v14,
          Timeout);
      }
      RaidXrbDeallocateResources(v22, 0);
      v2 = v62;
      StorFreeContiguousIoResources((__int64)v62, *(__int64 *)&v63.Data1);
    }
    else
    {
LABEL_96:
      v14 = -1073741670;
    }
  }
LABEL_37:
  if ( P )
    ExFreePoolWithTag(P, 0x72536152u);
  if ( Srb )
  {
    if ( *(_DWORD *)v2 == 1094997074 )
    {
      v34 = (__int64)v2 + 482;
    }
    else
    {
      v34 = (__int64)v2 + 274;
      if ( *(_DWORD *)v2 != 1314275652 )
        v34 = 106LL;
    }
    if ( *(_BYTE *)v34 == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  v30 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v14;
  if ( v30 )
    goto LABEL_44;
  v63 = 0LL;
  IoGetActivityIdIrp(a2, &v63);
  v32 = *v8;
  if ( **v8 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_44;
    v35 = &EventNonReadWriteRequestComplete;
    goto LABEL_64;
  }
  if ( **v8 != 15 )
  {
    if ( **v8 != 27 )
      goto LABEL_44;
    if ( v32[1] == 7 && !*((_DWORD *)v32 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v36 = *(int **)(a2 + 56);
        if ( v36 )
          v3 = *v36;
        LODWORD(Timeout) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v31, (__int64)v32, &v63, a2, Timeout, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_44;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_44;
    v35 = &EventPnpRequestComplete;
LABEL_64:
    LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v31, v35, &v63, a2, Timeout);
    goto LABEL_44;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_44;
  v38 = *((_QWORD *)v32 + 1);
  v45 = 0LL;
  v56 = 0;
  v46 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  if ( *(_BYTE *)(v38 + 2) != 40 )
  {
    v53 = *(_BYTE *)(v38 + 72);
    v45 = *(_BYTE **)(v38 + 32);
    v46 = *(_BYTE *)(v38 + 11);
    v52 = *(_BYTE *)(v38 + 4);
    if ( *(_BYTE *)(v38 + 2) )
      goto LABEL_44;
LABEL_136:
    LOBYTE(v31) = v53 - 8;
    if ( (v31 & 0x5D) != 0 )
      goto LABEL_44;
    v54 = *(_BYTE *)(v38 + 3);
    if ( v54 == 1 || !v45 || !v46 )
      goto LABEL_89;
    v37 = *v45 & 0x7F;
    if ( v37 == 114 || v37 == 115 )
    {
      v31 = (unsigned __int64)&v45[v46];
      LOBYTE(v38) = 0;
      if ( (unsigned __int64)(v45 + 8) > v31 )
      {
LABEL_87:
        if ( (_BYTE)v38 )
          v44 = 1;
LABEL_89:
        if ( byte_140173441 < 0 )
        {
          if ( !v44 )
          {
            v43 = 0;
            v42 = 0;
            v40 = 0;
          }
          LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
          McTemplateK0pduuuuup_EtwWriteTransfer(v31, v38, &v63, a2, Timeout, v54, v52, v40, v42, v43, a2);
        }
        goto LABEL_44;
      }
      v42 = v45[2];
      v40 = v45[1] & 0xF;
      v43 = v45[3];
    }
    else
    {
      v31 = (unsigned __int64)&v45[v46];
      LOBYTE(v38) = 0;
      if ( (unsigned __int64)(v45 + 8) > v31 )
        goto LABEL_87;
      v39 = v45 + 13;
      v40 = v45[2] & 0xF;
      v41 = v46;
      if ( (unsigned int)(unsigned __int8)v45[7] + 8 <= v46 )
        v41 = (unsigned __int8)v45[7] + 8;
      v31 = (unsigned __int64)&v45[v41];
      if ( (unsigned __int64)v39 <= v31 )
        v42 = v45[12];
      if ( (unsigned __int64)(v45 + 14) > v31 )
        v43 = 0;
      else
        v43 = *v39;
    }
    LOBYTE(v38) = 1;
    goto LABEL_87;
  }
  v47 = 0LL;
  v57 = 0;
  if ( *(_DWORD *)(v38 + 20) )
    goto LABEL_44;
  v48 = 0LL;
  v59 = 0;
  v60 = *(_DWORD *)(v38 + 56);
  if ( !v60 )
    goto LABEL_44;
  while ( 1 )
  {
    v31 = *(unsigned int *)(v38 + 4 * v48 + 120);
    if ( (unsigned int)v31 >= 0x80 )
    {
      v49 = *(unsigned int *)(v38 + 16);
      if ( (unsigned int)v31 < (unsigned int)v49 )
        break;
    }
LABEL_126:
    v48 = (unsigned int)(v59 + 1);
    v59 = v48;
    if ( (unsigned int)v48 >= v60 )
    {
LABEL_127:
      v52 = v56;
      goto LABEL_128;
    }
  }
  v50 = (unsigned int)v31;
  v51 = *(_DWORD *)(v38 + v31) - 64;
  if ( v51 )
  {
    v31 = (unsigned int)(v51 - 1);
    if ( (_DWORD)v31 )
    {
      if ( (_DWORD)v31 == 1 )
      {
        v31 = v50 + 40;
        if ( v50 + 40 <= v49 )
        {
          if ( *(_DWORD *)(v38 + v50 + 12) )
            v47 = (char *)(v38 + v50 + 32);
          v45 = *(_BYTE **)(v38 + v50 + 24);
          goto LABEL_134;
        }
      }
    }
    else
    {
      v31 = v50 + 56;
      if ( v50 + 56 <= v49 )
      {
        v57 = 1;
        if ( *(_BYTE *)(v38 + v50 + 10) )
          v47 = (char *)(v38 + v50 + 24);
        v45 = *(_BYTE **)(v38 + v50 + 16);
        v46 = *(_BYTE *)(v38 + v50 + 9);
        v56 = *(_BYTE *)(v38 + v50 + 8);
      }
    }
    goto LABEL_125;
  }
  v31 = v50 + 40;
  if ( v50 + 40 > v49 )
  {
LABEL_125:
    if ( v57 )
      goto LABEL_127;
    goto LABEL_126;
  }
  if ( *(_BYTE *)(v38 + v50 + 10) )
    v47 = (char *)(v38 + v50 + 24);
  v45 = *(_BYTE **)(v38 + v50 + 16);
LABEL_134:
  v52 = *(_BYTE *)(v38 + v50 + 8);
  v46 = *(_BYTE *)(v38 + v50 + 9);
LABEL_128:
  if ( v47 )
  {
    v53 = *v47;
    v44 = 0;
    goto LABEL_136;
  }
LABEL_44:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v14;
}
