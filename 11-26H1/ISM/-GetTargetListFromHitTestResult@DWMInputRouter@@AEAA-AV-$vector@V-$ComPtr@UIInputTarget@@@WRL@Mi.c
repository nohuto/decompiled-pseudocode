/*
 * XREFs of ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180013EA0
 * Callers:
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180013C00 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 * Callees:
 *     ??0?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x180013ADC (--0-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800142E0 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180014900 (--$_Emplace_reallocate@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIInputTarge.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall DWMInputRouter::GetTargetListFromHitTestResult(
        DWMInputRouter *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r14
  _QWORD *TargetFromInputSite; // rax
  _QWORD *v14; // rcx
  struct IInputTarget *v15; // rcx
  struct IInputTarget *v17; // [rsp+48h] [rbp-40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v18 = 0LL;
  v8 = *(_QWORD *)(a4 + 8);
  if ( v8 )
    NtQueryCompositionInputSinkLuid(v8, &v18);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v9 = *(_QWORD *)(a4 + 104);
  v10 = *(_QWORD *)(v9 - 24);
  v11 = *(_QWORD *)(v9 - 16);
  if ( v10 != v11 )
  {
    v12 = a5;
    do
    {
      TargetFromInputSite = (_QWORD *)DWMInputRouter::GetTargetFromInputSite(a1, &v17, a4, (__int64)&v18, v12);
      v14 = (_QWORD *)a2[1];
      if ( v14 == (_QWORD *)a2[2] )
      {
        std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputTarget>>(
          a2,
          a2[1],
          TargetFromInputSite);
      }
      else
      {
        Microsoft::WRL::ComPtr<InputSite>::ComPtr<InputSite>(v14, TargetFromInputSite);
        a2[1] += 8LL;
      }
      v15 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v10 += 8LL;
    }
    while ( v10 != v11 );
  }
  return a2;
}
