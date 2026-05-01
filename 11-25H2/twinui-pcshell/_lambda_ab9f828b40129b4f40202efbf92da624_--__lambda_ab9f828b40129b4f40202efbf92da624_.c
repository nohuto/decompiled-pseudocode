/*
 * XREFs of _lambda_ab9f828b40129b4f40202efbf92da624_::__lambda_ab9f828b40129b4f40202efbf92da624_ @ 0x1802E39BC
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D41D0 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_f2aff480071fec97cde50b6ac374e769___ @ 0x1802E3434 (CIAMGlobals--QueueViewManagementTask__lambda_f2aff480071fec97cde50b6ac374e769___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624___::_CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624___ @ 0x1802E3B58 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624___--_CTask.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1803FDFB4 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_ab9f828b40129b4f40202efbf92da624_::__lambda_ab9f828b40129b4f40202efbf92da624_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
