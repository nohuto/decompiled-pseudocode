/*
 * XREFs of ??0?$producers_base@UImmersiveShellComponentsConfiguration@@V?$tuple@UIImmersiveShellCreationBehavior@@@std@@@impl@winrt@@QEAA@XZ @ 0x1803D987C
 * Callers:
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803D98A0 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ??0?$producer_convert@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@X@impl@winrt@@QEAA@XZ @ 0x1803D9858 (--0-$producer_convert@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::producer_convert<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior,void>::producer_convert<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior,void>(a1);
  result = v1;
  *v1 = &Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  return result;
}
