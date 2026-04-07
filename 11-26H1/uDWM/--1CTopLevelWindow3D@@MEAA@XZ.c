/*
 * XREFs of ??1CTopLevelWindow3D@@MEAA@XZ @ 0x1800821A8
 * Callers:
 *     ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x180064190 (--_GCTopLevelWindow3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800401D0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180083EE0 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 */

void __fastcall CTopLevelWindow3D::~CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CTopLevelWindow3D::`vftable'{for `CContainerVisual'};
  *((_QWORD *)this + 23) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CTopLevelWindow3D::ReleaseSceneObjects(this);
  if ( *((_QWORD *)this + 29) )
    CTopLevelWindow3D::StopAnimation(this);
  std::_Func_class<void,>::_Tidy((__int64)this + 360, v2);
  CVisualBrush::~CVisualBrush((CTopLevelWindow3D *)((char *)this + 344));
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 34);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 32);
  CContainerVisual::~CContainerVisual(this);
}
