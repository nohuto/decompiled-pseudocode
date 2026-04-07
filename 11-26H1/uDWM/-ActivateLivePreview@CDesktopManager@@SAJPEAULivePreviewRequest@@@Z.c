/*
 * XREFs of ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18002C88C
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18002C6DC (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x18002B330 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18002CDFC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::ActivateLivePreview(struct LivePreviewRequest *lpMem)
{
  __int64 v1; // rax
  char *v2; // rdx
  int v4; // eax
  unsigned int v5; // edi
  int v7; // eax

  v1 = 0LL;
  v2 = (char *)lpMem + 32;
  if ( *((_DWORD *)lpMem + 7) )
    v1 = (__int64)&v2[8 * *((unsigned int *)lpMem + 1)];
  if ( *(_DWORD *)lpMem )
  {
    v4 = CLivePreview::Activate(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57),
           (__int64)v2,
           *((_DWORD *)lpMem + 1),
           *((HWND *)lpMem + 1),
           *((_DWORD *)lpMem + 4),
           *((_DWORD *)lpMem + 5),
           v1);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xAD8u, 0LL);
  }
  else
  {
    v7 = CLivePreview::DeActivate(
           *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
           *((_DWORD *)lpMem + 6) != 0);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xADCu, 0LL);
  }
  DefaultHeap::Free(lpMem);
  return v5;
}
