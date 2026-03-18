/*
 * XREFs of ?AckProxyReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@_N@Z @ 0x1801620B0
 * Callers:
 *     ?AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z @ 0x180162008 (-AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x1802409C8 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 */

char __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::AckProxyReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        char a3,
        const char *a4)
{
  __int64 v5; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // rcx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 4);
  if ( !v5 )
    return 0;
  v6 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*((unsigned int *)a2 + 9);
  while ( *(_DWORD *)(*(_QWORD *)(v5 + 32) + 36LL) != (_DWORD)v6 )
  {
    v5 = *(_QWORD *)(v5 + 40);
    if ( !v5 )
      return 0;
  }
  v8 = *(_DWORD *)(v5 + 16);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD5,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      a4);
  v9 = v8 - 1;
  *(_DWORD *)(v5 + 16) = v9;
  if ( !a3 && !v9 && !*(_BYTE *)(v5 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v6, (struct Microsoft::BamoImpl::BamoStubImpl *)v5, 0);
  return 1;
}
