/*
 * XREFs of ?ExpLookasideMgrAllocatePoolOnNode@@YAPEAXK_K@Z @ 0x14083A8C8
 * Callers:
 *     ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x140846BD0 (-ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z.c)
 *     ?ExpLookasideMgrWorkerSetAllocate@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@PEAU_EXP_LOOKASIDE_MGR@@KK@Z @ 0x140846E58 (-ExpLookasideMgrWorkerSetAllocate@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@PEAU_EXP_LOOKASIDE_MGR@.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140C10010 (ExAllocatePool3.c)
 */

__int64 __fastcall ExpLookasideMgrAllocatePoolOnNode(int a1, __int64 a2)
{
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  LOBYTE(v3) = 3;
  *(_QWORD *)&v3 = v3 | 0x100;
  DWORD2(v3) = a1 | 0x80000000;
  return ExAllocatePool3(64LL, a2, 1835819372LL, &v3, 1);
}
