/*
 * XREFs of SetIAMThreadInfo @ 0x140227C5C
 * Callers:
 *     NtUserAcquireIAMKey @ 0x140224870 (NtUserAcquireIAMKey.c)
 * Callees:
 *     <none>
 */

void __fastcall SetIAMThreadInfo(__int64 a1, __int64 a2)
{
  if ( a2 )
    *(_DWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 288) = a2;
}
