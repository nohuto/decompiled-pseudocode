/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14001F398
 * Callers:
 *     ProcessHidRawInput @ 0x14001F510 (ProcessHidRawInput.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1400F8870 (-OnPointerCursorOperation@@YAXXZ.c)
 *     EditionLLMouseButtonHook @ 0x140173290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401734E0 (EditionLLMouseWheelHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     NtUserSetCursorPos @ 0x1401DD8F0 (NtUserSetCursorPos.c)
 *     NtUserInjectTouchInput @ 0x1402B6AF0 (NtUserInjectTouchInput.c)
 *     NtUserInjectTouchpadAction @ 0x1402B7030 (NtUserInjectTouchpadAction.c)
 *     NtUserSendInput @ 0x1402BB4D0 (NtUserSendInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1401E21C0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

InputTraceLogging::ThreadLockedPerfRegion *__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rbx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( (unsigned int)dword_1403AA9C0 > 6 && (qword_1403AA9D0 & 1) != 0 && (qword_1403AA9D8 & 1) == qword_1403AA9D8 )
  {
    if ( PtiCurrent() )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      v10 = (__int64 *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(UserSessionState + 19376));
      *this = v10;
      if ( v10 )
      {
        *v10 = (__int64)a2;
        (*this)[5] = 0LL;
        if ( a3 && *(_QWORD *)a3 )
        {
          *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
          (*this)[5] = (__int64)(*this + 3);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( (unsigned int)dword_1403AA9C0 > 6 && (qword_1403AA9D0 & 1) != 0 && (qword_1403AA9D8 & 1) == qword_1403AA9D8 )
        {
          v11 = (__int64)(*this + 1);
          v12 = (*this)[5];
          v15 = **this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (unsigned int)&dword_1403AA9C0,
            (unsigned int)&unk_1403734DF,
            v11,
            v12,
            (__int64)&v15);
        }
        v13 = *this + 6;
        v14 = PtiCurrent();
        *v13 = *((_QWORD *)v14 + 47);
        *((_QWORD *)v14 + 47) = v13;
        v13[2] = _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_;
        v13[1] = this;
      }
    }
  }
  return (InputTraceLogging::ThreadLockedPerfRegion *)this;
}
