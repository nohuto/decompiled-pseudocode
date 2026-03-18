/*
 * XREFs of ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1402F005C
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14012F240 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1402F0390 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 */

void __fastcall InteractiveControlDefaultScroller::Reset(InteractiveControlDefaultScroller *this, struct tagWND *a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  _BYTE *v19; // rdi
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax

  v4 = (_DWORD *)(W32GetUserSessionState(this, a2) + 17128);
  *v4 = *((_DWORD *)InteractiveControlManager::Instance(v6, v5) + 55);
  v9 = *((_DWORD *)InteractiveControlManager::Instance(v8, v7) + 57);
  v4[4] = 0;
  v4[6] = 0;
  v4[2] = v9;
  v12 = *((unsigned int *)InteractiveControlManager::Instance(v11, v10) + 59);
  v4[1] = v12;
  v14 = *((unsigned int *)InteractiveControlManager::Instance(v12, v13) + 61);
  v4[3] = v14;
  v16 = *((unsigned int *)InteractiveControlManager::Instance(v14, v15) + 63);
  v4[5] = v16;
  v21 = *((unsigned int *)InteractiveControlManager::Instance(v16, v17) + 65);
  v4[7] = v21;
  v19 = *(_BYTE **)(*((_QWORD *)a2 + 2) + 464LL);
  v20 = v19[1017];
  *((_BYTE *)this + 52) = v20;
  LOBYTE(v21) = v19[1016];
  *((_BYTE *)this + 53) = v21;
  if ( !v20 )
  {
    if ( (_BYTE)v21 )
      *((_BYTE *)this + 52) = 2;
    else
      *((_WORD *)this + 26) = 258;
    goto LABEL_6;
  }
  if ( v20 == 2 )
  {
LABEL_6:
    v24 = *((_DWORD *)InteractiveControlManager::Instance(v21, v18) + 51);
    goto LABEL_8;
  }
  v24 = *((_DWORD *)InteractiveControlManager::Instance(v21, v18) + 53);
LABEL_8:
  if ( *((_DWORD *)this + 14) == 1 )
    v25 = *((unsigned int *)InteractiveControlManager::Instance(v23, v22) + 45);
  else
    v25 = v24;
  v26 = (unsigned __int8)v19[1018];
  if ( v26 <= (unsigned int)v25 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      v26 = *((_DWORD *)InteractiveControlManager::Instance(v25, v22) + 45);
    else
      v26 = v24;
  }
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 12) = v26;
  v27 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 5) = v27;
  *((_QWORD *)this + 2) = v27;
  InteractiveControlDefaultScroller::SetBallisticsLevel(this, 0, 1);
}
