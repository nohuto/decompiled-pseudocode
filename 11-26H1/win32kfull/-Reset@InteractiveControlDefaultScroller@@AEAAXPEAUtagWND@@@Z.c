/*
 * XREFs of ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1402FF760
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14013D0F0 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1402FFAB4 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 */

void __fastcall InteractiveControlDefaultScroller::Reset(InteractiveControlDefaultScroller *this, struct tagWND *a2)
{
  _DWORD *UserSessionState; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // rdi
  char v19; // al
  __int64 v20; // rcx
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax

  UserSessionState = (_DWORD *)W32GetUserSessionState(this, a2);
  UserSessionState[4280] = *((_DWORD *)InteractiveControlManager::Instance(v6, v5) + 55);
  UserSessionState[4282] = *((_DWORD *)InteractiveControlManager::Instance(v8, v7) + 57);
  UserSessionState[4284] = 0;
  UserSessionState[4286] = 0;
  v11 = *((unsigned int *)InteractiveControlManager::Instance(v10, v9) + 59);
  UserSessionState[4281] = v11;
  v13 = *((unsigned int *)InteractiveControlManager::Instance(v11, v12) + 61);
  UserSessionState[4283] = v13;
  v15 = *((unsigned int *)InteractiveControlManager::Instance(v13, v14) + 63);
  UserSessionState[4285] = v15;
  v20 = *((unsigned int *)InteractiveControlManager::Instance(v15, v16) + 65);
  UserSessionState[4287] = v20;
  v18 = *(_BYTE **)(*((_QWORD *)a2 + 2) + 456LL);
  v19 = v18[1017];
  *((_BYTE *)this + 52) = v19;
  LOBYTE(v20) = v18[1016];
  *((_BYTE *)this + 53) = v20;
  if ( !v19 )
  {
    if ( (_BYTE)v20 )
      *((_BYTE *)this + 52) = 2;
    else
      *((_WORD *)this + 26) = 258;
    goto LABEL_6;
  }
  if ( v19 == 2 )
  {
LABEL_6:
    v21 = (char *)InteractiveControlManager::Instance(v20, v17) + 204;
    goto LABEL_8;
  }
  v21 = (char *)InteractiveControlManager::Instance(v20, v17) + 212;
LABEL_8:
  v24 = *(_DWORD *)v21;
  if ( *((_DWORD *)this + 14) == 1 )
    v25 = *((unsigned int *)InteractiveControlManager::Instance(v23, v22) + 45);
  else
    v25 = v24;
  v26 = (unsigned __int8)v18[1018];
  if ( v26 <= (unsigned int)v25 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      v26 = *((_DWORD *)InteractiveControlManager::Instance(v25, v22) + 45);
    else
      v26 = v24;
  }
  *((_DWORD *)this + 12) = v26;
  v27 = *((_QWORD *)this + 1);
  *(_QWORD *)((char *)this + 60) = 0LL;
  *((_QWORD *)this + 5) = v27;
  *((_QWORD *)this + 2) = v27;
  *((_DWORD *)this + 8) = 0;
  InteractiveControlDefaultScroller::SetBallisticsLevel(this, 0, 1);
}
