/*
 * XREFs of AlpcpRemoveMessagePort @ 0x140A91160
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpRemoveMessagePort(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 16) != a1 )
    NT_ASSERT("Message->PortQueue == PortObject");
  v2 = *(_DWORD *)(a2 + 40) & 7;
  if ( v2 == 1 )
  {
    --*(_DWORD *)(a1 + 448);
  }
  else
  {
    if ( v2 != 2 )
      NT_ASSERT("(AlpcpGetQueueTypeMessage(Message) == 0x00000001) || (AlpcpGetQueueTypeMessage(Message) == 0x00000002)");
    --*(_DWORD *)(a1 + 452);
  }
  *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a2 + 16) = 0LL;
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = result;
  return result;
}
