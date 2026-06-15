/*
 * XREFs of sub_14004FC0C @ 0x14004FC0C
 * Callers:
 *     sub_140047FF8 @ 0x140047FF8 (sub_140047FF8.c)
 *     sub_14004EF30 @ 0x14004EF30 (sub_14004EF30.c)
 *     sub_14004EF80 @ 0x14004EF80 (sub_14004EF80.c)
 *     sub_14007E828 @ 0x14007E828 (sub_14007E828.c)
 *     sub_14007FC38 @ 0x14007FC38 (sub_14007FC38.c)
 *     sub_14007FD50 @ 0x14007FD50 (sub_14007FD50.c)
 *     sub_14007FE20 @ 0x14007FE20 (sub_14007FE20.c)
 *     sub_14007FE98 @ 0x14007FE98 (sub_14007FE98.c)
 * Callees:
 *     <none>
 */

FARPROC __fastcall sub_14004FC0C(const CHAR *a1)
{
  HMODULE ModuleHandleW; // rax

  ModuleHandleW = (HMODULE)qword_1400E84A8;
  if ( !qword_1400E84A8 )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    qword_1400E84A8 = (__int64)ModuleHandleW;
  }
  return GetProcAddress(ModuleHandleW, a1);
}
