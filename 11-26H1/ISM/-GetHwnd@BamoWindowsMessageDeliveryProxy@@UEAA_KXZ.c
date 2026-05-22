/*
 * XREFs of ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x18002B9C0
 * Callers:
 *     ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x18002B7C0 (-PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AD514 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoWindowsMessageDeliveryProxy::GetHwnd(BamoWindowsMessageDeliveryProxy *this)
{
  __int64 v2; // rdi
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rbp
  const char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  const char *v9; // r9
  signed __int32 v10; // edx
  bool v11; // sf
  signed __int32 v12; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v3 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(v4 + 184) == GetCurrentThreadId() )
  {
    v2 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v3 = (volatile signed __int32 *)v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16));
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
    v6 = v2;
  }
  v7 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    v8 = *(_QWORD *)(v6 + 32);
    if ( *(_DWORD *)(v8 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9A3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v9);
    *(_DWORD *)(v8 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 16) + 32LL))(*(_QWORD *)(v8 + 16));
  }
  if ( v3 )
  {
    v10 = _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    v11 = v10 - 1 < 0;
    v12 = v10 - 1;
    if ( v11 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v5);
    if ( !v12 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
  }
  return v7;
}
