/*
 * XREFs of isleadbyte @ 0x18012AD18
 * Callers:
 *     ReadString @ 0x1801319C8 (ReadString.c)
 *     _input_l @ 0x180131D30 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
