/*
 * XREFs of ??$?0V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@?$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_9381c80c14e95fe77b42b10959c65c30_@@@Z @ 0x180065DE4
 * Callers:
 *     ??$QueueTask@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_9381c80c14e95fe77b42b10959c65c30_@@@Z @ 0x180066D50 (--$QueueTask@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180028A1C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Z @ 0x180067C68 (--0-$com_ptr_t@U-$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_9381c80c14e95fe77b42b10959c65c30_>::CTaskWrapper<_lambda_9381c80c14e95fe77b42b10959c65c30_>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 4);
  wil::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>(
    a1 + 40,
    a2[3]);
  v5 = a2[4];
  a2[4] = 0LL;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)a1 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_9381c80c14e95fe77b42b10959c65c30_>::`vftable';
  return a1;
}
