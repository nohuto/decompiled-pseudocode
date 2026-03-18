/*
 * XREFs of ?Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z @ 0x140288C88
 * Callers:
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x14026B5F4 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x14026D514 (-RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1402FBBEC (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ListEntry::Unlink(ListEntry ***this, struct _LIST_ENTRY *a2)
{
  ListEntry **v2; // rax
  ListEntry **v3; // rdx

  v2 = *this;
  if ( (*this)[1] != (ListEntry *)this || (v3 = this[1], *v3 != (ListEntry *)this) )
    __fastfail(3u);
  *v3 = (ListEntry *)v2;
  v2[1] = (ListEntry *)v3;
  this[1] = 0LL;
  *this = 0LL;
}
