/*
 * XREFs of _anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy @ 0x1805B0FE0
 * Callers:
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805AE3A0 (_anonymous_namespace_--GetDashboardExtensionName.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18043E8E8 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_3b5ffae6afd814ed3ce8dd3dc657fc2a_::operator() @ 0x1805A88F0 (_lambda_3b5ffae6afd814ed3ce8dd3dc657fc2a_--operator().c)
 */

// Hidden C++ exception states: #wind=1
char anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF

  fPending = 0;
  if ( !__std_init_once_begin_initialize(&InitOnce, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v1[0] = &InitOnce;
    lambda_3b5ffae6afd814ed3ce8dd3dc657fc2a_::operator()();
    v1[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v1);
  }
  return byte_18089D038;
}
