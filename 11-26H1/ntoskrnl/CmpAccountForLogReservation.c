/*
 * XREFs of CmpAccountForLogReservation @ 0x1408ACE58
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1408AC920 (CmpTransInitializeTransaction.c)
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     LockRMLog @ 0x1408AD924 (LockRMLog.c)
 */

__int64 __fastcall CmpAccountForLogReservation(__int64 a1, __int64 a2, char a3)
{
  void *v5; // rcx
  unsigned int appended; // ebx
  LONGLONG rgcbReservation; // [rsp+68h] [rbp+10h] BYREF

  rgcbReservation = 48LL;
  LockRMLog(a1);
  v5 = *(void **)(a1 + 96);
  if ( !a3 )
    rgcbReservation = -rgcbReservation;
  appended = ClfsReserveAndAppendLog(v5, 0LL, 0, 0LL, 0LL, 1u, &rgcbReservation, 0, 0LL);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  return appended;
}
