/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180035470
 * Callers:
 *     <none>
 * Callees:
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x18003561C (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  bool v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  const char *v6; // r9
  signed __int32 v7; // edi
  bool v8; // sf
  unsigned __int32 v9; // edi
  __int64 v10; // rbp
  const char *v11; // r9
  signed __int32 v12; // edx
  signed __int32 v13; // edx
  __int64 v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  v5 = *(_QWORD *)(v3 + 32);
  if ( *(_DWORD *)(v5 + 184) != GetCurrentThreadId() )
  {
    v4 = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 16) + 24LL))(*(_QWORD *)(v5 + 16));
    *(_DWORD *)(v5 + 184) = GetCurrentThreadId();
  }
  v7 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF);
  v8 = v7 - 1 < 0;
  v9 = v7 - 1;
  if ( v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
      v6);
  if ( !v9 )
  {
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 24LL))(this);
    v2 = Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(this);
  }
  if ( v4 )
  {
    v10 = *(_QWORD *)(v4 + 32);
    if ( *(_DWORD *)(v10 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9A3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v11);
    *(_DWORD *)(v10 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 16) + 32LL))(*(_QWORD *)(v10 + 16));
  }
  if ( v4 )
  {
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF);
    v8 = v12 - 1 < 0;
    v13 = v12 - 1;
    if ( v8 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v6);
    if ( !v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  }
  if ( v2 )
  {
    v15 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
    if ( v15 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
  }
  return v9;
}
