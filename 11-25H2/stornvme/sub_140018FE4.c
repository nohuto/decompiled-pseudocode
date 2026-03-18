/*
 * XREFs of sub_140018FE4 @ 0x140018FE4
 * Callers:
 *     sub_14000EBE0 @ 0x14000EBE0 (sub_14000EBE0.c)
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 * Callees:
 *     sub_14001901C @ 0x14001901C (sub_14001901C.c)
 */

__int64 sub_140018FE4()
{
  if ( (dword_140042348 & 0x10) != 0 )
    return dword_140042348 & 1;
  else
    return sub_14001901C((unsigned int)dword_140042348, 3LL);
}
