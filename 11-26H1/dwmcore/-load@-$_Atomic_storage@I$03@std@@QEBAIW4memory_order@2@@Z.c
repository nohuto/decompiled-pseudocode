/*
 * XREFs of ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x180125F9C
 * Callers:
 *     ?HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ @ 0x180125F40 (-HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ.c)
 *     ?PopAll@CSharedCircularQueue@@QEBAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180126D4C (-PopAll@CSharedCircularQueue@@QEBAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1801BB6C0 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_storage<unsigned int,4>::load(unsigned int *a1)
{
  return *a1;
}
