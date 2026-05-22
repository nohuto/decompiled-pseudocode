/*
 * XREFs of ?InitializeProxyUnderLockThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CBE50
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCallEpilogUnderLock@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CBFA4 (-OnCallEpilogUnderLock@BamoInputProcessPrincipal@@IEAAJXZ.c)
 *     ?OnCallPrologUnderLock@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CBFC8 (-OnCallPrologUnderLock@BamoInputProcessPrincipal@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoInputProcessStubImpl::InitializeProxyUnderLockThunk(
        BamoImpl::BamoInputProcessStubImpl *this)
{
  __int64 v1; // rbx
  int v3; // eax
  const char *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax
  BamoInputProcessPrincipal *v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 3);
  v3 = BamoInputProcessPrincipal::OnCallPrologUnderLock((BamoInputProcessPrincipal *)(v1 - 16));
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1146,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v3,
      v11);
  v5 = *(_QWORD *)(v1 + 40);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF01A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v4);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v5 + 8LL))(v5, v1 - 16, (char *)this - 16);
  v7 = (BamoInputProcessPrincipal *)(v1 - 16);
  v8 = v6;
  v9 = BamoInputProcessPrincipal::OnCallEpilogUnderLock(v7);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x114A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v11);
  return v8;
}
