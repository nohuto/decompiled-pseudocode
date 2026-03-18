/*
 * XREFs of Isoch_EP_ProcessExpectedEventTRBs @ 0x14003D040
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 */

__int64 __fastcall Isoch_EP_ProcessExpectedEventTRBs(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( !*(_BYTE *)(v1 + 37) )
    return ESM_AddEsmEvent(v1);
  v2 = *(_QWORD *)(v1 + 144);
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v2 + 20));
  if ( (_DWORD)result == *(_DWORD *)(v2 + 8) )
    return ESM_AddEsmEvent(v1);
  return result;
}
