/*
 * XREFs of ?Release@?$implements_delegate@UTimerElapsedHandler@Threading@System@Windows@winrt@@V_lambda_f210800fbf57ce5098226aba23373400_@@@impl@winrt@@UEAAIXZ @ 0x180362AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_f210800fbf57ce5098226aba23373400_>::Release(
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
