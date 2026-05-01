/*
 * XREFs of ??1?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x180014128
 * Callers:
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014B68 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     _GetStringPropertyFromGameConfigStore_::_1_::dtor$0 @ 0x180043C5C (_GetStringPropertyFromGameConfigStore_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<unsigned char>::~vector<unsigned char>(__int64 a1)
{
  _QWORD *v2; // rcx
  const struct std::nothrow_t *v3; // rdx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)(*(_QWORD *)(a1 + 16) - (_QWORD)v2);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      if ( (unsigned __int64)v2 - *(v2 - 1) - 8 > 0x1F )
        _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
