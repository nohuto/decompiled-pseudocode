/*
 * XREFs of ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x180174EE0
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180174988 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x180175388 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
RoVariant *__fastcall RoVariant::RoVariant(RoVariant *this, struct IInspectable *a2, bool a3, bool a4)
{
  __int64 v5; // rcx
  int v6; // edx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  RoVariant::RoVariant((RoVariant *)&v8, a2, a3, a4);
  v5 = *(_QWORD *)this;
  *(_QWORD *)this = v8;
  v6 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v9;
  if ( v5 && ((v6 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return this;
}
