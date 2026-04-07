/*
 * XREFs of ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18006C77C
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006C2D0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180018990 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z @ 0x18006C9E4 (-Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z.c)
 *     ?SetFilterList@CMagnifierRenderTargetProxy@@QEAAJPEAVCVisualGroupProxy@@@Z @ 0x18006CD80 (-SetFilterList@CMagnifierRenderTargetProxy@@QEAAJPEAVCVisualGroupProxy@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     ?CreateVisualGroupProxy@CCompositor@@QEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800A9F44 (-CreateVisualGroupProxy@CCompositor@@QEAAJPEAPEAVCVisualGroupProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMagnifier::OnModifyWindowFilterList(
        struct CVisualGroupProxy **this,
        const struct MAGN_FILTERLIST *a2)
{
  unsigned int v3; // r15d
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int VisualGroupProxy; // eax
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-118h]
  struct CVisualProxy *v17[26]; // [rsp+30h] [rbp-108h] BYREF

  v3 = *(_DWORD *)a2 + *((_DWORD *)a2 + 1);
  v4 = 0LL;
  if ( !this[6] )
  {
    VisualGroupProxy = CCompositor::CreateVisualGroupProxy(
                         *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                         this + 6);
    v11 = VisualGroupProxy;
    if ( VisualGroupProxy < 0 )
    {
      v16 = 222;
      goto LABEL_22;
    }
  }
  if ( v3 && (*(_DWORD *)a2 != 1 || this[7] != *((struct CVisualGroupProxy **)a2 + 1)) )
  {
    memset_0(v17, 0, 0xC8uLL);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)a2; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x19 )
        break;
      if ( this[7] != *((struct CVisualGroupProxy **)a2 + i + 1) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8));
        if ( v7 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v8 + 440);
            if ( v9 )
            {
              v17[v4] = *(struct CVisualProxy **)(v9 + 16);
              v4 = (unsigned int)(v4 + 1);
            }
          }
        }
      }
    }
    while ( (unsigned int)i < v3 && (unsigned int)i < 0x19 )
    {
      if ( this[7] != *((struct CVisualGroupProxy **)a2 + i + 1) )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8));
        if ( !v13 )
        {
          v11 = -2147023728;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, -2147023728, 0x113u, 0LL);
          return v11;
        }
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        if ( v14 )
        {
          v15 = *(_QWORD **)(v14 + 440);
          if ( v15 )
          {
            v17[v4] = *(struct CVisualProxy **)(CTopLevelWindow::GetRootVisualNoAddRef(v15, 0) + 16);
            v4 = (unsigned int)(v4 + 1);
          }
        }
      }
      i = (unsigned int)(i + 1);
    }
    VisualGroupProxy = CVisualGroupProxy::Update(this[6], v17, v4);
    v11 = VisualGroupProxy;
    if ( VisualGroupProxy < 0 )
    {
      v16 = 294;
    }
    else
    {
      VisualGroupProxy = CMagnifierRenderTargetProxy::SetFilterList(this[3], this[6]);
      v11 = VisualGroupProxy;
      if ( VisualGroupProxy >= 0 )
        return v11;
      v16 = 295;
    }
    goto LABEL_22;
  }
  VisualGroupProxy = CMagnifierRenderTargetProxy::SetFilterList(this[3], 0LL);
  v11 = VisualGroupProxy;
  if ( VisualGroupProxy < 0 )
  {
    v16 = 228;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, VisualGroupProxy, v16, 0LL);
  }
  return v11;
}
