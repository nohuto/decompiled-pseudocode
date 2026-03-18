/*
 * XREFs of IsGetClassPtrSupported @ 0x140147C14
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1401A5428 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsGetClassPtrSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2976LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
