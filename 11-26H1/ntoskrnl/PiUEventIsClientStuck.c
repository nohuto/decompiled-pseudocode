/*
 * XREFs of PiUEventIsClientStuck @ 0x1407A8490
 * Callers:
 *     PiUEventNotifyClient @ 0x14095B248 (PiUEventNotifyClient.c)
 * Callees:
 *     PiUEventIsProcessFrozen @ 0x1407A8508 (PiUEventIsProcessFrozen.c)
 */

bool __fastcall PiUEventIsClientStuck(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 128)
    && *(unsigned int *)(a1 + 128)
     * ((MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL))
      / 10000LL) > 600000 )
  {
    return (unsigned __int8)PiUEventIsProcessFrozen(*(_QWORD *)(a1 + 48)) == 0;
  }
  return v1;
}
