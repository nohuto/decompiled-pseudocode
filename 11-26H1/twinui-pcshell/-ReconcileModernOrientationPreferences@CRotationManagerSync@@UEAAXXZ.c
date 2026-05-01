/*
 * XREFs of ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x18005A670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18005A828 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18005B668 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_ @ 0x1802ED524 (_lambda_dafc2c99c39dbaf60a815ea558bf8360_--_lambda_dafc2c99c39dbaf60a815ea558bf8360_.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1802ED558 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CRotationManagerSync::ReconcileModernOrientationPreferences(CRotationManagerSync *this)
{
  char *v2; // rdi
  CIAMGlobals *v3; // rcx
  bool IsCalledOnIAMThread; // al
  __int64 v5; // r14
  CRotationManagerSync *v6; // rbx
  __int64 v7; // rcx
  enum ORIENTATION_PREFERENCE v8; // r9d
  HWND v9; // r8
  unsigned int Ptr_high; // edx
  __int64 *v11; // rax
  __int64 *v12; // rbx
  enum ORIENTATION_PREFERENCE v13; // esi
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  CRotationManagerSync *v15; // [rsp+28h] [rbp-10h]
  __int64 *dwProcessId; // [rsp+70h] [rbp+38h] BYREF
  enum ORIENTATION_PREFERENCE v17; // [rsp+78h] [rbp+40h] BYREF
  HWND hWnd; // [rsp+80h] [rbp+48h] BYREF
  char *v19; // [rsp+88h] [rbp+50h] BYREF

  v2 = (char *)this - 72;
  v19 = (char *)this - 72;
  if ( this != (CRotationManagerSync *)72 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))((char *)this - 72);
  lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_(&v14, &v19, v2);
  IsCalledOnIAMThread = CIAMGlobals::IsCalledOnIAMThread(v3);
  v5 = v14;
  if ( IsCalledOnIAMThread )
  {
    v6 = v15;
    v7 = *((_QWORD *)v15 + 20);
    if ( !v7 )
      goto LABEL_8;
    if ( !*((_DWORD *)v15 + 31) )
    {
      v8 = ORIENTATION_PREFERENCE_NONE;
      v9 = 0LL;
      Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
LABEL_7:
      CRotationManagerSync::_SetAutoRotationConfiguration(v6, Ptr_high, v9, v8);
      goto LABEL_8;
    }
    hWnd = 0LL;
    v17 = ORIENTATION_PREFERENCE_NONE;
    if ( (*(int (__fastcall **)(__int64, HWND *, enum ORIENTATION_PREFERENCE *))(*(_QWORD *)v7 + 528LL))(
           v7,
           &hWnd,
           &v17) >= 0 )
    {
      LODWORD(dwProcessId) = 0;
      v9 = 0LL;
      v13 = ORIENTATION_PREFERENCE_NONE;
      if ( hWnd )
      {
        GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
        v9 = hWnd;
        Ptr_high = (unsigned int)dwProcessId;
      }
      else
      {
        Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
        LODWORD(dwProcessId) = Ptr_high;
        v13 = v17;
      }
      v8 = v13;
      goto LABEL_7;
    }
  }
  else
  {
    v11 = (__int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(v11);
      v12[2] = v5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12 + 2);
      v12[3] = (__int64)v15;
      *v12 = (__int64)&off_18072E7C0;
    }
    dwProcessId = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)this + 9) + 72LL))(
        *((_QWORD *)this + 9),
        v12,
        0LL);
      (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
    }
  }
LABEL_8:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
}
