/*
 * XREFs of ?get_EventType@ViewEventArgsBase@@UEAAJPEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E6940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsBase::get_EventType(
        ViewEventArgsBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 12);
  return 0LL;
}
