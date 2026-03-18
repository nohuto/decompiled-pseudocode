/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x1408386E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_14083803C @ 0x14083803C (sub_14083803C.c)
 *     ExpOsProductCacheProviderHelper @ 0x140838DA8 (ExpOsProductCacheProviderHelper.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  unsigned int v9; // ebx
  void *v10; // rdi
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 Pool2; // rax
  __int64 v16; // rcx
  int v17; // eax
  _BYTE v19[8]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v20[3]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v21[3]; // [rsp+54h] [rbp-2Ch] BYREF
  _DWORD *v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+68h] [rbp-18h]

  v22 = a5;
  v21[0] = 0;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  v21[1] = 4;
  v20[2] = 0;
  v23 = 0LL;
  v20[0] = 0;
  if ( *a1 )
  {
    v9 = sub_14083803C(a2, a3, a4, a5, 2);
    *a6 = 1;
    return v9;
  }
  if ( a3 )
  {
    if ( a4 == 1 )
    {
      v11 = *(_BYTE *)a3 == 1;
    }
    else
    {
      if ( a4 != 2 )
      {
        if ( *a3 == 1 )
          return v9;
        goto LABEL_11;
      }
      v11 = *(_WORD *)a3 == 1;
    }
    if ( v11 )
      return v9;
  }
LABEL_11:
  ZwQueryLicenseValue((__int64)L"JL", 0LL);
  if ( !ExpPlatformBinaryLock.SuspendEvent.Header.WaitListHead.Blink )
    return (unsigned int)-1073741637;
  v9 = guard_dispatch_icall_no_overrides((__int64)v21, v12);
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  if ( !ExpPlatformBinaryLock.SchedulerApc.Reserved[1] )
    return (unsigned int)-1073741637;
  v9 = ExpOsProductCacheProviderHelper(v13, &qword_140BD8EC0, 0LL, 0LL, 0, v20, v19);
  if ( v9 == -1073741789 )
  {
    v14 = v20[0];
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v9 = ExpOsProductCacheProviderHelper(v16, &qword_140BD8EC0, 0LL, Pool2, v14, v20, v19);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_26;
  v17 = guard_dispatch_icall_no_overrides(3LL, (__int64)v10);
  v9 = v17;
  if ( v17 < 0 )
  {
    if ( v17 == -1073741198 )
      goto LABEL_21;
  }
  else if ( (v23 & 0x40) != 0 )
  {
LABEL_21:
    v9 = 0;
    goto LABEL_24;
  }
  if ( v17 >= 0 )
  {
LABEL_24:
    if ( !v21[0] )
    {
      v9 = sub_14083803C(a2, a3, a4, v22, 2);
      *a6 = 1;
    }
  }
LABEL_26:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v9;
}
