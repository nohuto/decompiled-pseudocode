/*
 * XREFs of ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1402FFB34
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14013D0F0 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1402FFAB4 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
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
  struct InteractiveControlManager *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  unsigned int *v13; // rax
  int v14; // eax

  v5 = (_DWORD *)((char *)this + 32);
  if ( *((_QWORD *)this + 1) - *((_QWORD *)this + 5) >= (unsigned __int64)*((int *)InteractiveControlManager::Instance(
                                                                                     (__int64)this,
                                                                                     a2)
                                                                          + 49) )
  {
    v6 = InteractiveControlManager::Instance(v4, v3);
    v9 = InteractiveControlManager::Instance(v8, v7);
    v10 = *((_DWORD *)v6 + 50);
    v11 = 0;
    v12 = (unsigned int)(*v5 * v10) / *((_DWORD *)v9 + 49);
    v13 = (unsigned int *)(W32GetUserSessionState(v9, (unsigned int)(*v5 * v10) % *((_DWORD *)v9 + 49)) + 17120);
    while ( v11 != 4 )
    {
      if ( v12 <= *v13 || !*v13 )
      {
        InteractiveControlDefaultScroller::SetBallisticsLevel(this, v11, 0);
        break;
      }
      ++v11;
      v13 += 2;
    }
    *((_QWORD *)this + 5) = *((_QWORD *)this + 1);
    *v5 = 0;
  }
  v14 = -*((_DWORD *)this + 15);
  if ( *((int *)this + 15) > 0 )
    v14 = *((_DWORD *)this + 15);
  *v5 += v14;
  return 0LL;
}
