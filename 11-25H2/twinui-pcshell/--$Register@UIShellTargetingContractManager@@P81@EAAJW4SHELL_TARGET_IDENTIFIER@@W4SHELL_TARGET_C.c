/*
 * XREFs of ??$Register@UIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@ZW42@W43@PEAVWindowArrangementView@@@SmartCookie@@QEAAJPEAUIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@Z12PEAVWindowArrangementView@@@Z @ 0x1805058A8
 * Callers:
 *     _lambda_e618f8d09915a5c2963af92bff89d9ea_::operator() @ 0x180505F54 (_lambda_e618f8d09915a5c2963af92bff89d9ea_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x1800676F4 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_4899194df00d5f0590f482d55eef12b5_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_4899194df00d5f0590f482d55eef12b5_@@@Z @ 0x18022EEB0 (--0-$__func@V_lambda_4899194df00d5f0590f482d55eef12b5_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1802E1310 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 */

__int64 SmartCookie::Register<IShellTargetingContractManager,long (IShellTargetingContractManager::*)(enum SHELL_TARGET_IDENTIFIER,enum SHELL_TARGET_CONTRACT_FLAGS,IShellTargetingContractNotification *,unsigned long *),long (IShellTargetingContractManager::*)(unsigned long),enum SHELL_TARGET_IDENTIFIER,enum SHELL_TARGET_CONTRACT_FLAGS,WindowArrangementView *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 120) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"desktop\\internal\\shell\\inc\\private\\SmartCookie.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v6 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v10 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
      v8[0] = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      v8[1] = (__int64) IImmersiveWindowMessageService::`vcall'{32,{flat}};
      wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
      *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_4899194df00d5f0590f482d55eef12b5_,long (unsigned long)>::__func<_lambda_4899194df00d5f0590f482d55eef12b5_,long (unsigned long)>(
                                (_QWORD *)(a1 + 8),
                                v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (int)"desktop\\internal\\shell\\inc\\private\\SmartCookie.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
