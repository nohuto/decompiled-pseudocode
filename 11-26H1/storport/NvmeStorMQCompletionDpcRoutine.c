/*
 * XREFs of NvmeStorMQCompletionDpcRoutine @ 0x140078AB0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeStorMQCompletionDpcRoutine(
        struct _KDPC *Dpc,
        __int64 a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, _QWORD))
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(a3 + 48);
  if ( a4 )
    a4(*(_QWORD *)(v4 + 1648) + 64LL, *(unsigned __int16 *)(a3 + 32));
  NvmeCompletionDpcRoutine(Dpc, (PVOID)1, (volatile signed __int32 *)a3, (_QWORD **)v4);
  result = *(_QWORD *)(a3 + 72);
  _InterlockedDecrement((volatile signed __int32 *)(result
                                                  + 4LL
                                                  * (unsigned int)(((unsigned __int64)Dpc - *(_QWORD *)(a3 + 64)) >> 6)));
  return result;
}
