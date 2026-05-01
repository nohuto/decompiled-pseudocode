/*
 * XREFs of CrmGlobalsCleanupCrmRegistrations @ 0x1800776F8
 * Callers:
 *     CrmGlobalsCleanup @ 0x180075274 (CrmGlobalsCleanup.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmSrvUnregister @ 0x180032344 (CrmSrvUnregister.c)
 *     CrmRegistrationCleanup @ 0x180032430 (CrmRegistrationCleanup.c)
 */

void __fastcall CrmGlobalsCleanupCrmRegistrations(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx

  if ( *(_QWORD *)(a1 + 552) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 560); ++i )
      CrmRegistrationCleanup((_QWORD *)(*(_QWORD *)(a1 + 552) + 152LL * i), 1);
    HampFreeHeap(*(void **)(a1 + 552));
  }
  v3 = *(_QWORD **)(a1 + 568);
  if ( v3 )
  {
    CrmRegistrationCleanup(v3, 1);
    HampFreeHeap(*(void **)(a1 + 568));
  }
  v4 = *(char **)(a1 + 544);
  if ( v4 )
    CrmSrvUnregister(v4);
  v5 = *(char **)(a1 + 536);
  if ( v5 )
    CrmSrvUnregister(v5);
}
