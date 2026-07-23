/*
 * XREFs of RtlpWnfMetaCallbackProc @ 0x180106BF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpWnfMetaCallbackProc(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rcx

  if ( !_InterlockedExchange((volatile __int32 *)(a2 + 16), 1) )
  {
    v4 = *(void **)(a2 + 8);
    *(_DWORD *)a2 = a3;
    ZwSetEvent(v4, 0LL);
  }
  return 0LL;
}
