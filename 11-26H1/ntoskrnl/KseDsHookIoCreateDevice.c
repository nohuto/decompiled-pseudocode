/*
 * XREFs of KseDsHookIoCreateDevice @ 0x1405FE9C0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventIoCreateDevice @ 0x1405FF1BC (KsepDsEventIoCreateDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookIoCreateDevice(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, char a6, __int64 *a7)
{
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx

  v8 = a1;
  v9 = guard_dispatch_icall_no_overrides(a1, a2);
  LODWORD(v10) = 0;
  v11 = v9;
  if ( v9 >= 0 )
    v10 = *a7;
  KsepDsEventIoCreateDevice(v8, v10, a4, a5, a6, v9);
  return v11;
}
