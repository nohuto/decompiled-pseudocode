/*
 * XREFs of EtwpProcessInternalNotification @ 0x1800FB0D0
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x180052AB0 (EtwpProcessNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpProcessInternalNotification(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
}
