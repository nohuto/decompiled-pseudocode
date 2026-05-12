/*
 * XREFs of sub_1400A5524 @ 0x1400A5524
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400A555C @ 0x1400A555C (sub_1400A555C.c)
 */

__int64 sub_1400A5524()
{
  if ( (dword_140169690 & 0x10) != 0 )
    return dword_140169690 & 1;
  else
    return sub_1400A555C((unsigned int)dword_140169690, 3LL);
}
