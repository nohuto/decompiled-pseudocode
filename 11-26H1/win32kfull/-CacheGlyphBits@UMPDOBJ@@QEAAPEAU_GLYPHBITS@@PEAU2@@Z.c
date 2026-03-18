/*
 * XREFs of ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x14021219C
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D6720 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

struct _GLYPHBITS *__fastcall UMPDOBJ::CacheGlyphBits(UMPDOBJ *this, struct _GLYPHBITS *a2)
{
  unsigned int v4; // esi
  void *v5; // rbx
  void *v7; // rax

  v4 = a2->sizlBitmap.cy * ((unsigned int)(a2->sizlBitmap.cx + 7) >> 3) + 16;
  if ( v4 > *((_DWORD *)this + 92) )
  {
    v7 = UMPDOBJ::_AllocUserMem(this, v4, 0);
    v5 = v7;
    if ( !v7 )
      return (struct _GLYPHBITS *)v5;
    *((_QWORD *)this + 43) = v7;
    *((_DWORD *)this + 92) = v4;
    goto LABEL_3;
  }
  v5 = (void *)*((_QWORD *)this + 43);
  if ( v5 )
LABEL_3:
    memmove(v5, a2, v4);
  return (struct _GLYPHBITS *)v5;
}
