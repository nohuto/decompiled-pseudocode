/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180057C74
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045718 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x180045A38 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180051D8C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180052518 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x18005687C (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x180057F68 (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180074584 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x18008A794 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800B8A38 (-IsLauncherVisible@CImmersiveState@@QEAA_NXZ.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800BA21C (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this)
{
  char v2; // di
  char v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned int v6; // r13d
  unsigned int v7; // r8d
  int v8; // r14d
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int started; // eax
  __int64 i; // r12
  __int64 v13; // r14
  __int64 v14; // r8
  CMILRefCountBase ***v15; // rbx
  struct CWindowData *MDIOwner; // rax
  __int64 *v17; // r15
  CTopLevelWindow *LivePreviewWindow; // rax
  unsigned int v20; // [rsp+20h] [rbp-48h]
  void *v21[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-14h]
  unsigned int v23; // [rsp+58h] [rbp-10h]
  char v24; // [rsp+B0h] [rbp+48h]
  char v25; // [rsp+B8h] [rbp+50h]
  unsigned int v26; // [rsp+C0h] [rbp+58h]
  int v27; // [rsp+C8h] [rbp+60h]

  v2 = 1;
  v25 = 1;
  v27 = *((_DWORD *)this + 80);
  v3 = 0;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v21, 0LL, 0);
  v4 = *((_QWORD *)this + 56);
  v5 = *((_QWORD *)this + 57);
  v6 = v23;
  while ( v4 != v5 )
  {
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v8 = -2147024362;
      v9 = 179;
      goto LABEL_13;
    }
    if ( v7 > v22 )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v21, 8, 1, v4);
      if ( v8 < 0 )
      {
        v9 = 190;
LABEL_13:
        v10 = v8;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2DBu, 0LL);
        goto LABEL_50;
      }
      v6 = v23;
    }
    else
    {
      *((_QWORD *)v21[0] + v6++) = *(_QWORD *)v4;
      v23 = v7;
    }
    if ( *(_DWORD *)(*(_QWORD *)v4 + 128LL) == 1 )
      v3 = 1;
    v4 += 8LL;
  }
  if ( (*((_QWORD *)this + 57) == *((_QWORD *)this + 56) || v3) && *((_DWORD *)this + 122) != 4 )
  {
    started = CLivePreview::_CollectExcludedImmersiveWindows(this, v21);
    v10 = started;
    if ( started < 0 )
    {
      v20 = 741;
LABEL_49:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v20, 0LL);
      goto LABEL_50;
    }
    v6 = v23;
  }
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v24 = 0;
    v13 = *((_QWORD *)v21[0] + i);
    v26 = v27
       || (*(_BYTE *)(v13 + 676) & 1) != 0
       || *(_DWORD *)(v13 + 128) != 1 && CImmersiveState::IsLauncherVisible(*((CImmersiveState **)this + 60));
    LODWORD(v14) = *((_DWORD *)this + 80);
    while ( 1 )
    {
      v14 = (unsigned int)(v14 - 1);
      if ( (int)v14 < 0 )
        break;
      if ( *(_QWORD *)(*((_QWORD *)this + 37) + 48 * v14 + 24) == *(_QWORD *)(v13 + 40) )
      {
        v24 = 1;
        goto LABEL_33;
      }
    }
    v25 = 0;
LABEL_33:
    v15 = 0LL;
    if ( (*(_BYTE *)(v13 + 673) & 1) != 0 )
    {
      MDIOwner = CWindowData::GetMDIOwner((HWND *)v13);
      if ( MDIOwner )
      {
        v17 = (__int64 *)((char *)MDIOwner + 40);
        if ( !v24 )
        {
          started = CLivePreview::_SetupWindowPreview(this, (__int64)MDIOwner, *v17, 1, v26, 0LL, 1);
          v10 = started;
          if ( started < 0 )
          {
            v20 = 780;
            goto LABEL_49;
          }
        }
        LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, (HWND)*v17);
        v15 = (CMILRefCountBase ***)LivePreviewWindow;
        if ( LivePreviewWindow )
          CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v13 + 16));
      }
    }
    if ( !v24 )
    {
      started = CLivePreview::_SetupWindowPreview(this, v13, *(_QWORD *)(v13 + 40), 0, v26, v15, v15 == 0LL);
      v10 = started;
      if ( started < 0 )
      {
        v20 = 794;
        goto LABEL_49;
      }
    }
    CLivePreview::OnWindowTitleChange(this, (const struct CWindowData *)v13);
  }
  if ( v25 || v27 )
    v2 = 0;
  started = CLivePreview::_StartAnimateOpaqueVisuals(this, (__int64)v21, v2);
  v10 = started;
  if ( started < 0 )
  {
    v20 = 800;
    goto LABEL_49;
  }
LABEL_50:
  DynArrayImpl<0>::~DynArrayImpl<0>(v21);
  return v10;
}
