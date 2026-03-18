/*
 * XREFs of VidSchiSetSchedulerStatus @ 0x14009BDCC
 * Callers:
 *     VidSchiWorkerThread @ 0x1400C1BB0 (VidSchiWorkerThread.c)
 *     VidSchiHandleControlEvent @ 0x1400C577C (VidSchiHandleControlEvent.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 376) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1608) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1576), 0, 0);
  }
  return result;
}
