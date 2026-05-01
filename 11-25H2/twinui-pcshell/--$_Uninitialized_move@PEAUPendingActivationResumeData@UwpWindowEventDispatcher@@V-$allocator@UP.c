/*
 * XREFs of ??$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@0PEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x180151F28
 * Callers:
 *     ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x180151DCC (--$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@-$vector@UPending.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x1800FD100 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 */

char *__fastcall std::_Uninitialized_move<UwpWindowEventDispatcher::PendingActivationResumeData *>(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = &a3[-a1];
    do
    {
      v6 = *(_QWORD *)(v4 - 8);
      *(_QWORD *)(v4 - 8) = 0LL;
      *(_QWORD *)a3 = v6;
      a3 += 32;
      v7 = *(_QWORD *)v4;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4] = v7;
      *(_QWORD *)&v5[v4 + 8] = *(_QWORD *)(v4 + 8);
      *(_DWORD *)&v5[v4 + 16] = *(_DWORD *)(v4 + 16);
      v4 += 32LL;
    }
    while ( v4 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(a3, a3);
  return a3;
}
