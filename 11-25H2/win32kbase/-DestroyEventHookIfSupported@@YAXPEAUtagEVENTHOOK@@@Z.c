/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1400BABC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400BAC6C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1, __int64 a2)
{
  __int64 (*v3)(void); // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (__fastcall *v7)(struct tagEVENTHOOK *); // rax
  PERESOURCE *v8; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+48h] [rbp-20h]

  v3 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2880LL);
  if ( v3 )
    v4 = v3();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v8);
    v7 = *(void (__fastcall **)(struct tagEVENTHOOK *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 2888LL);
    if ( v7 )
      v7(a1);
    if ( v9 )
    {
      if ( v8 )
        ExReleaseResourceAndLeaveCriticalRegion(*v8);
    }
  }
}
