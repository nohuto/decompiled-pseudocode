/*
 * XREFs of IopPopulateCopyWriteWorkerData @ 0x1404B3A1C
 * Callers:
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 * Callees:
 *     IopValidateAndGetWriteParameters @ 0x1404B3AFC (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404B3F40 (IopAllocateAndPopulateWriteIrp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IopPopulateCopyWriteWorkerData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  __int64 result; // rax
  _BYTE v16[16]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v17; // [rsp+48h] [rbp-61h]
  __int64 v18; // [rsp+50h] [rbp-59h]
  __int64 v19; // [rsp+58h] [rbp-51h]
  __int64 v20; // [rsp+60h] [rbp-49h]
  __int64 v21; // [rsp+68h] [rbp-41h]
  __int64 v22; // [rsp+70h] [rbp-39h]
  __int64 v23; // [rsp+78h] [rbp-31h]
  int v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  int v26; // [rsp+90h] [rbp-19h]
  __int128 v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+A8h] [rbp-1h]
  __int64 v29; // [rsp+B0h] [rbp+7h]
  __int64 v30; // [rsp+B8h] [rbp+Fh]

  memset_0(v16, 0, 0x88uLL);
  v17 = a1;
  v30 = a6;
  v16[10] = 1;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = a2;
  v23 = a3;
  v24 = a4;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v28 = -1073741824;
  v29 = 0LL;
  result = IopValidateAndGetWriteParameters((unsigned int)v16, a7, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a11 + 8) = v18;
    return IopAllocateAndPopulateWriteIrp(v16);
  }
  return result;
}
