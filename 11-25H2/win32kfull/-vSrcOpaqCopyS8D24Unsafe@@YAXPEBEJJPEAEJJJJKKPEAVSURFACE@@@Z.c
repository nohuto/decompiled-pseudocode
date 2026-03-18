/*
 * XREFs of ?vSrcOpaqCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F1368
 * Callers:
 *     ?vSrcOpaqCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1403009B0 (-vSrcOpaqCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1400F25B4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall vSrcOpaqCopyS8D24Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r15
  __int64 v13; // r14
  char *v15; // r11
  const unsigned __int8 *v16; // rdi
  unsigned __int8 *v17; // rbx
  const unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // rdx
  unsigned __int8 *v21; // rcx
  _BYTE *v22; // rdx
  _BYTE v23[104]; // [rsp+50h] [rbp-68h] BYREF

  v12 = a3;
  v13 = a2;
  memset_0(v23, 0, 0x40uLL);
  v15 = (char *)pvFillOpaqTableCT(4u, a9, a10, a11, (struct BLENDINFO *)v23, 0);
  v16 = &a1[v13];
  v17 = &a4[3 * a5];
  while ( a8 )
  {
    v19 = v16;
    v20 = v17;
    while ( v20 < &v17[3 * (a6 - a5)] )
    {
      v21 = (unsigned __int8 *)&v15[4 * *v19];
      *v20 = *v21;
      v22 = v20 + 1;
      *v22++ = v21[1];
      *v22 = v21[2];
      v20 = v22 + 1;
      ++v19;
    }
    --a8;
    v16 += v12;
    v17 += a7;
  }
}
