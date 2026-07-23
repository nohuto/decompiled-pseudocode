/*
 * XREFs of RtlpCopyKernelCetChunk @ 0x140534E68
 * Callers:
 *     RtlpCopyExtendedContext @ 0x14040BA10 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x140A4D9B0 (RtlCopyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCopyKernelCetChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *(_DWORD *)(a3 + 28) < 0x18u || *(_DWORD *)(a5 + 28) < 0x18u )
    return 2147483653LL;
  if ( (a1 & 1) == 0 )
  {
    v6 = *(int *)(a5 + 24);
    v7 = *(int *)(a3 + 24);
    *(_OWORD *)(v7 + a2) = *(_OWORD *)(v6 + a4);
    *(_QWORD *)(v7 + a2 + 16) = *(_QWORD *)(v6 + a4 + 16);
  }
  return 0LL;
}
