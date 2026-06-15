/*
 * XREFs of sub_14004A104 @ 0x14004A104
 * Callers:
 *     sub_140049120 @ 0x140049120 (sub_140049120.c)
 * Callees:
 *     <none>
 */

bool sub_14004A104()
{
  HMODULE ModuleHandleW; // rax
  __int64 v1; // rcx
  bool result; // al

  ModuleHandleW = GetModuleHandleW(0LL);
  result = ModuleHandleW
        && *(_WORD *)ModuleHandleW == 23117
        && (v1 = *((int *)ModuleHandleW + 15), *(_DWORD *)((char *)ModuleHandleW + v1) == 17744)
        && *(_WORD *)((char *)ModuleHandleW + v1 + 24) == 523
        && *(_DWORD *)((char *)ModuleHandleW + v1 + 132) > 0xEu
        && *(_DWORD *)((char *)ModuleHandleW + v1 + 248) != 0;
  return result;
}
