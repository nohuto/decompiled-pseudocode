/*
 * XREFs of ??$make_agile_vector@I@cshell@@YA?A_PXZ @ 0x180406D78
 * Callers:
 *     ?get_RequestedDisplayRegionIds@WindowingEnvironmentSettings@@UEAAJPEAPEAU?$IVectorView@I@Collections@Foundation@Windows@@@Z @ 0x1804159E0 (-get_RequestedDisplayRegionIds@WindowingEnvironmentSettings@@UEAAJPEAPEAU-$IVectorView@I@Collect.c)
 *     ?get_RequestedDisplayRegionIds@UwpWindowingEnvironmentSettings@@UEAAJPEAPEAU?$IVectorView@I@Collections@Foundation@Windows@@@Z @ 0x18041A3D0 (-get_RequestedDisplayRegionIds@UwpWindowingEnvironmentSettings@@UEAAJPEAPEAU-$IVectorView@I@Coll.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalVector@IV?$AgileVector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@I@234@@ZPEAPEAV?$AgileVector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@$0A@@1234@@Z @ 0x180403BDC (--$CreateExternalVector@IV-$AgileVector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foun.c)
 */

__int64 *__fastcall cshell::make_agile_vector<unsigned int>(__int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<unsigned int,Windows::Foundation::Collections::Internal::AgileVector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,0>>(
         (__int64)a1,
         a1);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6A,
      (int)"onecoreuap\\internal\\shell\\inc\\winrt_utility.h",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
