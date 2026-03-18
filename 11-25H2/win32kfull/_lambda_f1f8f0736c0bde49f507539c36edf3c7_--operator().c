/*
 * XREFs of _lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator() @ 0x1402A69F0
 * Callers:
 *     _lambda_f1f8f0736c0bde49f507539c36edf3c7_::_lambda_invoker_cdecl_ @ 0x1402A67E0 (_lambda_f1f8f0736c0bde49f507539c36edf3c7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140024198 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x14021E418 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1402C1A38 (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 */

__int64 __fastcall lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator()(__int64 a1, LARGE_INTEGER a2, __int64 a3)
{
  DWORD v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  struct tagTHREADINFO **CompositeAppFrameWindowOrSelf; // rax

  v4 = a2.LowPart - 16;
  if ( *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(a1, (LARGE_INTEGER)a2.QuadPart)
                 + 18888) )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18888);
    if ( *(_QWORD *)(v9 + 128) )
    {
      UserSessionState = W32GetUserSessionState(v9, v8);
      CompositeAppFrameWindowOrSelf = (struct tagTHREADINFO **)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(
                                                                 *(const struct tagWND **)(*(_QWORD *)(UserSessionState + 18888)
                                                                                         + 128LL),
                                                                 v11);
      if ( (dword_1403590EC[8 * v4] & 1) != 0 )
        PostEventMessageWindow(CompositeAppFrameWindowOrSelf, 0x11u, a2, 0LL);
      else
        NotifyShell::ArrangementHotKey(0LL, a3);
    }
  }
  return 0LL;
}
