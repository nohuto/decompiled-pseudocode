/*
 * XREFs of _lambda_67f0fced1d981ef80ea3a06f45134b83_::_lambda_67f0fced1d981ef80ea3a06f45134b83_ @ 0x18066C6D4
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83___ @ 0x18066C2C8 (std--_Global_new_std--_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__ea_18066C2C8.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802C2AC8 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_67f0fced1d981ef80ea3a06f45134b83_::_lambda_67f0fced1d981ef80ea3a06f45134b83_(
        __int64 a1,
        __int64 a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r8d

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v4 = (__int64 *)(a1 + 16);
  *v4 = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(v4);
  v5 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a1 + 24) = v5;
  v6 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a1 + 32) = v6;
  winrt::hstring::hstring((winrt::hstring *)(a1 + 40), (const struct winrt::hstring *)(a2 + 40), v7);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_BYTE *)(a1 + 52) = *(_BYTE *)(a2 + 52);
  return a1;
}
