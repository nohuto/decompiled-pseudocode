/*
 * XREFs of RaidAdapterDiagnosticIoctl @ 0x14018470C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 *     RaidFreeSrb @ 0x140042768 (RaidFreeSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14004A41C (RaidXrbSetCompletionRoutine.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidDiagnosticIoctlStatusToNtStatus @ 0x14006C660 (RaidDiagnosticIoctlStatusToNtStatus.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     RaBuildDiagnosticBufferForMiniport @ 0x140090C3C (RaBuildDiagnosticBufferForMiniport.c)
 *     RaidCallerIsAdmin @ 0x1400931F8 (RaidCallerIsAdmin.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidAdapterDiagnosticIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ebx
  int v6; // edi
  unsigned int *Srb; // rsi
  void *v8; // r15
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  __int64 ContiguousIoResources; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  int *v29; // rax
  const EVENT_DESCRIPTOR *v30; // rdx
  __int64 v31; // rdx
  _BYTE *v32; // r9
  unsigned __int8 v33; // r15
  char v34; // r10
  char v35; // si
  char v36; // r11
  char v37; // r12
  char *v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  __int64 v41; // r8
  int v42; // ecx
  char v43; // r13
  char v44; // cl
  char v45; // al
  char v46; // r8
  char *v47; // r11
  unsigned int v48; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-49h]
  char v51; // [rsp+60h] [rbp-9h]
  char v52; // [rsp+61h] [rbp-8h]
  int Size[3]; // [rsp+64h] [rbp-5h] BYREF
  __int64 v54; // [rsp+70h] [rbp+7h] BYREF
  GUID v55; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  LODWORD(v54) = 0;
  v6 = 0;
  Srb = 0LL;
  v8 = 0LL;
  Size[0] = *(_DWORD *)(v2 + 8);
  if ( !RaidCallerIsAdmin() || *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v6 = -1073741790;
    goto LABEL_62;
  }
  v9 = *(_QWORD *)(a2 + 24);
  if ( !v9
    || *(_DWORD *)(v2 + 16) < 0x14u
    || Size[0] < 0x24u
    || *(_DWORD *)v9 != 20
    || *(_DWORD *)(v9 + 4) != 20
    || (v10 = *(_DWORD *)(v9 + 12)) == 0
    || v10 >= 4
    || *(int *)(v9 + 16) >= 1 )
  {
    v6 = -1073741811;
    goto LABEL_69;
  }
  if ( v10 == 1 )
  {
    memset_0(*(void **)(a2 + 24), 0, (unsigned int)Size[0]);
    *(_DWORD *)v9 = 36;
    *(GUID *)(v9 + 8) = GUID_DIAGNOSTIC_PROVIDER_STORPORT;
    if ( Size[0] >= 0x1200038u )
    {
      *(_DWORD *)(v9 + 32) = 18874392;
      *(_DWORD *)(v9 + 36) = 2;
      *(_DWORD *)(v9 + 40) = *(_DWORD *)(a1 + 4996);
      *(_DWORD *)(v9 + 44) = *(_DWORD *)(a1 + 4992);
      memmove((void *)(v9 + 48), *(const void **)(a1 + 5000), 48LL * *(unsigned int *)(a1 + 4996));
      *(_DWORD *)(v9 + 18874416) = *(_DWORD *)(a1 + 5720);
      *(_DWORD *)(v9 + 18874420) = *(_DWORD *)(a1 + 5724);
      *(_DWORD *)(v9 + 24) = 18874392;
      *(_DWORD *)(v9 + 4) = 18874424;
      *(_QWORD *)(a2 + 56) = 18874424LL;
    }
    else
    {
      *(_DWORD *)(v9 + 24) = 18874392;
      v6 = -2147483643;
      *(_DWORD *)(v9 + 4) = 36;
      *(_QWORD *)(a2 + 56) = 36LL;
    }
    goto LABEL_69;
  }
  if ( (unsigned int)(v10 - 2) > 1 )
  {
    v6 = -1073741637;
    goto LABEL_69;
  }
  v6 = RaBuildDiagnosticBufferForMiniport(*(_QWORD *)(a1 + 8), a2, Size[0], &Size[1], &v54);
  if ( v6 >= 0 )
  {
    Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2, *(_BYTE *)(a1 + 482), 0);
    if ( Srb )
    {
      v12 = (_DWORD *)(a1 + 316);
      if ( *(_DWORD *)a1 != 1314275652 )
        v12 = (_DWORD *)(a1 + 524);
      ContiguousIoResources = StorAllocateContiguousIoResources(((*v12 + 7) & 0xFFFFFFF8) + 1200, v11, (_QWORD *)a1);
      *(_QWORD *)&v55.Data1 = ContiguousIoResources;
      v15 = ContiguousIoResources;
      if ( ContiguousIoResources )
      {
        v16 = ContiguousIoResources + 48;
        RaidZeroXrb(ContiguousIoResources + 48, v14, 0, 0LL);
        v17 = *(_QWORD *)&Size[1];
        *(_QWORD *)(v16 + 184) = *(_QWORD *)&Size[1];
        *(_QWORD *)(v16 + 176) = a2;
        *(_QWORD *)(v16 + 168) = Srb;
        v18 = *(_BYTE *)(a1 + 482) == 1;
        *(_QWORD *)&Size[1] = v17;
        if ( v18 )
        {
          *((_QWORD *)Srb + 8) = v17;
          Srb[15] = v54;
          *((_QWORD *)Srb + 12) = v16;
          *((_QWORD *)Srb + 10) = a2;
          Srb[5] = 2;
          Srb[6] = 256;
          Srb[10] = *(_DWORD *)(a1 + 4188);
          v19 = Srb[13];
          *(_WORD *)((char *)Srb + v19 + 8) = 0;
          *((_BYTE *)Srb + v19 + 10) = 0;
        }
        else
        {
          *((_QWORD *)Srb + 3) = v17;
          Srb[4] = v54;
          *((_QWORD *)Srb + 6) = v16;
          *((_BYTE *)Srb + 2) = 2;
          *(_WORD *)Srb = 88;
          Srb[3] = 256;
          Srb[5] = *(_DWORD *)(a1 + 4188);
          *(_WORD *)((char *)Srb + 5) = 0;
          *((_BYTE *)Srb + 7) = 0;
        }
        RaSrbSetMiniportContext((int *)a1, (__int64)Srb, v15 + 1200);
        KeInitializeEvent((PRKEVENT)(v16 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v16, (__int64)RaidXrbSignalCompletion);
        if ( *(_DWORD *)(v9 + 12) == 2 )
          *(_BYTE *)(v16 + 17) |= 8u;
        if ( *(_DWORD *)(v9 + 12) == 3 && *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x47u,
            (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
            v16,
            Srb);
        }
        if ( *(_BYTE *)(a1 + 4434) )
          v20 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v16);
        else
          v20 = RaidAdapterPostScatterGatherExecute(a1, v16);
        v6 = v20;
        if ( v20 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v16 + 664), Executive, 0, 0, 0LL);
          v6 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
        }
        if ( *(_DWORD *)(v9 + 12) == 3 )
        {
          if ( (*(_BYTE *)(v16 + 17) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v16 + 748));
            *(_BYTE *)(v16 + 17) &= ~1u;
          }
          if ( *(_QWORD *)(a1 + 5024) )
            RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        }
        if ( v6 < 0 )
        {
          v26 = 0LL;
        }
        else
        {
          v54 = *(_QWORD *)&Size[1] + (unsigned int)**(_DWORD **)&Size[1];
          memset_0((void *)v9, 0, (unsigned int)Size[0]);
          v21 = *(_DWORD *)(*(_QWORD *)&Size[1] + 20LL);
          if ( v21 == 6 )
          {
            v22 = v54;
            v6 = -2147483643;
            *(_DWORD *)v9 = 36;
            *(_DWORD *)(v9 + 24) = *(_DWORD *)(v22 + 32);
            v23 = *(_OWORD *)(v22 + 16);
            *(_DWORD *)(v9 + 4) = 36;
            *(_OWORD *)(v9 + 8) = v23;
            *(_QWORD *)(a2 + 56) = 36LL;
LABEL_60:
            RaidXrbDeallocateResources(v16, 0);
            StorFreeContiguousIoResources(a1, *(__int64 *)&v55.Data1);
            goto LABEL_21;
          }
          if ( v21 )
          {
            v6 = RaidDiagnosticIoctlStatusToNtStatus(v21);
            *(_QWORD *)(a2 + 56) = 0LL;
            goto LABEL_60;
          }
          v24 = v54;
          *(_DWORD *)v9 = 36;
          v25 = *(_DWORD *)(v24 + 32);
          if ( v25 >= Size[0] - 32 )
            v25 = Size[0] - 32;
          *(_DWORD *)(v9 + 4) = v25 + 32;
          *(_DWORD *)(v9 + 24) = v25;
          *(_OWORD *)(v9 + 8) = *(_OWORD *)(v24 + 16);
          memmove((void *)(v9 + 32), (const void *)(v24 + 40), v25);
          v26 = *(unsigned int *)(v9 + 4);
        }
        *(_QWORD *)(a2 + 56) = v26;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          LODWORD(Timeout) = *((unsigned __int8 *)Srb + 3);
          WPP_SF_DD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x48u,
            (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
            v6,
            Timeout);
        }
        goto LABEL_60;
      }
    }
    v6 = -1073741670;
  }
LABEL_21:
  v8 = *(void **)&Size[1];
LABEL_62:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 482) == 1 )
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
LABEL_69:
  v18 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v18 )
    goto LABEL_135;
  v55 = 0LL;
  IoGetActivityIdIrp(a2, &v55);
  v28 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v28 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_135;
    v30 = &EventNonReadWriteRequestComplete;
    goto LABEL_134;
  }
  if ( *(_BYTE *)v28 != 15 )
  {
    if ( *(_BYTE *)v28 != 27 )
      goto LABEL_135;
    if ( *(_BYTE *)(v28 + 1) == 7 && !*(_DWORD *)(v28 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v29 = *(int **)(a2 + 56);
        if ( v29 )
          v3 = *v29;
        LODWORD(Timeout) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v27, v28, &v55, a2, Timeout, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_135;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_135;
    v30 = &EventPnpRequestComplete;
LABEL_134:
    LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v27, v30, &v55, a2, Timeout);
    goto LABEL_135;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_135;
  v31 = *(_QWORD *)(v28 + 8);
  v32 = 0LL;
  v51 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( *(_BYTE *)(v31 + 2) != 40 )
  {
    v44 = *(_BYTE *)(v31 + 72);
    v32 = *(_BYTE **)(v31 + 32);
    v33 = *(_BYTE *)(v31 + 11);
    v43 = *(_BYTE *)(v31 + 4);
    if ( *(_BYTE *)(v31 + 2) )
      goto LABEL_135;
LABEL_109:
    LOBYTE(v27) = v44 - 8;
    if ( (v27 & 0x5D) != 0 )
      goto LABEL_135;
    if ( *(_BYTE *)(v31 + 3) == 1 || !v32 || !v33 )
      goto LABEL_128;
    v45 = *v32 & 0x7F;
    if ( v45 == 114 || v45 == 115 )
    {
      v27 = (unsigned __int64)&v32[v33];
      v46 = 0;
      if ( (unsigned __int64)(v32 + 8) > v27 )
        goto LABEL_126;
      v35 = v32[2];
      v34 = v32[1] & 0xF;
      v36 = v32[3];
    }
    else
    {
      v27 = (unsigned __int64)&v32[v33];
      v46 = 0;
      if ( (unsigned __int64)(v32 + 8) > v27 )
        goto LABEL_126;
      v47 = v32 + 13;
      v34 = v32[2] & 0xF;
      v48 = v33;
      if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
        v48 = (unsigned __int8)v32[7] + 8;
      v27 = (unsigned __int64)&v32[v48];
      if ( (unsigned __int64)v47 <= v27 )
        v35 = v32[12];
      if ( (unsigned __int64)(v32 + 14) > v27 )
        v36 = 0;
      else
        v36 = *v47;
    }
    v46 = 1;
LABEL_126:
    if ( v46 )
      v37 = 1;
LABEL_128:
    if ( byte_140173441 < 0 )
    {
      if ( !v37 )
      {
        v36 = 0;
        v35 = 0;
        v34 = 0;
      }
      LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v27, v31, &v55, a2, Timeout, *(_BYTE *)(v31 + 3), v43, v34, v35, v36, a2);
    }
    goto LABEL_135;
  }
  v38 = 0LL;
  v52 = 0;
  if ( !*(_DWORD *)(v31 + 20) )
  {
    v39 = 0LL;
    Size[0] = 0;
    LODWORD(v54) = *(_DWORD *)(v31 + 56);
    if ( (_DWORD)v54 )
    {
      do
      {
        v27 = *(unsigned int *)(v31 + 4 * v39 + 120);
        if ( (unsigned int)v27 >= 0x80 )
        {
          v40 = *(unsigned int *)(v31 + 16);
          if ( (unsigned int)v27 < (unsigned int)v40 )
          {
            v41 = (unsigned int)v27;
            v42 = *(_DWORD *)(v31 + v27) - 64;
            if ( v42 )
            {
              v27 = (unsigned int)(v42 - 1);
              if ( (_DWORD)v27 )
              {
                if ( (_DWORD)v27 == 1 )
                {
                  v27 = v41 + 40;
                  if ( v41 + 40 <= v40 )
                  {
                    if ( *(_DWORD *)(v31 + v41 + 12) )
                      v38 = (char *)(v41 + v31 + 32);
                    v32 = *(_BYTE **)(v31 + v41 + 24);
LABEL_94:
                    v43 = *(_BYTE *)(v31 + v41 + 8);
                    v33 = *(_BYTE *)(v31 + v41 + 9);
                    goto LABEL_103;
                  }
                }
              }
              else
              {
                v27 = v41 + 56;
                if ( v41 + 56 <= v40 )
                {
                  v52 = 1;
                  if ( *(_BYTE *)(v31 + v41 + 10) )
                    v38 = (char *)(v41 + v31 + 24);
                  v32 = *(_BYTE **)(v31 + v41 + 16);
                  v33 = *(_BYTE *)(v31 + v41 + 9);
                  v51 = *(_BYTE *)(v31 + v41 + 8);
                }
              }
            }
            else
            {
              v27 = v41 + 40;
              if ( v41 + 40 <= v40 )
              {
                if ( *(_BYTE *)(v31 + v41 + 10) )
                  v38 = (char *)(v41 + v31 + 24);
                v32 = *(_BYTE **)(v31 + v41 + 16);
                goto LABEL_94;
              }
            }
            if ( v52 )
              break;
          }
        }
        v39 = (unsigned int)(Size[0] + 1);
        Size[0] = v39;
      }
      while ( (unsigned int)v39 < (unsigned int)v54 );
      v43 = v51;
LABEL_103:
      if ( v38 )
      {
        v44 = *v38;
        v37 = 0;
        goto LABEL_109;
      }
    }
  }
LABEL_135:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
