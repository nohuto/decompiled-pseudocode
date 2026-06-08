/*
 * XREFs of PepInitiateWake @ 0x14000BBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PepInitiateWake(_QWORD *BugCheckParameter4)
{
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(BugCheckParameter3) = 0;
  if ( (int)PoFxProcessorNotification(*BugCheckParameter4, 8LL, &BugCheckParameter3) < 0 )
    KeBugCheckEx((ULONG)323, 1uLL, 8uLL, (ULONG_PTR)&BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return BugCheckParameter3;
}
