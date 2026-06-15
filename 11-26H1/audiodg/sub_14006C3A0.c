/*
 * XREFs of sub_14006C3A0 @ 0x14006C3A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006C3A0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // r10d
  int v5; // ebx
  __int64 v6; // r11
  unsigned int v9; // edx
  __int64 v10; // r8
  unsigned __int64 v11; // xmm0_8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  while ( v5 >= 0 )
  {
    if ( (unsigned int)v6 >= a2 )
    {
      v5 = sub_1400B6010(a1);
      if ( v5 >= 0 )
        return (unsigned int)v5;
      break;
    }
    v9 = *(_DWORD *)(a4 + 4 * v6);
    v10 = *(_QWORD *)(a3 + 16LL * (unsigned int)v6);
    v11 = _mm_srli_si128(*(__m128i *)(a3 + 16LL * (unsigned int)v6), 8).m128i_u64[0];
    v12 = 0x4D8FFEC68CC6D81BLL - v10;
    if ( v10 == 0x4D8FFEC68CC6D81BLL )
      v12 = 0xDAD0D0BBACF4B96LL - v11;
    if ( v12 )
    {
      v13 = 0x4E16DF48FFC99B44LL - v10;
      if ( v10 == 0x4E16DF48FFC99B44LL )
        v13 = 0x8A57C1926809668EuLL - v11;
      if ( v13 )
      {
        v5 = -2147467263;
      }
      else
      {
        if ( v9 >= 0x100 )
        {
LABEL_20:
          v5 = -2147024809;
          break;
        }
        v14 = (unsigned __int8)v9;
        if ( v4 > (unsigned __int8)v9 )
          v14 = v4;
        v4 = v14;
      }
    }
    else
    {
      if ( v9 >= 2 )
        goto LABEL_20;
      if ( (v9 & 1) != 0 && v4 <= 4 )
        v4 = 4;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0xDu, (__int64)&unk_1400CA258, v5);
  }
  sub_14005A470("CVirtualProtectedOutput::SetPolicySchemas", 333, v5);
  return (unsigned int)v5;
}
