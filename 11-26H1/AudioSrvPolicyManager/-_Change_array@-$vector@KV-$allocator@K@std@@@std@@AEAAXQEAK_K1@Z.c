/*
 * XREFs of ?_Change_array@?$vector@KV?$allocator@K@std@@@std@@AEAAXQEAK_K1@Z @ 0x1800280AC
 * Callers:
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180006BA0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::vector<unsigned long>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 v9; // rdx
  const struct std::nothrow_t *v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(void **)a1;
  if ( v6 )
  {
    v9 = *(_QWORD *)(a1 + 16) - (_QWORD)v6;
    v13 = v6;
    v10 = (const struct std::nothrow_t *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
    v12 = (unsigned __int64)v10;
    if ( (unsigned __int64)v10 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v13, &v12);
      v10 = (const struct std::nothrow_t *)v12;
      v6 = v13;
    }
    operator delete(v6, v10);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
