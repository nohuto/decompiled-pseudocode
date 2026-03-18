/*
 * XREFs of ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180081B2C
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1800DF574 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x1800D7DE0 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::DrawShadows(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax
  _QWORD *v9; // rbx
  struct CProjectedShadowScene::ReceiverEntry *v10; // rbp
  __int64 *v11; // rdx
  unsigned __int64 v12; // r8
  __int64 *i; // rcx
  int v15; // eax

  v6 = CProjectedShadowScene::PrepareShadows(this, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x37Cu, 0LL);
  }
  else
  {
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, a3);
    v9 = (_QWORD *)*((_QWORD *)this + 9);
    v10 = ReceiverEntry;
    while ( 1 )
    {
      v9 = (_QWORD *)*v9;
      if ( v9 == *((_QWORD **)this + 9) )
        break;
      v11 = (__int64 *)*((_QWORD *)v10 + 1);
      v12 = v9[2];
      for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      {
        if ( i[4] < v12 )
          i += 2;
        else
          v11 = i;
      }
      if ( !*((_BYTE *)v11 + 25) && v12 >= v11[4] && v11 != *((__int64 **)v10 + 1) )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD))(*(_QWORD *)v11[5] + 208LL))(
                v11[5],
                a2,
                *(_QWORD *)(v12 + 72) + 140LL,
                0LL);
        v7 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x391u, 0LL);
          return v7;
        }
      }
    }
  }
  return v7;
}
