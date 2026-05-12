/*
 * XREFs of sub_1400E8D20 @ 0x1400E8D20
 * Callers:
 *     sub_1400E8030 @ 0x1400E8030 (sub_1400E8030.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400E8D20(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 7u) )
  {
    return (unsigned int)-2147483631;
  }
  else
  {
    *(_BYTE *)(a1 + 1436) &= ~1u;
    *(_DWORD *)(a1 + 1432) = 6;
    IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 1424), sub_1400F2220, CriticalWorkQueue, (PVOID)(a1 + 1424));
  }
  return v1;
}
