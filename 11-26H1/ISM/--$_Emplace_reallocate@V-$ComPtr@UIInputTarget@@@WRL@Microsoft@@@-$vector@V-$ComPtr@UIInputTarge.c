/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180014900
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180013EA0 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r15
  __int64 *v13; // rsi
  void *v14; // rax
  __int64 *v15; // rbp
  __int64 *i; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rax
  __int64 *j; // r8
  __int64 *k; // rcx
  __int64 *v21; // rbx
  __int64 *m; // rdi
  __int64 v23; // rcx
  __int64 *v24; // rcx
  const struct std::nothrow_t *v25; // rdx

  v4 = a2;
  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = a1[2] - *a1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    goto LABEL_41;
  v10 = (v9 >> 1) + v9;
  v11 = v8;
  if ( v10 >= v8 )
    v11 = v10;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_41;
  v12 = 8 * v11;
  if ( !(8 * v11) )
  {
    v13 = 0LL;
    goto LABEL_13;
  }
  if ( v12 < 0x1000 )
  {
    v13 = (__int64 *)operator new(8 * v11);
    goto LABEL_13;
  }
  if ( v12 + 39 < v12 )
LABEL_41:
    std::_Throw_bad_array_new_length();
  v14 = operator new(v12 + 39);
  if ( !v14 )
    goto LABEL_39;
  v13 = (__int64 *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *(v13 - 1) = (__int64)v14;
LABEL_13:
  v15 = &v13[v6];
  i = v15 + 1;
  *v15 = 0LL;
  if ( v15 != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v17 = a1[1];
  v18 = *a1;
  if ( v4 == v17 )
  {
    for ( i = v13; v18 != v17; ++v18 )
    {
      *i = 0LL;
      if ( i != v18 )
      {
        *i = *v18;
        *v18 = 0LL;
      }
      ++i;
    }
  }
  else
  {
    for ( j = v13; v18 != v4; ++v18 )
    {
      *j = 0LL;
      if ( j != v18 )
      {
        *j = *v18;
        *v18 = 0LL;
      }
      ++j;
    }
    for ( k = a1[1]; v4 != k; ++v4 )
    {
      *i = 0LL;
      if ( i != v4 )
      {
        *i = *v4;
        *v4 = 0LL;
      }
      ++i;
    }
  }
  v21 = *a1;
  if ( *a1 )
  {
    for ( m = a1[1]; v21 != m; ++v21 )
    {
      v23 = *v21;
      if ( *v21 )
      {
        *v21 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 16LL))(v23, i);
      }
    }
    v24 = *a1;
    v25 = (const struct std::nothrow_t *)(((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v25 < 0x1000 )
      goto LABEL_37;
    v25 = (const struct std::nothrow_t *)((char *)v25 + 39);
    if ( (unsigned __int64)v24 - *(v24 - 1) - 8 <= 0x1F )
    {
      v24 = (__int64 *)*(v24 - 1);
LABEL_37:
      operator delete(v24, v25);
      goto LABEL_38;
    }
LABEL_39:
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  }
LABEL_38:
  *a1 = v13;
  a1[1] = &v13[v8];
  a1[2] = &v13[v12 / 8];
  return v15;
}
