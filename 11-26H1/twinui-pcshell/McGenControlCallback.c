/*
 * XREFs of McGenControlCallback @ 0x180679180
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall McGenControlCallback(
        WMIDPREQUESTCODE RequestCode,
        void **RequestContext,
        ULONG *BufferSize,
        PVOID Buffer)
{
  int v5; // r14d
  int v6; // ecx
  TRACEHANDLE TraceLoggerHandle; // rsi
  ULONG TraceEnableFlags; // edi
  UCHAR TraceEnableLevel; // bp
  unsigned int v11; // r8d
  unsigned __int8 v12; // r9
  __int64 v13; // rdx
  bool v14; // r10
  int v15; // edx
  int *v16; // r9
  int v17; // eax
  int v18; // eax

  *BufferSize = 0;
  v5 = 0;
  v6 = RequestCode - 4;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 87LL;
    TraceLoggerHandle = 0LL;
    TraceEnableFlags = 0;
    TraceEnableLevel = 0;
    if ( *((_WORD *)RequestContext + 21) )
      memset_0(RequestContext[6], 0, 4LL * ((*((unsigned __int16 *)RequestContext + 21) - 1) / 32 + 1));
  }
  else
  {
    TraceLoggerHandle = GetTraceLoggerHandle(Buffer);
    TraceEnableLevel = GetTraceEnableLevel(TraceLoggerHandle);
    TraceEnableFlags = GetTraceEnableFlags(TraceLoggerHandle);
    v5 = 1;
    if ( !TraceEnableFlags )
      TraceEnableFlags = -1;
  }
  v11 = 0;
  RequestContext[1] = (void *)TraceLoggerHandle;
  *((_BYTE *)RequestContext + 40) = TraceEnableLevel;
  *((_DWORD *)RequestContext + 8) = TraceEnableFlags;
  for ( *((_DWORD *)RequestContext + 9) = v5; v11 < *((unsigned __int16 *)RequestContext + 21); ++v11 )
  {
    v12 = *((_BYTE *)RequestContext + 40);
    v13 = *((_QWORD *)RequestContext[7] + v11);
    v14 = (*((_BYTE *)RequestContext[8] + v11) <= v12 || !v12)
       && (!v13
        || (v13 & (unsigned __int64)RequestContext[2]) != 0
        && (void *)(v13 & (unsigned __int64)RequestContext[3]) == RequestContext[3]);
    v15 = 1 << v11;
    v16 = (int *)((char *)RequestContext[6] + 4 * ((unsigned __int64)v11 >> 5));
    v17 = *v16;
    if ( v14 )
      v18 = v15 | v17;
    else
      v18 = ~v15 & v17;
    *v16 = v18;
  }
  return 0LL;
}
