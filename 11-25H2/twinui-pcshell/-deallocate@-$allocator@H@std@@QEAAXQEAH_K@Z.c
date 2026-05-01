/*
 * XREFs of ?deallocate@?$allocator@H@std@@QEAAXQEAH_K@Z @ 0x1801DCB84
 * Callers:
 *     _std::vector_int_std::allocator_int___::_Emplace_reallocate___::_1_::catch$0 @ 0x1806D1D1E (_std--vector_int_std--allocator_int___--_Emplace_reallocate___--_1_--catch$0.c)
 *     _std::vector_int_std::allocator_int___::_Reallocate_0__::_1_::catch$0 @ 0x1806D1E08 (_std--vector_int_std--allocator_int___--_Reallocate_0__--_1_--catch$0.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::allocator<int>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = 4 * a3;
  v4 = a2;
  if ( (unsigned __int64)(4 * a3) >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v4, &v3);
    operator delete(v4, (const struct std::nothrow_t *)v3);
  }
  else
  {
    operator delete(a2, (const struct std::nothrow_t *)(4 * a3));
  }
}
