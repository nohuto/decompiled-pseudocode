/*
 * XREFs of Endpoint_SendClearStallTransfer @ 0x140006734
 * Callers:
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1400065C0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x140006C78 (WPP_RECORDER_SF_ddq.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

_UNKNOWN **__fastcall Endpoint_SendClearStallTransfer(_QWORD *Context)
{
  PIRP *v1; // rax
  PIRP v3; // rbp
  PIRP *v4; // rdi
  char v5; // al
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _IO_STACK_LOCATION *v7; // rax
  struct _DEVICE_OBJECT *v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  int v14; // edx
  _UNKNOWN **result; // rax
  _IO_STACK_LOCATION *v16; // rax
  int v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+44h] [rbp-24h]
  int v19; // [rsp+4Ch] [rbp-1Ch]
  PIRP v20; // [rsp+50h] [rbp-18h]

  v1 = (PIRP *)Context[35];
  v3 = *v1;
  v4 = v1 + 1;
  IoReuseIrp(*v1, 0);
  v5 = (_BYTE)v4[16] & 0x1C;
  *((_BYTE *)v4 + 129) = 1;
  *((_WORD *)v4 + 65) = 0;
  *((_BYTE *)v4 + 128) = v5 | 2;
  *((_DWORD *)v4 + 33) = *((unsigned __int8 *)Context + 98);
  *(_DWORD *)v4 = 3276936;
  v4[4] = (PIRP)24;
  v4[5] = 0LL;
  v4[6] = 0LL;
  *((_DWORD *)v4 + 14) = 5000;
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  memset(&CurrentStackLocation[-1], 0, sizeof(_IO_STACK_LOCATION));
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4;
  --v3->Tail.Overlay.CurrentStackLocation;
  --v3->CurrentLocation;
  v7 = v3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v7[-1].MajorFunction = *(_OWORD *)&v7->MajorFunction;
  *(_OWORD *)&v7[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v7->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&v7[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v7->Parameters.ReadWriteConfig.Length;
  v7[-1].FileObject = v7->FileObject;
  v7[-1].Control = 0;
  v8 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(
                                  WdfDriverGlobals,
                                  *(_QWORD *)*Context);
  if ( IoSetCompletionRoutineEx(v8, v3, Endpoint_ClearStallTransferCompletion, Context, 1u, 1u, 1u) < 0 )
  {
    v16 = v3->Tail.Overlay.CurrentStackLocation;
    v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))Endpoint_ClearStallTransferCompletion;
    v16[-1].Context = Context;
    v16[-1].Control = -32;
  }
  --v3->CurrentLocation;
  --v3->Tail.Overlay.CurrentStackLocation;
  v10 = Context[2];
  v11 = *(_QWORD *)(v10 + 184);
  if ( v11 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 88) + 72LL);
    v19 = 0;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x34 )
        v17 = -1;
      else
        v17 = *(_DWORD *)(WdfStructures + 416);
    }
    else
    {
      v17 = 24;
    }
    v13 = Context[35];
    v18 = 3LL;
    v20 = v3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, int *))(WdfFunctions_01033 + 1992))(
      WdfDriverGlobals,
      *(_QWORD *)(v13 + 144),
      &v17);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(unsigned __int8 *)(Context[2] + 143LL);
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_ddq(
        Context[10],
        v14,
        13,
        71,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(Context[2] + 143LL),
        *((_DWORD *)Context + 38),
        *(_QWORD *)(Context[35] + 144LL));
    }
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2248))(
                            WdfDriverGlobals,
                            *(_QWORD *)(Context[35] + 144LL),
                            v12);
    if ( (int)result < 0 )
      return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
                            WdfDriverGlobals,
                            *(_QWORD *)(Context[35] + 144LL),
                            (unsigned int)result);
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_ddq(
                            Context[10],
                            v9,
                            13,
                            70,
                            (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
                            *(_BYTE *)(v10 + 143),
                            *((_DWORD *)Context + 38),
                            *(_QWORD *)(Context[35] + 144LL));
    }
  }
  return result;
}
