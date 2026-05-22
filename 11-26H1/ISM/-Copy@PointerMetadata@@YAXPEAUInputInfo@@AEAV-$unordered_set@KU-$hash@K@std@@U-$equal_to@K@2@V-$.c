/*
 * XREFs of ?Copy@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A8240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180010B90 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800AE980 (-count@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 */

__int64 __fastcall PointerMetadata::Copy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _OWORD *v7; // rax
  _OWORD *v8; // rdx
  int v9; // ecx
  __int64 result; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  for ( *(_DWORD *)(a3 + 316) = 0; (unsigned int)v3 < *(_DWORD *)(a1 + 316); v3 = (unsigned int)(v3 + 1) )
  {
    v11 = *(_DWORD *)(a1 + 144 * v3 + 324);
    if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
           a2,
           (const unsigned __int8 *)&v11) )
    {
      v7 = (_OWORD *)(144 * v3 + a1 + 320);
      v8 = (_OWORD *)(a3 + 144LL * *(unsigned int *)(a3 + 316) + 320);
      *v8 = *v7;
      v8[1] = v7[1];
      v8[2] = v7[2];
      v8[3] = v7[3];
      v8[4] = v7[4];
      v8[5] = v7[5];
      v8[6] = v7[6];
      v8[7] = v7[7];
      v8[8] = v7[8];
      ++*(_DWORD *)(a3 + 316);
    }
  }
  v9 = *(_DWORD *)(a3 + 316);
  if ( v9 )
    result = PointerInputInfo::GetSizeForPointerCount(v9);
  else
    result = 464LL;
  *(_DWORD *)(a3 + 24) = result;
  return result;
}
