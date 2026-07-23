/*
 * XREFs of ExQueueDpcEventWait @ 0x1406D3C40
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectDpc @ 0x1405E7F4C (KeRegisterObjectDpc.c)
 */

char __fastcall ExQueueDpcEventWait(__int64 a1, char a2)
{
  if ( *(_BYTE *)(a1 + 17) != 5 )
    __fastfail(5u);
  return KeRegisterObjectDpc(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 48), a1, a2);
}
