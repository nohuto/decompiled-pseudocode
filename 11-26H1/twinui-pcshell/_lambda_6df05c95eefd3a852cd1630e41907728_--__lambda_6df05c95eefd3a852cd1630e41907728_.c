/*
 * XREFs of _lambda_6df05c95eefd3a852cd1630e41907728_::__lambda_6df05c95eefd3a852cd1630e41907728_ @ 0x1803047AC
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___ @ 0x1803040AC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::_CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___ @ 0x18030484C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___--_CTask.c)
 * Callees:
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_ @ 0x1803047FC (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_.c)
 */

__int64 __fastcall lambda_6df05c95eefd3a852cd1630e41907728_::__lambda_6df05c95eefd3a852cd1630e41907728_(__int64 *a1)
{
  lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_(a1 + 2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
