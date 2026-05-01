/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1804E9D50
 * Callers:
 *     _lambda_5053f9d2b5f05b91476ca909f4f2555a_::operator() @ 0x1804E9324 (_lambda_5053f9d2b5f05b91476ca909f4f2555a_--operator().c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1804E9C90 (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // r11d
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_DWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v4 + 25) && v7 < *(_DWORD *)(v6 + 32) )
          v4 = v6;
        v2 = v6;
      }
      else
      {
        v6 += 16LL;
      }
      v6 = *(_QWORD *)v6;
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v5 = *(_QWORD *)v4;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v8 = *a2;
    do
    {
      v9 = v5;
      if ( v8 >= *(_DWORD *)(v5 + 32) )
        v9 = v4;
      v4 = v9;
      if ( v8 >= *(_DWORD *)(v5 + 32) )
        v5 += 16LL;
      v5 = *(_QWORD *)v5;
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  v11[0] = v2;
  v11[1] = v4;
  return std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Erase(
           a1,
           v11);
}
