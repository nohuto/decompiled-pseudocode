/*
 * XREFs of ?CancelInertiaTimer@CPTPProcessor@@AEAAXXZ @ 0x1400DA540
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA790 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CPTPProcessor::CancelInertiaTimer(CPTPProcessor *this, __int64 a2)
{
  __int64 UserSessionState; // rax
  void *DispatcherHandleByName; // rax

  if ( *((_BYTE *)this + 392) )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName(
                                       *(_QWORD *)(UserSessionState + 16840),
                                       5LL,
                                       1LL);
    ZwCancelTimer(DispatcherHandleByName, 0LL);
    *((_BYTE *)this + 392) = 0;
  }
  *((_DWORD *)this + 97) &= ~1u;
}
