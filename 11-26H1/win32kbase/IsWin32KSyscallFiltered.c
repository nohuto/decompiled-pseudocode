/*
 * XREFs of IsWin32KSyscallFiltered @ 0x140125DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsWin32KSyscallFiltered(unsigned int a1)
{
  unsigned int Win32KFilterSet; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // r8

  Win32KFilterSet = PsGetWin32KFilterSet();
  if ( Win32KFilterSet >= 7 )
    return 1;
  _mm_lfence();
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 8LL * Win32KFilterSet + 70712);
  return v6 && ((unsigned __int8)(1 << (a1 & 7)) & *(_BYTE *)(((unsigned __int64)a1 >> 3) + v6)) != 0;
}
