/*
 * XREFs of ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180066670
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081770 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800668CC (-Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x1800669B0 (-Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 *     ?SetRect@CVirtualDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@AEBUtagSIZE@@@Z @ 0x180066A84 (-SetRect@CVirtualDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@AEBUtagSIZE@@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180066AA0 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800834D4 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x180087D98 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z @ 0x18008B064 (-SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z @ 0x18008DEC0 (-SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z.c)
 */

__int64 __fastcall CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(CDCompVirtualDesktopThumbnailData *this)
{
  __int64 v1; // rax
  CVirtualDesktopThumbnailCVI *v3; // r15
  CBaseObject *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  CDesktopThumbnailBase *v7; // r14
  int v8; // eax
  int v9; // eax
  LONG v10; // eax
  int v11; // ecx
  LONG v12; // eax
  int v13; // eax
  CDesktopThumbnailCVI *v14; // rcx
  int v15; // eax
  CBaseObject *v16; // rcx
  int v17; // eax
  CBaseObject *v19; // [rsp+70h] [rbp+40h] BYREF
  CVirtualDesktopThumbnailCVI *v20; // [rsp+78h] [rbp+48h] BYREF
  struct tagSIZE v21; // [rsp+80h] [rbp+50h] BYREF

  v1 = *((_QWORD *)this + 2);
  v21 = 0LL;
  v3 = 0LL;
  v20 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  if ( (*(_BYTE *)(v1 + 738) & 0x40) != 0 )
  {
    v5 = 0;
    if ( !*((_QWORD *)this + 14) )
    {
      v6 = CVirtualDesktopThumbnail::Create((struct CVirtualDesktopThumbnail **)&v21);
      v7 = (CDesktopThumbnailBase *)v21;
      v5 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x197u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)&v21 + 224LL) = this;
        v8 = CDesktopThumbnailBase::SetDesktopId(v7, *(_QWORD *)(*((_QWORD *)this + 2) + 136LL));
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x199u, 0LL);
        }
        else
        {
          v9 = CVirtualDesktopThumbnailCVI::Create(&v20);
          v5 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x19Cu, 0LL);
            v3 = v20;
          }
          else
          {
            v3 = v20;
            v10 = 0;
            if ( *((_DWORD *)this + 12) - *((_DWORD *)this + 10) >= 0 )
              v10 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
            v11 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
            v21.cx = v10;
            v12 = 0;
            if ( v11 >= 0 )
              v12 = v11;
            v21.cy = v12;
            v13 = CVirtualDesktopThumbnailCVI::SetRect(v20, (const struct tagRECT *)((char *)this + 56), &v21);
            v5 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x19Du, 0LL);
            }
            else
            {
              CDesktopThumbnailCVI::SetVisual(v14, v7);
              v15 = CDesktopThumbnailCVIVisual::Create(&v19);
              v5 = v15;
              if ( v15 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x1A0u, 0LL);
                v4 = v19;
              }
              else
              {
                v4 = v19;
                v16 = v19;
                *((_QWORD *)v19 + 27) = *((_QWORD *)this + 2);
                *((_BYTE *)v16 + 256) = 1;
                v17 = CDesktopThumbnailCVIVisual::SetVisual(v16, v3, (const struct tagRECT *)((char *)this + 56));
                v5 = v17;
                if ( v17 >= 0 )
                {
                  CDesktopThumbnailCVIVisual::Update(v4, (const struct tagRECT *)((char *)this + 40), 1.0);
                  *((_QWORD *)this + 16) = v7;
                  CBaseObject::AddRef(v7);
                  *((_QWORD *)this + 14) = v4;
                  CBaseObject::AddRef(v4);
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x1A5u, 0LL);
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
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x18Fu, 0LL);
  }
  return v5;
}
