/*
 * XREFs of ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180055A98
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800E186C (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800072D0 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180053B00 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180056454 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800566B8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18007948C (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800D0784 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x1800E1834 (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v14; // [rsp+20h] [rbp-18h]

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
        v14 = 731;
        goto LABEL_25;
      }
      v8 = DefaultHeap::AllocClear(0x78uLL);
      if ( v8 )
        v8 = (void *)CTimeline<unsigned int>::CTimeline<unsigned int>(v8, v9, v10, *(unsigned int *)(a1 + 56));
      *(_QWORD *)(a1 + 64) = v8;
      if ( !v8 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2DDu, 0LL);
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
      v14 = 744;
    }
    else
    {
      CentralImage = CWindowIconic::LoadCentralImage((CWindowIconic *)a1);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v14 = 745;
      }
      else
      {
        CentralImage = CWindowIconic::UpdateSizeOrMargins((CWindowIconic *)a1, 1);
        v4 = CentralImage;
        if ( CentralImage < 0 )
        {
          v14 = 746;
        }
        else
        {
          CentralImage = CWindowIconic::UpdateClientArea((CWindowIconic *)a1);
          v4 = CentralImage;
          if ( CentralImage < 0 )
          {
            v14 = 747;
          }
          else
          {
            CentralImage = CContainerVisual::RenderRecursive(*(CContainerVisual **)(a1 + 88), v11, v12);
            v4 = CentralImage;
            if ( CentralImage < 0 )
            {
              v14 = 750;
            }
            else
            {
              CentralImage = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 48LL))(*(_QWORD *)(a1 + 104));
              v4 = CentralImage;
              if ( CentralImage >= 0 )
                return v4;
              v14 = 751;
            }
          }
        }
      }
    }
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, v14, 0LL);
  }
  return v4;
}
