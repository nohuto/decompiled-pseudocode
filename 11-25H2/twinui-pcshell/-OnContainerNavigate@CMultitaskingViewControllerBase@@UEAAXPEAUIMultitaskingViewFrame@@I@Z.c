/*
 * XREFs of ?OnContainerNavigate@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@I@Z @ 0x1804B2C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewControllerBase::OnContainerNavigate(
        CMultitaskingViewControllerBase *this,
        struct IMultitaskingViewFrame *a2,
        int a3)
{
  (*(void (__fastcall **)(struct IMultitaskingViewFrame *, _QWORD, _QWORD))(*(_QWORD *)a2 + 104LL))(
    a2,
    0LL,
    (unsigned int)(a3 != 5) + 7);
}
