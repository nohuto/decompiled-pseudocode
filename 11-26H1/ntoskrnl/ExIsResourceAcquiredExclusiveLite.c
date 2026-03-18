/*
 * XREFs of ExIsResourceAcquiredExclusiveLite @ 0x14044D1E0
 * Callers:
 *     DifExIsResourceAcquiredExclusiveLiteWrapper @ 0x140652C00 (DifExIsResourceAcquiredExclusiveLiteWrapper.c)
 * Callees:
 *     ExIsFastResourceHeldExclusive @ 0x1402B2710 (ExIsFastResourceHeldExclusive.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  UCHAR ReservedLowFlags; // dl
  struct _KTHREAD *CurrentThread; // r8
  BOOLEAN result; // al
  unsigned __int8 CurrentIrql; // al

  ReservedLowFlags = Resource->ReservedLowFlags;
  if ( (ReservedLowFlags & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (ReservedLowFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  }
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    return ExIsFastResourceHeldExclusive((ULONG_PTR)Resource);
  CurrentThread = KeGetCurrentThread();
  result = 0;
  if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
    return Resource->OwnerEntry.OwnerThread == (_QWORD)CurrentThread;
  return result;
}
