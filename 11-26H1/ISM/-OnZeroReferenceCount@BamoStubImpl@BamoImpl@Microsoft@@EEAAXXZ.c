/*
 * XREFs of ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18005F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Microsoft::BamoImpl::BamoStubImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoStubImpl *this)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  int v4; // ebx
  const char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  v3 = 0LL;
  if ( v2 && *(_DWORD *)(v2 + 184) == GetCurrentThreadId() && !*(_DWORD *)(v2 + 188) )
  {
    v3 = v2;
    v4 = *(_DWORD *)(v2 + 184);
    if ( v4 != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9A3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v5);
    *(_DWORD *)(v2 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 32LL))(*(_QWORD *)(v2 + 16));
  }
  v6 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 32LL))(this);
  v8 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 16) + 24LL))(*(_QWORD *)(v3 + 16), v7, v8);
    *(_DWORD *)(v3 + 184) = GetCurrentThreadId();
  }
}
