/*
 * XREFs of ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1801B3FC0
 * Callers:
 *     ??$MakeAndInitialize@VShellHandwritingProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x180080E10 (--$MakeAndInitialize@VShellHandwritingProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsof.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180073DA4 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180159AE8 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShellHandwritingProcessor::RuntimeClassInitialize(ShellHandwritingProcessor *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v3; // rax
  char *v4; // rdi
  __int64 v5; // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 216LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v4 = (char *)this + 24;
  v5 = v3;
  if ( *((_QWORD *)this + 3) != v3 )
  {
    v7 = v3;
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(&v7);
    v7 = *(_QWORD *)v4;
    *(_QWORD *)v4 = v5;
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v7);
  }
  *(_QWORD *)(*(_QWORD *)v4 + 56LL) = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
  return 0LL;
}
