/*
 * XREFs of TtmpPublishDisplayRequiredPowerRequestEvents @ 0x1407ECF70
 * Callers:
 *     TtmiWriteEnumerationEventsToQueue @ 0x1407EC698 (TtmiWriteEnumerationEventsToQueue.c)
 * Callees:
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1407ED5FC (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 */

_QWORD *__fastcall TtmpPublishDisplayRequiredPowerRequestEvents(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *result; // rax

  v2 = *(_QWORD **)(a1 + 280);
  v4 = v2;
  while ( v4 )
  {
    result = (_QWORD *)*v4;
    v4 = result;
    if ( ((unsigned __int8)result & 1) != 0 )
      break;
LABEL_8:
    if ( !v4 )
      return result;
    if ( *((_DWORD *)v4 + 10) )
      TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(a1, a2, v4);
  }
  ++v2;
  result = *(_QWORD **)(a1 + 280);
  while ( v2 < &result[(unsigned __int64)*(unsigned int *)(a1 + 276) >> 5] )
  {
    v4 = (_QWORD *)*v2;
    if ( (*v2 & 1) == 0 )
      goto LABEL_8;
    ++v2;
  }
  return result;
}
