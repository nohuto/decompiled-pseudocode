/*
 * XREFs of _PnpUpdateInterfacesCallback @ 0x140B3E290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpNotifyDerivedKeys @ 0x140A98CD0 (_PnpNotifyDerivedKeys.c)
 */

char __fastcall PnpUpdateInterfacesCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-48h]
  unsigned int v11; // [rsp+28h] [rbp-40h]
  _OWORD v12[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_BYTE *)(a4 + 28) == 0;
  *(_OWORD *)((char *)v12 + 8) = 0LL;
  if ( !v4 )
  {
    *(_QWORD *)&v12[0] = 0LL;
    guard_dispatch_icall_no_overrides(a1, a2);
  }
  v8 = *(_QWORD *)(a4 + 8);
  if ( v8 )
  {
    v11 = *(_DWORD *)(a4 + 24);
    v10 = *(_QWORD *)(a4 + 16);
    v12[0] = 0LL;
    PnpNotifyDerivedKeys(a1, a2, 3LL, v8, v10, v11, (__int64)v12);
  }
  return 0;
}
