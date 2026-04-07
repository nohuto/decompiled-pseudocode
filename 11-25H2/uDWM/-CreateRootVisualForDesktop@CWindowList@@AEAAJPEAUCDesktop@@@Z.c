/*
 * XREFs of ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x180024D5C
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180024FD0 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800211D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z @ 0x180078D80 (-SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z.c)
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18007D9AC (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18007E694 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::CreateRootVisualForDesktop(CWindowList *this, struct CDesktop *a2)
{
  CMILRefCountBase *v3; // r14
  CMILRefCountBase *v4; // rdi
  int v6; // eax
  CMILRefCountBase *v7; // rsi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  CMILRefCountBase *v16; // rcx
  CMILRefCountBase *v18; // [rsp+30h] [rbp-10h] BYREF
  CMILRefCountBase *v19; // [rsp+38h] [rbp-8h] BYREF
  CMILRefCountBase *v20; // [rsp+90h] [rbp+50h] BYREF
  CMILRefCountBase *v21; // [rsp+98h] [rbp+58h] BYREF

  v19 = 0LL;
  v3 = 0LL;
  v20 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v6 = CContainerVisual::Create(&v19);
  v7 = v19;
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x709u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v19 + 88LL))(v19);
    v9 = CRenderDataVisual::Create(&v21);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x70Fu, 0LL);
      v4 = v21;
    }
    else
    {
      v4 = v21;
      if ( *((_QWORD *)this + 12)
        && (v21 = 0LL, GetDesktopID(2LL), *(CMILRefCountBase **)a2 == v21)
        && (v10 = CVisual::SetBlurredWallpaperSurface(
                    v4,
                    *((struct CResourceProxy **)this + 12),
                    (const struct tagRECT *)((char *)this + 104)),
            v8 = v10,
            v10 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x71Cu, 0LL);
      }
      else
      {
        v11 = CDesktopWindowReplacement::Create(&v18);
        v8 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x722u, 0LL);
        }
        else
        {
          v12 = CMagnifierControl::Create(v7, v4, &v20);
          v8 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x727u, 0LL);
            v3 = v20;
          }
          else
          {
            v3 = v20;
            v13 = CContainerVisual::AddChild(v7, *((struct CVisual **)v20 + 4));
            v8 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x72Cu, 0LL);
            }
            else
            {
              v14 = (*(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v7 + 48LL))(v7);
              v8 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x72Fu, 0LL);
              }
              else
              {
                v15 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
                v8 = v15;
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x731u, 0LL);
                }
                else
                {
                  *((_QWORD *)a2 + 1) = v7;
                  CMILRefCountBase::AddRef(v7);
                  *((_QWORD *)a2 + 2) = v3;
                  CMILRefCountBase::AddRef(v3);
                  *((_QWORD *)a2 + 3) = v4;
                  if ( v4 )
                    CMILRefCountBase::AddRef(v4);
                  v16 = v18;
                  *((_QWORD *)a2 + 4) = v18;
                  if ( v16 )
                    CMILRefCountBase::AddRef(v16);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v4 )
    CBaseObject::Release(v4);
  if ( v18 )
    CBaseObject::Release(v18);
  return v8;
}
