/*
 * XREFs of ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1401F490C
 * Callers:
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14002980C (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ZombieCursor @ 0x1402A8310 (ZombieCursor.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x140029660 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall UnlinkCursor(struct tagCURSOR *a1)
{
  __int64 v1; // rdx
  int v2; // edi
  int v4; // ebx
  struct tagCURSOR **i; // rdx
  struct tagCURSOR *v6; // rax
  __int64 UserSessionState; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  unsigned __int64 j; // rax
  __int64 v16; // rdx

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  if ( v1 )
  {
    v4 = 0;
LABEL_3:
    i = (struct tagCURSOR **)(v1 + 720);
    goto LABEL_4;
  }
  v4 = 1;
  for ( i = (struct tagCURSOR **)(W32GetUserSessionState(a1, 0LL) + 36312);
        ;
        i = (struct tagCURSOR **)(W32GetUserSessionState(a1, i) + 36312) )
  {
LABEL_4:
    while ( 1 )
    {
      v6 = *i;
      if ( !*i )
        break;
      if ( v6 == a1 )
      {
        *i = (struct tagCURSOR *)*((_QWORD *)a1 + 4);
LABEL_8:
        *((_DWORD *)a1 + 20) &= ~0x100u;
        *((_QWORD *)a1 + 4) = 0LL;
        return;
      }
      i = (struct tagCURSOR **)((char *)v6 + 32);
    }
    if ( v4 )
      break;
    v4 = 1;
  }
  if ( !v2 )
  {
    v2 = 1;
    v1 = *((_QWORD *)_GetCurrentLogicalCursorThread((__int64)a1) + 57);
    goto LABEL_3;
  }
  UserSessionState = W32GetUserSessionState(a1, i);
  v8 = *(_QWORD *)(UserSessionState + 19920);
  v11 = v8 + 32LL * *(unsigned int *)(W32GetUserSessionState(v10, v9) + 19848);
  v14 = *(_QWORD **)(W32GetUserSessionState(v13, v12) + 19864);
  for ( j = *(_QWORD *)(UserSessionState + 19920); j <= v11; j += 32LL )
  {
    if ( *(_BYTE *)(j + 24) == 3 )
    {
      if ( *(struct tagCURSOR **)(*v14 + 32LL) == a1 )
      {
        *(_QWORD *)(*v14 + 32LL) = *((_QWORD *)a1 + 4);
        goto LABEL_8;
      }
      v16 = v14[1];
      if ( v16 && *(struct tagCURSOR **)(v16 + 720) == a1 )
      {
        *(_QWORD *)(v16 + 720) = *((_QWORD *)a1 + 4);
        goto LABEL_8;
      }
    }
    v14 += 5;
  }
}
