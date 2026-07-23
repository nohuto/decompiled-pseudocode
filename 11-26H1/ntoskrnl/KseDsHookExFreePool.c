/*
 * XREFs of KseDsHookExFreePool @ 0x140601390
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolFree @ 0x140601EFC (KsepDsEventPoolFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1, __int64 a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  guard_dispatch_icall_no_overrides(a1, a2);
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
