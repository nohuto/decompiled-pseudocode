/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180143520
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801433BC (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 *     ?get@?$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperationsTraceLogging@@P6AXXZ@Z @ 0x180143694 (-get@-$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperations.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, HWND a2, int a3)
{
  _DWORD *v6; // r9
  __int64 v7; // rbx
  bool i; // zf
  signed __int32 v9; // eax
  unsigned int v10; // esi
  signed __int32 v11; // edx
  BOOL pvAttribute[14]; // [rsp+20h] [rbp-38h] BYREF
  DWORD WindowThreadProcessId; // [rsp+60h] [rbp+8h] BYREF
  HWND v15; // [rsp+68h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+70h] [rbp+18h] BYREF
  BOOL v17; // [rsp+78h] [rbp+20h] BYREF

  v15 = a2;
  v6 = *(_DWORD **)(wil::details::static_lazy<PrivilegedOperationsTraceLogging>::get(
                      a1,
                      _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v6 && *v6 )
  {
    dwProcessId = 0;
    WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
    v17 = a3 == 1;
    PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>(
      &v17,
      (__int64 *)&v15,
      (int *)&WindowThreadProcessId,
      (int *)&dwProcessId);
  }
  v7 = *(_QWORD *)(a1 + 48);
  for ( i = v7 == 0; !i; i = v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 36), v9 + 1, v9) )
  {
    v9 = *(_DWORD *)(v7 + 36);
    if ( v9 == 0x7FFFFFFF )
      break;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v7 + 48));
  EnableIAMAccess(*(_QWORD *)(v7 + 40), 1LL);
  pvAttribute[0] = a3 != 0;
  v10 = DwmSetWindowAttribute(a2, 0xDu, pvAttribute, 4u);
  EnableIAMAccess(*(_QWORD *)(v7 + 40), 0LL);
  ReleaseSRWLockExclusive((PSRWLOCK)(v7 + 48));
  do
    v11 = *(_DWORD *)(v7 + 36);
  while ( v11 != 0x7FFFFFFF && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 36), v11 - 1, v11) );
  if ( v11 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 72LL))(v7, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v10;
}
