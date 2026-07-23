/*
 * XREFs of PfTTraceListFree @ 0x140AF87AC
 * Callers:
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     PfTTraceListAdd @ 0x140AF85FC (PfTTraceListAdd.c)
 * Callees:
 *     PfTFreeTraceDump @ 0x1404DA0E8 (PfTFreeTraceDump.c)
 */

void __fastcall PfTTraceListFree(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax

  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v4[1] != a2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    v5[1] = a2;
    PfTFreeTraceDump(a1, v4);
  }
}
