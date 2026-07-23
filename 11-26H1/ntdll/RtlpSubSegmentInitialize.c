/*
 * XREFs of RtlpSubSegmentInitialize @ 0x180095A70
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x180095EDC (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x180095F9C (RtlpSubSegmentDebugInitialize.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

struct _PEB *__fastcall RtlpSubSegmentInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed __int32 v6; // ebx
  _QWORD *v9; // r10
  __int64 v10; // rax
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rdi
  unsigned __int8 v15; // al
  int v16; // r9d
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r15
  unsigned int v20; // r14d
  unsigned __int64 v21; // rdx
  int v22; // eax
  int v23; // ecx
  _QWORD *v24; // rbp
  __int64 v25; // r10
  struct _PEB *result; // rax
  signed __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  struct _TEB *v31; // rax
  _BYTE *v32; // r8
  __int64 v33; // r9
  char v34; // cl
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rax
  signed __int64 v37; // rcx
  unsigned __int64 v38; // rtt
  _DWORD *SharedData; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned __int64 v44; // rax
  signed __int64 v45; // rcx
  unsigned __int64 v46; // rtt
  int v47; // eax
  signed __int32 v48[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int32 v51; // [rsp+88h] [rbp+10h]
  int v53; // [rsp+A8h] [rbp+30h]

  v6 = *(_DWORD *)(a2 + 32);
  v9 = (_QWORD *)a3;
  v10 = *(unsigned __int8 *)(a2 + 43);
  v12 = a1;
  v13 = *(unsigned __int8 *)(a6 + 2);
  if ( (_BYTE)v10 )
    v14 = *(_QWORD *)(a1 + 8 * v13 + 2224) - 192LL + 192 * v10;
  else
    v14 = *(_QWORD *)(a1 + 8 * v13 + 1192);
  v15 = (*(_BYTE *)(a6 + 3) >> 1) & 3;
  if ( v15 )
  {
    result = (struct _PEB *)RtlpSubSegmentDebugInitialize(a1, a2, a3, v15, a4, a5, a6);
    if ( (_DWORD)result )
      return result;
    v9 = (_QWORD *)a3;
    v12 = a1;
  }
  v16 = RtlpLFHKey;
  v17 = a4 + 16;
  *v9 = a2;
  v18 = v17 >> 4;
  v53 = v16;
  v19 = ((((unsigned __int64)(unsigned int)((a5 - 64) / v17) + 31) >> 3) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v20 = 0;
  v21 = (unsigned __int64)v9 + v19;
  if ( (char *)v9 + v19 + v17 + 8 <= (char *)v9 + a5 )
  {
    do
    {
      v22 = (unsigned __int16)v20 << 8;
      v23 = *(_DWORD *)(v12 + 24) ^ v16 ^ (v21 >> 4) ^ (((_DWORD)v21 - (_DWORD)v9) << 12);
      ++v20;
      *(_DWORD *)(v21 + 12) &= 0xFF0000FF;
      *(_DWORD *)(v21 + 12) |= v22;
      *(_BYTE *)(v21 + 15) = 0x80;
      *(_DWORD *)(v21 + 8) = v23;
      v21 += v17;
    }
    while ( v21 + v17 + 8 <= (unsigned __int64)v9 + a5 );
  }
  v24 = v9 + 6;
  v9[4] = v20;
  v9[5] = v9 + 6;
  memset_thunk_772440563353939046(v9 + 6, 0, 8 * (((unsigned __int64)v20 + 63) >> 6));
  v25 = a2;
  v24[(((unsigned __int64)v20 + 63) >> 6) - 1] |= ~(0xFFFFFFFFFFFFFFFFuLL >> -(char)v20);
  *(_WORD *)(a2 + 36) = v18;
  *(_WORD *)(a2 + 40) = v20;
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a3 + 24) = v53 ^ a1 ^ a3 ^ ((unsigned __int16)v19 | ((unsigned __int16)(16 * v18) << 16));
  if ( *(_DWORD *)(v14 + 164) )
  {
    if ( ++*(_WORD *)(v14 + 176) <= 0x1Cu )
      goto LABEL_12;
    v41 = *(_QWORD *)v14;
    v47 = *(_DWORD *)(*(_QWORD *)v14 + 36LL);
    if ( v47 )
    {
      v43 = v47 - 4;
      goto LABEL_28;
    }
  }
  else
  {
    v41 = *(_QWORD *)v14;
    v42 = *(_DWORD *)(*(_QWORD *)v14 + 36LL);
    if ( v42 < 0x20 )
    {
      v43 = v42 + 4;
LABEL_28:
      *(_DWORD *)(v41 + 36) = v43;
    }
  }
  *(_WORD *)(v14 + 176) = 0;
LABEL_12:
  _m_prefetchw((const void *)(v14 + 160));
  do
  {
    v28 = HIDWORD(*(_QWORD *)(v14 + 160));
    v29 = (unsigned int)(v28 + 1);
    if ( (int)v20 <= 0 )
      v29 = (unsigned int)(v28 - 1);
    v27 = *(_QWORD *)(v14 + 160);
  }
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v14 + 160),
            ((unsigned int)v27 + v20) | (unsigned __int64)(v29 << 32),
            v27) != v27 );
  v30 = *(_QWORD *)v14;
  *(_DWORD *)(v14 + 168) = ++*(_DWORD *)(v30 + 32);
  v31 = NtCurrentTeb();
  v32 = (char *)&v31->HeapThreadData + 2;
  v33 = BYTE2(v31->HeapThreadData);
  if ( (_BYTE)v33 == HIBYTE(v31->HeapThreadData) )
  {
    v44 = qword_1801C5F00;
    do
    {
      v45 = v44 ^ (v44 >> 12) ^ ((v44 ^ (v44 >> 12)) << 25) ^ ((v44 ^ (v44 >> 12) ^ ((v44 ^ (v44 >> 12)) << 25)) >> 27);
      v46 = v44;
      v44 = _InterlockedCompareExchange64(&qword_1801C5F00, v45, v44);
    }
    while ( v46 != v44 );
    v34 = 29 * v45;
    v32[1] = v34;
  }
  else
  {
    v34 = BYTE2(v31->HeapThreadData);
  }
  *v32 = v34 + 1;
  HIWORD(v51) = RtlpLowFragHeapRandomData[v33] % v20;
  LOWORD(v51) = v20;
  _InterlockedOr(v48, 0);
  *(_DWORD *)(a3 + 20) = -253701952;
  *(_DWORD *)(v25 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 32), v51, v6);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    v35 = BYTE2(NtCurrentTeb()->HeapThreadData);
    v36 = qword_1801C5F00;
    do
    {
      v37 = v36 ^ (v36 >> 12) ^ ((v36 ^ (v36 >> 12)) << 25) ^ ((v36 ^ (v36 >> 12) ^ ((v36 ^ (v36 >> 12)) << 25)) >> 27);
      v38 = v36;
      v36 = _InterlockedCompareExchange64(&qword_1801C5F00, v37, v36);
    }
    while ( v38 != v36 );
    *(_QWORD *)&RtlpLowFragHeapRandomData[8 * (v35 >> 3)] = 0x2545F4914F6CDD1DLL * v37;
  }
  result = NtCurrentPeb();
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v40 = (__int64)result->SharedData + 550;
  }
  else
  {
    v40 = 2147353472LL;
  }
  if ( *(_BYTE *)v40 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
      return (struct _PEB *)RtlpLogHeapSubSegmentInitialize(
                              *(_QWORD *)(a1 + 24),
                              *(_QWORD *)(v25 + 8),
                              *(unsigned __int16 *)(v25 + 36),
                              *(unsigned __int16 *)(v25 + 40),
                              *(unsigned __int8 *)(v25 + 43));
  }
  return result;
}
