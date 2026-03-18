/*
 * XREFs of NtUserOpenInputDesktop @ 0x1401E7F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserOpenInputDesktop(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // esi
  __int64 v6; // r9
  __int64 result; // rax

  v5 = a1;
  v6 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  result = 0LL;
  if ( *(_QWORD *)(v6 + 648) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v6 + 648))(v5, a2, a3);
  return result;
}
