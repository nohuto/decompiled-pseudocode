/*
 * XREFs of HUBUCX_GetControllerInfo @ 0x140027558
 * Callers:
 *     HUBHSM_Configuring @ 0x140008DD0 (HUBHSM_Configuring.c)
 *     HUBHSM_GettingRootHubInfo @ 0x1400093E0 (HUBHSM_GettingRootHubInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_GetControllerInfo(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax
  bool v4; // zf

  v1 = (_DWORD *)(a1 + 168);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 584))(*(_QWORD *)(a1 + 248), a1 + 168);
  v4 = *v1 == 3;
  *(_BYTE *)(a1 + 200) = 0;
  if ( v4 )
    *(_BYTE *)(a1 + 200) = 1;
  return result;
}
