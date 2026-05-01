/*
 * XREFs of ?get_TouchInputRoutingInfo@WindowWrapperBase@@UEAAJPEAUInputRoutingInfo@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180440960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowWrapperBase::get_TouchInputRoutingInfo(
        WindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::InputRoutingInfo *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  return result;
}
