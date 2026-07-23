/*
 * XREFs of KseDsHookExAllocatePoolWithTag @ 0x140601320
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolAllocate @ 0x140601E00 (KsepDsEventPoolAllocate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExAllocatePoolWithTag(__int64 a1, __int64 a2, char a3)
{
  int v4; // esi
  int v5; // ebp
  __int64 v6; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  v5 = a1;
  v6 = guard_dispatch_icall_no_overrides(a1, a2);
  KsepDsEventPoolAllocate(v6, (_DWORD)retaddr, v5, v4, a3);
  return v6;
}
