/*
 * XREFs of vMirrorIncludeNotifyWrap @ 0x140164880
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x1402FDBCC (-bIsDefault@SURFACE@@QEBA_NXZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1402FDBF8 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z @ 0x1402FDC1C (-vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z.c)
 */

void __fastcall vMirrorIncludeNotifyWrap(__int64 a1, struct SURFACE *a2, int a3)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v7 = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 40) & 0x2020001) == 0x2020001
      && (*((_DWORD *)a2 + 28) & 0x4000000) != 0
      && !SURFACE::bIsDefault(a2)
      && !(unsigned int)SURFACE::bStockSurface(a2) )
    {
      v6 = *((_DWORD *)a2 + 28);
      if ( (v6 & 0x400800) == 0 )
      {
        if ( a3 )
        {
          *((_DWORD *)a2 + 28) = v6 | 0x10;
          vMirrorNotifyDrawing((struct PDEVOBJ *)&v7, a2, 1);
        }
        else
        {
          vMirrorNotifyDrawing((struct PDEVOBJ *)&v7, a2, 0);
          *((_DWORD *)a2 + 28) &= ~0x10u;
        }
      }
    }
  }
}
