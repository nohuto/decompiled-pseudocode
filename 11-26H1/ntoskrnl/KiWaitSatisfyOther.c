/*
 * XREFs of KiWaitSatisfyOther @ 0x1403DF924
 * Callers:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403DF6B0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1403DF824 (KeRegisterObjectNotification.c)
 *     KeRegisterObjectDpc @ 0x1405E55DC (KeRegisterObjectDpc.c)
 *     KiWaitSatisfyAny @ 0x1405F7F18 (KiWaitSatisfyAny.c)
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
