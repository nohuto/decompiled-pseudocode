/*
 * XREFs of ??$GetPropertyWithInput@KK@IDXCoreAdapter1@@QEAAJW4DXCoreAdapterProperty@@PEBKPEAK@Z @ 0x1800688AC
 * Callers:
 *     CrmpDxUtilsQueryEngineInfo @ 0x18001D988 (CrmpDxUtilsQueryEngineInfo.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IDXCoreAdapter1::GetPropertyWithInput<unsigned long,unsigned long>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 104LL))(
           a1,
           16LL,
           4LL,
           a3,
           4LL,
           a4);
}
