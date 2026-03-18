/*
 * XREFs of ?LinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1401DEBAC
 * Callers:
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LinkCursor(struct tagCURSOR *a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx

  v2 = *((_DWORD *)a1 + 20);
  *((_QWORD *)a1 + 6) = a1;
  if ( (v2 & 0x40) == 0 )
  {
    v4 = *((_QWORD *)a1 + 3);
    if ( v4 )
    {
      if ( (v2 & 4) == 0 )
        return;
      *((_QWORD *)a1 + 4) = *(_QWORD *)(v4 + 720);
      *(_QWORD *)(v4 + 720) = a1;
    }
    else
    {
      v5 = *(_QWORD *)(W32GetUserSessionState(0LL, a2) + 36312);
      *((_QWORD *)a1 + 4) = v5;
      *(_QWORD *)(W32GetUserSessionState(v5, v6) + 36312) = a1;
    }
    *((_DWORD *)a1 + 20) |= 0x100u;
  }
}
