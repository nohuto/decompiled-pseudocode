/*
 * XREFs of RtlCalculateUnwindInfoSizeForKernelScp @ 0x140625E50
 * Callers:
 *     RtlCopyKernelScpUnwindInfo @ 0x140625E94 (RtlCopyKernelScpUnwindInfo.c)
 *     RtlCreateKernelScpFunctionTable @ 0x140625F7C (RtlCreateKernelScpFunctionTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCalculateUnwindInfoSizeForKernelScp(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r9
  int v4; // eax
  char v5; // cl
  unsigned int v6; // r10d
  unsigned int v7; // edx
  __int64 result; // rax

  v3 = *(unsigned int *)(a2 + 8);
  v4 = *(unsigned __int8 *)(v3 + a1 + 2);
  v5 = *(_BYTE *)(v3 + a1);
  v6 = 2 * v4 + 6;
  if ( (v4 & 1) == 0 )
    v6 = 2 * v4 + 4;
  v7 = 0;
  if ( (v5 & 0x18) != 0 )
    v7 = v6;
  result = v6 + 8;
  if ( (v5 & 0x18) == 0 )
    result = v6;
  if ( a3 )
    *a3 = v7;
  return result;
}
