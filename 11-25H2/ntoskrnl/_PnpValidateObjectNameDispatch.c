/*
 * XREFs of _PnpValidateObjectNameDispatch @ 0x14083E744
 * Callers:
 *     _PnpValidateObjectName @ 0x14083E624 (_PnpValidateObjectName.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PnpValidateObjectNameDispatch(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rbx
  _DWORD v8[16]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  memset_0(v8, 0, sizeof(v8));
  if ( (_WORD)a4 || (unsigned int)(v4 - 1) > 0xA )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 8 * v4 + 296) )
    return 3221225474LL;
  v8[0] = a4;
  return guard_dispatch_icall_no_overrides(a1);
}
