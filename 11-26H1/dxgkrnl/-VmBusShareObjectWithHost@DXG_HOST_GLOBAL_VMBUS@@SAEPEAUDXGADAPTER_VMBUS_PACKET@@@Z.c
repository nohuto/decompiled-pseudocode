/*
 * XREFs of ?VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402334B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkShareObjectsInternal @ 0x1403136A0 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x140314280 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1403CBD1C (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusShareObjectWithHost(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  struct _KTHREAD **v5; // r13
  int v6; // ebx
  __int64 *v7; // r14
  unsigned int v8; // edx
  int v9; // r9d
  int EntryType; // eax
  unsigned int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edx
  unsigned int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rdx
  struct DXGVAILOBJECT *v20; // rax
  DxgkCompositionObject *v21; // r14
  __int64 v22; // r8
  __int64 v23; // rbx
  struct VMBPACKETCOMPLETION__ *v24; // rcx
  __int64 Src; // [rsp+28h] [rbp-69h]
  __int64 Srca; // [rsp+28h] [rbp-69h]
  __int64 Srcb; // [rsp+28h] [rbp-69h]
  __int64 v29; // [rsp+30h] [rbp-61h]
  _BYTE v30[24]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v31; // [rsp+70h] [rbp-21h] BYREF
  __int64 v32[4]; // [rsp+78h] [rbp-19h] BYREF
  __int128 v33; // [rsp+98h] [rbp+7h]
  __int128 v34; // [rsp+A8h] [rbp+17h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *((_QWORD *)a1 + 11);
    v5 = (struct _KTHREAD **)*((_QWORD *)a1 + 13);
    v34 = 0LL;
    if ( !v4 )
    {
      v6 = -1073741811;
LABEL_40:
      v24 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      LODWORD(v34) = v6;
      VmBusCompletePacket(v24, &v34, 0x10u);
      LOBYTE(v2) = 1;
      return v2;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, (struct _KTHREAD **)v4);
    v7 = (__int64 *)(v4 + 280);
    v8 = (*(_DWORD *)(v3 + 28) >> 6) & 0xFFFFFF;
    if ( v8 < *(_DWORD *)(v4 + 296)
      && (v9 = *(_DWORD *)(*v7 + 16LL * v8 + 8),
          ((*(_DWORD *)(v3 + 28) >> 25) & 0x60) == (*(_BYTE *)(*v7 + 16LL * v8 + 8) & 0x60))
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0 )
    {
      EntryType = HMGRTABLE::GetEntryType(v4 + 280);
      if ( EntryType == 11 )
      {
        v15 = *(_DWORD *)(v3 + 28);
        v16 = (v15 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v16 < *(_DWORD *)(v4 + 296) )
        {
          v17 = *v7;
          v18 = *(_DWORD *)(*v7 + 16 * v16 + 8);
          if ( ((v15 >> 25) & 0x60) == (*(_BYTE *)(*v7 + 16 * v16 + 8) & 0x60)
            && (v18 & 0x2000) == 0
            && (v18 & 0x1F) != 0 )
          {
            if ( (*(_BYTE *)(v17 + 16 * (((unsigned __int64)v15 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
            {
              v19 = *(_QWORD *)(v17 + 16 * (((unsigned __int64)v15 >> 6) & 0xFFFFFF));
              if ( v19 && (*(_DWORD *)(v19 + 72) & 2) != 0 )
              {
                *(_DWORD *)(*(_QWORD *)(v19 + 32) + 428LL) |= 0x20u;
LABEL_10:
                v11 = *(_DWORD *)(v3 + 24);
                v12 = (v11 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v12 < *(_DWORD *)(v4 + 296) )
                {
                  v13 = *(_QWORD *)(v4 + 280);
                  v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
                  if ( ((v11 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
                    && (v14 & 0x2000) == 0
                    && (v14 & 0x1F) != 0 )
                  {
                    if ( (*(_BYTE *)(v13 + 16 * (((unsigned __int64)v11 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 3 )
                    {
                      if ( *(_QWORD *)(v13 + 16 * (((unsigned __int64)v11 >> 6) & 0xFFFFFF)) )
                      {
                        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
                        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v30, v5 + 8);
                        v20 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v5);
                        v21 = v20;
                        if ( v20 )
                        {
                          v22 = *((_QWORD *)v20 + 12);
                          if ( v22 )
                          {
                            v31 = 0LL;
                            v32[0] = 48LL;
                            memset(&v32[1], 0, 24);
                            v33 = 0LL;
                            v6 = DxgkShareObjectsInternal(
                                   0,
                                   0,
                                   v22,
                                   1,
                                   (void *)(v3 + 28),
                                   (__int64)v32,
                                   0x10000000u,
                                   (__int64)&v31,
                                   0LL);
                            if ( v6 >= 0 )
                            {
                              *((_QWORD *)&v34 + 1) = v31;
                            }
                            else
                            {
                              WdLogSingleEntry1(2LL);
                              Srcb = *(unsigned int *)(v3 + 28);
                              WdLogGlobalForLineNumber = 8596;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000,
                                -1,
                                (__int64)L"Fail to create NT shared sync object, handle: 0x%I64x",
                                Srcb,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                            }
                          }
                          else
                          {
                            WdLogSingleEntry0(2LL);
                            WdLogGlobalForLineNumber = 8583;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"Vail process is not registered",
                              8583LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                            v6 = -1073741823;
                          }
                          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
                          DxgkCompositionObject::Release(v21);
                          goto LABEL_40;
                        }
                        WdLogSingleEntry0(2LL);
                        WdLogGlobalForLineNumber = 8576;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"Failed to reference vail object",
                          8576LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v6 = -1073741823;
                        goto LABEL_39;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry0(2LL);
                      WdLogGlobalForLineNumber = 318;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Handle type mismatch",
                        318LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                }
                WdLogSingleEntry1(2LL);
                Src = *(unsigned int *)(v3 + 24);
                WdLogGlobalForLineNumber = 8565;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Invalid device handle: 0x%I64x",
                  Src,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
LABEL_38:
                v6 = -1073741811;
LABEL_39:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
                goto LABEL_40;
              }
            }
            else
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
        }
        WdLogSingleEntry1(2LL);
        Srca = *(unsigned int *)(v3 + 28);
        WdLogGlobalForLineNumber = 8555;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid sync object handle: 0x%I64x",
          Srca,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_38;
      }
      if ( EntryType == 4 )
        goto LABEL_10;
    }
    else
    {
      EntryType = 0;
    }
    v23 = EntryType;
    WdLogSingleEntry2(2LL, EntryType, *(unsigned int *)(v3 + 28));
    v29 = *(unsigned int *)(v3 + 28);
    WdLogGlobalForLineNumber = 8543;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid object type: 0x%I64x 0x%I64x",
      v23,
      v29,
      0LL,
      0LL,
      0LL);
    goto LABEL_38;
  }
  return v2;
}
