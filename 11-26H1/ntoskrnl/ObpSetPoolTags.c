/*
 * XREFs of ObpSetPoolTags @ 0x1407C8138
 * Callers:
 *     ObpStartRuntimeStackTraceEx @ 0x1407C8434 (ObpStartRuntimeStackTraceEx.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C85E8 (ObpStopRuntimeStackTrace.c)
 *     ObpInitStackTrace @ 0x140CD3FDC (ObpInitStackTrace.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 */

__int64 __fastcall ObpSetPoolTags(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // edi
  struct _LIST_ENTRY *Flink; // r9
  __int64 v8; // rdx

  v3 = 0;
  if ( ObpStackTraceLock.Timer.Header.WaitListHead.Flink )
  {
    ObpTraceFreeMemory(ObpStackTraceLock.Timer.Header.WaitListHead.Flink);
    ObpStackTraceLock.Timer.Header.WaitListHead.Flink = 0LL;
    HIDWORD(ObpStackTraceLock.UserAffinity) = 0;
  }
  if ( a2 >= 4 )
  {
    v5 = (a2 + 1) / 5;
    ObpStackTraceLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)ObpTraceAllocateMemory(4LL * v5);
    Flink = ObpStackTraceLock.Timer.Header.WaitListHead.Flink;
    if ( !ObpStackTraceLock.Timer.Header.WaitListHead.Flink )
      return 3221225495LL;
    if ( v5 )
    {
      do
      {
        v8 = 5 * v3++;
        LODWORD(Flink->Flink) = *(unsigned __int8 *)(a1 + 2 * v8) | ((*(unsigned __int8 *)(a1
                                                                                         + 2LL * (unsigned int)(v8 + 1)) | ((*(unsigned __int8 *)(a1 + 2LL * (unsigned int)(v8 + 2)) | (*(unsigned __int8 *)(a1 + 2LL * (unsigned int)(v8 + 3)) << 8)) << 8)) << 8);
        Flink = (struct _LIST_ENTRY *)((char *)Flink + 4);
      }
      while ( v3 < v5 );
    }
    HIDWORD(ObpStackTraceLock.UserAffinity) = v5;
  }
  return 0LL;
}
