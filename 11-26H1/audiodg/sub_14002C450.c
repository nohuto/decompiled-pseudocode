/*
 * XREFs of sub_14002C450 @ 0x14002C450
 * Callers:
 *     sub_140029B30 @ 0x140029B30 (sub_140029B30.c)
 *     sub_14008DBD0 @ 0x14008DBD0 (sub_14008DBD0.c)
 * Callees:
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 */

__int64 __fastcall sub_14002C450(unsigned __int16 *Src, __int64 *a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rax
  __int64 v6; // rax

  v2 = 0;
  if ( Src && a2 )
  {
    if ( *Src == 0xFFFE && Src[8] < 0x16u )
    {
      return (unsigned int)-2147024809;
    }
    else
    {
      v5 = CoTaskMemAlloc(Src[8] + 82LL);
      *a2 = (__int64)v5;
      if ( v5 )
      {
        *v5 = Src[8] + 82;
        *(_DWORD *)(*a2 + 4) = 0;
        *(_DWORD *)(*a2 + 8) = 0;
        *(_DWORD *)(*a2 + 12) = 0;
        *(_OWORD *)(*a2 + 16) = xmmword_1400C6A30;
        *(_OWORD *)(*a2 + 48) = xmmword_1400C6A40;
        memcpy((void *)(*a2 + 64), Src, Src[8] + 18LL);
        v6 = *a2;
        if ( *Src == 0xFFFE )
        {
          *(_OWORD *)(v6 + 32) = *(_OWORD *)(Src + 12);
        }
        else
        {
          *(_OWORD *)(v6 + 32) = xmmword_1400C57E0;
          *(_DWORD *)(*a2 + 32) = *Src;
        }
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
