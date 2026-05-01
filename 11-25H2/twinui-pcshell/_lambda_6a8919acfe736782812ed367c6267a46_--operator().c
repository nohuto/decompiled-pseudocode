/*
 * XREFs of _lambda_6a8919acfe736782812ed367c6267a46_::operator() @ 0x1804D8560
 * Callers:
 *     wil::ResultFromException__lambda_6a8919acfe736782812ed367c6267a46___ @ 0x1804D7E78 (wil--ResultFromException__lambda_6a8919acfe736782812ed367c6267a46___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180088FA8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1804D8004 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_6a8919acfe736782812ed367c6267a46_::operator()(_QWORD **a1)
{
  __int64 v2; // rbx
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  int Instance; // eax
  __int64 v6; // rax
  int v7; // eax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)(*(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
                                 *a1,
                                 (__int64)v8,
                                 (unsigned int *)a1[1])
                  + 40LL) )
  {
    v2 = *(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
                      *a1,
                      (__int64)v8,
                      (unsigned int *)a1[1]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v2 + 40));
    Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)(v2 + 40));
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x439,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
  }
  if ( *(_QWORD *)(*(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
                                *a1,
                                (__int64)v8,
                                (unsigned int *)a1[1])
                 + 40LL) )
  {
    v6 = std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
           *a1,
           (__int64)v8,
           (unsigned int *)a1[1]);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v6 + 40LL) + 40LL))(
           *(_QWORD *)(*(_QWORD *)v6 + 40LL),
           *a1[2]);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x439,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v7);
  }
}
