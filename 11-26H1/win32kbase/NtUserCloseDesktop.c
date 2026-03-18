/*
 * XREFs of NtUserCloseDesktop @ 0x1401E2600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserCloseDesktop(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  LODWORD(result) = 0;
  if ( *(_QWORD *)(v2 + 656) )
    LODWORD(result) = (*(__int64 (__fastcall **)(__int64))(v2 + 656))(a1);
  return (int)result;
}
