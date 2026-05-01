/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18013435C
 * Callers:
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_____lambda_7e7f8cd3e685741244f76c8bd4111764__const_&_ @ 0x1801341A8 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd411.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const_&_ @ 0x18029410C (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c.c)
 *     MakeMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___ @ 0x1802B609C (MakeMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f_____lambda_fca3cb616a5d138146c9ecf7abf9513f__const_&_ @ 0x180486708 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const_&_ @ 0x180486F28 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const_&_ @ 0x180486FDC (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2_____lambda_3a2de4e4b80ecd8274c796c02122adf2__const_&_ @ 0x1804877AC (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_____lambda_e646d3ab26e1953b7e25ed2742d58c2e__const_&_ @ 0x18052C76C (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d5.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_____lambda_83256061826219130c74760726d0f103__const_&_ @ 0x1805983E4 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0.c)
 *     CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x1805986D8 (CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___--CMultitaskingViewTask.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  *(_QWORD *)(a1 + 32) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewTaskCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
