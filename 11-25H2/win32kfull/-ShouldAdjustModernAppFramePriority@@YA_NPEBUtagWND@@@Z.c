/*
 * XREFs of ?ShouldAdjustModernAppFramePriority@@YA_NPEBUtagWND@@@Z @ 0x140225DDC
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A6AA8 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldAdjustModernAppFramePriority(const struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = *(_QWORD *)(v2 + 1360);
  if ( (v4 & 0x40000) != 0 && (v4 & 0x80000) == 0 && (v4 & 0x100000) == 0 )
  {
    if ( *(_QWORD *)(v2 + 1592) )
    {
      if ( *(const struct tagWND **)(v2 + 1584) == a1 )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18904) )
        {
          v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18904);
          if ( *(_QWORD *)(v2 + 472) == *(_QWORD *)(v8 + 472) )
            return *(_QWORD *)(v2 + 464) != *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 18904) + 464LL);
        }
      }
    }
  }
  return v3;
}
