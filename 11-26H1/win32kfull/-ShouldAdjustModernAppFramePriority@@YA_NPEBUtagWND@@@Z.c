/*
 * XREFs of ?ShouldAdjustModernAppFramePriority@@YA_NPEBUtagWND@@@Z @ 0x14025F8E8
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x14005EB74 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
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
  if ( (v4 & 0x40000) != 0
    && (v4 & 0x180000) == 0
    && *(_QWORD *)(v2 + 1592)
    && *(const struct tagWND **)(v2 + 1584) == a1
    && *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944)
    && *(_QWORD *)(v2 + 464) == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 18944) + 464LL) )
  {
    return *(_QWORD *)(v2 + 456) != *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 18944) + 456LL);
  }
  return v3;
}
