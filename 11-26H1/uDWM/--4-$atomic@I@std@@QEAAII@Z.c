/*
 * XREFs of ??4?$atomic@I@std@@QEAAII@Z @ 0x180086C74
 * Callers:
 *     ?set_strong@?$weak_ref@$00$00@impl@winrt@@QEAAXI@Z @ 0x180086C64 (-set_strong@-$weak_ref@$00$00@impl@winrt@@QEAAXI@Z.c)
 * Callees:
 *     ?store@?$_Atomic_storage@I$03@std@@QEAAXI@Z @ 0x180086C90 (-store@-$_Atomic_storage@I$03@std@@QEAAXI@Z.c)
 */

__int64 __fastcall std::atomic<unsigned int>::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d

  std::_Atomic_storage<unsigned int,4>::store(a1, a2, a3, (unsigned int)a2);
  return v3;
}
