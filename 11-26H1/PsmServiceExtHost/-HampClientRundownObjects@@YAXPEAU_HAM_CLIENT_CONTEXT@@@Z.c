/*
 * XREFs of ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003CCAC
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003CC80 (-HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012DC0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012E20 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x18003BDF0 (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18003C4D4 (CemRcTableGetFirst.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18003F0CC (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800414D0 (RmpWnfCleanupPendingCallbackList.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18005D9B0 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 */

void __fastcall HampClientRundownObjects(struct _HAM_CLIENT_CONTEXT *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *i; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v5; // rdi
  void *v6; // rcx
  __int64 v7; // rdx

  HampClientAcquireLockExclusive(a1);
  v2 = (_QWORD *)((char *)a1 + 56);
  while ( 1 )
  {
    v3 = 0LL;
    if ( (_QWORD *)*v2 != v2 )
      v3 = *v2 - 48LL;
    if ( !v3 )
      break;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 24)) <= 1 )
      __fastfail(0xEu);
    HampClientReleaseLockExclusive(a1);
    if ( !*((_BYTE *)a1 + 164) && (*((_BYTE *)a1 + 160) & 1) != 0 )
      HampActTerminate(v3, 1LL, 6656LL);
    HampActClose((struct _HAM_ACTIVITY *)v3, v7);
    CemRcObjectDereference((_QWORD *)v3);
    HampClientAcquireLockExclusive(a1);
  }
  HampClientReleaseLockExclusive(a1);
  for ( i = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 72);
        ;
        i = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetNext(v5) )
  {
    v5 = i;
    if ( !i )
      break;
    HampClientPkgClose(i);
  }
  if ( (*((_BYTE *)a1 + 144) & 1) == 0 )
  {
    v6 = (void *)*((_QWORD *)a1 + 16);
    if ( v6 )
      RmpWnfCleanupPendingCallbackList(v6);
  }
}
