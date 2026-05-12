/*
 * XREFs of sub_140056650 @ 0x140056650
 * Callers:
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_14017F1A8 @ 0x14017F1A8 (sub_14017F1A8.c)
 * Callees:
 *     sub_140056688 @ 0x140056688 (sub_140056688.c)
 */

__int64 sub_140056650()
{
  if ( (dword_140169688 & 0x10) != 0 )
    return dword_140169688 & 1;
  else
    return sub_140056688((unsigned int)dword_140169688, 3LL);
}
