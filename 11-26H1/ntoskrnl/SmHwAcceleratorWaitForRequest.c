/*
 * XREFs of SmHwAcceleratorWaitForRequest @ 0x140640060
 * Callers:
 *     SmStoreCompressBuffer @ 0x14024B590 (SmStoreCompressBuffer.c)
 *     SmStoreDecompressBuffer @ 0x1403905E0 (SmStoreDecompressBuffer.c)
 *     SmStoreCompletePendingDecompress @ 0x140443928 (SmStoreCompletePendingDecompress.c)
 *     ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x140487E14 (-SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z.c)
 *     SmStoreCompletePendingCompress @ 0x14063F294 (SmStoreCompletePendingCompress.c)
 * Callees:
 *     AccelWaitForWorkCompletion @ 0x1402A1F3C (AccelWaitForWorkCompletion.c)
 *     AccelGetStatusFromCompletionRecord @ 0x1402A20AC (AccelGetStatusFromCompletionRecord.c)
 *     AccelQueryCompletionInformation @ 0x1406DF030 (AccelQueryCompletionInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SmHwAcceleratorWaitForRequest(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v7; // r8d
  __int64 v9; // rdx
  __int64 *v10; // rbx
  int StatusFromCompletionRecord; // ecx
  int v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+3Ch] [rbp-2Ch]
  int v17; // [rsp+44h] [rbp-24h]

  v7 = 0;
  v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 40LL) * a2);
  v10 = (__int64 *)((unsigned int)v9 + a1 + 32);
  if ( a3 )
    v7 = *a3 == 0LL;
  if ( (int)AccelWaitForWorkCompletion((__int64 *)((unsigned int)v9 + a1 + 32), v9, v7) >= 0 )
  {
    StatusFromCompletionRecord = AccelGetStatusFromCompletionRecord(v10);
    if ( StatusFromCompletionRecord >= 0 )
    {
      memset_0(&v13, 0, 0x40uLL);
      v13 = 4194305;
      v15 = 6;
      v14 = v10;
      AccelQueryCompletionInformation(&v13);
      *a4 = v17;
      v15 = 4;
      AccelQueryCompletionInformation(&v13);
      *a5 = v16;
      return 0;
    }
    else
    {
      if ( StatusFromCompletionRecord == -1073741248 )
        StatusFromCompletionRecord = -1073741823;
      if ( !*(_DWORD *)(*(_QWORD *)(a1 + 8) + 60LL) )
        return (unsigned int)-1073741248;
    }
  }
  else
  {
    return 258;
  }
  return (unsigned int)StatusFromCompletionRecord;
}
