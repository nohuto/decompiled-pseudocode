/*
 * XREFs of KiObjTrkTimerPend @ 0x1403B7B28
 * Callers:
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1403B5EA0 (KeSetTimerEx.c)
 * Callees:
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 */

char KiObjTrkTimerPend()
{
  __int64 v0; // rdx
  unsigned int v1; // r10d
  char v2; // bl

  v2 = 0;
  if ( DifObjTrkIsKvEnabledForPlugin(49LL) && !_InterlockedCompareExchange8((volatile signed __int8 *)(v0 + 59), 1, 0) )
  {
    v2 = 1;
    DifObjTrkInsertItem(v1, v0, 0LL, 0LL);
  }
  return v2;
}
