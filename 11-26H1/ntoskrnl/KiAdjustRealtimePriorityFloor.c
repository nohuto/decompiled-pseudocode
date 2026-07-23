/*
 * XREFs of KiAdjustRealtimePriorityFloor @ 0x1403F0430
 * Callers:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KiAdjustRealtimePriorityFloor(ULONG_PTR BugCheckParameter1, int a2)
{
  ULONG_PTR v2; // r9
  char v3; // al
  ULONG_PTR v4; // r10
  char v5; // al
  char v6; // al

  v2 = *(int *)(BugCheckParameter1 + 1028);
  if ( a2 >= 16 )
  {
    v4 = a2 + BugCheckParameter1;
    v5 = *(_BYTE *)(v4 + 824);
    if ( v5 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, a2, 1uLL, 0LL);
    *(_BYTE *)(v4 + 824) = v5 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << a2;
  }
  else
  {
    a2 = 32;
  }
  *(_DWORD *)(BugCheckParameter1 + 1028) = a2;
  if ( (_DWORD)v2 != 32 )
  {
    v3 = *(_BYTE *)(v2 + BugCheckParameter1 + 824);
    if ( !v3 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v2, 2uLL, 0LL);
    v6 = v3 - 1;
    *(_BYTE *)(v2 + BugCheckParameter1 + 824) = v6;
    if ( !v6 )
      *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v2;
  }
}
