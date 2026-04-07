/*
 * XREFs of ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x1800E012C
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x1800E0574 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18004FD28 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18006B278 (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z @ 0x1800742F4 (-SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::CreateRootVisualForDesktop(CWindowList *this, struct CDesktop *a2)
{
  CBaseObject *v3; // r15
  CVisualProxy **v4; // rsi
  CBaseObject *v5; // rdi
  int v7; // eax
  __int64 v8; // r8
  struct CVisual *v9; // r14
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CBaseObject *v18; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v19; // [rsp+38h] [rbp-8h] BYREF
  CBaseObject *v20; // [rsp+90h] [rbp+50h] BYREF
  CBaseObject *v21; // [rsp+98h] [rbp+58h] BYREF

  v19 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v7 = CContainerVisual::Create(&v19);
  v9 = v19;
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x831u, 0LL);
    goto LABEL_22;
  }
  CVisual::SetOpacity(v19, 0.0, v8);
  v11 = CContainerVisual::Create(&v18);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x837u, 0LL);
    v4 = (CVisualProxy **)v18;
    goto LABEL_22;
  }
  v4 = (CVisualProxy **)v18;
  if ( *((_QWORD *)this + 12) )
  {
    v19 = 0LL;
    GetDesktopID(2LL, &v19);
    if ( *(CBaseObject **)a2 == v19 )
    {
      v12 = CVisual::SetBlurredWallpaperSurface(
              v4,
              *((struct CResourceProxy **)this + 12),
              (const struct tagRECT *)((char *)this + 104));
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x844u, 0LL);
        goto LABEL_22;
      }
    }
  }
  v13 = CDesktopWindowReplacement::Create(&v20);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x84Au, 0LL);
    goto LABEL_19;
  }
  v14 = CMagnifierControl::Create(v9, (struct CVisual *)v4, &v21);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x84Fu, 0LL);
    v3 = v21;
    goto LABEL_19;
  }
  v3 = v21;
  v15 = CContainerVisual::AddChild(v9, *((struct CVisual **)v21 + 4));
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x854u, 0LL);
    goto LABEL_19;
  }
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v9 + 48LL))(v9);
  v16 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x859u, 0LL);
LABEL_19:
    v5 = v20;
    goto LABEL_22;
  }
  *((_QWORD *)a2 + 1) = v9;
  CBaseObject::AddRef(v9);
  *((_QWORD *)a2 + 2) = v3;
  CBaseObject::AddRef(v3);
  *((_QWORD *)a2 + 3) = v4;
  if ( v4 )
    CBaseObject::AddRef((CBaseObject *)v4);
  v5 = v20;
  *((_QWORD *)a2 + 4) = v20;
  if ( v5 )
    CBaseObject::AddRef(v5);
LABEL_22:
  if ( v9 )
    CBaseObject::Release(v9);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v4 )
    CBaseObject::Release((CBaseObject *)v4);
  if ( v5 )
    CBaseObject::Release(v5);
  return v10;
}
