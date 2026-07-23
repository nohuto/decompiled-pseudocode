/*
 * XREFs of RtlpCopyKernelCetChunk @ 0x180123948
 * Callers:
 *     RtlpCopyExtendedContext @ 0x180146300 (RtlpCopyExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCopyKernelCetChunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // xmm1_8
  __int64 result; // rax

  if ( *(_DWORD *)(a3 + 28) < 0x18u || *(_DWORD *)(a5 + 28) < 0x18u )
    return 2147483653LL;
  v5 = *(int *)(a5 + 24);
  v6 = *(int *)(a3 + 24);
  *(_OWORD *)(v6 + a2) = *(_OWORD *)(v5 + a4);
  v7 = *(_QWORD *)(v5 + a4 + 16);
  result = 0LL;
  *(_QWORD *)(v6 + a2 + 16) = v7;
  return result;
}
