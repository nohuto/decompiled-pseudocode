/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x140097F7C
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1402684EC (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14002E224 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r11
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 != a1 + 24 )
    v3 = v4 - 8;
  while ( v3 )
  {
    if ( v3 == a2 )
      return 0;
    v5 = *(_QWORD *)(v3 + 8);
    v3 = v5 - 8;
    if ( v5 == a1 + 24 )
      v3 = 0LL;
  }
  if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
         a1 + 8,
         a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 108;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v7 = *(_QWORD **)(v6 + 24);
    v8 = (_QWORD *)(a2 + 8);
    if ( *v7 != v6 + 16 )
      __fastfail(3u);
    *v8 = v6 + 16;
    *(_QWORD *)(a2 + 16) = v7;
    *v7 = v8;
    *(_QWORD *)(v6 + 24) = v8;
    ++*(_QWORD *)(v6 + 32);
  }
  return 1;
}
