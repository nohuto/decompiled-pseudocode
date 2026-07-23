/*
 * XREFs of ?ExpLookasideMgrSetTimer@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K@Z @ 0x140B2E800
 * Callers:
 *     ?ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x14084CFBC (-ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 *     ?ExpLookasideMgrIoCallback@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x140B2E720 (-ExpLookasideMgrIoCallback@@YAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ExSetTimer @ 0x14037C1D0 (ExSetTimer.c)
 */

void __fastcall ExpLookasideMgrSetTimer(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v2; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v3[0] = 0LL;
  v3[1] = -1LL;
  ExSetTimer(v2, -a2, 0LL, (ULONG_PTR)v3);
}
