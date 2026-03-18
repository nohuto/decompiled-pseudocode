/*
 * XREFs of _PnpGetMappedPropertyKeysDispatch @ 0x140951C70
 * Callers:
 *     _PnpGetObjectPropertyKeysWorker @ 0x140951AF0 (_PnpGetObjectPropertyKeysWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PnpGetMappedPropertyKeysDispatch(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rbx
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+40h] [rbp-38h]
  __int64 v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+58h] [rbp-20h]
  int v18; // [rsp+60h] [rbp-18h]

  v9 = a3;
  memset_0(v13, 0, 0x40uLL);
  if ( (unsigned int)(v9 - 1) > 0xA )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 8 * v9 + 296) )
    return 3221225474LL;
  v18 = 0;
  v13[1] = a5;
  v15 = a7;
  v14 = a6;
  v16 = a8;
  v17 = a9;
  v13[0] = a4;
  return guard_dispatch_icall_no_overrides(a1);
}
