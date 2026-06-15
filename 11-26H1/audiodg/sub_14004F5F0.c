/*
 * XREFs of sub_14004F5F0 @ 0x14004F5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004BAA4 @ 0x14004BAA4 (sub_14004BAA4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

FARPROC __fastcall sub_14004F5F0(__int64 a1)
{
  HMODULE ModuleHandleW; // rax
  FARPROC result; // rax

  ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
  result = sub_14004BAA4(ModuleHandleW);
  if ( result )
    return (FARPROC)sub_1400B6010(a1);
  return result;
}
