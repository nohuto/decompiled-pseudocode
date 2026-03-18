/*
 * XREFs of ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x14004AAAC
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x14004A7CC (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x14004A894 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x14004A95C (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402A7B08 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContainedBy<DMMVIDPN>::SetContainer(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    *(_QWORD *)(a1 + 8) = a2;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, *(_QWORD *)(a1 + 8));
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 79;
  }
  return result;
}
