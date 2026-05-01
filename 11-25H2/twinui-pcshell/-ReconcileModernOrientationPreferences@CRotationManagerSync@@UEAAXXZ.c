/*
 * XREFs of ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x1800D8C80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x1800D8430 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1800D8E1C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1802F2570 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CRotationManagerSync::ReconcileModernOrientationPreferences(CRotationManagerSync *this)
{
  _DWORD *v2; // rsi
  CIAMGlobals *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  HWND v6; // r8
  unsigned int Ptr_high; // edx
  __int64 *v8; // rax
  __int64 *v9; // rbx
  unsigned int v10; // ebx
  __int64 v11[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 *dwProcessId; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+38h] BYREF
  HWND hWnd; // [rsp+70h] [rbp+40h] BYREF
  char *v15; // [rsp+78h] [rbp+48h]

  v2 = (_DWORD *)((char *)this - 72);
  v15 = (char *)this - 72;
  if ( this != (CRotationManagerSync *)72 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))((char *)this - 72);
  v11[0] = (__int64)v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
  v11[1] = (__int64)v2;
  if ( CIAMGlobals::IsCalledOnIAMThread(v3) )
  {
    v4 = *((_QWORD *)v2 + 20);
    if ( !v4 )
      goto LABEL_8;
    if ( !v2[31] )
    {
      v5 = 0LL;
      v6 = 0LL;
      Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
LABEL_7:
      CRotationManagerSync::_SetAutoRotationConfiguration((CRotationManagerSync *)v2, Ptr_high, v6, v5);
      goto LABEL_8;
    }
    hWnd = 0LL;
    v13 = 0;
    if ( (*(int (__fastcall **)(__int64, HWND *, unsigned int *))(*(_QWORD *)v4 + 528LL))(v4, &hWnd, &v13) >= 0 )
    {
      LODWORD(dwProcessId) = 0;
      v6 = 0LL;
      v10 = 0;
      if ( hWnd )
      {
        GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
        v6 = hWnd;
        Ptr_high = (unsigned int)dwProcessId;
      }
      else
      {
        Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
        LODWORD(dwProcessId) = Ptr_high;
        v10 = v13;
      }
      v5 = v10;
      goto LABEL_7;
    }
  }
  else
  {
    v8 = (__int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(v8);
      v9[2] = (__int64)v2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9 + 2);
      v9[3] = (__int64)v2;
      *v9 = (__int64)&off_180705C90;
    }
    dwProcessId = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)this + 9) + 72LL))(
        *((_QWORD *)this + 9),
        v9,
        0LL);
      (*(void (__fastcall **)(__int64 *))(*v9 + 16))(v9);
    }
  }
LABEL_8:
  if ( v2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
