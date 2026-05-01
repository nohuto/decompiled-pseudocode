/*
 * XREFs of CrmActivityListenerCallback @ 0x18001E5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmActivityListenerCallback(__int64 a1, unsigned int a2, __int64 a3)
{
  return CrmActivityUpdate(*(_QWORD *)(a1 + 24), a1, a2, a3);
}
