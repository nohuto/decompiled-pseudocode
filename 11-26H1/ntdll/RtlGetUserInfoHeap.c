/*
 * XREFs of RtlGetUserInfoHeap @ 0x1800DC3A0
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800DC6E4 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800148A0 (RtlpGetExtraStuffPointer.c)
 *     RtlpProbeUserBufferSafe @ 0x180019070 (RtlpProbeUserBufferSafe.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800DC6E4 (RtlDebugGetUserInfoHeap.c)
 *     RtlpHpGetUserInfo @ 0x1800DC840 (RtlpHpGetUserInfo.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 */

char __fastcall RtlGetUserInfoHeap(unsigned __int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rsi
  __int16 v7; // bx
  char v9; // r15
  int v10; // ebx
  unsigned __int8 *v12; // rcx
  int v13; // eax
  struct _TEB *v14; // rbx
  char v15; // r14
  unsigned __int64 v16; // rsi
  struct _TEB *v17; // rbx
  __int64 ExtraStuffPointer; // rax
  int v19; // r14d
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // edx
  int v23; // r8d
  int v24; // ecx

  v6 = a3;
  v7 = a2;
  v9 = 0;
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
        v21 = (a2 >> 2) & 2;
        v22 = v21 | 0x80000000;
        if ( (v7 & 4) == 0 )
          v22 = v21;
        v23 = v22 | 0x100;
        if ( (v7 & 0x100) == 0 )
          v23 = v22;
        v24 = v7 & 0xE00 | v23;
        if ( (v7 & 0xE00) == 0 )
          v24 = v23;
        v19 = v24 | 0x10000000;
        if ( (v7 & 0x10) == 0 )
          v19 = v24;
      }
    }
    else
    {
      v19 = 0;
    }
    return RtlpHpGetUserInfo(a1, v6, v19, (_DWORD)a4, (__int64)a5);
  }
  v10 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v10 & 0x61000000) != 0 && (v10 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(a1, v10, a3, (_DWORD)a4, (__int64)a5);
  if ( (v10 & 0x800) != 0 || (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v12 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v20 = 9;
    }
    else
    {
      v12 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v12 -= 16 * v12[14];
      if ( (v12[15] & 0x3F) != 0 )
        goto LABEL_9;
      LODWORD(a3) = (_DWORD)v12;
      v20 = 8;
    }
    RtlpLogHeapFailure(v20, a1, a3, 0, 0LL, 0LL);
    v12 = 0LL;
  }
LABEL_9:
  if ( !v12 )
  {
LABEL_12:
    v14 = NtCurrentTeb();
    v14->LastStatusValue = -1073741811;
    v14->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC000000D);
    return 0;
  }
  v13 = v12[15];
  if ( (v13 & 0x80u) == 0 )
  {
    v15 = 0;
    v16 = v6 - 16;
    _m_prefetchw((const void *)v16);
    if ( *(_BYTE *)(v16 + 15) == 5 )
      v16 -= 16LL * *(unsigned __int8 *)(v16 + 14);
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v16 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*(_DWORD *)(v16 + 8)) != ((unsigned __int8)*(_DWORD *)(v16 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v16 + 8)) ^ HIWORD(*(_DWORD *)(v16 + 8)))) )
        RtlpAnalyzeHeapFailure(a1, v16);
    }
    if ( (*(_BYTE *)(v16 + 15) & 0x3F) != 0 )
    {
      if ( (*(_BYTE *)(v16 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v16);
        if ( a4 )
          *a4 = *(_QWORD *)(ExtraStuffPointer + 8);
      }
      if ( a5 )
        *a5 = 16 * (*(_BYTE *)(v16 + 10) & 0xE0);
      v15 = 1;
    }
    else
    {
      v17 = NtCurrentTeb();
      v17->LastStatusValue = -1073741811;
      v17->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC000000D);
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v16 + 11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
      *(_DWORD *)(v16 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v9 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    return v15;
  }
  else
  {
    if ( (v13 & 0xFFFFFF3F) == 0 )
      goto LABEL_12;
    if ( a5 )
      *a5 = 0;
    return 1;
  }
}
