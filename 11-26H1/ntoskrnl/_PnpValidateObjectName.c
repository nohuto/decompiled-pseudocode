/*
 * XREFs of _PnpValidateObjectName @ 0x140952EDC
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     PiDmObjectCreate @ 0x1409AB728 (PiDmObjectCreate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpValidateObjectNameDispatch @ 0x140952FFC (_PnpValidateObjectNameDispatch.c)
 */

__int64 __fastcall PnpValidateObjectName(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // [rsp+20h] [rbp-78h]
  _DWORD *v15; // [rsp+28h] [rbp-70h]
  _DWORD v16[20]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  memset_0(v16, 0, sizeof(v16));
  v6 = *(_QWORD *)(v3 + 488);
  if ( v6 )
  {
    v15 = v16;
    v14 = 1;
    v7 = guard_dispatch_icall_no_overrides(v3, a2);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v16[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = PnpValidateObjectNameDispatch(v3, a2, a3, v16[4], v14, v15);
  v9 = v8;
  if ( !v6 )
    return v9;
  v16[0] = v8;
  v11 = guard_dispatch_icall_no_overrides(v3, a2);
  v12 = v11;
  if ( v11 == -1073741822 )
    return v9;
  if ( v11 == -1073741536 )
    return v16[0];
  v13 = v9;
  if ( v12 )
    return (unsigned int)-1073741595;
  return v13;
}
