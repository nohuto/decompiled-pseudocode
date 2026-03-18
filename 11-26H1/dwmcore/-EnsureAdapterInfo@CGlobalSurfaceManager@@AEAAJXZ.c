/*
 * XREFs of ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x180131620
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1801313E4 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180131820 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x180131888 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$emplace_back@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18022DE04 (--$emplace_back@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalSurfaceManager::EnsureAdapterInfo(CGlobalSurfaceManager *this)
{
  char *v1; // r14
  CDisplayManager *v2; // rcx
  int DXGIFactory; // eax
  struct IDXGIFactory5 *v4; // rbx
  int v5; // edi
  unsigned int i; // esi
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+28h] [rbp-E0h]
  __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  struct IDXGIFactory5 *v12; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-C0h]
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  char v15; // [rsp+58h] [rbp-B0h]
  _BYTE v16[296]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v17[8]; // [rsp+190h] [rbp+88h] BYREF

  v1 = (char *)this + 504;
  v11 = 0LL;
  std::vector<CGlobalSurfaceManager::AdapterInfo>::clear((char *)this + 504);
  v12 = 0LL;
  DXGIFactory = CDisplayManager::GetDXGIFactory(v2, &v12);
  v4 = v12;
  v5 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    v10 = 327;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DXGIFactory, v10, 0LL);
  }
  else if ( ((unsigned int (__fastcall *)(struct IDXGIFactory5 *))v12->lpVtbl->IsCurrent)(v12) )
  {
    for ( i = 0; ; ++i )
    {
      lpVtbl = v4->lpVtbl;
      v13 = &v11;
      v14 = 0LL;
      v15 = 1;
      v5 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v4, i, &v14);
      if ( v15 )
      {
        v8 = *v13;
        *v13 = v14;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v5 < 0 )
        break;
      memset_0(v16, 0, 0x130uLL);
      DXGIFactory = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 64LL))(v11, v16);
      v5 = DXGIFactory;
      if ( DXGIFactory < 0 )
      {
        v10 = 342;
        goto LABEL_18;
      }
      std::vector<CGlobalSurfaceManager::AdapterInfo>::emplace_back<_LUID &>(v1, v17);
    }
    if ( v5 == -2005270526 )
      v5 = 0;
  }
  else
  {
    LOBYTE(word_1803DE700) = 1;
    ScheduleCompositionPass(0, 0x80000u);
    v5 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x14Du, 0LL);
  }
  if ( v4 )
    ((void (__fastcall *)(struct IDXGIFactory5 *))v4->lpVtbl->Release)(v4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v5;
}
