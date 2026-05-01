/*
 * XREFs of ?GetSizeConstraints@CApplicationViewBase@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@1@Z @ 0x1801E0AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::GetSizeConstraints(
        CApplicationViewBase *this,
        struct IImmersiveMonitor *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  struct IImmersiveMonitor *v6; // r10
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 (__fastcall *v12)(CApplicationViewBase *, struct IImmersiveMonitor **); // rbx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v17; // [rsp+68h] [rbp+38h] BYREF
  int v18; // [rsp+70h] [rbp+40h] BYREF
  struct IImmersiveMonitor *v19; // [rsp+78h] [rbp+48h] BYREF

  v6 = a2;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v19 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = v19;
  }
  if ( v6 )
    goto LABEL_8;
  v12 = *(__int64 (__fastcall **)(CApplicationViewBase *, struct IImmersiveMonitor **))(*(_QWORD *)this + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  v13 = v12(this, &v19);
  v9 = v13;
  if ( v13 >= 0 )
  {
    v6 = v19;
LABEL_8:
    v17 = 0;
    v18 = 0;
    v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *, int *))(*(_QWORD *)v6 + 112LL))(
           v6,
           &v17,
           &v18);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(CApplicationViewBase *, _QWORD, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)this + 288LL))(
              this,
              v17,
              a3,
              a4);
      v9 = v15;
      if ( v15 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
          (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v8);
      v10 = (__int64)v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x95,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v13);
  v14 = (__int64)v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v9;
}
