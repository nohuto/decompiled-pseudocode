/*
 * XREFs of ?ComputeOcclusionErrorThresholdForView@SnapRectHelpers@@YAHPEAUIApplicationView@@@Z @ 0x18012D4B8
 * Callers:
 *     ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x18012CAC8 (-IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SnapRectHelpers::ComputeOcclusionErrorThresholdForView(
        SnapRectHelpers *this,
        struct IApplicationView *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  int nNumerator; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)this;
  v6 = 0LL;
  if ( (*(int (__fastcall **)(SnapRectHelpers *, __int64 *))(v2 + 80))(this, &v6) < 0 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
    return 5LL;
  }
  else
  {
    nNumerator = 0;
    if ( (*(int (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v6 + 112LL))(v6, &nNumerator, &nNumerator) < 0 )
      v3 = 5;
    else
      v3 = MulDiv(5, nNumerator, 96);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v3;
  }
}
