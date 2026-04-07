/*
 * XREFs of ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180005914
 * Callers:
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18000571C (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800322BC (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800330C0 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 * Callees:
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180005A0C (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180005A2C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180005A98 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180005AF0 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180005BCC (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180044E80 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ??2CWindowTarget@@KAPEAX_K@Z @ 0x180085B1C (--2CWindowTarget@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CTopLevelWindow::StartLivePreviewAnimation(__int64 a1, int a2)
{
  unsigned int v3; // edi
  struct CVisual *v4; // rcx
  unsigned __int64 v5; // rcx
  CLivePreviewTimeline *v6; // rax
  CLivePreviewTimeline *v7; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 192) = a2;
  if ( !CTopLevelWindow::HasAnimation((CTopLevelWindow *)a1) )
    CDesktopManager::RegisterForGlobalTimeChangeNotification(v4);
  ++*(_DWORD *)(a1 + 188);
  v5 = 3LL;
  if ( *(_DWORD *)(a1 + 192) == 3 || *(_DWORD *)(a1 + 192) == 4 )
    CLivePreview::GetAnimationDuration();
  v6 = *(CLivePreviewTimeline **)(a1 + 664);
  if ( v6 )
    goto LABEL_10;
  v7 = (CLivePreviewTimeline *)CWindowTarget::operator new(v5);
  if ( !v7 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    goto LABEL_8;
  }
  v6 = CLivePreviewTimeline::CLivePreviewTimeline(v7);
  *(_QWORD *)(a1 + 664) = v6;
  if ( v6 )
  {
LABEL_10:
    CLivePreviewTimeline::RestartTimeline(v6, *(unsigned int *)(a1 + 192));
    return v3;
  }
LABEL_8:
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1285u, 0LL);
  CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)a1);
  return v3;
}
