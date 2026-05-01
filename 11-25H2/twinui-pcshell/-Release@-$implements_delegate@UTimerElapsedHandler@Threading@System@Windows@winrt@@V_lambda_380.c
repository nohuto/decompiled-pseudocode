/*
 * XREFs of ?Release@?$implements_delegate@UTimerElapsedHandler@Threading@System@Windows@winrt@@V_lambda_3804bfd109d91ea783e715dd384c2590_@@@impl@winrt@@UEAAIXZ @ 0x18035BE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E9F14 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EAE8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_3804bfd109d91ea783e715dd384c2590_>::Release(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(Block + 2);
  if ( !v2 && Block )
  {
    winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
    operator delete((void *)Block);
  }
  return v2;
}
