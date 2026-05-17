/*
 * XREFs of RtlpHeapTrkReportResult @ 0x180013F2C
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x180013D20 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180101878 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x1801084B4 (RtlpHeapTrkDumpStacks.c)
 * Callees:
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1801106B0 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpHeapTrkReportResult(size_t Size, unsigned __int16 a2, int a3, __int64 a4, void *Src, size_t Sizea)
{
  int v7; // r15d
  size_t v8; // rsi
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  char result; // al
  _DWORD v14[4]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v15; // [rsp+30h] [rbp-228h]
  _BYTE v16[520]; // [rsp+38h] [rbp-220h] BYREF

  v7 = a2;
  v8 = (unsigned int)Size;
  memset_thunk_772440563353939046(v14, 0, 0x218uLL);
  v10 = dword_1801C60D4;
  v11 = (unsigned int)(dword_1801C60D4 + v8);
  if ( (unsigned int)v11 < dword_1801C60D4 )
    return 0;
  v12 = TrkContext;
  if ( !TrkContext )
    return 0;
  if ( v11 > *(_QWORD *)TrkContext )
  {
    if ( (unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
    {
      v10 = 88;
      *(_DWORD *)(TrkContext + 60) = 0;
      v12 = TrkContext;
      goto LABEL_4;
    }
    return 0;
  }
LABEL_4:
  v14[0] = v8;
  v14[1] = v7;
  v14[2] = a3;
  v15 = a4;
  if ( Sizea <= 0x200 )
    memmove(v16, Src, Sizea);
  memmove((void *)(v12 + v10), v14, v8);
  dword_1801C60D4 = v8 + v10;
  result = 1;
  ++*(_DWORD *)(TrkContext + 60);
  return result;
}
