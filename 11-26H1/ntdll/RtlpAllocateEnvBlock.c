/*
 * XREFs of RtlpAllocateEnvBlock @ 0x18009E128
 * Callers:
 *     RtlSetEnvironmentVar @ 0x18009D730 (RtlSetEnvironmentVar.c)
 *     RtlCreateEnvironmentEx @ 0x18009E1A0 (RtlCreateEnvironmentEx.c)
 *     RtlpInitEnvironmentBlock @ 0x18009F5C8 (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentStrings @ 0x18009F800 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateEnvBlock(SIZE_T Size)
{
  if ( Size > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, Size);
}
