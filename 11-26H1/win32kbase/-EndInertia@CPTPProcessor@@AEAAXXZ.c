/*
 * XREFs of ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14019FDF0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x140125F18 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x140126090 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x140126404 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::EndInertia(CPTPProcessor *this, __int64 a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  CInertiaManager *v8; // rcx

  if ( *((_BYTE *)this + 392) )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
    CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(UserSessionState + 16832), 1, 0, *((void **)this + 66));
    *((_BYTE *)this + 392) = 0;
  }
  if ( (*((_DWORD *)this + 97) & 1) == 0 )
  {
    v5 = W32GetUserSessionState((_DWORD)this, a2, a3);
    if ( CInertiaManager::QueryInertiaStatus((CInertiaManager *)(v5 + 16912), v6, v7) )
      CPTPProcessor::CacheInertia(this, a2);
  }
  if ( (*((_DWORD *)this + 97) & 1) != 0 )
  {
    W32GetUserSessionState((_DWORD)this, a2, a3);
    CInertiaManager::PostInertiaMessage(
      v8,
      0x23Cu,
      (CPTPProcessor *)((char *)this + 176),
      *(struct tagPOINT *)((char *)this + 368),
      *(struct tagPOINT *)((char *)this + 376));
    *((_DWORD *)this + 97) &= ~1u;
  }
}
