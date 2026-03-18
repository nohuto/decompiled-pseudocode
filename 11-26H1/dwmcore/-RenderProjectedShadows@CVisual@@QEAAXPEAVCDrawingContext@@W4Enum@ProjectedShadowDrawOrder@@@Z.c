/*
 * XREFs of ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1800DF574
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180081B2C (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1800E08D0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

struct CProjectedShadowReceiver ***__fastcall CVisual::RenderProjectedShadows(
        __int64 a1,
        struct CDrawingContext *a2,
        int a3)
{
  struct CProjectedShadowReceiver ***result; // rax
  struct CProjectedShadowReceiver **v6; // rbp
  struct CProjectedShadowReceiver **i; // rdi
  struct CProjectedShadowReceiver *v8; // rsi
  CProjectedShadowScene **j; // rbx

  result = *(struct CProjectedShadowReceiver ****)(a1 + 224);
  if ( (*(_DWORD *)result & 0x80000) != 0 )
  {
    result = (struct CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers(a1);
    v6 = result[1];
    for ( i = *result; i != v6; ++i )
    {
      v8 = *i;
      if ( *((_DWORD *)*i + 26) == a3 )
      {
        for ( j = (CProjectedShadowScene **)*((_QWORD *)v8 + 11);
              j != *((CProjectedShadowScene ***)v8 + 10);
              result = (struct CProjectedShadowReceiver ***)CProjectedShadowScene::DrawShadows(*j, a2, v8) )
        {
          --j;
        }
      }
    }
  }
  return result;
}
