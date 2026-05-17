/*
 * XREFs of RtlSetUserFlagsHeap @ 0x180108B90
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x180108A0C (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180019070 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x1800192E0 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108A0C (RtlDebugSetUserFlagsHeap.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 */

char __fastcall RtlSetUserFlagsHeap(unsigned __int64 a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v6; // r13
  __int16 v7; // di
  int v9; // edi
  unsigned __int8 *v10; // rcx
  int v11; // ecx
  struct _TEB *v12; // rbx
  unsigned int v13; // eax
  char v14; // r15
  unsigned __int64 v15; // rdi
  char v16; // bl
  struct _TEB *v17; // rbx
  __int16 v19; // r8
  int v20; // ecx
  __int16 v21; // dx
  __int16 v22; // r8
  __int16 v23; // cx
  unsigned __int64 v24; // rax
  char v25; // [rsp+30h] [rbp-38h]

  v6 = a3;
  v7 = a2;
  v25 = 0;
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( a2 )
    {
      if ( a2 == 8 )
      {
        v19 = 2;
      }
      else
      {
        v20 = (a2 >> 2) & 2;
        v21 = v20;
        if ( (v7 & 4) == 0 )
          v21 = v20;
        v22 = v21 | 0x100;
        if ( (v7 & 0x100) == 0 )
          v22 = v21;
        v23 = v7 & 0xE00 | v22;
        if ( (v7 & 0xE00) == 0 )
          v23 = v22;
        v19 = v23;
        if ( (v7 & 0x10) == 0 )
          v19 = v23;
      }
    }
    else
    {
      v19 = 0;
    }
    if ( v6 )
    {
      v24 = RtlpHpExtrasGet(a1, v6, *(_WORD *)(a1 + 20) | v19, 0LL);
      if ( v24 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v14 = 0;
      }
      else
      {
        *(_BYTE *)(v24 + 2) = (16 * BYTE1(a5)) | *(_BYTE *)(v24 + 2) & ((16 * ~BYTE1(a4)) | 0xF);
        v14 = 1;
      }
      if ( v14 )
        return v14;
      v12 = NtCurrentTeb();
      v12->LastStatusValue = -1073741811;
      v13 = RtlNtStatusToDosErrorNoTeb(0xC000000D);
LABEL_11:
      v12->LastErrorValue = v13;
      return v14;
    }
LABEL_10:
    v12 = NtCurrentTeb();
    v12->LastStatusValue = -1073741811;
    v13 = RtlNtStatusToDosErrorNoTeb(0xC000000D);
    v14 = 0;
    goto LABEL_11;
  }
  v9 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
    return RtlDebugSetUserFlagsHeap(a1, v9, a3, a4, a5);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v10 = RtlpProbeUserBufferSafe(a1, a3);
    goto LABEL_14;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v11 = 9;
    goto LABEL_13;
  }
  v10 = (unsigned __int8 *)(a3 - 16);
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v10 -= 16 * v10[14];
  if ( (v10[15] & 0x3F) == 0 )
  {
    LODWORD(a3) = (_DWORD)v10;
    v11 = 8;
LABEL_13:
    RtlpLogHeapFailure(v11, a1, a3, 0, 0LL, 0LL);
    v10 = 0LL;
  }
LABEL_14:
  if ( !v10 || (v10[15] & 0x80u) != 0 )
    goto LABEL_10;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v25 = 1;
  }
  v15 = v6 - 16;
  _m_prefetchw((const void *)(v6 - 16));
  if ( *(_BYTE *)(v6 - 16 + 15) == 5 )
    v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v15);
  }
  if ( (*(_BYTE *)(v15 + 15) & 0x3F) != 0 )
  {
    *(_BYTE *)(v15 + 10) &= ~(unsigned __int8)(a4 >> 4);
    *(_BYTE *)(v15 + 10) |= a5 >> 4;
    v16 = 1;
  }
  else
  {
    v17 = NtCurrentTeb();
    v17->LastStatusValue = -1073741811;
    v17->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC000000D);
    v16 = 0;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
    *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v25 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v16;
}
