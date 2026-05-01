/*
 * XREFs of std::call_once__lambda_f5c7a19be5cc201203fc8ae0f408e847___ @ 0x1804523F4
 * Callers:
 *     ?get_Current@?$produce@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication_WASDKStatics@345678@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180453BC0 (-get_Current@-$produce@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shel.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18044AF10 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator() @ 0x180452A90 (_lambda_f5c7a19be5cc201203fc8ae0f408e847_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_f5c7a19be5cc201203fc8ae0f408e847___(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL fPending; // [rsp+30h] [rbp-18h] BYREF

  fPending = 0;
  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v4[0] = a1;
    lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator()(a2);
    v4[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v4);
  }
}
