/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1801A8FD8
 * Callers:
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x1800D4688 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--operator().c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18020D320 (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x18024D390 (-s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&_::Run @ 0x1802A08A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__-_--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run @ 0x18030AFB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--Run.c)
 *     _lambda_2763e4e2b0d5ad85b4f3d04351304527_::operator() @ 0x180322DD8 (_lambda_2763e4e2b0d5ad85b4f3d04351304527_--operator().c)
 *     _lambda_cc71f995493a19c27cb11ded8267b6a9_::operator() @ 0x1803B7F80 (_lambda_cc71f995493a19c27cb11ded8267b6a9_--operator().c)
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@3@@Z @ 0x1803EDD7C (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Ac.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1803EDE64 (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 *     ?GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180400720 (-GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180400900 (-GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180400F00 (-GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??R_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@QEAA@XZ @ 0x18044D028 (--R_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@QEAA@XZ.c)
 *     ??R_lambda_f098a9da5198650a3311aee8b0466367_@@QEAA@XZ @ 0x18044D26C (--R_lambda_f098a9da5198650a3311aee8b0466367_@@QEAA@XZ.c)
 *     _lambda_adc2f07ce144224db42416a33fd3cec5_::operator() @ 0x18047B810 (_lambda_adc2f07ce144224db42416a33fd3cec5_--operator().c)
 *     _lambda_1a5eae780b6c1663d254d797c20a7e0a_::operator() @ 0x180659A1C (_lambda_1a5eae780b6c1663d254d797c20a7e0a_--operator().c)
 * Callees:
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x1801B3724 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::_Unmarshal(
        CMarshaledInterface *this,
        const struct _GUID *a2,
        void **a3,
        char a4)
{
  unsigned int InterfaceAndReleaseStream; // edi
  __int64 v7; // rbx
  IStream *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  InterfaceAndReleaseStream = -2147467259;
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v10 = 0LL;
    if ( a4 || *(_DWORD *)(v7 + 24) != 2 )
    {
      *(_QWORD *)this = 0LL;
      Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v10, v7);
      v7 = v10;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
    *a3 = 0LL;
    if ( *(_DWORD *)(v7 + 24) == 2 )
    {
      if ( *(_QWORD *)(v7 + 32) )
        InterfaceAndReleaseStream = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, void **))(**(_QWORD **)(v7 + 32) + 24LL))(
                                      *(_QWORD *)(v7 + 32),
                                      a2,
                                      a3);
      else
        InterfaceAndReleaseStream = -2147024809;
    }
    else
    {
      v9 = *(IStream **)(v7 + 16);
      *(_QWORD *)(v7 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v9, a2, a3);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return InterfaceAndReleaseStream;
}
