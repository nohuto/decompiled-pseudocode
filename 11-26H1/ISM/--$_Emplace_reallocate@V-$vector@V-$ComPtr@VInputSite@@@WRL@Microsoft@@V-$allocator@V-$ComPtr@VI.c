/*
 * XREFs of ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180016AD0
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x1800156F0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x180046F20 (--$_Destroy_range@V-$allocator@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 *     ??$_Uninitialized_move@PEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@YAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x180053740 (--$_Uninitialized_move@PEAV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  _QWORD *v14; // r14
  _QWORD *v15; // rbx
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rbp
  __int64 v20; // rcx
  _QWORD *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *v24; // rcx
  const struct std::nothrow_t *v25; // rdx
  _QWORD *result; // rax

  v5 = (unsigned __int128)((a2 - *a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v5 >> 63) + (v5 >> 2);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3);
  if ( v10 > 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
    goto LABEL_23;
  v11 = (v10 >> 1) + v10;
  v12 = v9;
  if ( v11 >= v9 )
    v12 = v11;
  if ( v12 > 0xAAAAAAAAAAAAAAALL )
    goto LABEL_23;
  v13 = 24 * v12;
  v14 = a1 + 2;
  if ( !(24 * v12) )
  {
    v15 = 0LL;
    goto LABEL_13;
  }
  if ( v13 < 0x1000 )
  {
    v15 = operator new(24 * v12);
    goto LABEL_13;
  }
  if ( v13 + 39 < v13 )
LABEL_23:
    std::_Throw_bad_array_new_length();
  v16 = operator new(v13 + 39);
  if ( !v16 )
    goto LABEL_21;
  v15 = (_QWORD *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  v14 = a1 + 2;
  *(v15 - 1) = v16;
LABEL_13:
  v17 = a3[2];
  v18 = *a3;
  v19 = &v15[3 * v7];
  a3[2] = 0LL;
  v20 = a3[1];
  v21 = v15;
  a3[1] = 0LL;
  *a3 = 0LL;
  *v19 = v18;
  v19[1] = v20;
  v19[2] = v17;
  v22 = a1[1];
  v23 = *a1;
  if ( a2 != v22 )
  {
    std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
      v23,
      a2,
      v15);
    v22 = a1[1];
    v21 = v19 + 3;
    v23 = a2;
  }
  std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
    v23,
    v22,
    v21);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(*a1, a1[1]);
    v24 = (void *)*a1;
    v25 = (const struct std::nothrow_t *)(8 * ((__int64)(*v14 - *a1) >> 3));
    if ( (unsigned __int64)v25 < 0x1000 )
    {
LABEL_19:
      operator delete(v24, v25);
      goto LABEL_20;
    }
    v25 = (const struct std::nothrow_t *)((char *)v25 + 39);
    if ( (unsigned __int64)v24 - *((_QWORD *)v24 - 1) - 8 <= 0x1F )
    {
      v24 = (void *)*((_QWORD *)v24 - 1);
      goto LABEL_19;
    }
LABEL_21:
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  }
LABEL_20:
  *a1 = v15;
  result = v19;
  a1[1] = &v15[3 * v9];
  *v14 = &v15[v13 / 8];
  return result;
}
