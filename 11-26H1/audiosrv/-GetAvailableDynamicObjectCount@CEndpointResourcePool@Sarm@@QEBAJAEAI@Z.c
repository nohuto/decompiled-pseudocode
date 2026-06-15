/*
 * XREFs of ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x1800ACD58
 * Callers:
 *     ?GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ @ 0x180127CDC (-GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801279C4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount(
        Sarm::CEndpointResourcePool *this,
        unsigned int *a2)
{
  __int64 v2; // r8
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  if ( !v2 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x8F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0100LL,
      v4);
  *a2 = *(_DWORD *)(v2 + 20) - *(_DWORD *)(v2 + 24);
  return 0LL;
}
