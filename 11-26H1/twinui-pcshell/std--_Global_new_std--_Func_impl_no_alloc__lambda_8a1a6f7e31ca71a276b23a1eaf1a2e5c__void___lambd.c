/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__const_&_ @ 0x18066C328
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void_::_Copy @ 0x18066F890 (std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void_--_Copy.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802C2AC8 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A2CDC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c____::_2_::_Guard_type::__Guard_type @ 0x1805CC44C (_std--_Global_new_std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lamb.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__const___(
        __int64 a1)
{
  __int64 *v2; // rsi
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp+10h]

  v2 = (__int64 *)operator new(0x40uLL);
  v6 = v2;
  *v2 = (__int64)&off_18075E798;
  v7 = v2 + 1;
  std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(v2 + 1, (_QWORD *)a1);
  v2[3] = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(v2 + 3);
  v2[4] = *(_QWORD *)(a1 + 24);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(v2 + 4);
  *((_DWORD *)v2 + 10) = *(_DWORD *)(a1 + 32);
  winrt::hstring::hstring((winrt::hstring *)(v2 + 6), (const struct winrt::hstring *)(a1 + 40), v3);
  winrt::hstring::hstring((winrt::hstring *)(v2 + 7), (const struct winrt::hstring *)(a1 + 48), v4);
  v6 = 0LL;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c____::_2_::_Guard_type::__Guard_type((void **)&v6);
  return v2;
}
