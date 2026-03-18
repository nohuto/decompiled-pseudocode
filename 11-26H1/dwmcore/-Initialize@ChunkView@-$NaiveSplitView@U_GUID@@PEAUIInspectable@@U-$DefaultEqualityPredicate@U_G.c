/*
 * XREFs of ?Initialize@ChunkView@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IIterator@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@456@@Z @ 0x18029FFDC
 * Callers:
 *     ?Force@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18029E898 (-Force@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?InternalRelease@?$ComPtr@VChunk@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1802A0268 (-InternalRelease@-$ComPtr@VChunk@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkView::Initialize(
        __int64 a1,
        __int64 *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r15d
  int v8; // edi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64 *, __int64 *); // rdi
  __int64 v11; // rdi
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk>::InternalRelease(v13);
  v4 = MIDL_user_allocate(0x90uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 0;
    *(_QWORD *)v4 = &Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk::`vftable';
    v4[2] = 1;
    v6 = *a2;
    v13[0] = v5;
    LOBYTE(v14) = 0;
    v7 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 56))(a2, &v14);
    if ( v8 >= 0 )
    {
      while ( (_BYTE)v14 )
      {
        if ( v7 < 0x10 )
        {
          v9 = *a2;
          v15 = 0LL;
          v10 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 48);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
          v8 = v10(a2, &v15);
          if ( v8 >= 0 )
          {
            v11 = v15;
            if ( v5[3] == 16 )
            {
              v8 = -2147024882;
            }
            else
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
              *(_QWORD *)&v5[2 * v5[3]++ + 4] = v11;
              v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*a2 + 64))(a2, &v14);
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
          ++v7;
          if ( v8 >= 0 )
            continue;
        }
        if ( v8 < 0 )
          goto LABEL_16;
        break;
      }
      if ( *(_DWORD **)(a1 + 72) != v5 )
      {
        if ( v5 )
          _InterlockedIncrement(v5 + 2);
        v14 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v5;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk>::InternalRelease(&v14);
      }
    }
  }
  else
  {
    v13[0] = 0LL;
    v8 = -2147024882;
  }
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk>::InternalRelease(v13);
  return (unsigned int)v8;
}
