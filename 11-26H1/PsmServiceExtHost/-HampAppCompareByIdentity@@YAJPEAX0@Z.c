/*
 * XREFs of ?HampAppCompareByIdentity@@YAJPEAX0@Z @ 0x180036450
 * Callers:
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x180036364 (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall HampAppCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  return _wcsicmp(a1, a2 + 48);
}
