/*
 * XREFs of ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007D854
 * Callers:
 *     CitSetInfo @ 0x14007D270 (CitSetInfo.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x14007DB28 (-CitpLastInputUpdate@@YAXGI@Z.c)
 */

__int64 __fastcall CitpSetOtherInputInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  v4 = *(_QWORD *)(v3 + 32);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    CurrentProcessWin32Process = *(_QWORD *)(v4 + 120);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( CurrentProcessWin32Process != *(_QWORD *)(v4 + 120) )
      return 3221225659LL;
  }
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  CitpLastInputUpdate(*(_WORD *)a2, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return 0LL;
}
