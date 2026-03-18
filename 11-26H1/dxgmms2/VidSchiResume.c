/*
 * XREFs of VidSchiResume @ 0x140124E94
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1400C577C (VidSchiHandleControlEvent.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiResume(__int64 a1)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 376) = 1;
  *(_QWORD *)(a1 + 1608) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(a1 + 1576), 0, 0);
  result = *(_DWORD *)(a1 + 788);
  if ( result )
  {
    *(_QWORD *)(a1 + 1496) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1464), 0, 0);
  }
  return result;
}
