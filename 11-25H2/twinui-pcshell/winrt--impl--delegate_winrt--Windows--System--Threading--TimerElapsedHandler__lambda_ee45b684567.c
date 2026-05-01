/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke @ 0x18021AB00
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C872C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x18058684C (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@AEAAXXZ @ 0x180586A80 (-unconditional_release_ref@-$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  SnapInteraction::InteractionTracker *v2; // [rsp+30h] [rbp+8h] BYREF

  winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)&v2);
  try
  {
    if ( v2 )
      SnapInteraction::InteractionTracker::UpdateTelemetry(v2);
    if ( v2 )
      winrt::com_ptr<SnapInteraction::InteractionTracker>::unconditional_release_ref(&v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v2);
  }
  return result;
}
