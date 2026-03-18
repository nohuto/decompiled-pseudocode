/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x140048F20 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtMITDispatchCompletion @ 0x14009D540 (NtMITDispatchCompletion.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x14009DA80 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     rimInputApc @ 0x14009DFA0 (rimInputApc.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     UserKSTWait @ 0x1400F0898 (UserKSTWait.c)
 *     ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140128850 (-OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z @ 0x1401DFF70 (-_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14008BEF4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(void ***this, int a2, int a3)
{
  void **v4; // rbx
  __int64 UserSessionState; // rax
  const GUID *v6; // r8
  const GUID *v7; // r9
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 6 && (qword_1402A9E50 & 1) != 0 && (qword_1402A9E58 & 1) == qword_1402A9E58 )
  {
    v6 = (const GUID *)(*this + 1);
    v7 = (const GUID *)(*this)[5];
    v8 = **this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1402A9E40,
      byte_140283145,
      v6,
      v7,
      &v8);
  }
  v4 = *this;
  UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
  Win32FreeToPagedLookasideListImpl(*(void **)(UserSessionState + 19376), v4);
}
