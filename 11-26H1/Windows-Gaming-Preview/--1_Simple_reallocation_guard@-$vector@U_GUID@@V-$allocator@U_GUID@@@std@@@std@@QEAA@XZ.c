/*
 * XREFs of ??1_Simple_reallocation_guard@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x180014234
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXAEA_K@Z @ 0x180013EB8 (--$_Reallocate@$0A@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXAEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<_GUID>::_Simple_reallocation_guard::~_Simple_reallocation_guard(__int64 a1)
{
  _QWORD *v2; // rcx
  const struct std::nothrow_t *v3; // rdx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a1 + 16));
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      if ( (unsigned __int64)v2 - *(v2 - 1) - 8 > 0x1F )
        _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, v3);
  }
}
