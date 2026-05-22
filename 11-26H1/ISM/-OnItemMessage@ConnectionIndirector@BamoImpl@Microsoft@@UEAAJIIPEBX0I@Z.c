/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1800482D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        int a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  char *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  _DWORD *i; // rax
  unsigned int v16; // esi
  __int64 v17; // rdi
  const char *v18; // r9
  int v19; // eax
  int v21; // eax
  int v22; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  v11 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v11 + 184) != GetCurrentThreadId() )
  {
    v10 = (char *)this - 16;
    _InterlockedIncrement((volatile signed __int32 *)this - 2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 24LL))(*(_QWORD *)(v11 + 16));
    *(_DWORD *)(v11 + 184) = GetCurrentThreadId();
  }
  v14 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v14 + 64) )
  {
    for ( i = *(_DWORD **)(v14 + 192); i != *(_DWORD **)(v14 + 200); ++i )
    {
      if ( *i == a3 )
        goto LABEL_18;
    }
    if ( a4 )
    {
      *(_DWORD *)(v14 + 32) = a2;
      v16 = (*(__int64 (__fastcall **)(const void *, const void *, _QWORD))(*(_QWORD *)a4 + 32LL))(a4, a5, a6);
      *(_DWORD *)(v14 + 32) = 0;
    }
    else
    {
      v21 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *((struct Microsoft::BamoImpl::ConnectionIndirector ***)this + 2),
              0x87B2080C,
              0);
      v16 = v21;
      if ( v21 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x76E,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v21,
          v22);
    }
  }
  else
  {
LABEL_18:
    v16 = 0;
  }
  if ( v10 )
  {
    v17 = *((_QWORD *)v10 + 4);
    if ( *(_DWORD *)(v17 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9A3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v18);
    *(_DWORD *)(v17 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 16) + 32LL))(*(_QWORD *)(v17 + 16));
  }
  if ( v10 )
  {
    v19 = _InterlockedDecrement((volatile signed __int32 *)v10 + 2);
    if ( v19 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        (const char *)retaddr);
    if ( !v19 )
      (*(void (__fastcall **)(char *, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v10 + 24LL))(
        v10,
        v12,
        v13,
        retaddr);
  }
  return v16;
}
