/*
 * XREFs of ??$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180076710
 * Callers:
 *     ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x180052BDC (--$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@-$vector@UContextu.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180076780 (--$_Destroy_range@V-$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@.c)
 */

char *__fastcall std::_Uninitialized_move<ContextualProcessorManager::ContextualProcessorEntry *>(
        char *a1,
        char *a2,
        char *a3)
{
  char *v4; // r8
  signed __int64 v6; // r10
  signed __int64 v7; // r11
  char *v8; // rdx
  int v9; // ecx

  v4 = a1;
  if ( a1 != a2 )
  {
    v6 = a1 - a3;
    v7 = a3 - a1;
    do
    {
      *(_QWORD *)a3 = 0LL;
      if ( a3 != v4 )
      {
        *(_QWORD *)a3 = *(_QWORD *)v4;
        *(_QWORD *)v4 = 0LL;
      }
      v8 = &v4[v7];
      a3 += 16;
      v9 = *(_DWORD *)&v4[v7 + 8 + v6];
      v4 += 16;
      *((_DWORD *)v8 + 2) = v9;
    }
    while ( v4 != a2 );
  }
  std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(a3, a3, v4, a2);
  return a3;
}
