/*
 * XREFs of sub_1400A5578 @ 0x1400A5578
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400A55B0 @ 0x1400A55B0 (sub_1400A55B0.c)
 */

__int64 sub_1400A5578()
{
  if ( (dword_140169708 & 0x10) != 0 )
    return dword_140169708 & 1;
  else
    return sub_1400A55B0((unsigned int)dword_140169708, 3LL);
}
