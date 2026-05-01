/*
 * XREFs of ?IsThemeCoordinatorEnabled@@YA_NXZ @ 0x1800F2660
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F26B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall IsThemeCoordinatorEnabled(__int64 a1, __int64 a2)
{
  char v2; // bl
  void (__fastcall *v3)(void *, char *); // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl,
    a2);
  v2 = 0;
  v5 = 1;
  if ( !*(_QWORD *)shellComponentFilter )
    return 1;
  v3 = (void (__fastcall *)(void *, char *))*((_QWORD *)shellComponentFilter + 1);
  if ( !v3 )
    return 1;
  v3(&unk_1807799E0, &v5);
  if ( v5 )
    return 1;
  return v2;
}
