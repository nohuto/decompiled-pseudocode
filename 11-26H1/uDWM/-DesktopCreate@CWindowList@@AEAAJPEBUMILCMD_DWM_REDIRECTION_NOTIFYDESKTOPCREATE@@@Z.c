/*
 * XREFs of ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x1800E0574
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x1800359E0 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B008 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x1800E012C (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DesktopCreate(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *a2)
{
  int RootVisualForDesktop; // eax
  unsigned int v5; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  unsigned int v8; // [rsp+28h] [rbp-19h]
  __int64 Buffer; // [rsp+38h] [rbp-9h] BYREF
  struct CVisual *v10; // [rsp+40h] [rbp-1h]
  __int128 v11; // [rsp+48h] [rbp+7h]
  __int128 v12; // [rsp+58h] [rbp+17h]
  __int128 v13; // [rsp+68h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+37h]
  char v15; // [rsp+80h] [rbp+3Fh]
  __int128 v16; // [rsp+88h] [rbp+47h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+B0h] [rbp+6Fh] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0;
  v16 = 0LL;
  Buffer = *(_QWORD *)((char *)a2 + 4);
  v14 = -1LL;
  RootVisualForDesktop = CWindowList::CreateRootVisualForDesktop(this, (struct CDesktop *)&Buffer);
  v5 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v8 = 7478;
    goto LABEL_8;
  }
  RootVisualForDesktop = CContainerVisual::AddChild(*((CContainerVisual **)this + 10), v10);
  v5 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v8 = 7479;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RootVisualForDesktop, v8, 0LL);
    goto LABEL_9;
  }
  if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer, 0x60u, 0LL) )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)((char *)a2 + 4));
    WindowListForDesktop->Blink = WindowListForDesktop;
    WindowListForDesktop->Flink = WindowListForDesktop;
    CWindowList::GetGlobalLightSetForDesktop(this, *(_QWORD *)((char *)a2 + 4));
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1D3Au, 0LL);
  }
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v5;
}
