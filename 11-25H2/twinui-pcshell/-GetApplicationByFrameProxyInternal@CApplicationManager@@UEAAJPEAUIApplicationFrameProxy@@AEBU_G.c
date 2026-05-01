/*
 * XREFs of ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x18006B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CApplicationManager::GetApplicationByFrameProxyInternal(
        CApplicationManager *this,
        struct IApplicationFrameProxy *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 i; // r14
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int v8; // r15d
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, __int64 *); // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v16)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, const struct _GUID *, void **); // [rsp+28h] [rbp-30h] BYREF
  __int64 v20[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+48h] BYREF
  struct IApplicationFrameProxy *v22; // [rsp+A8h] [rbp+50h]
  const struct _GUID *v23; // [rsp+B0h] [rbp+58h]
  void **v24; // [rsp+B8h] [rbp+60h]

  v24 = a4;
  v23 = a3;
  v22 = a2;
  *a4 = 0LL;
  v20[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
  v19 = 0LL;
  v20[1] = 0LL;
  v5 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 50); ++i )
  {
    v20[2] = 0LL;
    v7 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 49) + 8 * i);
    v20[3] = (__int64)v7;
    if ( v7 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[1])(v7);
    v8 = -1;
    v18 = 0LL;
    v9 = **v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    if ( v9(v7, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v18) >= 0 )
    {
      v21 = 0LL;
      v10 = v18;
      v11 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 496LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      if ( v11(v10, &v21) >= 0 )
        v8 = ((*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationFrameProxy *))(*(_QWORD *)v21 + 232LL))(
                v21,
                v22) != 0)
           - 1;
      v12 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
    if ( !v8 )
    {
      v5 = i;
      v14 = 0;
      goto LABEL_14;
    }
  }
  v14 = -2147319765;
LABEL_14:
  if ( v14 >= 0 )
  {
    v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 49) + 8 * v5);
    v14 = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v19);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v20);
  if ( v14 >= 0 )
    v14 = (**v19)(v19, v23, v24);
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v16)[2])(v16);
  }
  return (unsigned int)v14;
}
