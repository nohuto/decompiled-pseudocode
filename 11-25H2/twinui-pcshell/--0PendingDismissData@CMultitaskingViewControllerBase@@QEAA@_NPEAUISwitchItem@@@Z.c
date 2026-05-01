/*
 * XREFs of ??0PendingDismissData@CMultitaskingViewControllerBase@@QEAA@_NPEAUISwitchItem@@@Z @ 0x1804B2614
 * Callers:
 *     ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x1804B32AC (-_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CMultitaskingViewControllerBase::PendingDismissData *__fastcall CMultitaskingViewControllerBase::PendingDismissData::PendingDismissData(
        CMultitaskingViewControllerBase::PendingDismissData *this,
        char a2,
        struct ISwitchItem *a3)
{
  __int64 *v4; // rcx

  *(_BYTE *)this = 1;
  *((_BYTE *)this + 1) = a2;
  v4 = (__int64 *)((char *)this + 8);
  *v4 = (__int64)a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  return this;
}
