/*
 * XREFs of ?GetSubgraphShaderLinkingBody@CPassthroughEffect@@UEBA?AUShaderLinkingBody@@I@Z @ 0x1801CE790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPassthroughEffect::GetSubgraphShaderLinkingBody(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 1LL;
  *(_QWORD *)(a2 + 8) = &CPassthroughEffect::k_shaderLinkingArguments;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = "NoOp";
  result = a2;
  *(_BYTE *)(a2 + 46) = 1;
  *(_DWORD *)(a2 + 40) = 0;
  *(_WORD *)(a2 + 44) = 10;
  return result;
}
