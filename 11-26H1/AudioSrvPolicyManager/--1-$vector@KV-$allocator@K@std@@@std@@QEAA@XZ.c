/*
 * XREFs of ??1?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x180028F44
 * Callers:
 *     __lambda_8722efacb6e295def5e1d4fc60f9938c_::operator()_::_1_::dtor$0 @ 0x18004BB07 (__lambda_8722efacb6e295def5e1d4fc60f9938c_--operator()_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$2 @ 0x18004BD5A (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$2.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<unsigned long>::~vector<unsigned long>(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  const struct std::nothrow_t *v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    v6 = v2;
    v4 = (const struct std::nothrow_t *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    v5 = (unsigned __int64)v4;
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = (const struct std::nothrow_t *)v5;
      v2 = v6;
    }
    operator delete(v2, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
