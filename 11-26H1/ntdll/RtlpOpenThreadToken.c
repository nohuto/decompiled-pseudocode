/*
 * XREFs of RtlpOpenThreadToken @ 0x1800D2BB0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1800D2850 (RtlAcquirePrivilege.c)
 * Callees:
 *     NtOpenThreadTokenEx @ 0x18015F520 (NtOpenThreadTokenEx.c)
 */

__int64 __fastcall RtlpOpenThreadToken(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = 1;
  result = NtOpenThreadTokenEx(-2LL, a1, a3, 512LL, a2);
  if ( (int)result < 0 )
    return NtOpenThreadTokenEx(-2LL, a1, 0LL, 512LL, a2);
  return result;
}
