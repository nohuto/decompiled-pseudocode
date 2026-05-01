/*
 * XREFs of ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1802227C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetAppPosition@VCTaskWindowFinder@@@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEBAJAEBVCTaskWindowFinder@@_KPEA_K@Z @ 0x1801CE4F0 (--$GetAppPosition@VCTaskWindowFinder@@@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x1802EE918 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CCharmsWindowManager::HandleActivation(CCharmsWindowManager *this, unsigned __int64 a2)
{
  char v4; // r14
  char v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r8
  int App; // edi
  __int64 v9; // r13
  char v10; // di
  __int64 v11; // rax
  bool v12; // r12
  __int64 v13; // rdi
  unsigned __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  char v16; // [rsp+30h] [rbp-10h]
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  __int64 v18; // [rsp+90h] [rbp+50h] BYREF

  if ( *((_QWORD *)this + 4) )
  {
    v4 = *((_BYTE *)this + 56) & 1;
    v5 = 0;
    v6 = **((_QWORD **)this + 3);
    v18 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
    v17 = 0LL;
    v14 = a2;
    v15 = 0LL;
    v16 = 0;
    App = CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::GetAppPosition<CTaskWindowFinder>(
            (__int64)this + 16,
            (__int64 *)&v14,
            v7,
            (unsigned __int64 *)&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v9 = v17;
    if ( App < 0 )
    {
      v10 = 0;
LABEL_11:
      if ( !v4 )
      {
LABEL_22:
        *((_DWORD *)this + 14) &= ~8u;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        return;
      }
LABEL_12:
      if ( v4 )
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      else
        v11 = 0LL;
      v14 = v11;
      v15 = a2 & -(__int64)(v10 != 0);
      v12 = (*(int (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 8) + 56LL))(
              *((_QWORD *)this + 8),
              &v14) >= 0;
      if ( v5 )
      {
        v17 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v9);
        v13 = v17;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
        *((_DWORD *)this + 14) |= ((*(int (__fastcall **)(__int64))(*(_QWORD *)v13 + 120LL))(v13) >> 31) + 3;
        CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::PositionNewActiveApp(
          (char *)this + 16,
          &v17,
          v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      }
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6);
        if ( !v5 )
          *((_DWORD *)this + 14) = 0;
      }
      if ( v12 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
      goto LABEL_22;
    }
    if ( v17 || (*((_BYTE *)this + 56) & 1) == 0 )
    {
      v5 = 1;
      if ( v17 )
        goto LABEL_8;
    }
    else
    {
      v5 = 0;
    }
    v4 = 0;
LABEL_8:
    v10 = 1;
    if ( v5 )
      goto LABEL_12;
    goto LABEL_11;
  }
}
