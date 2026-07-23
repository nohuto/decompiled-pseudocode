/*
 * XREFs of LdrpArmProcessRelocation @ 0x1800D5550
 * Callers:
 *     LdrProcessRelocationBlockLongLong @ 0x1800D5400 (LdrProcessRelocationBlockLongLong.c)
 *     LdrpThumbProcessRelocation @ 0x1800D561C (LdrpThumbProcessRelocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpArmProcessRelocation(_WORD *a1, __int64 a2, int a3)
{
  unsigned int *v3; // r10
  unsigned int v4; // r11d
  unsigned int v5; // r9d
  unsigned int v6; // edx

  v3 = (unsigned int *)(a2 + (*a1 & 0xFFC));
  v4 = 1;
  if ( (*a1 & 0xF000) == 0x5000 )
  {
    v5 = v3[1];
    v6 = (a3
        + (*v3 & 0xFFF | (*v3 >> 4) & 0xF000 | ((v5 & 0xFFF) << 16) | ((unsigned __int16)(v5 >> 4) << 16) & 0xF0000000)) >> 16;
    *v3 = *v3 & 0xFFF0F000 | ((_WORD)a3 + (*v3 & 0xFFF | (*v3 >> 4) & 0xF000)) & 0xFFF | (16
                                                                                        * (((_WORD)a3
                                                                                          + (*v3 & 0xFFF | (*v3 >> 4) & 0xF000)) & 0xF000));
    v3[1] = v5 & 0xFFF0F000 | v6 & 0xFFF | (16 * (v6 & 0xF000));
  }
  else
  {
    return 0;
  }
  return v4;
}
