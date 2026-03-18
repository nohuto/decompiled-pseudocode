/*
 * XREFs of MiMemoryClassBasicInfo @ 0x140AA32A0
 * Callers:
 *     MiQueryBasicInfo @ 0x140AA3200 (MiQueryBasicInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiMemoryClassBasicInfo(int a1)
{
  return (a1 & 0xFFFFFFF7) == 0 || a1 == 10;
}
