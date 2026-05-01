/*
 * XREFs of ?get_ProxiedWindowInfo@UwpWindowWrapperBase@@UEAAJPEAUProxiedWindowInfo@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180434240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowWrapperBase::get_ProxiedWindowInfo(
        UwpWindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::ProxiedWindowInfo *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  return result;
}
