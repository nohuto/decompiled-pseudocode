/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140067CAC (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1403136A0 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x140314280 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140388D10 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(struct DXGPROCESS **a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // r13
  struct DXGPROCESS *Current; // rax
  char v3; // bl
  struct DXGPROCESS *v4; // r14
  __int64 v5; // rax
  DXGSHAREDVMOBJECT *v6; // rsi
  __int64 v7; // rdi
  DXGSYNCOBJECT *v8; // r13
  unsigned int *v9; // r15
  unsigned int v10; // r8d
  _DWORD *v11; // rdi
  unsigned int v12; // edx
  int v13; // r9d
  int EntryType; // eax
  unsigned int v15; // edx
  int v16; // r14d
  unsigned int v17; // eax
  int v18; // r8d
  DXGSHAREDVMOBJECT *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // r13
  unsigned int v22; // eax
  int v23; // r8d
  unsigned int v24; // eax
  int v25; // r9d
  struct DXGRESOURCE *v26; // rdx
  unsigned int *v27; // r13
  __int64 Src; // [rsp+20h] [rbp-59h]
  __int64 Srca; // [rsp+20h] [rbp-59h]
  __int64 v31; // [rsp+50h] [rbp-29h] BYREF
  char v32[8]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v33[4]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v34; // [rsp+80h] [rbp+7h]
  int v36; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+F0h] [rbp+77h]
  __int64 v38; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
  Current = DXGPROCESS::GetCurrent();
  v3 = 0;
  v36 = 0;
  v4 = Current;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v32, 0LL);
  v5 = operator new(0x20uLL, 0x4B677844u, 256LL);
  v6 = (DXGSHAREDVMOBJECT *)v5;
  if ( v5 )
  {
    *(_DWORD *)v5 = 0;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 24) = 1;
    v37 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)v1);
    v7 = v37;
    if ( !v37 )
      goto LABEL_56;
    v31 = 0LL;
    v8 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v33, v4);
    v9 = (unsigned int *)(v7 + 24);
    v10 = *(_DWORD *)(v7 + 24);
    v11 = (_DWORD *)((char *)v4 + 280);
    v12 = (v10 >> 6) & 0xFFFFFF;
    if ( v12 >= *((_DWORD *)v4 + 74) )
      goto LABEL_50;
    v13 = *(_DWORD *)(*(_QWORD *)v11 + 16LL * v12 + 8);
    if ( ((v10 >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v12 + 8) & 0x60)
      || (v13 & 0x2000) != 0
      || (v13 & 0x1F) == 0 )
    {
      goto LABEL_50;
    }
    EntryType = HMGRTABLE::GetEntryType((char *)v4 + 280);
    v15 = *v9;
    v16 = EntryType;
    if ( EntryType != 4 )
    {
      if ( EntryType != 8 )
      {
        if ( EntryType == 11 )
        {
          v17 = (v15 >> 6) & 0xFFFFFF;
          if ( v17 >= v11[4] )
            goto LABEL_16;
          v18 = *(_DWORD *)(*(_QWORD *)v11 + 16LL * v17 + 8);
          if ( ((v15 >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v17 + 8) & 0x60)
            || (v18 & 0x2000) != 0
            || (v18 & 0x1F) == 0 )
          {
            goto LABEL_16;
          }
          if ( (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v17 + 8) & 0x1F) != (_BYTE)v16 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_16:
            v19 = v6;
LABEL_17:
            v20 = v37;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 7641;
LABEL_29:
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid sync object handle: 0x%I64x",
              *(unsigned int *)(v20 + 24),
              0LL,
              0LL,
              0LL,
              0LL);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
LABEL_30:
            v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
            goto LABEL_52;
          }
          v21 = *(_QWORD *)(*(_QWORD *)v11 + 16LL * v17);
          v19 = v6;
          if ( !v21 || (*(_DWORD *)(v21 + 72) & 2) == 0 )
            goto LABEL_17;
          v8 = *(DXGSYNCOBJECT **)(v21 + 32);
          goto LABEL_33;
        }
LABEL_50:
        WdLogSingleEntry1(2LL);
        Srca = *(unsigned int *)(v37 + 24);
        WdLogGlobalForLineNumber = 7654;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid object handle: 0x%I64x",
          Srca,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
        v19 = v6;
        goto LABEL_30;
      }
      v22 = (v15 >> 6) & 0xFFFFFF;
      if ( v22 < v11[4] )
      {
        v23 = *(_DWORD *)(*(_QWORD *)v11 + 16LL * v22 + 8);
        if ( ((v15 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v22 + 8) & 0x60)
          && (v23 & 0x2000) == 0
          && (v23 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v22 + 8) & 0x1F) == 8 )
          {
            v8 = *(DXGSYNCOBJECT **)(*(_QWORD *)v11 + 16LL * v22);
            v19 = v6;
            if ( v8 && (*((_DWORD *)v8 + 106) & 2) != 0 )
            {
LABEL_33:
              DXGSYNCOBJECT::AddReference(v8);
              goto LABEL_43;
            }
LABEL_28:
            v20 = v37;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 7629;
            goto LABEL_29;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v19 = v6;
      goto LABEL_28;
    }
    v24 = (v15 >> 6) & 0xFFFFFF;
    if ( v24 < v11[4] )
    {
      v25 = *(_DWORD *)(*(_QWORD *)v11 + 16LL * v24 + 8);
      if ( ((v15 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v24 + 8) & 0x60)
        && (v25 & 0x2000) == 0
        && (v25 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v24 + 8) & 0x1F) == 4 )
        {
          v26 = *(struct DXGRESOURCE **)(*(_QWORD *)v11 + 16LL * v24);
          goto LABEL_42;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v26 = 0LL;
LABEL_42:
    v19 = v6;
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v38, v26);
    DXGRESOURCEREFERENCE::MoveAssign(v32, &v38);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v38);
LABEL_43:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    if ( v16 == 4 )
    {
      v33[0] = 48LL;
      v27 = (unsigned int *)(v37 + 24);
      v33[3] = 512LL;
      v33[1] = 0LL;
      v33[2] = 0LL;
      v34 = 0LL;
      v38 = 0LL;
      if ( (int)DxgkShareObjectsInternal(
                  0,
                  0,
                  0,
                  1,
                  (void *)(v37 + 24),
                  (__int64)v33,
                  0x10000000u,
                  (__int64)&v31,
                  (__int64)&v38) < 0 )
      {
        WdLogSingleEntry1(2LL);
        Src = *v27;
        WdLogGlobalForLineNumber = 7668;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Fail to create Nt Shareed object, handle: 0x%I64x",
          Src,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_30;
      }
      v8 = (DXGSYNCOBJECT *)v38;
    }
    *((_QWORD *)v19 + 1) = v8;
    v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
    *(_DWORD *)v19 = v16;
    *((_QWORD *)v19 + 2) = v31;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v33, a1[12]);
    v36 = HMGRTABLE::AllocHandle((char *)a1[12] + 280, v19, 13LL);
    if ( !v36 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7694;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate NT shared object handle",
        7694LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    goto LABEL_52;
  }
  v19 = 0LL;
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 7606;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
    7606LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_52:
  if ( !v36 && v19 )
    DXGSHAREDVMOBJECT::ReleaseReference(v19);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), &v36, 4u);
  v3 = 1;
LABEL_56:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v32);
  return v3;
}
