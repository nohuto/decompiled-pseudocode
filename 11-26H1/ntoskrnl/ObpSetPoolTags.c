/*
 * XREFs of ObpSetPoolTags @ 0x1407C50D8
 * Callers:
 *     ObpStartRuntimeStackTraceEx @ 0x1407C53D4 (ObpStartRuntimeStackTraceEx.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C5588 (ObpStopRuntimeStackTrace.c)
 *     ObpInitStackTrace @ 0x140CCDE7C (ObpInitStackTrace.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 */

__int64 __fastcall ObpSetPoolTags(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // edi
  int *QuadPart; // r9
  __int64 v8; // rdx

  v3 = 0;
  if ( stru_140F132C8.Timer.DueTime.QuadPart )
  {
    ObpTraceFreeMemory((PVOID)stru_140F132C8.Timer.DueTime.QuadPart);
    stru_140F132C8.Timer.DueTime.QuadPart = 0LL;
    *(_DWORD *)&stru_140F132C8.AffinityPrimaryGroup = 0;
  }
  if ( a2 >= 4 )
  {
    v5 = (a2 + 1) / 5;
    stru_140F132C8.Timer.DueTime.QuadPart = ObpTraceAllocateMemory(4LL * v5);
    QuadPart = (int *)stru_140F132C8.Timer.DueTime.QuadPart;
    if ( !stru_140F132C8.Timer.DueTime.QuadPart )
      return 3221225495LL;
    if ( v5 )
    {
      do
      {
        v8 = 5 * v3++;
        *QuadPart++ = *(unsigned __int8 *)(a1 + 2 * v8) | ((*(unsigned __int8 *)(a1 + 2LL * (unsigned int)(v8 + 1)) | ((*(unsigned __int8 *)(a1 + 2LL * (unsigned int)(v8 + 2)) | (*(unsigned __int8 *)(a1 + 2LL * (unsigned int)(v8 + 3)) << 8)) << 8)) << 8);
      }
      while ( v3 < v5 );
    }
    *(_DWORD *)&stru_140F132C8.AffinityPrimaryGroup = v5;
  }
  return 0LL;
}
