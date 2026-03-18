/*
 * XREFs of PsGetJobServerSilo @ 0x1404F8CE0
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140216800 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetJobServerSilo(__int64 a1, __int64 *a2)
{
  if ( a1 )
  {
    *a2 = PsGetEffectiveServerSilo(a1);
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 3221225485LL;
  }
}
