/*
 * XREFs of PipMigrateCleanService @ 0x140CC8610
 * Callers:
 *     PipMigrateServiceCallback @ 0x140CC8E20 (PipMigrateServiceCallback.c)
 * Callees:
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKey @ 0x140974BF4 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipMigrateCleanService(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r14d
  __int64 v8; // rcx
  void *Pool2; // rdi
  int v10; // esi
  int v11; // eax
  int v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v15; // [rsp+48h] [rbp-8h] BYREF
  int v16; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+58h] BYREF

  v17 = 4;
  v16 = 0;
  v14 = 0;
  v15 = 0;
  v13 = 0;
  v4 = PnpCtxRegQueryValue(a1, a2, L"Clean", &v16, &v13, &v17);
  v6 = v4;
  if ( v4 == -1073741772 )
    return 0;
  if ( v4 < 0 )
    return v6;
  if ( v16 != 4 || v17 != 4 )
    return (unsigned int)-1073741823;
  if ( !v13 )
    return 0;
  v6 = PnpCtxRegQueryInfoKey(v5, a2, &v14, &v15, 0LL, 0LL, 0LL);
  if ( (v6 & 0x80000000) != 0 )
    return v6;
  if ( v14 )
  {
    v7 = v15 + 1;
    Pool2 = (void *)ExAllocatePool2(256LL, 2LL * (v15 + 1), 0x6E697050u);
    if ( Pool2 )
    {
      v10 = 0;
      while ( 1 )
      {
        v16 = v7;
        v11 = PnpCtxRegEnumKey(v8, a2);
        v6 = v11;
        if ( v11 == -2147483622 )
          break;
        if ( v11 < 0 )
          goto LABEL_18;
        ++v10;
        if ( (int)PnpCtxRegDeleteTree(a1, (__int64)a2, (__int64)Pool2) >= 0 )
          v10 = 0;
      }
      v6 = 0;
LABEL_18:
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
