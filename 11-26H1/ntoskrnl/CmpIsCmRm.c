/*
 * XREFs of CmpIsCmRm @ 0x1408B4844
 * Callers:
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     LOCK_CM_RM_LIST @ 0x1408B5570 (LOCK_CM_RM_LIST.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

char __fastcall CmpIsCmRm(_QWORD *a1)
{
  char v1; // bl
  __int64 NextElement; // rax
  char v4; // r8
  char v5; // al
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v7 = 0LL;
  LOCK_CM_RM_LIST();
  while ( 1 )
  {
    NextElement = CmListGetNextElement(&CmpRmListHead, &v7, 0LL);
    if ( !NextElement )
      break;
    if ( (_QWORD *)NextElement == a1 )
    {
      if ( a1[6] && a1[7] && a1[4] )
      {
        v5 = 0;
        if ( a1[5] )
          v5 = v4 + 1;
        v1 = v5;
      }
      break;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KeLeaveCriticalRegion();
  return v1;
}
