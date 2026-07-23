/*
 * XREFs of _PnpCreateObject @ 0x14089E594
 * Callers:
 *     PiCMCreateObject @ 0x14077686C (PiCMCreateObject.c)
 *     PiCMOpenObjectKey @ 0x14091C7BC (PiCMOpenObjectKey.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpCreateObjectDispatch @ 0x14089E704 (_PnpCreateObjectDispatch.c)
 */

__int64 __fastcall PnpCreateObject(__int64 a1, __int64 a2, int a3, int a4, HANDLE *a5)
{
  __int64 v5; // r14
  __int64 v9; // rsi
  int v10; // eax
  int ObjectDispatch; // eax
  int v12; // ebx
  int v13; // eax
  int v15[4]; // [rsp+48h] [rbp-21h] BYREF
  int v16; // [rsp+58h] [rbp-11h]
  HANDLE Handle; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v18[4]; // [rsp+68h] [rbp-1h] BYREF
  int v19; // [rsp+6Ch] [rbp+3h]

  v5 = *(_QWORD *)&PiPnpRtlCtx;
  memset_0(v15, 0, 0x50uLL);
  v9 = *(_QWORD *)(v5 + 488);
  if ( a4 || (v16 = 1, a5) )
    v16 = a4;
  v19 = 0;
  if ( v9 )
  {
    v10 = guard_dispatch_icall_no_overrides(v5, a2);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        goto LABEL_15;
      if ( v10 )
        goto LABEL_17;
    }
  }
  ObjectDispatch = PnpCreateObjectDispatch(v5, a2, a3, v16, (__int64)&Handle, (__int64)v18, v19);
  v12 = ObjectDispatch;
  if ( v9 )
  {
    v15[0] = ObjectDispatch;
    v13 = guard_dispatch_icall_no_overrides(v5, a2);
    if ( v13 != -1073741822 )
    {
      if ( v13 != -1073741536 )
      {
        if ( !v13 )
          goto LABEL_11;
LABEL_17:
        v12 = -1073741595;
        goto LABEL_18;
      }
LABEL_15:
      v12 = v15[0];
    }
  }
LABEL_11:
  if ( v12 >= 0 && a5 )
  {
    *a5 = Handle;
    return (unsigned int)v12;
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
