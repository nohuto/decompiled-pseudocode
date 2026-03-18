/*
 * XREFs of InvokePauseCallbacks @ 0x14004DD10
 * Callers:
 *     RunContext @ 0x140009490 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_14008EBA0;
    if ( (__int64 *)qword_14008EBA0 == &qword_14008EBA0 )
      break;
    if ( *(__int64 **)(qword_14008EBA0 + 8) != &qword_14008EBA0
      || (v1 = *(_QWORD *)qword_14008EBA0, *(_QWORD *)(*(_QWORD *)qword_14008EBA0 + 8LL) != qword_14008EBA0) )
    {
      __fastfail(3u);
    }
    qword_14008EBA0 = *(_QWORD *)qword_14008EBA0;
    *(_QWORD *)(v1 + 8) = &qword_14008EBA0;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
