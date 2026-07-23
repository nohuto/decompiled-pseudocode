/*
 * XREFs of sub_1409E99A0 @ 0x1409E99A0
 * Callers:
 *     sub_1409E960C @ 0x1409E960C (sub_1409E960C.c)
 *     sub_1409E9B88 @ 0x1409E9B88 (sub_1409E9B88.c)
 *     sub_1409EA1DC @ 0x1409EA1DC (sub_1409EA1DC.c)
 *     sub_1409EB278 @ 0x1409EB278 (sub_1409EB278.c)
 *     sub_1409EBBDC @ 0x1409EBBDC (sub_1409EBBDC.c)
 *     WbHeapExecutionUnloadModule @ 0x140AF0A5C (WbHeapExecutionUnloadModule.c)
 * Callees:
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409E9A1C @ 0x1409E9A1C (sub_1409E9A1C.c)
 */

signed __int64 __fastcall sub_1409E99A0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      if ( *(_QWORD *)(a2 + 40) )
      {
        sub_1409E9A1C(a1);
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      SddlpFree(a2);
    }
  }
  return v2;
}
