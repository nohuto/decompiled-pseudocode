/*
 * XREFs of NdisCancelSendPackets @ 0x1400BB470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisCancelSendPackets(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 16) + 2608LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2488LL));
}
