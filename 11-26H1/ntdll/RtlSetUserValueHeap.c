/*
 * XREFs of RtlSetUserValueHeap @ 0x1800145D0
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x18010DBB0 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800148A0 (RtlpGetExtraStuffPointer.c)
 *     RtlpProbeUserBufferSafe @ 0x180019070 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x1800192E0 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlDebugSetUserValueHeap @ 0x18010DBB0 (RtlDebugSetUserValueHeap.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 */

char __fastcall RtlSetUserValueHeap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  char v8; // r13
  char v9; // r15
  unsigned int v10; // esi
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // eax
  struct _TEB *v14; // rbx
  int v16; // eax
  __int64 v17; // rax
  char v18; // r14
  unsigned int v19; // edx
  int v20; // r8d
  int v21; // ecx
  struct _TEB *v22; // rbx
  struct _TEB *v23; // rbx

  v5 = a3;
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v10 = *(_DWORD *)(a1 + 116) | a2;
    if ( (v10 & 0x61000000) != 0 && (v10 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap(a1, v10);
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v11 = RtlpProbeUserBufferSafe(a1, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v12 = 9;
        goto LABEL_10;
      }
      v11 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
      if ( (*(_BYTE *)(v11 + 15) & 0x3F) == 0 )
      {
        LODWORD(a3) = v11;
        v12 = 8;
LABEL_10:
        RtlpLogHeapFailure(v12, a1, a3, 0, 0LL, 0LL);
        v11 = 0LL;
      }
    }
    if ( !v11 )
    {
      v22 = NtCurrentTeb();
      v22->LastStatusValue = -1073741811;
      v22->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      return 0;
    }
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
    }
    v13 = *(unsigned __int8 *)(v11 + 15);
    if ( (v13 & 0xFFFFFF3F) != 0 )
    {
      if ( (v13 & 0x80) == 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
            RtlpAnalyzeHeapFailure(a1, v11);
        }
        if ( (*(_BYTE *)(v11 + 10) & 2) != 0 )
        {
          *(_QWORD *)(RtlpGetExtraStuffPointer(v11) + 8) = a4;
          v8 = 1;
        }
        goto LABEL_23;
      }
    }
    else
    {
      v14 = NtCurrentTeb();
      v14->LastStatusValue = -1073741811;
      v14->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
    }
    v11 = 0LL;
LABEL_23:
    if ( v11 && *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v9 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    return v8;
  }
  if ( a2 )
  {
    if ( a2 == 8 )
    {
      v16 = 2;
    }
    else
    {
      v19 = (a2 >> 2) & 2 | 0x80000000;
      if ( (a2 & 4) == 0 )
        v19 = (a2 >> 2) & 2;
      v20 = v19 | 0x100;
      if ( (a2 & 0x100) == 0 )
        v20 = v19;
      v21 = a2 & 0xE00 | v20;
      if ( (a2 & 0xE00) == 0 )
        v21 = v20;
      v16 = v21 | 0x10000000;
      if ( (a2 & 0x10) == 0 )
        v16 = v21;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = RtlpHpExtrasGet(a1, v5, *(_DWORD *)(a1 + 20) | (unsigned int)v16, 0LL);
  if ( (unsigned __int64)(v17 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v18 = 0;
  }
  else
  {
    *(_QWORD *)(v17 + 8) = a4;
    v18 = 1;
  }
  if ( !v18 )
  {
    v23 = NtCurrentTeb();
    v23->LastStatusValue = -1073741811;
    v23->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
  }
  return v18;
}
