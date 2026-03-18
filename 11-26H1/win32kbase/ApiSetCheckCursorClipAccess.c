/*
 * XREFs of ApiSetCheckCursorClipAccess @ 0x1401BEB4C
 * Callers:
 *     NtUserGetClipCursor @ 0x140082750 (NtUserGetClipCursor.c)
 *     NtUserClipCursor @ 0x1401E2460 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x1401E7A00 (NtUserLockCursor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetCheckCursorClipAccess(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(_QWORD, _QWORD); // rax

  v3 = a1;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6832LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 6840LL);
      if ( v7 )
        return v7(v3, a2);
    }
  }
  return v4;
}
