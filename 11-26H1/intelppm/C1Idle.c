/*
 * XREFs of C1Idle @ 0x140009AF0
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x140010320 (C1Halt.c)
 *     IssueVerw @ 0x140010360 (IssueVerw.c)
 */

void __fastcall __noreturn C1Idle(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = a2;
  if ( (_WORD)a2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  v3 = HIWORD(v2);
  if ( HIWORD(v2) )
    IssueVerw(v3, a2);
  C1Halt(v3, a2);
}
