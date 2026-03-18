/*
 * XREFs of ImpWorkerRoutine @ 0x1400881F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpAcquireLock @ 0x140088964 (ImpAcquireLock.c)
 *     ImpReleaseLock @ 0x1400889B8 (ImpReleaseLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpProcessSequence @ 0x140088A74 (ImpProcessSequence.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ImpRpcQueryEnabledStateAsync @ 0x14014C094 (ImpRpcQueryEnabledStateAsync.c)
 *     ImpSetActualBasePriority @ 0x14015C694 (ImpSetActualBasePriority.c)
 *     ImpRpcAsyncResponseHandler @ 0x140240FF0 (ImpRpcAsyncResponseHandler.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall ImpWorkerRoutine(PVOID StartContext)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 InputMonitorSessionState; // r14
  int v6; // eax
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  NTSTATUS v14; // ebx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int16 v19; // si
  unsigned __int16 i; // di
  unsigned __int16 *v21; // rbx
  __int16 v22; // r12
  __int64 v23; // rax
  PVOID *v24; // rcx
  __int64 v25; // rdx
  __int16 v26; // r15
  NTSTATUS v27; // r8d
  NTSTATUS v28; // r8d
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int16 v32; // [rsp+48h] [rbp-C0h]
  NTSTATUS v33; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  PVOID *P; // [rsp+68h] [rbp-A0h]
  PVOID P_8[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+80h] [rbp-88h]
  __int64 v40; // [rsp+88h] [rbp-80h]
  PVOID Object[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 ThreadInformation; // [rsp+A0h] [rbp-68h] BYREF
  int v43; // [rsp+A8h] [rbp-60h]
  __int128 v44; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45[2]; // [rsp+C8h] [rbp-40h] BYREF
  NTSTATUS *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  __int64 *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]

  v40 = 0LL;
  P = 0LL;
  v32 = 0;
  LODWORD(v34) = 0;
  v39 = 0LL;
  *(_OWORD *)P_8 = 0LL;
  v36 = 0LL;
  *(_OWORD *)Object = 0LL;
  ThreadInformation = 0LL;
  v44 = 0LL;
  v43 = 0;
  KeWaitForSingleObject(StartContext, Executive, 0, 0, 0LL);
  ExFreePoolWithTag(StartContext, 0);
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  ImpAcquireLock(InputMonitorSessionState + 72);
  if ( *(_BYTE *)(InputMonitorSessionState + 48) )
  {
    ImpReleaseLock(InputMonitorSessionState + 72);
    Object[0] = *(PVOID *)(InputMonitorSessionState + 24);
    Object[1] = *(PVOID *)(InputMonitorSessionState + 520);
    v6 = ImpSetActualBasePriority(KeGetCurrentThread());
    if ( v6 < 0
      && (unsigned int)dword_14029F1A0 > 2
      && (unsigned __int8)tlgKeywordOn(&dword_14029F1A0, 0x400000000000LL, (unsigned int)v6) )
    {
      v33 = v27;
      v46 = &v33;
      v47 = 4LL;
      v48 = &v35;
      v35 = 0x1000000LL;
      v49 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_14028499B, 0LL, 0LL, 4u, v45);
    }
    ThreadInformation = 0x100000001LL;
    v43 = 1;
    v7 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHideFromDebugger|0x20, &ThreadInformation, 0xCu);
    if ( v7 < 0
      && (unsigned int)dword_14029F1A0 > 2
      && (unsigned __int8)tlgKeywordOn(&dword_14029F1A0, 0x400000000000LL, (unsigned int)v7) )
    {
      v33 = v28;
      v46 = &v33;
      v47 = 4LL;
      v48 = &v35;
      v35 = 0x1000000LL;
      v49 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_140284ADF, 0LL, 0LL, 4u, v45);
    }
    if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &v44, 0x10u, 0LL) >= 0 )
      v36 = v44;
    else
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    if ( (int)ImpRpcQueryEnabledStateAsync() < 0 )
LABEL_9:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
LABEL_12:
    while ( 2 )
    {
      v14 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( v14 < 0
        && (unsigned int)dword_14029F1A0 > 2
        && (unsigned __int8)tlgKeywordOn(&dword_14029F1A0, 0x400000000000LL, v15) )
      {
        v33 = v14;
        v46 = &v33;
        v47 = 4LL;
        v48 = &v35;
        v35 = 0x1000000LL;
        v49 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_1402849DA, 0LL, 0LL, 4u, v45);
      }
      ImpAcquireLock(InputMonitorSessionState + 72);
      if ( *(_BYTE *)(InputMonitorSessionState + 48) )
      {
        if ( v14 )
        {
          ImpReleaseLock(InputMonitorSessionState + 72);
          if ( v14 != 1 || (int)ImpRpcAsyncResponseHandler() >= 0 )
            continue;
          goto LABEL_9;
        }
        v16 = InputMonitorSessionState + 56;
        if ( *(_QWORD *)(InputMonitorSessionState + 56) == InputMonitorSessionState + 56 )
        {
          P_8[1] = P_8;
          P_8[0] = P_8;
        }
        else
        {
          *(_OWORD *)P_8 = *(_OWORD *)(InputMonitorSessionState + 56);
          *(_QWORD *)(*(_QWORD *)v16 + 8LL) = P_8;
          **(_QWORD **)(InputMonitorSessionState + 64) = P_8;
          *(_QWORD *)(InputMonitorSessionState + 64) = InputMonitorSessionState + 56;
          *(_QWORD *)v16 = v16;
        }
        ImpReleaseLock(InputMonitorSessionState + 72);
        v19 = 0;
        for ( i = 0; ; i += v26 )
        {
          v21 = (unsigned __int16 *)P_8[0];
          v22 = v19;
          if ( P_8[0] == P_8 )
          {
            if ( i )
              ImpProcessSequence(v40, (_DWORD)P, InputMonitorSessionState + 88, i, v32, v34, v39, (__int64)&v36);
            goto LABEL_12;
          }
          if ( *((PVOID **)P_8[0] + 1) != P_8
            || (v23 = *(_QWORD *)P_8[0], *(PVOID *)(*(_QWORD *)P_8[0] + 8LL) != P_8[0]) )
          {
            __fastfail(3u);
          }
          P_8[0] = *(PVOID *)P_8[0];
          v24 = P_8;
          *(_QWORD *)(v23 + 8) = P_8;
          if ( !i )
            goto LABEL_22;
          if ( !v19 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(P_8, v17, v18);
          v29 = v40;
          if ( v40 != *((_QWORD *)v21 + 2) || (v24 = P, P != *((PVOID **)v21 + 4)) )
          {
            if ( i >= 0xBFu )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v17, v18);
            ImpProcessSequence(v29, (_DWORD)P, InputMonitorSessionState + 88, i, v32, v34, v39, (__int64)&v36);
            v19 = 0;
            i = 0;
            goto LABEL_22;
          }
          v30 = (unsigned int)v34;
          if ( (_DWORD)v34 != *((_DWORD *)v21 + 11) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(P, (unsigned int)v34, v18);
            v24 = P;
            v30 = (unsigned int)v34;
          }
          v31 = 2LL;
          if ( (v21[20] & 2) != 0 )
            break;
          v19 = v22;
          if ( v22 == 96 )
          {
            if ( (unsigned int)dword_14029F1A0 > 2
              && (unsigned __int8)tlgKeywordOn(&dword_14029F1A0, 0x400000000000LL, 2LL) )
            {
              v33 = *(_DWORD *)InputMonitorSessionState;
              v47 = 4LL;
              v46 = &v33;
              v35 = 0x1000000LL;
              v48 = &v35;
              v49 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_140284A9D, 0LL, 0LL, 4u, v45);
            }
            if ( i != 191 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v30, v31);
            ImpProcessSequence(v40, (_DWORD)P, InputMonitorSessionState + 88, i, v32, v34, v39, (__int64)&v36);
            v19 = 0;
            i = 0;
            goto LABEL_22;
          }
LABEL_23:
          v25 = v21[12];
          if ( (unsigned __int16)(v25 + 10240) > 0x3FFu )
          {
            if ( v21[13] )
LABEL_63:
              MicrosoftTelemetryAssertTriggeredNoArgsKM(1023LL, v25, 2LL);
            *(_WORD *)(InputMonitorSessionState + 2LL * i + 88) = v21[12];
            v26 = 1;
            goto LABEL_26;
          }
          if ( (unsigned __int16)(v21[13] + 9216) > 0x3FFu )
            goto LABEL_63;
          v26 = 2;
          *(_WORD *)(InputMonitorSessionState + 2LL * i + 88) = v25;
          *(_WORD *)(InputMonitorSessionState + 2LL * i + 90) = v21[13];
LABEL_26:
          ++v19;
          ExFreePoolWithTag(v21, 0);
        }
        ImpProcessSequence(v29, (_DWORD)v24, InputMonitorSessionState + 88, i, v32, v30, v39, (__int64)&v36);
        v19 = 0;
        i = 0;
LABEL_22:
        v40 = *((_QWORD *)v21 + 2);
        P = (PVOID *)*((_QWORD *)v21 + 4);
        v32 = v21[20];
        LODWORD(v34) = *((_DWORD *)v21 + 11);
        v39 = *((_QWORD *)v21 + 6);
        goto LABEL_23;
      }
      break;
    }
  }
  ImpReleaseLock(InputMonitorSessionState + 72);
}
