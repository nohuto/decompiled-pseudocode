/*
 * XREFs of RtlCopyContext @ 0x140A32A50
 * Callers:
 *     PspSetContextState @ 0x140773D58 (PspSetContextState.c)
 *     PspWow64GetContextThread @ 0x140A214E8 (PspWow64GetContextThread.c)
 *     PspGetSetContextInternal @ 0x140A31AF0 (PspGetSetContextInternal.c)
 *     PspWow64SetContextThread @ 0x140B796B0 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403D6B50 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x140417A6C (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x14043C2E0 (RtlpCopyLegacyContext.c)
 *     RtlpGetContextFlagsLocation @ 0x14047DA34 (RtlpGetContextFlagsLocation.c)
 *     RtlpCopyKernelCetChunk @ 0x1405329C8 (RtlpCopyKernelCetChunk.c)
 */

__int64 __fastcall RtlCopyContext(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  int v8; // edx
  int *v9; // rax
  int *v10; // r8
  int v11; // r12d
  int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  char v15; // si
  int v16; // r15d
  __int64 v17; // r13
  int v18[4]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD *ContextFlagsLocation; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0LL;
  v18[0] = 0;
  v21 = 0;
  result = RtlpValidateContextFlags(a2, 0LL);
  if ( (int)result < 0 )
    return result;
  ContextFlagsLocation = (_DWORD *)RtlpGetContextFlagsLocation(a1, a2);
  v9 = (int *)RtlpGetContextFlagsLocation(a3, v8);
  v11 = *v10;
  v12 = *v9;
  result = RtlpValidateContextFlags(a2 | *v9 | (unsigned int)*v10, 0LL);
  if ( (int)result < 0 )
    return result;
  v13 = a2 & v12;
  result = RtlpValidateContextFlags(v13, v18);
  if ( (int)result < 0 )
    return result;
  result = RtlpValidateContextFlags(v11, &v21);
  v14 = result;
  if ( (int)result < 0 )
    return result;
  v15 = v18[0];
  v16 = v21;
  if ( (~v21 & v18[0]) != 0 )
    return 2147483653LL;
  RtlpCopyLegacyContext(0LL, a1, v13, a3);
  *ContextFlagsLocation |= v11;
  if ( (v16 & 0xFFFFFFFE) != 0 )
  {
    if ( (v13 & 0x10000) != 0 )
    {
      v17 = a3 + 716;
      v5 = a1 + 716;
      if ( (v13 & 0x10020) == 0x10020 && (v11 & 0x10020) != 0x10020 )
        *(_DWORD *)(a1 + 728) = 716;
      goto LABEL_8;
    }
    if ( (a2 & 0x100000) != 0 )
    {
      v17 = a3 + 1232;
      v5 = a1 + 1232;
      goto LABEL_8;
    }
    if ( (a2 & 0x200000) != 0 )
    {
      v17 = a3 + 416;
      v5 = a1 + 416;
      goto LABEL_8;
    }
    if ( (a2 & 0x400000) != 0 )
    {
      v17 = a3 + 912;
      v5 = a1 + 912;
      goto LABEL_8;
    }
  }
  v17 = 0LL;
LABEL_8:
  if ( (v15 & 2) == 0 || (result = RtlpCopyXStateChunk(0, v5, v5, v17, v17), v14 = result, (int)result >= 0) )
  {
    if ( (v15 & 4) == 0 )
      return v14;
    result = RtlpCopyKernelCetChunk(0, v5, v5, v17, v17);
    v14 = result;
    if ( (int)result >= 0 )
      return v14;
  }
  return result;
}
