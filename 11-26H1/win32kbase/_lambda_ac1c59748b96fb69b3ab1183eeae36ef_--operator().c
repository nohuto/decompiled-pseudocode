/*
 * XREFs of _lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator() @ 0x140244DE4
 * Callers:
 *     ?EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140244FF0 (-EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator()(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 174;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(*a1 + 32);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(*a1 + 192);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(*a1 + 196);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(*a1 + 200);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*a1 + 184);
  result = *a1;
  *(_BYTE *)(a2 + 32) = (*(_DWORD *)(*a1 + 16) & 0x80000) == 0;
  return result;
}
