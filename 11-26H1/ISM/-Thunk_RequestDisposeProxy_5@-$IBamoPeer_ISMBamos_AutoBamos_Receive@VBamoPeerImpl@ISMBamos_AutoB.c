/*
 * XREFs of ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180054EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x1800348A4 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_RequestDisposeProxy_5(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v3; // r8
  __int64 v4; // rdi
  _DWORD *i; // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = **a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
  for ( i = *(_DWORD **)(v4 + 192); ; ++i )
  {
    v6 = 0;
    if ( i == *(_DWORD **)(v4 + 200) )
      break;
    if ( *i == (_DWORD)v3 )
      goto LABEL_22;
  }
  v17 = 0LL;
  v7 = 0LL;
  if ( (_DWORD)v3 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(v4 + 64) + 56LL))(
           *(_QWORD *)(v4 + 64),
           *(unsigned int *)(v4 + 28),
           v3,
           &v17);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x492,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v8,
        v15);
    v7 = v17;
  }
  if ( !v7 || (v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7)) == 0 )
  {
LABEL_22:
    v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)v4,
            0x87B2080C,
            0);
    if ( v12 < 0 )
    {
      v13 = 1652LL;
      goto LABEL_24;
    }
    return (unsigned int)v12;
  }
  v10 = *(_QWORD *)(v9 + 32);
  if ( !v10 )
  {
LABEL_12:
    v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)v4,
            0x87B2080C,
            0);
    if ( v12 < 0 )
    {
      v13 = 1661LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v12,
        v15);
      return (unsigned int)v12;
    }
    return (unsigned int)v12;
  }
  v11 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*(unsigned int *)(a1 + 36);
  while ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 36LL) != (_DWORD)v11 )
  {
    v10 = *(_QWORD *)(v10 + 40);
    if ( !v10 )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v10 + 16) && !*(_BYTE *)(v10 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v11, (struct Microsoft::BamoImpl::BamoStubImpl *)v10, 0);
  return v6;
}
