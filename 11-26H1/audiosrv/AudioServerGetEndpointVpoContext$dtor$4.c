/*
 * XREFs of AudioServerGetEndpointVpoContext$dtor$4 @ 0x18016AA5B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerGetEndpointVpoContext_dtor_4(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>((_QWORD *)(a2 + 72));
}
