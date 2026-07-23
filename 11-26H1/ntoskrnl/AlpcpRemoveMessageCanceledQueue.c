/*
 * XREFs of AlpcpRemoveMessageCanceledQueue @ 0x140A9F750
 * Callers:
 *     AlpcpReceiveDirectMessagePort @ 0x1407C3910 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpFlushCancelQueue @ 0x140A9F650 (AlpcpFlushCancelQueue.c)
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpRemoveMessageCanceledQueue(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rcx
  _QWORD *i; // rax
  __int64 result; // rax

  if ( (((*(_DWORD *)(a1 + 416) & 6) - 2) & 0xFFFFFFFD) != 0 )
    NT_ASSERT("(AlpcpGetPortType(PortObject) == 0x00000002) || (AlpcpGetPortType(PortObject) == 0x00000001)");
  if ( *(_QWORD *)(a2 + 64) != a1 )
    NT_ASSERT("Message->CancelQueuePort == PortObject");
  v3 = (_QWORD **)(a1 + 384);
  for ( i = *v3; ; i = (_QWORD *)*i )
  {
    if ( i == v3 )
      NT_ASSERT("AlpcpIsEntryInList(&PortObject->CanceledQueue, &Message->CancelListEntry) != 0");
    if ( i == (_QWORD *)(a2 + 80) )
      break;
  }
  *(_DWORD *)(a2 + 40) &= ~0x20000u;
  **(_QWORD **)(a2 + 88) = *(_QWORD *)(a2 + 80);
  result = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(*(_QWORD *)(a2 + 80) + 8LL) = result;
  --*(_DWORD *)(a1 + 464);
  return result;
}
