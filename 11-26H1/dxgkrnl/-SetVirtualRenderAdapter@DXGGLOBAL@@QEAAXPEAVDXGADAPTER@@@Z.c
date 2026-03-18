/*
 * XREFs of ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401DFF84
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1401A6D40 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401E08E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DXGGLOBAL::SetVirtualRenderAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  volatile int v2; // eax
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER *v5; // rsi
  struct _LUID *v6; // rdx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7; // r11
  struct DXGADAPTER *v8; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // [rsp+20h] [rbp-38h] BYREF
  struct _DXGK_WIN32K_PARAM_DATA v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = g_VgpuReplaceWarp;
  *((_QWORD *)this + 125) = a2;
  if ( v2 )
  {
    v4 = (struct DXGADAPTER **)((char *)this + 1008);
    if ( a2 )
    {
      v8 = *v4;
      if ( *v4 && (*((_DWORD *)v8 + 111) & 0x10) != 0 )
        ADAPTER_RENDER::DisconnectFromDisplayAdapters(*((ADAPTER_RENDER **)v8 + 396), a2, v4);
      else
        *v4 = a2;
    }
    else
    {
      v5 = *v4;
      *v4 = (struct DXGADAPTER *)*((_QWORD *)this + 124);
      if ( *((_BYTE *)v5 + 209) )
      {
        LOBYTE(v9) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(&v9, 0LL, 0x3Eu, 0);
        v11 = 0LL;
        *(_OWORD *)&v10.NumPathArrayElements = 0LL;
        v10.SDCFlags = 2447;
        *(_OWORD *)&v10.PathsArray = 0LL;
        DXGADAPTER::IsAdapterSessionized(v5, v6, 0LL, &v11);
        DxgkRequestAsyncDisplaySwitchCallout(&v10, v7);
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v9);
      }
    }
    if ( *v4 )
      *((_QWORD *)this + 127) = *(_QWORD *)((char *)*v4 + 412);
  }
}
