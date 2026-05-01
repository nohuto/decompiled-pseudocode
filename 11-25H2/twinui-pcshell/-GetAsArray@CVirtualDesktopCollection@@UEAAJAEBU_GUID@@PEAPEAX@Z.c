/*
 * XREFs of ?GetAsArray@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180269CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180088FA8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::GetAsArray(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  int v13; // eax
  int v14; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v17; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  v8 = CEnumerableObjectCollection::CreateInstance(v7, v6, &v17);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (_QWORD *)*((_QWORD *)this + 14);
    v12 = &v11[*((_QWORD *)this + 15)];
    while ( v11 != v12 )
    {
      v13 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v17 + 40LL))(v17, *v11);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFA,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
          (const char *)(unsigned int)v13);
        v9 = v14;
        goto LABEL_10;
      }
      ++v11;
    }
    v8 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v17)(v17, a2, a3);
    v9 = v8;
    if ( v8 >= 0 )
      goto LABEL_10;
    v10 = 252LL;
  }
  else
  {
    v10 = 246LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v8);
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  return v9;
}
