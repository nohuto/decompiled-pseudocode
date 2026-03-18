/*
 * XREFs of ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14036CEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140067CAC (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140220E20 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14036D2A8 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSignalFence(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  __int64 v11; // rax
  DXGSYNCOBJECT *v12; // rbx
  PERESOURCE *Global; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rbx
  _BYTE v21[32]; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+98h] [rbp+28h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, *((struct _KTHREAD ***)a1 + 12));
  v4 = *(_DWORD *)(v3 + 28);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      WdLogSingleEntry1(2LL);
      v11 = *(int *)(v3 + 28);
      v10 = L"Invalid handle type: 0x%I64x";
      WdLogGlobalForLineNumber = 7815;
      goto LABEL_13;
    }
    v14 = *(unsigned int *)(v3 + 24);
    v15 = *((_QWORD *)a1 + 12);
    v16 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *(_DWORD *)(v15 + 296) )
    {
      v17 = *(_QWORD *)(v15 + 280);
      v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
      if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
        && (v18 & 0x2000) == 0
        && (v18 & 0x1F) != 0 )
      {
        v19 = 2 * ((v14 >> 6) & 0xFFFFFF);
        if ( (*(_BYTE *)(v17 + 8 * v19 + 8) & 0x1F) == 8 )
        {
          v12 = *(DXGSYNCOBJECT **)(v17 + 8 * v19);
          if ( v12 )
            goto LABEL_20;
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
    v10 = L"Invalid sync object handle: 0x%I64x";
    WdLogGlobalForLineNumber = 7822;
    goto LABEL_12;
  }
  v5 = *((_QWORD *)a1 + 12);
  v6 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
  if ( v6 >= *(_DWORD *)(v5 + 296) )
    goto LABEL_11;
  v7 = *(_DWORD *)(*(_QWORD *)(v5 + 280) + 16LL * v6 + 8);
  if ( ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)(v5 + 280) + 16LL * v6 + 8) & 0x60)
    || (v7 & 0x2000) != 0
    || (v7 & 0x1F) == 0 )
  {
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(v5 + 280);
  if ( (*(_BYTE *)(v8 + 16LL * v6 + 8) & 0x1F) == 0xD )
  {
    v9 = *(_QWORD *)(v8 + 16LL * v6);
    if ( !v9 || *(_DWORD *)v9 != 11 && *(_DWORD *)v9 != 8 )
      goto LABEL_11;
    v12 = *(DXGSYNCOBJECT **)(v9 + 8);
    if ( !v12 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7827;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject", 7827LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_20:
    DXGSYNCOBJECT::AddReference(v12);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
    v22 = DXGSYNCOBJECT::SignalFence(v12, *(_QWORD *)(v3 + 32), 0LL, 0LL);
    if ( v22 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7834;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"SignalFence failed: 0x%I64x", v22, 0LL, 0LL, 0LL, 0LL);
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, v12, 0, 0);
    goto LABEL_14;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 318;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_11:
  WdLogSingleEntry1(2LL);
  v10 = L"Invalid shared object handle: 0x%I64x";
  WdLogGlobalForLineNumber = 7805;
LABEL_12:
  v11 = *(unsigned int *)(v3 + 24);
LABEL_13:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v11, 0LL, 0LL, 0LL, 0LL);
  v22 = -1073741811;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
LABEL_14:
  if ( v22 < 0 )
    HandleAsyncCommandError(a1, v22, 0, 3);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v22, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
