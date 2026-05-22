/*
 * XREFs of ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18015EB0C
 * Callers:
 *     ?Materialize_BamoShellHandwritingHostClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180121660 (-Materialize_BamoShellHandwritingHostClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJ.c)
 * Callees:
 *     ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ @ 0x18004D3A4 (-GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180073DA4 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180159AE8 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateShellHandwritingClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoShellHandwritingHostClientProxy **a2)
{
  struct ISMBamos_AutoBamos::BamoConnection *Connection; // rax
  __int64 v4; // rbx
  void *v5; // rax
  void *v6; // rdi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  Connection = ISMBamos_AutoBamos::BamoPeer::GetConnection(a1);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)Connection + 31) + 8LL) + 216LL))(*((_QWORD *)Connection + 31) + 8LL);
  v5 = operator new(0x38uLL);
  v10 = v4;
  v6 = v5;
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(&v10);
  *((_DWORD *)v6 + 6) = 0;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 2) = &BamoImpl::BamoShellHandwritingHostClientProxyImpl::`vftable';
  *((_QWORD *)v6 + 5) = 0LL;
  *(_QWORD *)v6 = &ShellHandwritingClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v6 + 1) = &ShellHandwritingClientProxy::`vftable'{for `IShellHandwritingHostClientProxy'};
  *((_QWORD *)v6 + 6) = v4;
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef((__int64 *)v6 + 6);
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellhandwriting\\server\\shellha"
           "ndwritingclientproxy.cpp",
      v7);
  *a2 = (struct BamoShellHandwritingHostClientProxy *)v6;
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v10);
  return 0LL;
}
