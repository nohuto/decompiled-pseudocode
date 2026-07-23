/*
 * XREFs of EmProviderRegister @ 0x14078FD30
 * Callers:
 *     <none>
 * Callees:
 *     EmpProviderRegister @ 0x140B5B680 (EmpProviderRegister.c)
 */

__int64 __fastcall EmProviderRegister(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  if ( a1 )
    return EmpProviderRegister(a1, a2, a3, a4, a5, a6);
  else
    return 3221225485LL;
}
