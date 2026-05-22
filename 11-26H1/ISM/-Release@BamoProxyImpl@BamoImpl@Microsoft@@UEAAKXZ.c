/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180046D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180046ED0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rbx
  const char *v9; // r9
  signed __int32 v10; // edi
  bool v11; // sf
  int v12; // edi
  __int64 v13; // rsi
  const char *v14; // r9
  signed __int32 v15; // edx
  signed __int32 v16; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 24);
    v7 = *(_QWORD *)(v6 + 32);
    if ( *(int *)(v7 + 8) <= 0 )
    {
      v12 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
      if ( v12 < 0 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
          a4);
      if ( !v12 )
        (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 24LL))(this);
    }
    else
    {
      v8 = 0LL;
      if ( *(_DWORD *)(v7 + 184) != GetCurrentThreadId() )
      {
        v8 = v6;
        if ( v6 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 16) + 24LL))(*(_QWORD *)(v7 + 16));
        *(_DWORD *)(v7 + 184) = GetCurrentThreadId();
      }
      v10 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF);
      v11 = v10 - 1 < 0;
      v12 = v10 - 1;
      if ( v11 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
          v9);
      if ( !v12 )
        (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 24LL))(this);
      if ( v8 )
      {
        v13 = *(_QWORD *)(v8 + 32);
        if ( *(_DWORD *)(v13 + 184) != GetCurrentThreadId() )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x9A3,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v14);
        *(_DWORD *)(v13 + 184) = 0;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 16) + 32LL))(*(_QWORD *)(v13 + 16));
      }
      if ( v8 )
      {
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF);
        v11 = v15 - 1 < 0;
        v16 = v15 - 1;
        if ( v11 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x33,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
            v9);
        if ( !v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      }
    }
  }
  else
  {
    return Microsoft::BamoImpl::BamoImplObject::Release(this);
  }
  return (unsigned int)v12;
}
