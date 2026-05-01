/*
 * XREFs of ?GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGPEAH@Z @ 0x1806916B0
 * Callers:
 *     ?GetPinnableInfo@CPinnedList@@W7EAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGPEAH@Z @ 0x180688F80 (-GetPinnableInfo@CPinnedList@@W7EAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAG.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068E674 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_GetPinnableInfoImpl@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@3PEAPEAGPEAH@Z @ 0x18069983C (-_GetPinnableInfoImpl@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 */

__int64 __fastcall CPinnedList::GetPinnableInfo(
        __int64 a1,
        struct IDataObject *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _DWORD *a7)
{
  unsigned int PinnableInfoImpl; // ebp
  LPITEMIDLIST pidl; // [rsp+40h] [rbp-48h] BYREF

  PinnableInfoImpl = 1;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  pidl = 0LL;
  if ( (int)DataObj_GetIDList(a2, DOGIF_ONLY_IF_ONE|DOGIF_NO_HDROP, &pidl) < 0 )
  {
    if ( a7 )
      *a7 = 0;
  }
  else
  {
    PinnableInfoImpl = CPinnedList::_GetPinnableInfoImpl(a1 - 16, pidl, 0LL, a3, a4, a5, a6, a7);
    ILFree(pidl);
  }
  return PinnableInfoImpl;
}
