/*
 * XREFs of ??$_Uninitialized_move@PEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@YAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x180053740
 * Callers:
 *     ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180016AD0 (--$_Emplace_reallocate@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VI.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 *v5; // r9
  char *v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx

  result = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    v6 = (char *)((char *)a3 - (char *)a1);
    do
    {
      v7 = v5[1];
      v5[1] = 0LL;
      v8 = *v5;
      *v5 = 0LL;
      v9 = *(v5 - 1);
      *(v5 - 1) = 0LL;
      *result = v9;
      *(_QWORD *)&v6[(_QWORD)v5] = v8;
      *(_QWORD *)&v6[(_QWORD)v5 + 8] = v7;
      result += 3;
      v5 += 3;
    }
    while ( v5 - 1 != a2 );
  }
  return result;
}
