/*
 * XREFs of DpiIsRfxVgpuDevice @ 0x14023A3E0
 * Callers:
 *     ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140078E40 (-RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9E70 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiIsRfxVgpuDevice(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ecx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 64);
  result = v1
        && *(_DWORD *)(v1 + 16) == 1953656900
        && ((v2 = *(_DWORD *)(v1 + 20), v2 == 2) || v2 == 3)
        && *(_BYTE *)(v1 + 2718) != 0;
  return result;
}
