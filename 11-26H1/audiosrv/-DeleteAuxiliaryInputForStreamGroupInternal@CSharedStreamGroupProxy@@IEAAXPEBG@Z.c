/*
 * XREFs of ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1800FCA94
 * Callers:
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800FEAB0 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006E1BC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x1800782B4 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x1800C3CDC (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DBBD0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void___lambda_0a934de8e0ca018258fd518f6b914e8b__0_ @ 0x1800F8590 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Func_impl_no_alloc__l.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800F8670 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     _lambda_0a934de8e0ca018258fd518f6b914e8b_::__lambda_0a934de8e0ca018258fd518f6b914e8b_ @ 0x1800F9860 (_lambda_0a934de8e0ca018258fd518f6b914e8b_--__lambda_0a934de8e0ca018258fd518f6b914e8b_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSharedStreamGroupProxy::DeleteAuxiliaryInputForStreamGroupInternal(
        CSharedStreamGroupProxy *this,
        const unsigned __int16 *a2)
{
  __int64 *v2; // rax
  struct CSerialWorkQueue *SerialWorkQueue; // rbx
  int v4; // eax
  __int64 *v5; // [rsp+20h] [rbp-19h] BYREF
  __int64 v6; // [rsp+28h] [rbp-11h] BYREF
  std::_Ref_count_base *v7; // [rsp+30h] [rbp-9h]
  __int64 v8; // [rsp+38h] [rbp-1h] BYREF
  __int64 v9; // [rsp+40h] [rbp+7h] BYREF
  __int64 v10[7]; // [rsp+50h] [rbp+17h] BYREF
  _QWORD *v11; // [rsp+88h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]
  _WORD *v13; // [rsp+A8h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+B0h] [rbp+77h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp+7Fh] BYREF

  v13 = a2;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v15, (__int64)this);
  v14 = 0LL;
  std::make_shared<std::wstring,unsigned short const * &>(&v6, &v13);
  v5 = &v14;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v5);
  if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v15, v2) >= 0 )
  {
    SerialWorkQueue = GetSerialWorkQueue();
    v8 = v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v9, &v6);
    v11 = 0LL;
    v11 = std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void___lambda_0a934de8e0ca018258fd518f6b914e8b__0_(
            v10,
            &v8);
    v4 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, v10);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        1347LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v4,
        (int)v5);
    lambda_0a934de8e0ca018258fd518f6b914e8b_::__lambda_0a934de8e0ca018258fd518f6b914e8b_(&v8);
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
}
