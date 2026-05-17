/*
 * XREFs of RtlWow64ChangeProcessState @ 0x1801385A0
 * Callers:
 *     <none>
 * Callees:
 *     NtChangeProcessState @ 0x180160230 (NtChangeProcessState.c)
 */

__int64 __fastcall RtlWow64ChangeProcessState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  if ( (_DWORD)a3 )
    return NtChangeProcessState(a1, a2);
  if ( a5 )
    return 3221225476LL;
  if ( a4 || a6 )
    return 3221225485LL;
  LOBYTE(a3) = 2;
  return RtlpWow64SuspendProcess(a2, a1, a3);
}
