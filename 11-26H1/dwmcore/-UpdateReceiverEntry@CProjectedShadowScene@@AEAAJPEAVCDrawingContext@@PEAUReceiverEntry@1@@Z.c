/*
 * XREFs of ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x1800D5A50
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x1800D5EE8 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x1800D5FD4 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D6064 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x1801D51B8 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18021F66C (-DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@PEAV1@1PEAVCMILMatrix@@@Z @ 0x18027E228 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@PEAV1@1PEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateReceiverEntry(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        CProjectedShadowReceiver **a3)
{
  CProjectedShadowReceiver *v3; // r14
  const struct CVisualTree *v6; // r15
  unsigned int v8; // esi
  CVisual *v9; // rbp
  __int64 v10; // rax
  struct CVisual *v11; // r12
  struct CBrush *EffectiveMaskBrush; // rax
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a3;
  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 993);
  v8 = 0;
  v9 = (CVisual *)*((_QWORD *)*a3 + 9);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 208LL))(*((_QWORD *)this + 13));
  *((_BYTE *)a3 + 100) = 1;
  v11 = (struct CVisual *)v10;
  v15 = 0LL;
  if ( !CProjectedShadowReceiver::IsEmptyMaskContent(v3) && CProjectedShadowScene::IsValidVisual(v6, v9) )
  {
    EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(v3);
    if ( (*(int (__fastcall **)(struct CBrush *, __int64, __int128 *))(*(_QWORD *)EffectiveMaskBrush + 192LL))(
           EffectiveMaskBrush,
           (__int64)v9 + 140,
           &v15) >= 0
      && (float)(*((float *)&v15 + 2) - *(float *)&v15) >= 0.5
      && (float)(*((float *)&v15 + 3) - *((float *)&v15 + 1)) >= 0.5 )
    {
      if ( (unsigned __int64)a3[3] >= *((_QWORD *)this + 14)
        && a3[3] >= (CProjectedShadowReceiver *)CVisual::FindTreeData(v9, v6)[28] )
      {
        return v8;
      }
      v14 = CVisual::CalcSrcToDestVisualTransform(v6, v9, v11, (struct CMILMatrix *)(a3 + 4));
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x2E7u, 0LL);
      }
      else
      {
        a3[3] = *(CProjectedShadowReceiver **)(*((_QWORD *)this + 3) + 880LL);
        if ( !CProjectedShadowScene::IsShadowInFrontOfReceiver(
                this,
                a2,
                (const struct CProjectedShadowScene::ReceiverEntry *)a3) )
        {
          *((_BYTE *)a3 + 100) = 0;
          goto LABEL_10;
        }
      }
      return v8;
    }
  }
  *((_BYTE *)a3 + 100) = 0;
LABEL_10:
  CProjectedShadowScene::DiscardCachesForReceiver(this, v3);
  return 0LL;
}
