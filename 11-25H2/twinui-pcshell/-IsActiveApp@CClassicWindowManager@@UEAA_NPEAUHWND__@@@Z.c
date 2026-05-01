/*
 * XREFs of ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1800224D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
bool __fastcall CClassicWindowManager::IsActiveApp(CClassicWindowManager *this, HWND a2)
{
  HWND v2; // r15
  struct _RTL_CRITICAL_SECTION *v4; // r13
  bool v5; // si
  unsigned __int64 v6; // r12
  unsigned __int64 i; // rdi
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  struct IUnknown *v15; // rbx
  int v16; // [rsp+38h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+48h] BYREF
  HWND v18; // [rsp+98h] [rbp+50h]
  __int64 v19; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+60h]

  v18 = a2;
  v2 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 64) & -(__int64)(this != (CClassicWindowManager *)72));
  v16 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1LL);
  v5 = 0;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v17 = 0LL;
  v20 = 0LL;
  v6 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 16); ++i )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v19 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(v8, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v19) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v19 + 192LL))(v19, v2) )
    {
      v9 = 0;
    }
    else
    {
      v9 = -1;
    }
    v10 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( !v9 )
    {
      v6 = i;
      v11 = 0;
      goto LABEL_14;
    }
    v2 = v18;
  }
  v11 = -2147319765;
LABEL_14:
  if ( v11 >= 0 )
  {
    v14 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 15) + 8 * v6);
    if ( (**v14)(v14, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v17) >= 0 )
    {
      if ( v6 )
      {
        v5 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 160LL))(v17) )
        {
          v15 = *(struct IUnknown **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
          v18 = (HWND)v15;
          if ( v15 )
          {
            ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->AddRef)(v15);
            v5 = (unsigned int)SHIsSameObject(v15, **((struct IUnknown ***)this + 15)) != 0;
            ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
          }
        }
      }
      else
      {
        v5 = 1;
      }
    }
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v16 >= 0 )
    LeaveCriticalSection(v4);
  return v5;
}
