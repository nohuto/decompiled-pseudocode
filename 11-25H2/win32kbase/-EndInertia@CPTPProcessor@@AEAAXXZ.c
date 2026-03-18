/*
 * XREFs of ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14021116C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9F58 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1400DA0E4 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1400DA5A4 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1401519B8 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::EndInertia(CPTPProcessor *this, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  CInertiaManager *v6; // rcx

  if ( *((_BYTE *)this + 392) )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(UserSessionState + 16840), 1, 0, *((void **)this + 66));
    *((_BYTE *)this + 392) = 0;
  }
  if ( (*((_DWORD *)this + 97) & 1) == 0 )
  {
    v4 = W32GetUserSessionState(this, a2);
    if ( CInertiaManager::QueryInertiaStatus((CInertiaManager *)(v4 + 16920), v5) )
      CPTPProcessor::CacheInertia(this);
  }
  if ( (*((_DWORD *)this + 97) & 1) != 0 )
  {
    W32GetUserSessionState(this, a2);
    CInertiaManager::PostInertiaMessage(
      v6,
      572LL,
      (CPTPProcessor *)((char *)this + 176),
      *(struct tagPOINT *)((char *)this + 368),
      *(struct tagPOINT *)((char *)this + 376));
    *((_DWORD *)this + 97) &= ~1u;
  }
}
