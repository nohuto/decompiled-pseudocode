/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::Run @ 0x1804B2CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x180090598 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??$SwitchToItemCompleted@AEAJPEBG@MultitaskingViewTelemetry@@SAXAEAJ$$QEAPEBG@Z @ 0x1804B2588 (--$SwitchToItemCompleted@AEAJPEBG@MultitaskingViewTelemetry@@SAXAEAJ$$QEAPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::Run(
        __int64 a1)
{
  int v2; // eax
  const WCHAR *v3; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  const unsigned __int16 *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)(a1 + 24));
  v3 = *(const WCHAR **)(a1 + 32);
  v5 = v2;
  v6 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v3);
  return MultitaskingViewTelemetry::SwitchToItemCompleted<long &,unsigned short const *>(&v5, (__int64 *)&v6);
}
