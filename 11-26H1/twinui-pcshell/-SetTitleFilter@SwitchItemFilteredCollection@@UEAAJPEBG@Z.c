/*
 * XREFs of ?SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z @ 0x1804B4190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804B47D0 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 *     ?_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x1804B4D08 (-_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemFilteredCollection::SetTitleFilter(
        SwitchItemFilteredCollection *this,
        const unsigned __int16 *a2)
{
  SwitchItemFilteredCollection *v4; // r14
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int i; // ebp
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, struct IObservableItem **); // rbx
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  struct IObservableItem *v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = (SwitchItemFilteredCollection *)((char *)this - 168);
  if ( !*((_BYTE *)this + 104) )
  {
    v14 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 24LL))(
           *((_QWORD *)this + 2),
           &v14);
    if ( v5 < 0 )
    {
      v6 = 298LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    for ( i = 0; i < v14; ++i )
    {
      v15 = 0LL;
      v8 = *((_QWORD *)this + 2);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      v10 = v9(v8, i, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v15);
      v5 = v10;
      if ( v10 < 0 )
      {
        v11 = 302LL;
        goto LABEL_11;
      }
      v10 = SwitchItemFilteredCollection::_RegisterItemForTitleChanges(v4, v15);
      v5 = v10;
      if ( v10 < 0 )
      {
        v11 = 303LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
        return (unsigned int)v5;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    }
    *((_BYTE *)this + 104) = 1;
  }
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 80,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v5 < 0 )
  {
    v6 = 309LL;
    goto LABEL_17;
  }
  v5 = SwitchItemFilteredCollection::_ApplyFilterToAllItems(v4);
  if ( v5 < 0 )
  {
    v6 = 311LL;
    goto LABEL_17;
  }
  return (unsigned int)v5;
}
