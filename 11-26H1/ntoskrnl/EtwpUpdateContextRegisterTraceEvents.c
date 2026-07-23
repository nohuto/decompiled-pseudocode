/*
 * XREFs of EtwpUpdateContextRegisterTraceEvents @ 0x14082D51C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     EtwpInitializeApcPool @ 0x140492A38 (EtwpInitializeApcPool.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpPreallocateApcPool @ 0x140AB3AF8 (EtwpPreallocateApcPool.c)
 */

__int64 __fastcall EtwpUpdateContextRegisterTraceEvents(__int64 a1, int a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 i; // rbx
  int v10; // eax
  int UsedProcessorCount; // eax
  unsigned int v12; // r8d
  unsigned int v13; // eax
  int v14; // r9d
  signed __int32 v16[18]; // [rsp+0h] [rbp-48h] BYREF

  if ( a4 > 8 || a2 != 3 )
    return 3221225485LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v16[8] = i;
    if ( (unsigned int)i >= a4 )
      break;
    if ( a5 )
      LOWORD(v10) = RtlReadULongFromUser((unsigned int *)(a3 + 4 * i));
    else
      v10 = *(_DWORD *)(a3 + 4 * i);
    *(_WORD *)(a1 + 2 * i + 1288) = v10;
  }
  *(_DWORD *)(a1 + 1280) = a2;
  _InterlockedOr(v16, 0);
  *(_DWORD *)(a1 + 1284) = a4;
  if ( (*(_DWORD *)(a1 + 820) & 2) == 0 )
  {
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    v12 = 4 * UsedProcessorCount;
    v13 = 16 * UsedProcessorCount;
    v14 = 16;
    if ( v12 < 0x10 )
      v12 = 16;
    if ( v13 >= 0x10 )
      v14 = v13;
    EtwpInitializeApcPool(a1 + 1088, a1, v12, v14);
    EtwpPreallocateApcPool(a1 + 1088);
    _InterlockedOr((volatile signed __int32 *)(a1 + 820), 2u);
  }
  return 0LL;
}
