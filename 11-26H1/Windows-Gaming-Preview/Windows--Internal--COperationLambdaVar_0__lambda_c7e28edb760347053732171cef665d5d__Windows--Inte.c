/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::_scalar_deleting_destructor_ @ 0x18001B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180001D50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_c7e28edb760347053732171cef665d5d_::__lambda_c7e28edb760347053732171cef665d5d_ @ 0x180018958 (_lambda_c7e28edb760347053732171cef665d5d_--__lambda_c7e28edb760347053732171cef665d5d_.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  `eh vector destructor iterator'(
    (char *)a1 + 40,
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  lambda_c7e28edb760347053732171cef665d5d_::__lambda_c7e28edb760347053732171cef665d5d_((__int64 *)a1 + 1);
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
