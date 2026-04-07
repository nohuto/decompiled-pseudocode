/*
 * XREFs of ??1?$out_param_t@V?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ @ 0x18008DDCC
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001AC1C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     _CLivePreview::OnWindowShowHide_::_1_::dtor$3 @ 0x1800EB432 (_CLivePreview--OnWindowShowHide_--_1_--dtor$3.c)
 *     _CLivePreview::_FadeOutToGlass_::_1_::dtor$1 @ 0x1800EBC11 (_CLivePreview--_FadeOutToGlass_--_1_--dtor$1.c)
 *     _CLivePreview::_FadeOutToGlass_::_1_::dtor$3 @ 0x1800EBC23 (_CLivePreview--_FadeOutToGlass_--_1_--dtor$3.c)
 * Callees:
 *     ??$attach_to_smart_pointer@VCTopLevelWindow@@@wil@@YAXAEAV?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@PEAVCTopLevelWindow@@@Z @ 0x1800B9E48 (--$attach_to_smart_pointer@VCTopLevelWindow@@@wil@@YAXAEAV-$ComPtr@VCTopLevelWindow@@@WRL@Micros.c)
 */

__int64 __fastcall wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wil::attach_to_smart_pointer<CTopLevelWindow>(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  return result;
}
