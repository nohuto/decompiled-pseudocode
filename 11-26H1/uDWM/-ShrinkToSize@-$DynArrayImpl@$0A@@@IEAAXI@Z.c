/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180008110
 * Callers:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180006614 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180007E44 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001A914 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056DE8 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x180072B5C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800747B8 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?Reset@CAnimationResource@@UEAAJXZ @ 0x180077FC0 (-Reset@CAnimationResource@@UEAAJXZ.c)
 *     ??1CapturedWindowRepresentation@@MEAA@XZ @ 0x18009BEE4 (--1CapturedWindowRepresentation@@MEAA@XZ.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAXXZ @ 0x1800B973C (-_CleanupClonedVisualTree@CLivePreview@@AEAAXXZ.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800C4428 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180085E74 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 */

void __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v2; // r9
  void *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax
  void *v7; // rax

  v2 = *(void **)(a1 + 8);
  v4 = *(void **)a1;
  if ( v4 != v2 )
  {
    v5 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v5 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v2, v4, (unsigned int)v5);
        DefaultHeap::Free(*(void **)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v6 = *(_DWORD *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = v6;
        return;
      }
      v7 = DefaultHeap::Realloc(v4, (unsigned int)v5);
      if ( v7 )
      {
        *(_QWORD *)a1 = v7;
        v6 = *(_DWORD *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
}
