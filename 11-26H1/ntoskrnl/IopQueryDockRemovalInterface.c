/*
 * XREFs of IopQueryDockRemovalInterface @ 0x1407B59D8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryDockRemovalInterface(int a1, _QWORD *a2)
{
  _WORD *Pool2; // rax
  _WORD *v5; // rbx
  int v7; // edi
  __int16 v8; // [rsp+30h] [rbp-78h] BYREF
  GUID *v9; // [rsp+38h] [rbp-70h]
  int v10; // [rsp+40h] [rbp-68h]
  _WORD *v11; // [rsp+48h] [rbp-60h]
  __int64 v12; // [rsp+50h] [rbp-58h]
  GUID v13; // [rsp+78h] [rbp-30h] BYREF

  v13 = GUID_DOCK_INTERFACE;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 48;
  memset_0(&v8, 0, 0x48uLL);
  v8 = 2075;
  v9 = &v13;
  v10 = 48;
  v5[1] = 0;
  v11 = v5;
  v12 = 0LL;
  v7 = IopSynchronousCall(a1, (unsigned int)&v8, -1073741637, 0, 0LL);
  if ( v7 < 0 )
    ExFreePoolWithTag(v5, 0);
  else
    *a2 = v5;
  return (unsigned int)v7;
}
