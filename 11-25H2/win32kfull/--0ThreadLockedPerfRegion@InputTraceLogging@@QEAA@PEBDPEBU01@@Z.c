/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14003874C
 * Callers:
 *     ProcessHidRawInput @ 0x1400386C0 (ProcessHidRawInput.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x14005EC10 (-OnPointerCursorOperation@@YAXXZ.c)
 *     NtUserSetCursorPos @ 0x14005EFD0 (NtUserSetCursorPos.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x140177CAC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     EditionLLMouseButtonHook @ 0x1401B3BF0 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401B3E50 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x14024A8D0 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x14024CC60 (NtUserSendInput.c)
 *     NtUserInjectTouchpadAction @ 0x14029A600 (NtUserInjectTouchpadAction.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14020A778 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( (unsigned int)dword_14039BB50 > 6 && (qword_14039BB60 & 1) != 0 && (qword_14039BB68 & 1) == qword_14039BB68 )
  {
    if ( PtiCurrent((__int64)this, (__int64)a2) )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      v10 = (__int64 *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(UserSessionState + 19344));
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
        if ( (unsigned int)dword_14039BB50 > 6 && (unsigned __int8)tlgKeywordOn(&dword_14039BB50, 1LL) )
        {
          v13 = (__int64)(*this + 1);
          v14 = (*this)[5];
          v17 = **this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (unsigned int)&dword_14039BB50,
            (unsigned int)&unk_140366593,
            v13,
            v14,
            (__int64)&v17);
        }
        v15 = *this + 6;
        v16 = PtiCurrent(v12, v11);
        *v15 = *((_QWORD *)v16 + 48);
        *((_QWORD *)v16 + 48) = v15;
        v15[2] = _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_;
        v15[1] = this;
      }
    }
  }
  return (InputTraceLogging::ThreadLockedPerfRegion *)this;
}
