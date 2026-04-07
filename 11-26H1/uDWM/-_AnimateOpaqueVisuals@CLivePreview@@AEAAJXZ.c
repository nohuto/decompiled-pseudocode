/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003137C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x18002C448 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18002CDFC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x180031910 (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180031978 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180031E4C (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x180031F10 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800322BC (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180033AB8 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18006590C (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800B7A10 (-IsLauncherVisible@CImmersiveState@@QEAA_NXZ.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800B978C (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this, __int64 a2, __int64 a3, __int64 a4)
{
  CTopLevelWindow *v5; // r11
  char v6; // r15
  __int64 v7; // r14
  __int64 v8; // r12
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD *v11; // r15
  int v12; // eax
  unsigned int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // r8
  CTopLevelWindow *v16; // rbx
  struct CWindowData *MDIOwner; // rax
  __int64 v18; // r9
  HWND *v19; // r12
  int v20; // eax
  CTopLevelWindow *LivePreviewWindow; // rax
  int v22; // eax
  int started; // eax
  int v25; // [rsp+30h] [rbp-38h]
  void *lpMem[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v27; // [rsp+50h] [rbp-18h]
  unsigned int v28; // [rsp+58h] [rbp-10h]
  char v29; // [rsp+B0h] [rbp+48h]
  int v30; // [rsp+C0h] [rbp+58h]
  int v31; // [rsp+C8h] [rbp+60h]

  v31 = *((_DWORD *)this + 66);
  v5 = 0LL;
  v6 = 0;
  *(_OWORD *)lpMem = 0LL;
  v27 = 0LL;
  v28 = 0;
  v7 = *((_QWORD *)this + 46);
  v8 = *((_QWORD *)this + 47);
  while ( v7 != v8 )
  {
    v9 = DynArray<CWindowData *,0>::AddMultipleAndSet(lpMem, v7, a3, a4);
    v10 = v9;
    v5 = 0LL;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x2D1u, 0LL);
LABEL_8:
      v11 = lpMem[0];
      goto LABEL_39;
    }
    if ( *(_DWORD *)(*(_QWORD *)v7 + 128LL) == 1 )
      v6 = 1;
    v7 += 8LL;
  }
  if ( (*((_QWORD *)this + 47) == *((_QWORD *)this + 46) || v6) && *((_DWORD *)this + 102) != 4 )
  {
    v12 = CLivePreview::_CollectExcludedImmersiveWindows(this, lpMem);
    v10 = v12;
    v5 = 0LL;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x2DBu, 0LL);
      goto LABEL_8;
    }
  }
  v13 = 0;
  v11 = lpMem[0];
  while ( v13 < v28 )
  {
    v29 = 0;
    v14 = v11[v13];
    if ( v31
      || (*(_BYTE *)(v14 + 740) & 1) != 0
      || *(_DWORD *)(v14 + 128) != 1 && CImmersiveState::IsLauncherVisible(*((CImmersiveState **)this + 50)) )
    {
      v30 = 1;
    }
    else
    {
      v30 = (int)v5;
    }
    LODWORD(v15) = *((_DWORD *)this + 66);
    while ( 1 )
    {
      v15 = (unsigned int)(v15 - 1);
      if ( (int)v15 < 0 )
        break;
      if ( *(_QWORD *)(*((_QWORD *)this + 30) + 48 * v15 + 24) == *(_QWORD *)(v14 + 40) )
      {
        v29 = 1;
        break;
      }
    }
    v16 = v5;
    if ( (*(_BYTE *)(v14 + 737) & 1) != 0 )
    {
      MDIOwner = CWindowData::GetMDIOwner((CWindowData *)v14);
      LOBYTE(v5) = 0;
      if ( MDIOwner )
      {
        v19 = (HWND *)((char *)MDIOwner + 40);
        if ( !v29 )
        {
          LOBYTE(v25) = 1;
          LOBYTE(v18) = 1;
          v20 = CLivePreview::_SetupWindowPreview(this, MDIOwner, *v19, v18, v30, 0LL, v25);
          v10 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x302u, 0LL);
            goto LABEL_39;
          }
        }
        LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, *v19);
        v16 = LivePreviewWindow;
        if ( LivePreviewWindow )
        {
          CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v14 + 16));
          LOBYTE(v5) = 0;
        }
      }
    }
    if ( v29 == (_BYTE)v5 )
    {
      LOBYTE(v25) = v16 == 0LL;
      v22 = CLivePreview::_SetupWindowPreview(this, v14, *(_QWORD *)(v14 + 40), 0LL, v30, v16, v25);
      v10 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x310u, 0LL);
        goto LABEL_39;
      }
    }
    CLivePreview::OnWindowTitleChange(this, (const struct CWindowData *)v14);
    ++v13;
    v5 = 0LL;
  }
  started = CLivePreview::_StartAnimateOpaqueVisuals(this);
  v10 = started;
  if ( started < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x316u, 0LL);
LABEL_39:
  if ( v11 != lpMem[1] )
    DefaultHeap::Free(v11);
  return v10;
}
