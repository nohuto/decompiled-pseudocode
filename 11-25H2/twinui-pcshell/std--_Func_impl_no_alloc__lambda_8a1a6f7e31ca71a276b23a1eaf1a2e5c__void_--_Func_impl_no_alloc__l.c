/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void_::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__0_ @ 0x1806462D4
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c___ @ 0x180646668 (std--_Global_new_std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__ea_180646668.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802CB234 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void_::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__0_(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  *a1 = &off_180733F00;
  v4 = a1 + 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = *(_QWORD *)a2;
  a1[2] = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = a1 + 3;
  *v5 = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(v5);
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v4[3] = v6;
  *((_DWORD *)v4 + 8) = *(_DWORD *)(a2 + 32);
  winrt::hstring::hstring((winrt::hstring *)(v4 + 5), (const struct winrt::hstring *)(a2 + 40));
  v7 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  v4[6] = v7;
  return a1;
}
