/*
 * XREFs of ??$__builtin_array_init_helper@UShaderLinkingSamplerDesc@@@@YAXPEAUShaderLinkingSamplerDesc@@_K@Z @ 0x1800FA2A0
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800F9FB0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall __builtin_array_init_helper<ShaderLinkingSamplerDesc>(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = "NoOp";
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 26) = 0;
  *(_WORD *)(a1 + 30) = 0;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32) = "NoOp";
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 58) = 0;
  *(_WORD *)(a1 + 62) = 0;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 64) = "NoOp";
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 90) = 0;
  *(_WORD *)(a1 + 94) = 0;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 96) = "NoOp";
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 122) = 0;
  *(_WORD *)(a1 + 126) = 0;
  return result;
}
