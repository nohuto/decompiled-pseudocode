/*
 * XREFs of HmgReferenceCheckLock @ 0x140121F20
 * Callers:
 *     EngUnlockSurface @ 0x140121ED0 (EngUnlockSurface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgReferenceCheckLock(__int64 a1, char a2)
{
  __int16 v3; // ebx^2
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rax

  v3 = WORD1(a1);
  v4 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v5 = 0LL;
  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 8) + 16LL))(*(_QWORD *)(v6 + 8), v4);
  if ( v7 && *(_BYTE *)(v7 + 14) == a2 && *(_WORD *)(v7 + 12) == v3 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 8) + 96LL))(*(_QWORD *)(v6 + 8), v4);
  return v5;
}
