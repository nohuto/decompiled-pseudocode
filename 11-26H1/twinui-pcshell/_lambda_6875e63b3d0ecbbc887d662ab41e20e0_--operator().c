/*
 * XREFs of _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x180288788
 * Callers:
 *     std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B80F4 (std--_Med3_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 *     std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B8174 (std--_Partition_by_median_guess_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0.c)
 *     std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B8354 (std--_Pop_heap_hole_by_index_winrt--com_ptr_IApplicationView____winrt--com_ptr_IApplicationView_.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(FILETIME a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rcx
  FILETIME FileTime2; // [rsp+30h] [rbp+8h] BYREF
  FILETIME FileTime1; // [rsp+38h] [rbp+10h] BYREF

  FileTime2 = a1;
  v3 = *a2;
  FileTime1 = 0LL;
  FileTime2 = 0LL;
  return (*(int (__fastcall **)(__int64, FILETIME *))(*(_QWORD *)v3 + 480LL))(v3, &FileTime1) < 0
      || (*(int (__fastcall **)(_QWORD, FILETIME *))(*(_QWORD *)*a3 + 480LL))(*a3, &FileTime2) < 0
      || CompareFileTime(&FileTime1, &FileTime2) == 1;
}
