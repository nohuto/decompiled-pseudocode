/*
 * XREFs of ?SetSite@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z @ 0x1805C3030
 * Callers:
 *     <none>
 * Callees:
 *     ?copy_ref@?$com_ptr@UIUnknown@@@winrt@@AEAAXPEAUIUnknown@@@Z @ 0x1800B7B08 (-copy_ref@-$com_ptr@UIUnknown@@@winrt@@AEAAXPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall SnapLauncher::SnapWindowProvider::SetSite(
        SnapLauncher::SnapWindowProvider *this,
        struct IUnknown *a2)
{
  winrt::com_ptr<IUnknown>::copy_ref((__int64 *)this + 5, (__int64)a2);
  return 0LL;
}
