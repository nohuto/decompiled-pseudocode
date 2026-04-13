/*
 * XREFs of ?Initialize@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IIterator@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@456@@Z @ 0x18009C114
 * Callers:
 *     ?Force@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18009B058 (-Force@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VChunk@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18009C450 (-InternalRelease@-$ComPtr@VChunk@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$Defaul.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::Initialize(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  int v5; // ebx
  unsigned int v6; // r15d
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  _DWORD *v8; // r14
  __int64 v9; // r12
  _DWORD *v10; // rax
  __int64 v12[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+40h] BYREF
  _DWORD *v14; // [rsp+78h] [rbp+48h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Chunk>::InternalRelease(&v14);
  v4 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Chunk::`vftable';
    v4[2] = 1;
    v4[3] = 0;
    v14 = v4;
    LOBYTE(v13) = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v13);
    v6 = 0;
    if ( v5 >= 0 )
    {
      while ( (_BYTE)v13 )
      {
        if ( v6 < 0x10 )
        {
          v12[0] = 0LL;
          v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
          v5 = v7(a2, v12);
          if ( v5 >= 0 )
          {
            v8 = v14;
            v9 = v12[0];
            v5 = 0;
            if ( v14[3] == 16 )
            {
              v5 = -2147024882;
            }
            else
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 8LL))(v12[0]);
              *(_QWORD *)&v8[2 * v8[3]++ + 4] = v9;
            }
            if ( v5 >= 0 )
              v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v13);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
          ++v6;
          if ( v5 >= 0 )
            continue;
        }
        if ( v5 < 0 )
          goto LABEL_18;
        break;
      }
      v10 = v14;
      if ( *(_DWORD **)(a1 + 72) != v14 )
      {
        if ( v14 )
          _InterlockedIncrement(v14 + 2);
        v13 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v10;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Chunk>::InternalRelease(&v13);
      }
    }
  }
  else
  {
    v14 = 0LL;
    v5 = -2147024882;
  }
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Chunk>::InternalRelease(&v14);
  return (unsigned int)v5;
}
