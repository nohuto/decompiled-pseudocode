/*
 * XREFs of ?Split@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A83D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180010B90 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800AE980 (-count@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 */

__int64 __fastcall PointerMetadata::Split(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v6; // eax
  unsigned int v8; // ebp
  int v9; // r14d
  __int64 v10; // r15
  _OWORD *v11; // rax
  _OWORD *v12; // rdx
  int v13; // ecx
  _OWORD *v14; // rdx
  _OWORD *v15; // rax
  int v16; // edx
  int v17; // ecx
  __int64 result; // rax
  int v19; // ecx
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a3 + 316) = 0;
  v6 = *(_DWORD *)(a1 + 316);
  v8 = 0;
  if ( v6 )
  {
    v9 = 0;
    do
    {
      v10 = 144LL * v8;
      v20 = *(_DWORD *)(v10 + a1 + 324);
      if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
             a2,
             (const unsigned __int8 *)&v20) )
      {
        v11 = (_OWORD *)(v10 + a1 + 320);
        v12 = (_OWORD *)(a3 + 144LL * *(unsigned int *)(a3 + 316) + 320);
        *v12 = *v11;
        v12[1] = v11[1];
        v12[2] = v11[2];
        v12[3] = v11[3];
        v12[4] = v11[4];
        v12[5] = v11[5];
        v12[6] = v11[6];
        v12[7] = v11[7];
        v12[8] = v11[8];
        v13 = *(_DWORD *)(a3 + 316) + 1;
        *(_DWORD *)(a3 + 316) = v13;
      }
      else
      {
        v13 = v9;
        if ( v9 )
        {
          v14 = (_OWORD *)(a1 + 144LL * (v8 - v9) + 320);
          v15 = (_OWORD *)(v10 + a1 + 320);
          *v14 = *v15;
          v14[1] = v15[1];
          v14[2] = v15[2];
          v14[3] = v15[3];
          v14[4] = v15[4];
          v14[5] = v15[5];
          v14[6] = v15[6];
          v14[7] = v15[7];
          v14[8] = v15[8];
          v13 = *(_DWORD *)(a3 + 316);
        }
      }
      v6 = *(_DWORD *)(a1 + 316);
      ++v8;
      v9 = v13;
    }
    while ( v8 < v6 );
    v3 = v13;
  }
  v16 = 464;
  *(_DWORD *)(a1 + 316) = v6 - v3;
  v17 = *(_DWORD *)(a3 + 316);
  if ( v17 )
    result = PointerInputInfo::GetSizeForPointerCount(v17);
  else
    result = 464LL;
  *(_DWORD *)(a3 + 24) = result;
  v19 = *(_DWORD *)(a1 + 316);
  if ( v19 )
  {
    result = PointerInputInfo::GetSizeForPointerCount(v19);
    v16 = result;
  }
  *(_DWORD *)(a1 + 24) = v16;
  return result;
}
