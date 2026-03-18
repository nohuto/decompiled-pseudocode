/*
 * XREFs of DxgkSignalEventCB @ 0x140084D60
 * Callers:
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1400787C0 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401D52B0 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140056D40 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x140195390 (-DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 */

__int64 __fastcall DxgkSignalEventCB(struct _DXGKARGCB_SIGNALEVENT *a1)
{
  struct _DXGKARGCB_SIGNALEVENT::$3484840290AF70A1F2DEBFE8F287B9A7::$345C9315266921A5615E194C0B7E8CDB Flags; // eax
  __int64 v3; // rdi
  __int64 v4; // rax
  const wchar_t *v5; // r9
  HANDLE hEvent; // rax
  DXG_VMBUS_CHANNEL_BASE *v8; // r10
  int v9; // eax
  const wchar_t *v10; // r9
  _QWORD *hDxgkProcess; // rdx
  struct DXGGLOBAL *Global; // rax
  DXG_VMBUS_CHANNEL_BASE *v13; // r10
  unsigned __int64 v14; // rdx
  HANDLE v15; // rax
  int v16; // eax
  unsigned __int8 v17[16]; // [rsp+58h] [rbp+17h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp+27h]
  HANDLE v19; // [rsp+70h] [rbp+2Fh]
  __int128 v20; // [rsp+78h] [rbp+37h]

  Flags = (struct _DXGKARGCB_SIGNALEVENT::$3484840290AF70A1F2DEBFE8F287B9A7::$345C9315266921A5615E194C0B7E8CDB)a1->Flags;
  LODWORD(v3) = 0;
  if ( *(unsigned int *)&Flags >= 2 )
  {
    WdLogSingleEntry0(2LL);
    v4 = 17234LL;
    v5 = L"Reserved flags are set";
LABEL_3:
    WdLogGlobalForLineNumber = v4;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Flags & 1) != 0 )
  {
    hEvent = a1->hEvent;
    v8 = *(DXG_VMBUS_CHANNEL_BASE **)hEvent;
    if ( !*(_QWORD *)hEvent )
    {
      KeSetEvent(*((PRKEVENT *)hEvent + 1), 0, 0);
      return (unsigned int)v3;
    }
    v19 = (HANDLE)*((_QWORD *)hEvent + 1);
    *(_OWORD *)v17 = 0LL;
    v17[12] = 2;
    *(_DWORD *)&v17[12] = *(_WORD *)&v17[12] & 0x1FF;
    v18 = 0LL;
    v20 = 0uLL;
    v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v8, v17, (struct DXGKVMB_COMMAND_BASE *)v17, 0x30u);
    v3 = v9;
    if ( v9 >= 0 )
      return (unsigned int)v3;
    WdLogSingleEntry1(2LL);
    v10 = L"Failed to send SIGNALGUESTEVENT command: 0x%I64x";
    WdLogGlobalForLineNumber = 17252;
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v3, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v3;
  }
  hDxgkProcess = a1->hDxgkProcess;
  if ( *((_BYTE *)a1->hDxgkProcess + 136) )
  {
    *(_QWORD *)v17 = a1->hEvent;
    *(_QWORD *)&v17[8] = hDxgkProcess[5];
    v18 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    return (*((__int64 (__fastcall **)(unsigned __int8 *))Global + 3))(v17);
  }
  else
  {
    v13 = (DXG_VMBUS_CHANNEL_BASE *)hDxgkProcess[16];
    if ( v13 )
    {
      v14 = hDxgkProcess[11];
      *(_OWORD *)v17 = 0LL;
      v17[12] = 2;
      *(_DWORD *)&v17[12] = *(_WORD *)&v17[12] & 0x1FF;
      v15 = a1->hEvent;
      v18 = v14 != 0 ? 3uLL : 0;
      v20 = v14;
      v19 = v15;
      v16 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v13, v17, (struct DXGKVMB_COMMAND_BASE *)v17, 0x30u);
      v3 = v16;
      if ( v16 >= 0 )
        return (unsigned int)v3;
      WdLogSingleEntry1(2LL);
      v10 = L"Failed to send SIGNALGUESTEVENT  command: 0x%I64x";
      WdLogGlobalForLineNumber = 17275;
      goto LABEL_9;
    }
    if ( KeGetCurrentIrql() >= 2u )
    {
      WdLogSingleEntry0(2LL);
      v4 = 17283LL;
      v5 = L"Invalid IRQL for DxgkCbSignalEvent";
      goto LABEL_3;
    }
    return DxgkSignalEventCBPaged(a1);
  }
}
