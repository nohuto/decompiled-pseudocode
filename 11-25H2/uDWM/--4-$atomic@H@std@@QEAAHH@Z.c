/*
 * XREFs of ??4?$atomic@H@std@@QEAAHH@Z @ 0x18009D35C
 * Callers:
 *     ??4atomic_ref_count@impl@winrt@@QEAAII@Z @ 0x18009D378 (--4atomic_ref_count@impl@winrt@@QEAAII@Z.c)
 * Callees:
 *     ?store@?$_Atomic_storage@H$03@std@@QEAAXH@Z @ 0x18009FCC0 (-store@-$_Atomic_storage@H$03@std@@QEAAXH@Z.c)
 */

__int64 std::atomic<int>::operator=()
{
  std::_Atomic_storage<int,4>::store();
  return 1LL;
}
