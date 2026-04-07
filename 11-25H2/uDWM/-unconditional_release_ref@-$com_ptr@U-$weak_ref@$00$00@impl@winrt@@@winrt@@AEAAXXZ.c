/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800D438C
 * Callers:
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18009061C (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::impl::weak_ref<1,1>::Release(v2);
}
