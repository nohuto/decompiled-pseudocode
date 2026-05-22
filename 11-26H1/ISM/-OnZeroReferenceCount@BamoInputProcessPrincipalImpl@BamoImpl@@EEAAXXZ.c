/*
 * XREFs of ?OnZeroReferenceCount@BamoInputProcessPrincipalImpl@BamoImpl@@EEAAXXZ @ 0x1800CC2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoInputProcessPrincipalImpl::OnZeroReferenceCount(
        BamoImpl::BamoInputProcessPrincipalImpl *this)
{
  __int64 v1; // r8
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    *((_QWORD *)this + 5) = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 40LL))(v1, (char *)this - 16);
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1101,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v2,
        v3);
  }
}
