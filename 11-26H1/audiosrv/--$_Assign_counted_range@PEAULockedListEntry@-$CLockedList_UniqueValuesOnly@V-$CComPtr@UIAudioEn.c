/*
 * XREFs of ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@_K@Z @ 0x180050198
 * Callers:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18004FE38 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800502B0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@AEAAX_K@Z @ 0x1800AE978 (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPt.c)
 *     ??$_Uninitialized_copy_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@PEAU12@_K0AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@0@@Z @ 0x1800AF56C (--$_Uninitialized_copy_n@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEn.c)
 */

unsigned __int64 __fastcall std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 result; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  __int64 *i; // rdi
  __int64 *v11; // rsi
  __int64 *j; // rbx

  v3 = *a1;
  v4 = a3;
  result = (a1[2] - *a1) >> 4;
  if ( a3 > result )
  {
    std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
      a1,
      a3);
    v8 = *a1;
LABEL_11:
    result = std::_Uninitialized_copy_n<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry>>(
               a2,
               v4,
               v8);
    i = (__int64 *)result;
    goto LABEL_9;
  }
  v8 = a1[1];
  v9 = (v8 - v3) >> 4;
  if ( v4 > v9 )
  {
    while ( v3 != v8 )
    {
      if ( *(_QWORD *)v3 != *(_QWORD *)a2 )
        ATL::AtlComPtrAssign((struct IUnknown **)v3, *(struct IUnknown **)a2);
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(a2 + 8);
      v3 += 16LL;
      v8 = a1[1];
      a2 += 16LL;
    }
    v4 -= v9;
    goto LABEL_11;
  }
  for ( i = (__int64 *)(v3 + 16 * v4); v4; --v4 )
  {
    if ( *(_QWORD *)v3 != *(_QWORD *)a2 )
      ATL::AtlComPtrAssign((struct IUnknown **)v3, *(struct IUnknown **)a2);
    result = *(unsigned int *)(a2 + 8);
    a2 += 16LL;
    *(_DWORD *)(v3 + 8) = result;
    v3 += 16LL;
  }
  v11 = (__int64 *)a1[1];
  for ( j = i; j != v11; j += 2 )
    result = wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(j);
LABEL_9:
  a1[1] = (__int64)i;
  return result;
}
