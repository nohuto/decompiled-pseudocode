/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1400EAD40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400EADEC (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  __int64 (*v2)(void); // rax
  int v3; // eax
  __int64 v4; // rcx
  void (__fastcall *v5)(struct tagEVENTHOOK *); // rax
  PERESOURCE *v6; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+48h] [rbp-20h]

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2504LL);
  if ( v2 )
    v3 = v2();
  else
    v3 = -1073741637;
  if ( v3 >= 0 )
  {
    DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v6);
    v5 = *(void (__fastcall **)(struct tagEVENTHOOK *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 2512LL);
    if ( v5 )
      v5(a1);
    if ( v7 )
    {
      if ( v6 )
        ExReleaseResourceAndLeaveCriticalRegion(*v6);
    }
  }
}
