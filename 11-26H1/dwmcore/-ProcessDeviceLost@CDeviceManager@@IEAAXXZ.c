/*
 * XREFs of ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x180032674
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180032E10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseExclusive@CTreeLock@@QEAAXXZ @ 0x18014F560 (-ReleaseExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?AcquireExclusive@CTreeLock@@QEAAXXZ @ 0x18014F6D0 (-AcquireExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x1801CC82C (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1801D2530 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Move_unchecked@PEAVDeviceInfo@CDeviceManager@@PEAV12@@std@@YAPEAVDeviceInfo@CDeviceManager@@PEAV12@00@Z @ 0x1801D255C (--$_Move_unchecked@PEAVDeviceInfo@CDeviceManager@@PEAV12@@std@@YAPEAVDeviceInfo@CDeviceManager@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180295118 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@.c)
 *     ??$emplace_back@AEAPEAVCD3DDevice@@@?$vector@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCD3DDevice@@@Z @ 0x180295468 (--$emplace_back@AEAPEAVCD3DDevice@@@-$vector@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wi.c)
 *     ?ProcessDeviceLost@CD3DDevice@@IEAAXXZ @ 0x18029972C (-ProcessDeviceLost@CD3DDevice@@IEAAXXZ.c)
 */

void __fastcall CDeviceManager::ProcessDeviceLost(CDeviceManager *this)
{
  CDeviceManager **v1; // rbx
  CDeviceManager **v2; // rdi
  __int64 v3; // rbx
  char v4; // di
  __int64 v5; // rcx
  char v6; // dl
  __int64 v7; // rcx
  CComposition *v8; // rcx
  CD3DDevice **i; // rbx
  CD3DDevice **v10; // rdi
  unsigned __int64 CurrentFrameId; // rax
  __int64 v12; // rcx
  char v13; // dl
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  CDeviceManager *v16; // [rsp+50h] [rbp+10h] BYREF

  v16 = this;
  v15 = 0LL;
  v14 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v1 = (CDeviceManager **)qword_1803DE688;
  v2 = (CDeviceManager **)xmmword_1803DE690;
  while ( v1 != v2 )
  {
    v16 = *v1;
    if ( *((_DWORD *)v16 + 281) )
      std::vector<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>::emplace_back<CD3DDevice * &>(&v14, &v16);
    v1 += 2;
  }
  LeaveCriticalSection(&CriticalSection);
  if ( (_QWORD)v14 != *((_QWORD *)&v14 + 1) )
  {
    CTreeLock::AcquireExclusive((CComposition *)((char *)g_pComposition + 5696));
    v10 = (CD3DDevice **)*((_QWORD *)&v14 + 1);
    for ( i = (CD3DDevice **)v14; i != v10; ++i )
    {
      CD3DDevice::ProcessDeviceLost(*i);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(i);
    }
    CTreeLock::ReleaseExclusive((CComposition *)((char *)g_pComposition + 5696));
  }
  EnterCriticalSection(&CriticalSection);
  v3 = qword_1803DE688;
  v4 = 0;
  while ( v3 != (_QWORD)xmmword_1803DE690 )
  {
    v5 = *(_QWORD *)v3;
    v6 = 1;
    if ( *(_DWORD *)(*(_QWORD *)v3 + 1124LL) )
    {
      v7 = v3 + 16;
      goto LABEL_18;
    }
    if ( *(_DWORD *)(v5 + 8) == 1 && !*(_DWORD *)(*(_QWORD *)(v5 + 184) + 16LL) && !*(_DWORD *)(v5 + 1208) )
    {
      CurrentFrameId = GetCurrentFrameId();
      v6 = CurrentFrameId < *(_QWORD *)(v12 + 1480) ? v13 : 0;
    }
    v7 = v3 + 16;
    if ( v6 )
    {
      v3 += 16LL;
    }
    else
    {
LABEL_18:
      std::_Move_unchecked<CDeviceManager::DeviceInfo *,CDeviceManager::DeviceInfo *>(v7, xmmword_1803DE690, v3);
      ReleaseInterface<CD3DDevice>(xmmword_1803DE690 - 16);
      *(_QWORD *)&xmmword_1803DE690 = xmmword_1803DE690 - 16;
      v4 = 1;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl) )
  {
    if ( v4 )
    {
      CComposition::ResetTokenThread(v8);
      goto LABEL_27;
    }
  }
  else
  {
    if ( !v4 )
      goto LABEL_15;
LABEL_27:
    CComposition::ResetTokenThread(v8);
  }
LABEL_15:
  LeaveCriticalSection(&CriticalSection);
  if ( (_QWORD)v14 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>>(
      v14,
      *((_QWORD *)&v14 + 1));
    std::_Deallocate<16>(v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
