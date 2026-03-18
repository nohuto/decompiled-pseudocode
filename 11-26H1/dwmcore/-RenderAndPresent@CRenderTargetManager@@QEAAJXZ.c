/*
 * XREFs of ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x180030310
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180031B70 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180141510 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ??$emplace_back@PEAVIMonitorTarget@@@?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1801716D0 (--$emplace_back@PEAVIMonitorTarget@@@-$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@.c)
 *     ?reserve_region@?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCSortedMonitorTarget@CRenderTargetManager@@_K0@Z @ 0x1801718DC (-reserve_region@-$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V-$buffer_impl@VCSor.c)
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x180171AD4 (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180175074 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 *     ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ @ 0x1801C52B8 (-ForceFullDirty@CRenderTargetManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetManager::RenderAndPresent(CRenderTargetManager *this)
{
  int v1; // r12d
  CRenderTargetManager *Ptr; // rsi
  _QWORD *v3; // rbx
  _QWORD *i; // rdi
  __int64 v5; // r8
  int v6; // eax
  _QWORD *v7; // rdx
  __int64 v8; // rax
  char *v9; // rbx
  char *v10; // rdi
  int v11; // eax
  int v12; // r14d
  _BYTE *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r8
  HANDLE ProcessHeap; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  int v20; // eax
  int v21; // r14d
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 *v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r15
  LARGE_INTEGER v27; // r14
  _QWORD *v28; // r13
  __int64 v29; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-59h] BYREF
  _BYTE *v31; // [rsp+40h] [rbp-51h] BYREF
  LPVOID v32; // [rsp+48h] [rbp-49h] BYREF
  LPVOID lpMem; // [rsp+50h] [rbp-41h] BYREF
  _BYTE *v34; // [rsp+58h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR *v35; // [rsp+60h] [rbp-31h]
  _BYTE v36[64]; // [rsp+68h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+A8h] [rbp+17h] BYREF

  v1 = 0;
  Ptr = this;
  v37.Ptr = (ULONGLONG)this;
  if ( CCommonRegistryData::ForceFullDirtyRendering )
    CRenderTargetManager::ForceFullDirty(this);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v3 = (_QWORD *)CSyncLockGroup::g_syncLockGroups;
  for ( i = (_QWORD *)xmmword_1803E26A0; v3 != i; ++v3 )
    (**(void (__fastcall ***)(_QWORD, LARGE_INTEGER))*v3)(*v3, PerformanceCount);
  *((_BYTE *)Ptr + 744) = 1;
  if ( *((_BYTE *)Ptr + 750) )
    CRenderTargetManager::UpdateCapabilities(Ptr);
  if ( (*(unsigned __int8 (__fastcall **)(CComposition *))(*(_QWORD *)g_pComposition + 56LL))(g_pComposition) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &VISUALTREEREMOTING_SKIP_RENDER_ON_SERVER,
        v5,
        1u,
        &v37);
  }
  else if ( g_pComposition && *((_BYTE *)g_pComposition + 6465) && *((_DWORD *)g_pComposition + 1613) )
  {
    v6 = CRenderTargetManager::ComputeOverlayConfiguration(Ptr);
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2390, 3u, v6, 0xB4u, 0LL);
    v7 = (_QWORD *)*((_QWORD *)Ptr + 3);
    lpMem = v36;
    v34 = v36;
    v35 = &v37;
    v8 = (__int64)(*((_QWORD *)Ptr + 4) - (_QWORD)v7) >> 3;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        detail::vector_facade<CRenderTargetManager::CSortedMonitorTarget,detail::buffer_impl<CRenderTargetManager::CSortedMonitorTarget,4,1,detail::liberal_expansion_policy>>::emplace_back<IMonitorTarget *>(
          &lpMem,
          *v7);
      }
      else
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 39) + 24LL))(*((_QWORD *)g_pComposition
                                                                                              + 39));
        v23 = (__int64 *)*((_QWORD *)Ptr + 3);
        v24 = (__int64 *)*((_QWORD *)Ptr + 4);
        v25 = *(_QWORD *)(v22 + 24);
        while ( v23 != v24 )
        {
          v26 = *v23;
          v27 = PerformanceCount;
          v28 = (_QWORD *)detail::vector_facade<CRenderTargetManager::CSortedMonitorTarget,detail::buffer_impl<CRenderTargetManager::CSortedMonitorTarget,4,1,detail::liberal_expansion_policy>>::reserve_region(
                            &lpMem,
                            (v34 - (_BYTE *)lpMem) >> 4);
          *v28 = v26;
          v29 = (*(__int64 (__fastcall **)(__int64, __int64, LARGE_INTEGER))(*(_QWORD *)v26 + 128LL))(v26, v25, v27);
          v28[1] = v29;
          if ( !v29 )
            v28[1] = -1LL;
          ++v23;
        }
        v31 = v34;
        v32 = lpMem;
        std::_Sort_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
          &v32,
          &v31,
          (v34 - (_BYTE *)lpMem) >> 4,
          0LL);
        Ptr = (CRenderTargetManager *)v37.Ptr;
      }
    }
    v9 = (char *)lpMem;
    v10 = v34;
    while ( v9 != v10 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v9 + 8LL) + 64LL))(
              *(_QWORD *)v9 + 8LL,
              *((_QWORD *)Ptr + 86));
      v12 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2390, 3u, v11, 0xBEu, 0LL);
      if ( !v1 || v1 >= 0 && v12 < 0 )
        v1 = v12;
      v9 += 16;
    }
    v14 = lpMem;
    v15 = (v34 - (_BYTE *)lpMem) >> 4;
    if ( v15 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v37, (__int64)lpMem, v15);
      v14 = lpMem;
      v34 -= 16 * v16;
    }
    lpMem = 0LL;
    if ( v14 != v36 && v14 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v14);
    }
  }
  if ( !*((_BYTE *)Ptr + 753) )
  {
    v18 = (_QWORD *)*((_QWORD *)Ptr + 10);
    v19 = (_QWORD *)*((_QWORD *)Ptr + 11);
    while ( v18 != v19 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v18 + 64LL))(*v18, *((_QWORD *)Ptr + 86));
      v21 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2390, 3u, v20, 0xCCu, 0LL);
      if ( !v1 || v1 >= 0 && v21 < 0 )
        v1 = v21;
      ++v18;
    }
  }
  CRenderTargetManager::EndTargetEnumeration(Ptr);
  if ( v1 )
    return (unsigned int)v1;
  else
    return 0LL;
}
