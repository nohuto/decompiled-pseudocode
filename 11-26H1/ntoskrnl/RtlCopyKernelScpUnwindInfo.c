/*
 * XREFs of RtlCopyKernelScpUnwindInfo @ 0x140625E94
 * Callers:
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140D008A8 (MiApplyDynamicFixupsToKernelAndHal.c)
 * Callees:
 *     RtlCalculateUnwindInfoSizeForKernelScp @ 0x140625E50 (RtlCalculateUnwindInfoSizeForKernelScp.c)
 *     RtlpGetKernelScpFunctionTable @ 0x140626080 (RtlpGetKernelScpFunctionTable.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall RtlCopyKernelScpUnwindInfo(__int64 a1, int a2, unsigned int *a3, int a4)
{
  int v5; // r9d
  __int64 KernelScpFunctionTable; // rdi
  unsigned int v11; // ebp
  char *v12; // rbx
  unsigned int i; // esi
  unsigned int v14; // eax
  __int64 v15; // r14
  unsigned int v16[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+18h] BYREF

  v16[0] = 0;
  v5 = *a3;
  v17 = 0;
  KernelScpFunctionTable = RtlpGetKernelScpFunctionTable(a1, a2, a4, v5, (__int64)&v17);
  if ( !KernelScpFunctionTable )
    return 3221226021LL;
  v11 = 0;
  v12 = (char *)a3 + *a3;
  for ( i = 0; i < v17; ++i )
  {
    v14 = RtlCalculateUnwindInfoSizeForKernelScp(a1, KernelScpFunctionTable, v16);
    v11 += v14;
    if ( v11 > 0x1F4 )
      return 2147483653LL;
    v15 = v14;
    memmove(v12, (const void *)(a1 + *(unsigned int *)(KernelScpFunctionTable + 8)), v14);
    if ( v16[0] )
      *(_DWORD *)&v12[v16[0]] += a2 - a4;
    v12 += v15;
    KernelScpFunctionTable += 12LL;
  }
  return 0LL;
}
