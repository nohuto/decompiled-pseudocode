/*
 * XREFs of _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x1801D04CC
 * Callers:
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800AB768 (-GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBU.c)
 *     _anonymous_namespace_::DisableBufferingForInteraction @ 0x1801D0454 (_anonymous_namespace_--DisableBufferingForInteraction.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall anonymous_namespace_::AllSupportedWithSingleTarget(__int64 a1, unsigned int a2)
{
  char v4; // bl
  __int64 v5; // rax

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1)
    && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5 + 80LL))(v5, a2, 2LL) != 0;
  }
  return v4;
}
