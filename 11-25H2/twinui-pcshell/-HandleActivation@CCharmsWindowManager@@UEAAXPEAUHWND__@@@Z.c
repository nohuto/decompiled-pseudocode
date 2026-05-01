/*
 * XREFs of ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1802316E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetAppPosition@VCTaskWindowFinder@@@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEBAJAEBVCTaskWindowFinder@@_KPEA_K@Z @ 0x1801DB074 (--$GetAppPosition@VCTaskWindowFinder@@@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x1802F3954 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CCharmsWindowManager::HandleActivation(CCharmsWindowManager *this, unsigned __int64 a2)
{
  char v4; // r15
  char v5; // r14
  char v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r8
  int App; // edi
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // rdi
  HWND v14; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  char v16; // [rsp+30h] [rbp-10h]
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+48h]
  __int64 v19; // [rsp+90h] [rbp+50h] BYREF

  v18 = a2;
  if ( *((_QWORD *)this + 4) )
  {
    v4 = 1;
    v5 = *((_BYTE *)this + 56) & 1;
    v6 = 0;
    v7 = **((_QWORD **)this + 3);
    v19 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
    v17 = 0LL;
    v14 = (HWND)a2;
    v15 = 0LL;
    v16 = 0;
    App = CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::GetAppPosition<CTaskWindowFinder>(
            (__int64)this + 16,
            (__int64)&v14,
            v8,
            (unsigned __int64 *)&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v10 = v17;
    if ( App < 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( !v17 && (*((_BYTE *)this + 56) & 1) != 0 || (v6 = 1, !v17) )
        v5 = 0;
      if ( v6 )
        goto LABEL_11;
    }
    if ( !v5 )
    {
LABEL_21:
      *((_DWORD *)this + 14) &= ~8u;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      return;
    }
LABEL_11:
    if ( v5 )
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    else
      v11 = 0LL;
    v14 = (HWND)v11;
    v15 = v18 & -(__int64)(v4 != 0);
    v12 = (*(unsigned int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8), &v14) >> 31;
    if ( v6 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v10);
      v13 = v17;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      *((_DWORD *)this + 14) |= ((*(int (__fastcall **)(__int64))(*(_QWORD *)v13 + 120LL))(v13) >> 31) + 3;
      CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::PositionNewActiveApp(
        (char *)this + 16,
        &v17,
        v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    }
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 112LL))(v7);
      if ( !v6 )
        *((_DWORD *)this + 14) = 0;
    }
    if ( !(_BYTE)v12 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
    goto LABEL_21;
  }
}
