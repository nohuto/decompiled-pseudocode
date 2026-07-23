/*
 * XREFs of AlpcpRemoveMessageFromDirectQueue @ 0x1407C3C0C
 * Callers:
 *     AlpcpReceiveDirectMessagePort @ 0x1407C3910 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpRemoveMessageFromDirectQueue(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 16) != a1 )
    NT_ASSERT("Message->PortQueue == PortObject");
  if ( (*(_DWORD *)(a2 + 40) & 7) != 4 )
    NT_ASSERT("AlpcpGetQueueTypeMessage(Message) == 0x00000004");
  --*(_DWORD *)(a1 + 460);
  *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a2 + 16) = 0LL;
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = result;
  return result;
}
