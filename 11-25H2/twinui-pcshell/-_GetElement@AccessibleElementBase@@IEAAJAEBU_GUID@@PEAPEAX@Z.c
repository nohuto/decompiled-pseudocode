/*
 * XREFs of ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804C00EC
 * Callers:
 *     ?GetItem@AccessibleElementBase@@UEAAJHHPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804BEF80 (-GetItem@AccessibleElementBase@@UEAAJHHPEAPEAUIRawElementProviderSimple@@@Z.c)
 *     ?Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z @ 0x1804BFC50 (-Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z.c)
 *     ?SetScrollPercent@AccessibleElementBase@@UEAAJNN@Z @ 0x1804BFF20 (-SetScrollPercent@AccessibleElementBase@@UEAAJNN@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804C0120 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z @ 0x1804C0138 (-_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z.c)
 *     ?get_ColumnCount@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804C0640 (-get_ColumnCount@AccessibleElementBase@@UEAAJPEAH@Z.c)
 *     ?get_HorizontalScrollPercent@AccessibleElementBase@@UEAAJPEAN@Z @ 0x1804C08F0 (-get_HorizontalScrollPercent@AccessibleElementBase@@UEAAJPEAN@Z.c)
 *     ?get_HorizontalViewSize@AccessibleElementBase@@UEAAJPEAN@Z @ 0x1804C09A0 (-get_HorizontalViewSize@AccessibleElementBase@@UEAAJPEAN@Z.c)
 *     ?get_HorizontallyScrollable@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804C0A50 (-get_HorizontallyScrollable@AccessibleElementBase@@UEAAJPEAH@Z.c)
 *     ?get_RowCount@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804C0C20 (-get_RowCount@AccessibleElementBase@@UEAAJPEAH@Z.c)
 *     ?get_VerticalScrollPercent@AccessibleElementBase@@UEAAJPEAN@Z @ 0x1804C0D70 (-get_VerticalScrollPercent@AccessibleElementBase@@UEAAJPEAN@Z.c)
 *     ?get_VerticalViewSize@AccessibleElementBase@@UEAAJPEAN@Z @ 0x1804C0E20 (-get_VerticalViewSize@AccessibleElementBase@@UEAAJPEAN@Z.c)
 *     ?get_VerticallyScrollable@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804C0ED0 (-get_VerticallyScrollable@AccessibleElementBase@@UEAAJPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AccessibleElementBase::_GetElement(AccessibleElementBase *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const struct _GUID *))(**((_QWORD **)this + 14) + 24LL))(
         *((_QWORD *)this + 14),
         a2) < 0 )
    return (unsigned int)-2147220991;
  return v3;
}
