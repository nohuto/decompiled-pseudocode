/*
 * XREFs of ?GetChildren@CMultitaskingViewElementBase@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1804B03B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180088FA8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$CopyTo@UIObjectArray@@@?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJPEAPEAUIObjectArray@@@Z @ 0x1801BAAE4 (--$CopyTo@UIObjectArray@@@-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJPEAPEAUIObjectArray@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewElementBase::GetChildren(
        CMultitaskingViewElementBase *this,
        struct IObjectArray **a2)
{
  const struct _GUID *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  int v11; // eax
  int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v15; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  v6 = CEnumerableObjectCollection::CreateInstance(v5, v4, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 49LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  v10 = &v9[*((_QWORD *)this + 3)];
  while ( v9 != v10 )
  {
    v11 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, *v9);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v11);
      v7 = v12;
      goto LABEL_11;
    }
    ++v9;
  }
  v6 = Microsoft::WRL::ComPtr<IObjectCollection>::CopyTo<IObjectArray>(&v15, (__int64)a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 55LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  return v7;
}
