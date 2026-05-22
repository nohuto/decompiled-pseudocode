/*
 * XREFs of ??$_Eqrange@U_GUID@@@?$_Tree@V?$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U_GUID@@PEAX@std@@PEAU12@@1@AEBU_GUID@@@Z @ 0x180193B48
 * Callers:
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x180194848 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>,0>>::_Eqrange<_GUID>(
        __int64 *a1,
        _QWORD *a2,
        const void *a3)
{
  __int64 *v3; // rbp
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 *i; // rdi
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  for ( i = v7; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    if ( memcmp_0((char *)i + 28, a3, 0x10uLL) >= 0 )
    {
      if ( *((_BYTE *)v6 + 25) && memcmp_0(a3, (char *)i + 28, 0x10uLL) < 0 )
        v6 = i;
      v3 = i;
    }
    else
    {
      i += 2;
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (__int64 *)*v6;
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( memcmp_0(a3, (char *)v7 + 28, 0x10uLL) >= 0 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}
