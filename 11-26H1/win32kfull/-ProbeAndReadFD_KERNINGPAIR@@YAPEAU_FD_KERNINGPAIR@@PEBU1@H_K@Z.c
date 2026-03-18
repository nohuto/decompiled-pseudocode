/*
 * XREFs of ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x14034A4C0
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x140283BF0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ??9@YA_NAEBU_FD_KERNINGPAIR@@0@Z @ 0x14034A068 (--9@YA_NAEBU_FD_KERNINGPAIR@@0@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

struct _FD_KERNINGPAIR *__fastcall ProbeAndReadFD_KERNINGPAIR(struct _FD_KERNINGPAIR *Src, int a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  void *v7; // rax
  void *v8; // rdi
  int v10; // [rsp+68h] [rbp+20h] BYREF
  __int16 v11; // [rsp+6Ch] [rbp+24h]

  v10 = 0;
  v11 = 0;
  v5 = 0;
  if ( !a2 )
    ProbeForRead(Src, 6uLL, 2u);
  while ( a3 >= 6 )
  {
    a3 -= 6LL;
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
      break;
    ++v5;
    if ( !operator!=(&Src[v6 - 1].wcFirst, &v10) )
      goto LABEL_8;
  }
  v5 = 0;
LABEL_8:
  if ( v5 - 1 > 0x682AA9 )
    return 0LL;
  v7 = (void *)PALLOCMEM(6 * v5, 1886221639LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  memmove(v7, Src, 6LL * v5);
  if ( operator!=((_WORD *)v8 + 3 * v5 - 3, &v10) )
  {
    Win32FreePool(v8);
    return 0LL;
  }
  return (struct _FD_KERNINGPAIR *)v8;
}
