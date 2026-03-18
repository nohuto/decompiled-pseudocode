/*
 * XREFs of NtUserGetThreadDesktop @ 0x1401B6230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserGetThreadDesktop(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = a1;
  v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  result = 0LL;
  if ( *(_QWORD *)(v2 + 664) )
    return (*(__int64 (__fastcall **)(_QWORD))(v2 + 664))(v1);
  return result;
}
