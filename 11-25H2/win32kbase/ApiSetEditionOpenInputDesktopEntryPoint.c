/*
 * XREFs of ApiSetEditionOpenInputDesktopEntryPoint @ 0x14011D898
 * Callers:
 *     NtUserOpenInputDesktop @ 0x14011D880 (NtUserOpenInputDesktop.c)
 * Callees:
 *     EditionOpenInputDesktopEntryPoint @ 0x140111A90 (EditionOpenInputDesktopEntryPoint.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionOpenInputDesktopEntryPoint(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  int (*v7)(void); // rax

  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 664LL);
  if ( v7 && v7() >= 0 )
    return EditionOpenInputDesktopEntryPoint(v5, v4, a3);
  return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v6;
}
