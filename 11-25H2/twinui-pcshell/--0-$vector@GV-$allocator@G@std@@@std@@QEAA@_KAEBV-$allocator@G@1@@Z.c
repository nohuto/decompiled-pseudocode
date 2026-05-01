/*
 * XREFs of ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x1801D4904
 * Callers:
 *     _anonymous_namespace_::GetRegistrySettingString @ 0x1805AEA38 (_anonymous_namespace_--GetRegistrySettingString.c)
 * Callees:
 *     ?_Buy_nonzero@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x1801D4BAC (-_Buy_nonzero@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

__int64 *__fastcall std::vector<unsigned short>::vector<unsigned short>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  size_t v5; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    std::vector<unsigned short>::_Buy_nonzero();
    v4 = *a1;
    v5 = 2 * a2;
    memset_0((void *)*a1, 0, v5);
    a1[1] = v5 + v4;
  }
  return a1;
}
