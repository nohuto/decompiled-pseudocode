/*
 * XREFs of ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400D6768
 * Callers:
 *     CitSetInfo @ 0x1400D5810 (CitSetInfo.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1400D3E48 (-CitpLastInputUpdate@@YAXGI@Z.c)
 */

__int64 __fastcall CitpSetOtherInputInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, int a3)
{
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 18952);
  v6 = *(_QWORD *)(v4 + 32);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    CurrentProcessWin32Process = *(_QWORD *)(v6 + 120);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( CurrentProcessWin32Process != *(_QWORD *)(v6 + 120) )
      return 3221225659LL;
  }
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  CitpLastInputUpdate(
    *(_WORD *)a2,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    v5);
  return 0LL;
}
