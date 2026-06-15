/*
 * XREFs of ??$emplace_back@AEAVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAAEAVWeakRef@WRL@Microsoft@@AEAV234@@Z @ 0x180100BC4
 * Callers:
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@UEAAJPEBGU_GUID@@AEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x180101970 (-FindStreamGroups@CDeviceGraphObjectsStore@@UEAAJPEBGU_GUID@@AEAV-$vector@VWeakRef@WRL@Microsoft.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x180100920 (--$_Emplace_reallocate@AEAVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::WeakRef>::emplace_back<Microsoft::WRL::WeakRef &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rcx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef &>(a1, v4, a2);
  v5 = *a2;
  *v4 = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = a1[1];
  a1[1] = v6 + 1;
  return v6;
}
