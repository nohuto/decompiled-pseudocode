/*
 * XREFs of ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@PEAX@Z @ 0x180083660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x180098044 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800E3760 (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 *     ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800E6EEC (-RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z.c)
 */

void __fastcall LampArrayRawInputProvider::OnSipcEndpointStatus(__int64 a1, int a2, __int64 a3)
{
  __int64 *i; // rbx
  __int64 ***v5; // r14
  __int64 **j; // rdi
  const char *v7; // r9
  __int64 **k; // rdi
  unsigned int v9; // edx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
  {
    for ( i = *(__int64 **)(a3 + 96); i != (__int64 *)(a3 + 96); i = (__int64 *)*i )
    {
      if ( i[2] == a1 )
      {
        v5 = (__int64 ***)(a3 + 72);
        for ( j = *(__int64 ***)(a3 + 72); j != (__int64 **)v5; j = (__int64 **)*j )
        {
          if ( LampArrayDevice::RemoveViewClient((LampArrayDevice *)j[2], (struct LampArrayEndpoint *)(i + 2))
            && !SetEvent(*(HANDLE *)(a3 + 328)) )
          {
            wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x260,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
              v7);
          }
        }
        if ( *((_DWORD *)i + 6) == *(_DWORD *)(a3 + 64) )
        {
          for ( k = *v5; k != (__int64 **)v5; k = (__int64 **)*k )
            LampArrayRawInputProvider::SetActiveViewClient(
              (LampArrayRawInputProvider *)a3,
              (struct LampArrayDevice *)k[2],
              0LL);
        }
        AcquireSRWLockExclusive((PSRWLOCK)(a3 + 144));
        v10 = (__int64 *)*i;
        v13 = (RTL_SRWLOCK *)(a3 + 144);
        if ( (__int64 *)v10[1] != i || (v11 = (__int64 **)i[1], *v11 != i) )
          __fastfail(3u);
        *v11 = v10;
        v10[1] = (__int64)v11;
        --*(_DWORD *)(a3 + 112);
        LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(
          (LampArrayRawInputProvider::LampArrayClientListEntry *)i,
          v9);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
        return;
      }
    }
  }
}
