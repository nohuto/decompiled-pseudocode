/*
 * XREFs of ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1402F0410
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14012F240 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1402F0390 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateBallistics(
        InteractiveControlDefaultScroller *this,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rsi
  struct InteractiveControlManager *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct InteractiveControlManager *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // ebx
  unsigned int *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax

  v5 = (_DWORD *)((char *)this + 32);
  if ( *((_QWORD *)this + 1) - *((_QWORD *)this + 5) >= (unsigned __int64)*((int *)InteractiveControlManager::Instance(
                                                                                     (__int64)this,
                                                                                     a2)
                                                                          + 49) )
  {
    v6 = InteractiveControlManager::Instance(v4, v3);
    v9 = InteractiveControlManager::Instance(v8, v7);
    v10 = (unsigned int)(*v5 * *((_DWORD *)v6 + 50)) % *((_DWORD *)v9 + 49);
    v11 = (unsigned int)(*v5 * *((_DWORD *)v6 + 50)) / *((_DWORD *)v9 + 49);
    v12 = (unsigned int *)(W32GetUserSessionState(v9, v10) + 17128);
    v13 = 0LL;
    while ( (_DWORD)v13 != 4 )
    {
      if ( v11 <= *v12 || !*v12 )
      {
        InteractiveControlDefaultScroller::SetBallisticsLevel(this, v13, 0);
        break;
      }
      v13 = (unsigned int)(v13 + 1);
      v12 += 2;
    }
    v14 = *((_QWORD *)this + 1);
    *v5 = 0;
    *((_QWORD *)this + 5) = v14;
  }
  v15 = -*((_DWORD *)this + 15);
  if ( *((int *)this + 15) > 0 )
    v15 = *((_DWORD *)this + 15);
  *v5 += v15;
  return 0LL;
}
