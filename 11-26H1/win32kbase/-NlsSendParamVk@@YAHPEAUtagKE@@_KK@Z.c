/*
 * XREFs of ?NlsSendParamVk@@YAHPEAUtagKE@@_KK@Z @ 0x14021D590
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsSendParamVk(struct tagKE *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax

  result = 1LL;
  *((_WORD *)a1 + 1) = a3 | *((_WORD *)a1 + 1) & 0x8F00;
  return result;
}
