/*
 * XREFs of ?ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z @ 0x14023371C
 * Callers:
 *     EditionEdgyProcessInput @ 0x140233700 (EditionEdgyProcessInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1402337F4 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 */

__int64 __fastcall Edgy::ProcessInput(Edgy *this, _QWORD *a2, void **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbp
  int v7; // ebx
  __int128 *v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // ebx
  struct tagTHREADINFO *v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a2 )
    *a2 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19176) + 248LL);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 16);
    *(_QWORD *)(v6 + 232) = this;
    v8 = (__int128 *)Edgy::_OnInput(&v14, v6, this);
    v10 = v7 == 1;
    v14 = *v8;
    v11 = v14;
    if ( v10 )
    {
      if ( (_DWORD)v14 == 1 )
        return v3;
      if ( a2 )
        *a2 = *((_QWORD *)&v14 + 1);
      v12 = 0LL;
    }
    else
    {
      if ( (_DWORD)v14 != 1 )
        return 1;
      v12 = PtiCurrent(v9);
    }
    *(_QWORD *)(v6 + 288) = v12;
    if ( v11 == 1 )
      return v3;
    return 1;
  }
  return 1LL;
}
