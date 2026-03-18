/*
 * XREFs of ?ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z @ 0x14019FCC8
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x14019EDB0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A3E8C (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 */

bool __fastcall ForceForegroundChangeOnMinimize(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rbx
  bool result; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = *((_QWORD *)a1 + 2);
  result = (*(_DWORD *)(v2 + 1360) & 0x40000LL) != 0
        && *(struct tagWND **)(v2 + 1584) == a1
        && (v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928), v9 = *(_QWORD *)(v2 + 464), v9 == v8)
        && *(struct tagWND **)(v9 + 128) == a1
        && *(_QWORD *)(v2 + 1592)
        && (v10 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18944), *(_QWORD *)(*(_QWORD *)(v2 + 1592) + 16LL) == v10)
        && *(_QWORD *)(*((_QWORD *)a2 + 2) + 464LL) != *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18928)
        && !CanForceForeground(*(const struct tagPROCESSINFO **)(v2 + 456));
  return result;
}
