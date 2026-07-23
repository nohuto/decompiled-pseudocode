/*
 * XREFs of PnpRegCopyKeySecurityTree @ 0x1407A7548
 * Callers:
 *     PnpRegCopyKeySecurityTree @ 0x1407A7548 (PnpRegCopyKeySecurityTree.c)
 *     PipMigrateServiceCallback @ 0x140CC8E20 (PipMigrateServiceCallback.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PnpRegCopyKeySecurity @ 0x1407A7418 (PnpRegCopyKeySecurity.c)
 *     PnpRegCopyKeySecurityTree @ 0x1407A7548 (PnpRegCopyKeySecurityTree.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x140974BF4 (_PnpCtxRegEnumKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRegCopyKeySecurityTree(int a1, int a2, __int64 a3, int a4)
{
  void *Pool2; // rdi
  int v7; // eax
  int v8; // ebx
  __int64 v10; // rcx
  unsigned int i; // esi
  int v12; // eax
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v14; // [rsp+38h] [rbp-8h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = a4;
  Pool2 = 0LL;
  v14 = 0LL;
  Handle = 0LL;
  v7 = PnpCtxRegOpenKey(0, a2, a3, 0, 131103, (__int64)&Handle);
  v8 = v7;
  if ( v7 == -1073741772 )
  {
    if ( !a3 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v7 >= 0 )
  {
    v8 = PnpCtxRegOpenKey(0, a1, a3, 0, 131103, (__int64)&v14);
    if ( v8 >= 0 )
    {
      v8 = PnpRegCopyKeySecurity((int)v14, (int)Handle);
      if ( v8 >= 0 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          for ( i = 0; ; ++i )
          {
            v15 = 512;
            v12 = PnpCtxRegEnumKey(v10, Handle, i, Pool2, &v15);
            v8 = v12;
            if ( v12 == -2147483622 || v12 == -1073741444 )
              break;
            if ( v12 < 0 )
              goto LABEL_4;
            v8 = PnpRegCopyKeySecurityTree(v14, Handle, Pool2, 7LL);
            if ( v8 < 0 )
              goto LABEL_4;
          }
LABEL_3:
          v8 = 0;
          goto LABEL_4;
        }
        v8 = -1073741670;
      }
    }
  }
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  if ( v14 )
    ZwClose(v14);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v8;
}
