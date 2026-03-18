/*
 * XREFs of ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1402F0390
 * Callers:
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1402F005C (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1402F0410 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

void __fastcall InteractiveControlDefaultScroller::SetBallisticsLevel(
        InteractiveControlDefaultScroller *this,
        __int64 a2,
        int a3)
{
  __int64 v3; // rdi
  struct InteractiveControlManager *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx

  v3 = 3LL;
  if ( *((_DWORD *)this + 14) != 2 )
    v3 = (unsigned int)a2;
  if ( *((_DWORD *)this + 6) != (_DWORD)v3 || a3 )
  {
    *((_DWORD *)this + 6) = v3;
    v5 = InteractiveControlManager::Instance((__int64)this, a2);
    v9 = *((unsigned int *)InteractiveControlManager::Instance(v7, v6) + 44);
    if ( *((_DWORD *)v5 + 43) == (_DWORD)v9 )
      v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 8 * v3 + 17132);
    else
      v10 = *((_DWORD *)InteractiveControlManager::Instance(v9, v8) + 43);
    *((_DWORD *)this + 7) = v10;
  }
}
