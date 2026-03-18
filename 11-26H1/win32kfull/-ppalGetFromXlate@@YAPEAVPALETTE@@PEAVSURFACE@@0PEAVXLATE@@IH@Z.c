/*
 * XREFs of ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x140182C28
 * Callers:
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x140182C28 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 * Callees:
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x140182C28 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 */

struct PALETTE *__fastcall ppalGetFromXlate(struct SURFACE *a1, struct SURFACE *a2, struct XLATE *a3, int a4, int a5)
{
  struct SURFACE *v5; // rax
  __int64 v6; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // zf

  v5 = a1;
  if ( a4 != 1 )
    v5 = a2;
  v6 = *((_QWORD *)v5 + 16);
  if ( !v6 )
  {
    if ( !a3 )
      goto LABEL_9;
    v8 = 40LL;
    if ( a4 != 1 )
      v8 = 48LL;
    v6 = *(_QWORD *)((char *)a3 + v8);
    if ( !v6 )
    {
LABEL_9:
      if ( a4 == 1 )
      {
        v9 = *((_QWORD *)a1 + 6);
        if ( v9 && (*(_DWORD *)(v9 + 2156) & 0x100) != 0 )
        {
          v10 = *((_DWORD *)a1 + 24) == *(_DWORD *)(v9 + 2092);
          goto LABEL_13;
        }
      }
      else
      {
        v9 = *((_QWORD *)a2 + 6);
        if ( v9 && (*(_DWORD *)(v9 + 2156) & 0x100) == 0 )
        {
          v10 = *((_DWORD *)a2 + 24) == *(_DWORD *)(v9 + 2092);
LABEL_13:
          if ( v10 )
          {
            v6 = *(_QWORD *)(v9 + 1792);
            if ( v6 )
              return (struct PALETTE *)v6;
          }
        }
      }
      if ( !a3 || (*((_DWORD *)a3 + 1) & 1) != 0 )
      {
        if ( a5 )
          return ppalGetFromXlate(a1, a2, a3, (unsigned int)(a4 == 1) + 1, 0);
      }
    }
  }
  return (struct PALETTE *)v6;
}
