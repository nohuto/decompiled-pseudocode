/*
 * XREFs of IsWin32KSyscallFiltered @ 0x1400DE5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsWin32KSyscallFiltered(unsigned int a1)
{
  unsigned int Win32KFilterSet; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  Win32KFilterSet = PsGetWin32KFilterSet();
  if ( Win32KFilterSet >= 7 )
    return 1;
  _mm_lfence();
  v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 8LL * Win32KFilterSet + 70728);
  return v5 && ((unsigned __int8)(1 << (a1 & 7)) & *(_BYTE *)(((unsigned __int64)a1 >> 3) + v5)) != 0;
}
