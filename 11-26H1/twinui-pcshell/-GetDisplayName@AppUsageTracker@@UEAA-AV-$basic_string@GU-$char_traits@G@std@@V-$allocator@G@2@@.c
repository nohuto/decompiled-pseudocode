/*
 * XREFs of ?GetDisplayName@AppUsageTracker@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805715F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x180571770 (-IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall AppUsageTracker::GetDisplayName(__int64 a1, _QWORD *a2, __int64 a3)
{
  const unsigned __int16 *v6; // rdx
  Windows::Internal::FamilySafety::AppLimits *v7; // r8
  _QWORD *v8; // rax
  _QWORD v10[4]; // [rsp+30h] [rbp-48h] BYREF

  std::wstring::wstring((__int64)a2);
  if ( !Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(v7, v6) )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 88) + 80LL))(
                     *(_QWORD *)(a1 + 88),
                     v10,
                     a3);
    std::wstring::operator=(a2, v8);
    std::wstring::_Tidy_deallocate(v10);
  }
  return a2;
}
