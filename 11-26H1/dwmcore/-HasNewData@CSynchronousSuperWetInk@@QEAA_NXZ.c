/*
 * XREFs of ?HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ @ 0x180125F40
 * Callers:
 *     ?DirtyOnNewData@CVisual@@QEAAXXZ @ 0x180125EE4 (-DirtyOnNewData@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x180125F9C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x180125FA8 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 */

char __fastcall CSynchronousSuperWetInk::HasNewData(CSynchronousSuperWetInk *this)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rdx

  if ( CSynchronousSuperWetInk::IsSuperWetCompatible(this) )
  {
    v2 = std::_Atomic_storage<unsigned int,4>::load(**(_QWORD **)(v1 + 216) + 4LL);
    if ( v2 > *(_DWORD *)(v3 + 240) )
      return 1;
    v4 = std::_Atomic_storage<unsigned int,4>::load(**(_QWORD **)(*(_QWORD *)(v3 + 88) + 24LL) + 4LL);
    if ( v4 > *(_DWORD *)(v5 + 100) )
    {
      *(_DWORD *)(v5 + 100) = v4;
      return 1;
    }
  }
  return 0;
}
