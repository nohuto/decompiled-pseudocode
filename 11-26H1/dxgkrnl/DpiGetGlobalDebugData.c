/*
 * XREFs of DpiGetGlobalDebugData @ 0x140085690
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140389910 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetGlobalDebugData(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 2;
  *(_BYTE *)(a1 + 4) = word_140168DDD;
  result = 0LL;
  *(_BYTE *)(a1 + 5) = 0;
  return result;
}
