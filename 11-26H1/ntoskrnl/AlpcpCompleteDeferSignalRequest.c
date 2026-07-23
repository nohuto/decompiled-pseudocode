/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x140A80C30
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1407C2FD0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     AlpcpSignal @ 0x140263E5C (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 */

unsigned __int8 __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 result; // al
  void *v6; // rcx

  result = _bittestandreset((signed __int32 *)(a1 + 48), 2u);
  if ( result )
  {
    result = AlpcpSignal(a1, 0, (*(_DWORD *)(a1 + 48) & 0x400000) != 0, a4);
    v6 = *(void **)(a1 + 32);
    if ( v6 )
      return ObfDereferenceObject(v6);
  }
  return result;
}
