/*
 * XREFs of ?Release@?$weak_ref@$0A@$00@impl@winrt@@UEAAIXZ @ 0x18044CDB0
 * Callers:
 *     ?decrement_strong@?$weak_ref@$0A@$00@impl@winrt@@QEAAIXZ @ 0x1802C3090 (-decrement_strong@-$weak_ref@$0A@$00@impl@winrt@@QEAAIXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x18044D460 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(Block + 7);
  if ( !v2 && Block )
  {
    winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
    operator delete((void *)Block);
  }
  return v2;
}
