/*
 * XREFs of ApiSetCheckCursorClipAccess @ 0x1400637E8
 * Callers:
 *     NtUserGetClipCursor @ 0x140063870 (NtUserGetClipCursor.c)
 *     NtUserClipCursor @ 0x140107790 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x14011D610 (NtUserLockCursor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetCheckCursorClipAccess(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  unsigned int (__fastcall *v6)(_QWORD, _QWORD); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 7272LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 7280LL);
      if ( v6 )
        return v6(a1, a2);
    }
  }
  return v4;
}
