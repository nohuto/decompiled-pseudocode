/*
 * XREFs of _PnpGetObjectPropertyKeys @ 0x140AB554C
 * Callers:
 *     PiDevCfgCopyObjectProperties @ 0x140A46258 (PiDevCfgCopyObjectProperties.c)
 *     PiCMGetObjectPropertyKeys @ 0x140AB5148 (PiCMGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140AB53D8 (PiDqPnPGetObjectPropertyKeys.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140AB56C8 (_PnpGetObjectPropertyKeysWorker.c)
 */

__int64 __fastcall PnpGetObjectPropertyKeys(
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
  __int64 v13; // rdi
  int v14; // eax
  unsigned int ObjectPropertyKeysWorker; // eax
  unsigned int v16; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _DWORD v21[4]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v22; // [rsp+68h] [rbp-29h]
  __int64 v23; // [rsp+70h] [rbp-21h]
  char v24; // [rsp+78h] [rbp-19h]
  __int64 v25; // [rsp+80h] [rbp-11h]
  int v26; // [rsp+88h] [rbp-9h]
  __int64 v27; // [rsp+90h] [rbp-1h]
  int v28; // [rsp+98h] [rbp+7h]

  memset_0(v21, 0, 0x50uLL);
  v13 = *(_QWORD *)(a1 + 488);
  v24 = a6;
  v25 = a7;
  v26 = a8;
  v27 = a9;
  v22 = a4;
  v23 = 0LL;
  v28 = 0;
  if ( v13 )
  {
    v14 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v14 == -1073741822 )
    {
      v13 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
        return v21[0];
      if ( v14 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyKeysWorker = PnpGetObjectPropertyKeysWorker(a1, a2, a3, v22, v23, v24, v25, v26, v27, v28);
  v16 = ObjectPropertyKeysWorker;
  if ( !v13 )
    return v16;
  v21[0] = ObjectPropertyKeysWorker;
  v18 = guard_dispatch_icall_no_overrides(a1, a2);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v16;
  if ( v18 == -1073741536 )
    return v21[0];
  v20 = v16;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
