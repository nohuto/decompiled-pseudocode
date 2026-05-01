/*
 * XREFs of ?SHILCloneFirst@@YAJPEFBU_ITEMIDLIST_RELATIVE@@PEAPEAU_ITEMID_CHILD@@@Z @ 0x1806A3F60
 * Callers:
 *     ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x1806A3920 (-GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHILCloneFirst(const ITEMIDLIST *a1, struct _ITEMID_CHILD **a2)
{
  struct _ITEMID_CHILD *v3; // rax

  v3 = (struct _ITEMID_CHILD *)ILCloneFirst(a1);
  *a2 = v3;
  return v3 == 0LL ? 0x8007000E : 0;
}
