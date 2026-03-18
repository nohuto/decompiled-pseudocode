/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403C3DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140067CAC (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140220E20 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetRedirectedFlipFenceValue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // di
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r9
  unsigned int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rbx
  DXGSYNCOBJECT *v12; // rbx
  unsigned __int64 v13; // rax
  PERESOURCE *Global; // rax
  int v15; // edx
  __int64 v17; // [rsp+20h] [rbp-39h]
  _BYTE v18[8]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v19; // [rsp+58h] [rbp-1h]
  char v20; // [rsp+60h] [rbp+7h]
  _BYTE v21[24]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE v22[32]; // [rsp+80h] [rbp+27h] BYREF
  int v23; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 155) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3778;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Presentation is disabled", 3778LL, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v22, (struct _KTHREAD **)(v1 + 248));
    if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
    {
      v23 = 0;
      v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
      if ( !v4 )
      {
LABEL_19:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
        return v2;
      }
      v5 = *((_QWORD *)a1 + 10);
      v20 = 0;
      v19 = *(_QWORD *)(v5 + 16);
      v6 = v19;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
      if ( *(_DWORD *)(v6 + 200) != 1 )
      {
        v15 = -1073741130;
        v23 = -1073741130;
        goto LABEL_21;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v21,
        *((struct _KTHREAD ***)a1 + 12));
      v7 = *((_QWORD *)a1 + 12);
      v8 = (*(_DWORD *)(v4 + 24) >> 6) & 0xFFFFFF;
      if ( v8 < *(_DWORD *)(v7 + 296) )
      {
        v9 = *(_DWORD *)(*(_QWORD *)(v7 + 280) + 16LL * v8 + 8);
        if ( ((*(_DWORD *)(v4 + 24) >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v7 + 280) + 16LL * v8 + 8) & 0x60)
          && (v9 & 0x2000) == 0
          && (v9 & 0x1F) != 0 )
        {
          v10 = *(_QWORD *)(v7 + 280);
          if ( (*(_BYTE *)(v10 + 16LL * v8 + 8) & 0x1F) == 0xD )
          {
            v11 = *(_QWORD *)(v10 + 16LL * v8);
            if ( v11 && (*(_DWORD *)v11 == 11 || *(_DWORD *)v11 == 8) )
            {
              v12 = *(DXGSYNCOBJECT **)(v11 + 8);
              if ( !v12 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 3808;
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject", 3808LL, 0LL, 0LL, 0LL, 0LL);
              }
              DXGSYNCOBJECT::AddReference(v12);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
              v13 = *((_QWORD *)v12 + 15);
              if ( v13 <= *(_QWORD *)(v4 + 32) )
                v13 = *(_QWORD *)(v4 + 32);
              *((_QWORD *)v12 + 15) = v13;
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(Global, v12, 0, 0);
LABEL_17:
              v15 = v23;
              if ( v23 >= 0 )
              {
LABEL_18:
                VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v23, 4u);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
                v2 = 1;
                goto LABEL_19;
              }
LABEL_21:
              HandleAsyncCommandError(a1, v15, 0, 3);
              goto LABEL_18;
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
      v17 = *(unsigned int *)(v4 + 24);
      WdLogGlobalForLineNumber = 3803;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid sync object handle: 0x%I64x",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
      v23 = -1073741811;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
      goto LABEL_17;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3782;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3782LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  }
  return 0;
}
