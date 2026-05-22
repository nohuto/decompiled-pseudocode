/*
 * XREFs of ?GetInputSite@DWMLegacyInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x18002B770
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x18002B7C0 (-PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall DWMLegacyInputTarget::GetInputSite(__int64 a1, _QWORD *a2)
{
  DWMLegacyInputTarget *v4; // rcx
  __int64 v5; // rcx

  v4 = (DWMLegacyInputTarget *)(a1 - 24);
  if ( !*((_QWORD *)v4 + 9) )
    DWMLegacyInputTarget::PopulateInputSiteFromWindowId(v4);
  v5 = *(_QWORD *)(a1 + 48);
  *a2 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a2;
}
