/*
 * XREFs of ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003852C
 * Callers:
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18002A9F4 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180031B64 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18002C9F8 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??0CWindowIconic@@IEAA@XZ @ 0x180038600 (--0CWindowIconic@@IEAA@XZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowIconic::Create(struct CWindowData *a1, struct CWindowIconic **a2, char a3)
{
  CWindowIconic *v6; // rax
  CWindowIconic *v7; // rax
  struct CWindowIconic *v8; // rdi
  int v9; // ebx
  unsigned int v11; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (CWindowIconic *)DefaultHeap::AllocClear(0x78uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v7 = CWindowIconic::CWindowIconic(v6);
  v8 = v7;
  if ( v7 )
  {
    *((_BYTE *)v7 + 20) = a3;
    v9 = CWindowIconic::Initialize(v7, a1);
    if ( v9 >= 0 )
    {
      *a2 = v8;
      return (unsigned int)v9;
    }
    v11 = 129;
  }
  else
  {
    v9 = -2147024882;
    v11 = 125;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v11, 0LL);
  if ( v8 )
  {
    CIconicBitmapRegistry::IconicRepresentationDestroyed(
      *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
      a1);
    CBaseObject::Release(v8);
  }
  return (unsigned int)v9;
}
