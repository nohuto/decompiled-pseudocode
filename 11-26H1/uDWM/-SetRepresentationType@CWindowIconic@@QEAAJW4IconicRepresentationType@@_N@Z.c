/*
 * XREFs of ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008AB18
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800DE760 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x1800088EC (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001B2A4 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18004C0D8 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180073C2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18007D198 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800CBD98 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x1800DE6D8 (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 */

__int64 __fastcall CWindowIconic::SetRepresentationType(__int64 a1, int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int CentralImage; // eax
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0;
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 != v3 )
  {
    if ( a2 == 1 )
    {
      CentralImage = CBitmapSourceArray::CopyAndAddRef(
                       (CBitmapSourceArray *)(a1 + 32),
                       (const struct CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v15 = 763;
        goto LABEL_22;
      }
      v8 = CTimeline<float>::operator new();
      if ( v8 )
        v8 = (void *)CTimeline<unsigned int>::CTimeline<unsigned int>(v8, v9, v10, *(unsigned int *)(a1 + 56));
      *(_QWORD *)(a1 + 64) = v8;
      if ( !v8 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2FDu, 0LL);
        return v4;
      }
      CTopLevelWindow::StartIconicAnimation(*(CTopLevelWindow **)(a1 + 88));
    }
    else if ( v3 == 1 )
    {
      CWindowIconic::CleanupAnimationResources((CWindowIconic *)a1);
    }
    if ( !a3 )
      return v4;
    CentralImage = CWindowIconic::OnWindowStyleUpdated((CWindowIconic *)a1, 0);
    v4 = CentralImage;
    if ( CentralImage < 0 )
    {
      v15 = 776;
    }
    else
    {
      CentralImage = CWindowIconic::LoadCentralImage((CWindowIconic *)a1);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v15 = 777;
      }
      else
      {
        CentralImage = CWindowIconic::UpdateSizeOrMargins((CWindowIconic *)a1, 1);
        v4 = CentralImage;
        if ( CentralImage < 0 )
        {
          v15 = 778;
        }
        else
        {
          CentralImage = CWindowIconic::UpdateClientArea((CWindowIconic *)a1, v11, v12, v13);
          v4 = CentralImage;
          if ( CentralImage >= 0 )
          {
            CContainerVisual::RenderRecursive(*(CContainerVisual **)(a1 + 88));
            CContainerVisual::RenderRecursive(*(CContainerVisual **)(a1 + 104));
            return v4;
          }
          v15 = 779;
        }
      }
    }
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, v15, 0LL);
  }
  return v4;
}
