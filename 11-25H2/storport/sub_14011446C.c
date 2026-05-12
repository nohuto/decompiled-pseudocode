/*
 * XREFs of sub_14011446C @ 0x14011446C
 * Callers:
 *     sub_1400E0F0C @ 0x1400E0F0C (sub_1400E0F0C.c)
 *     sub_1400E1168 @ 0x1400E1168 (sub_1400E1168.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14011446C(
        unsigned int a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        int a7,
        char a8,
        _BYTE *Dst)
{
  int v11; // ebp
  unsigned int v12; // eax
  int v13; // ecx
  __int64 result; // rax

  v11 = (a4 >> 2) - 1;
  memset_0(Dst, 0, 0x40uLL);
  *((_DWORD *)Dst + 1) = -1;
  Dst[40] = a3;
  v12 = *((_DWORD *)Dst + 10) & 0xFFFF7FFF;
  *Dst = 2;
  v13 = v12 | (a8 != 0 ? 0x8000 : 0);
  *((_DWORD *)Dst + 10) = v13;
  if ( HIWORD(a1) && (HIWORD(a1) > 1u || (a1 & 0xFF00) >= 0x300) )
    *((_WORD *)Dst + 21) = v11;
  else
    *((_DWORD *)Dst + 10) = v13 ^ (v13 ^ (v11 << 16)) & 0xFFF0000;
  result = 0LL;
  *((_WORD *)Dst + 23) = 0;
  if ( a5 )
  {
    result = (unsigned int)a6 & 0xFFFFFFFC;
    *((_WORD *)Dst + 22) = HIWORD(v11);
    *((_DWORD *)Dst + 13) = HIDWORD(a6);
    *((_DWORD *)Dst + 12) = result;
  }
  return result;
}
