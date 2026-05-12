/*
 * XREFs of sub_1400BDDF4 @ 0x1400BDDF4
 * Callers:
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400C85F8 @ 0x1400C85F8 (sub_1400C85F8.c)
 *     sub_1400CF37C @ 0x1400CF37C (sub_1400CF37C.c)
 *     sub_1400FC314 @ 0x1400FC314 (sub_1400FC314.c)
 *     sub_140193330 @ 0x140193330 (sub_140193330.c)
 *     sub_14019FD80 @ 0x14019FD80 (sub_14019FD80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400BDDF4(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, __int64 a6)
{
  unsigned int v6; // eax
  unsigned int v7; // r9d
  __int64 v9; // rax

  if ( (a3 & 0xFFF) != 0 )
    return 0LL;
  v6 = 0;
  if ( !a4 )
    return 0LL;
  *(_QWORD *)(a2 + 24) = a3;
  v7 = (unsigned int)(a4 + 4095) >> 12;
  if ( v7 == 1 )
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    return 1LL;
  }
  else
  {
    if ( v7 == 2 )
    {
      v9 = a3 + 4096;
    }
    else
    {
      do
        *a5++ = a3 + (++v6 << 12);
      while ( v6 < v7 - 1 );
      v9 = a6;
    }
    *(_QWORD *)(a2 + 32) = v9;
    return v7;
  }
}
