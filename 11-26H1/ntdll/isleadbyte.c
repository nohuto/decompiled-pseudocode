/*
 * XREFs of isleadbyte @ 0x18012AA88
 * Callers:
 *     ReadString @ 0x180131738 (ReadString.c)
 *     _input_l @ 0x180131AA0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
