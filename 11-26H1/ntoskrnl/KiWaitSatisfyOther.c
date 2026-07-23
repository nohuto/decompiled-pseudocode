/*
 * XREFs of KiWaitSatisfyOther @ 0x1403E2B14
 * Callers:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403E28A0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1403E2A14 (KeRegisterObjectNotification.c)
 *     KeRegisterObjectDpc @ 0x1405E7F4C (KeRegisterObjectDpc.c)
 *     KiWaitSatisfyAny @ 0x1405FA938 (KiWaitSatisfyAny.c)
 * Callees:
 *     <none>
 */

char __fastcall KiWaitSatisfyOther(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( (*(_BYTE *)a1 & 7) == 1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  else if ( (*(_BYTE *)a1 & 0x7F) == 5 )
  {
    --*(_DWORD *)(a1 + 4);
  }
  else
  {
    return 0;
  }
  return v1;
}
