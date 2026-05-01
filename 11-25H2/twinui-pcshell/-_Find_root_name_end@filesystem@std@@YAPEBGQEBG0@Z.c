/*
 * XREFs of ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x1800AFCAC
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x1800AFAEC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?is_absolute@path@filesystem@std@@QEBA_NXZ @ 0x1800AFC40 (-is_absolute@path@filesystem@std@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::filesystem::_Find_root_name_end(
        std::filesystem *this,
        char *a2,
        const unsigned __int16 *const a3)
{
  signed __int64 v3; // r8
  char *result; // rax

  v3 = (a2 - (char *)this) >> 1;
  if ( v3 < 2 )
    return (char *)this;
  if ( (*(_DWORD *)this & 0xFFFFFFDF) - 3801153 < 0x1A )
    return (char *)this + 4;
  if ( *(_WORD *)this != 92 && *(_WORD *)this != 47 )
    return (char *)this;
  if ( v3 >= 4 )
  {
    if ( (*((_WORD *)this + 3) == 92 || *((_WORD *)this + 3) == 47)
      && (v3 == 4 || *((_WORD *)this + 4) != 92 && *((_WORD *)this + 4) != 47)
      && ((*((_WORD *)this + 1) == 92 || *((_WORD *)this + 1) == 47)
       && (*((_WORD *)this + 2) == 63 || *((_WORD *)this + 2) == 46)
       || *((_WORD *)this + 1) == 63 && *((_WORD *)this + 2) == 63) )
    {
      return (char *)this + 6;
    }
  }
  else if ( (unsigned __int64)((a2 - (char *)this) >> 1) < 3 )
  {
    return (char *)this;
  }
  if ( *((_WORD *)this + 1) != 92 && *((_WORD *)this + 1) != 47
    || *((_WORD *)this + 2) == 92
    || *((_WORD *)this + 2) == 47 )
  {
    return (char *)this;
  }
  for ( result = (char *)this + 6; result != a2 && *(_WORD *)result != 92 && *(_WORD *)result != 47; result += 2 )
    ;
  return result;
}
