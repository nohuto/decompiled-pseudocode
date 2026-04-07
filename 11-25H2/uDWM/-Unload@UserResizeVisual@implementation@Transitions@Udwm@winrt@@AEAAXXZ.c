/*
 * XREFs of ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E0AB0
 * Callers:
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800E033C (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Do_call @ 0x1800E0D40 (std--_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_--_Do_call.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800A1118 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this)
{
  CTopLevelWindow3D *v2; // rcx

  v2 = (CTopLevelWindow3D *)*((_QWORD *)this + 9);
  if ( *((_QWORD *)v2 + 36) )
  {
    CTopLevelWindow3D::StopAnimation(v2);
    CVisual::SetOpacity(*(CVisual **)(*(_QWORD *)(*((_QWORD *)this + 9) + 288LL) + 440LL), 1.0);
  }
  if ( *((_QWORD *)this + 21) )
    std::_Func_class<void,>::operator()((__int64)this + 112);
  if ( *((_QWORD *)this + 10) )
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset((CBaseObject **)this + 10);
}
