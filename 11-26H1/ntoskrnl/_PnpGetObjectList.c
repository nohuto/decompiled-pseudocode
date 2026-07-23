/*
 * XREFs of _PnpGetObjectList @ 0x140A8B6EC
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x1407AA358 (PiDmObjectManagerPopulate.c)
 *     PiCMGetObjectList @ 0x14095A808 (PiCMGetObjectList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PnpGetObjectList(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7, int a8)
{
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v16; // ecx
  unsigned int v17[4]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v18; // [rsp+58h] [rbp-49h]
  __int64 v19; // [rsp+60h] [rbp-41h]
  __int64 v20; // [rsp+68h] [rbp-39h]
  int v21; // [rsp+70h] [rbp-31h]
  __int64 v22; // [rsp+78h] [rbp-29h]
  int v23; // [rsp+80h] [rbp-21h]
  __int64 v24; // [rsp+98h] [rbp-9h]
  __int64 v25; // [rsp+A0h] [rbp-1h]
  __int64 v26; // [rsp+A8h] [rbp+7h]
  int v27; // [rsp+B0h] [rbp+Fh]
  int v28; // [rsp+B4h] [rbp+13h]
  __int64 v29; // [rsp+B8h] [rbp+17h]
  int v30; // [rsp+C0h] [rbp+1Fh]
  __int64 v31; // [rsp+C4h] [rbp+23h]
  __int64 v32; // [rsp+CCh] [rbp+2Bh]
  int v33; // [rsp+D4h] [rbp+33h]

  v8 = *(_QWORD *)&PiPnpRtlCtx;
  v9 = a2;
  memset_0(v17, 0, 0x50uLL);
  v10 = *(_QWORD *)(v8 + 488);
  v11 = a8;
  v20 = a5;
  v21 = a6;
  v22 = a7;
  v23 = a8;
  if ( v10 )
  {
    v12 = guard_dispatch_icall_no_overrides(v8, 0LL);
    if ( v12 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return v17[0];
      if ( v12 )
        return (unsigned int)-1073741595;
    }
    v11 = v23;
  }
  v28 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  if ( (_WORD)v11 || (unsigned int)(v9 - 1) > 0xA )
  {
    v13 = -1073741811;
  }
  else if ( *(_QWORD *)(v8 + 8 * v9 + 296) )
  {
    v24 = v18;
    v26 = v20;
    v25 = v19;
    v27 = v21;
    v29 = v22;
    v30 = v11;
    v13 = guard_dispatch_icall_no_overrides(v8, 0LL);
  }
  else
  {
    v13 = -1073741822;
  }
  if ( v10 )
  {
    v17[0] = v13;
    v14 = guard_dispatch_icall_no_overrides(v8, 0LL);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        v16 = v13;
        if ( v14 )
          return (unsigned int)-1073741595;
        return v16;
      }
      return v17[0];
    }
  }
  return v13;
}
