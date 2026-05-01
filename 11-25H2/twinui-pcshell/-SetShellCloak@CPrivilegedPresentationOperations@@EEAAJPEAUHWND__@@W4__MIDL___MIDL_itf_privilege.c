/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180150340
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801501E0 (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 *     ?get@?$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperationsTraceLogging@@P6AXXZ@Z @ 0x1801504B4 (-get@-$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperations.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, __int64 a2, int a3)
{
  HWND v3; // rsi
  _DWORD *v6; // rdx
  __int64 v7; // rbx
  signed __int32 v8; // eax
  unsigned int v9; // esi
  signed __int32 v10; // edx
  BOOL pvAttribute[6]; // [rsp+20h] [rbp-18h] BYREF
  DWORD WindowThreadProcessId; // [rsp+70h] [rbp+38h] BYREF
  HWND v14; // [rsp+78h] [rbp+40h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+48h] BYREF
  BOOL v16; // [rsp+88h] [rbp+50h] BYREF

  v14 = (HWND)a2;
  v3 = (HWND)a2;
  v6 = *(_DWORD **)(wil::details::static_lazy<PrivilegedOperationsTraceLogging>::get(
                      a1,
                      _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v6 && *v6 )
  {
    dwProcessId = 0;
    WindowThreadProcessId = GetWindowThreadProcessId(v3, &dwProcessId);
    v16 = a3 == 1;
    PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>(
      &v16,
      (__int64 *)&v14,
      (int *)&WindowThreadProcessId,
      (int *)&dwProcessId);
  }
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    do
      v8 = *(_DWORD *)(v7 + 36);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 36), v8 + 1, v8) );
    v3 = v14;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v7 + 48));
  EnableIAMAccess(*(_QWORD *)(v7 + 40), 1LL);
  pvAttribute[0] = a3 != 0;
  v9 = DwmSetWindowAttribute(v3, 0xDu, pvAttribute, 4u);
  EnableIAMAccess(*(_QWORD *)(v7 + 40), 0LL);
  ReleaseSRWLockExclusive((PSRWLOCK)(v7 + 48));
  do
    v10 = *(_DWORD *)(v7 + 36);
  while ( v10 != 0x7FFFFFFF && v10 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 36), v10 - 1, v10) );
  if ( v10 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 72LL))(v7, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v9;
}
