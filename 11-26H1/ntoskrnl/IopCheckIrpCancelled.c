/*
 * XREFs of IopCheckIrpCancelled @ 0x140469E0C
 * Callers:
 *     IopWaitForSynchronousIoEvent @ 0x140469C58 (IopWaitForSynchronousIoEvent.c)
 *     IopWaitForSynchronousIo @ 0x140469D30 (IopWaitForSynchronousIo.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall IopCheckIrpCancelled(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  bool v4; // di
  unsigned __int8 CurrentIrql; // bl

  v2 = a2;
  v3 = a1;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 1;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  if ( !*(_DWORD *)(v3 + 4) )
    v4 = *(_BYTE *)(v2 + 68) == 1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v4;
}
