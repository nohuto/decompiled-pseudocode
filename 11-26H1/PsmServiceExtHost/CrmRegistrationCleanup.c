/*
 * XREFs of CrmRegistrationCleanup @ 0x180032430
 * Callers:
 *     CrmSrvRegister @ 0x180031590 (CrmSrvRegister.c)
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x1800755C0 (CrmGlobalsRegistrationsDeleteRoutine.c)
 *     CrmGlobalsCleanupCrmRegistrations @ 0x1800776F8 (CrmGlobalsCleanupCrmRegistrations.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmRegistrationRemoveActivity @ 0x1800206C8 (CrmRegistrationRemoveActivity.c)
 *     CrmGlobalsRegistrationRemove @ 0x180065250 (CrmGlobalsRegistrationRemove.c)
 */

__int64 __fastcall CrmRegistrationCleanup(_QWORD *a1, int a2)
{
  _QWORD **i; // rdi
  void *v4; // rcx

  if ( a2 && a1[6] != -1LL )
    CrmGlobalsRegistrationRemove(a1);
  for ( i = (_QWORD **)(a1 + 7); *i != i; CrmRegistrationRemoveActivity((__int64)a1, *i, 0) )
    ;
  v4 = (void *)a1[18];
  if ( v4 )
    HampFreeHeap(v4);
  return CrmLogRegistrationStop(a1[2]);
}
