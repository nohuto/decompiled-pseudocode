/*
 * XREFs of ?TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180571A60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x180571770 (-IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppUsageTracker::TerminateApp(
        __int64 a1,
        Windows::Internal::FamilySafety::AppLimits *a2,
        unsigned int a3)
{
  bool IsPackagedApp; // al
  Windows::Internal::FamilySafety::AppLimits *v7; // rdx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rcx

  IsPackagedApp = Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(a2, (const unsigned __int16 *)a2);
  v7 = a2;
  if ( !IsPackagedApp )
  {
    v9 = a3;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::FamilySafety::AppLimits *))(**(_QWORD **)(a1 + 80) + 48LL))(
         *(_QWORD *)(a1 + 80),
         a2);
  v9 = a3;
  v7 = a2;
  if ( !v8 )
  {
LABEL_5:
    v10 = *(_QWORD *)(a1 + 88);
    return (*(__int64 (__fastcall **)(__int64, Windows::Internal::FamilySafety::AppLimits *, __int64))(*(_QWORD *)v10 + 56LL))(
             v10,
             v7,
             v9);
  }
  v10 = *(_QWORD *)(a1 + 80);
  return (*(__int64 (__fastcall **)(__int64, Windows::Internal::FamilySafety::AppLimits *, __int64))(*(_QWORD *)v10 + 56LL))(
           v10,
           v7,
           v9);
}
