/*
 * XREFs of ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x1801A7A2C
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801A71E8 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1801A7A80 (-VerifyPV@Accessor@RoVariant@@AEBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RoVariant::Accessor::GetSize(RoVariant::Accessor *this, struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // r8

  if ( !a2 )
    return 2147500035LL;
  *(_QWORD *)a2 = 0LL;
  result = RoVariant::Accessor::VerifyPV(this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 192LL))(*v3, v4);
  return result;
}
