/*
 * XREFs of RtlpFreeNTHeapInternal @ 0x140354CB0
 * Callers:
 *     RtlFreeHeapFull @ 0x14061C7CC (RtlFreeHeapFull.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x14035492C (RtlpCallInterceptRoutine.c)
 *     RtlpHpVsContextFree @ 0x140354D90 (RtlpHpVsContextFree.c)
 *     RtlpProbeUserBufferSafe @ 0x140524290 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpFreeHeap @ 0x14061F730 (RtlpFreeHeap.c)
 */

__int64 __fastcall RtlpFreeNTHeapInternal(_DWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v8; // rdi
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  unsigned __int16 v14; // dx
  int v15; // ecx
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  if ( a1[4] == -857879331 )
  {
    v21 = 0;
    return (unsigned int)RtlpHpVsContextFree(a1 + 16, 0LL, a2, &v21);
  }
  if ( (a1[30] & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe();
  }
  else
  {
    if ( (a2 & 0xF) != 0 )
    {
      v10 = a2;
      v11 = 9;
    }
    else
    {
      v8 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
      if ( (*(_BYTE *)(v8 + 15) & 0x3F) != 0 )
        goto LABEL_6;
      v10 = v8;
      v11 = 8;
    }
    RtlpLogHeapFailure(v11, (_DWORD)a1, v10, 0, 0LL, 0LL);
    v8 = 0LL;
  }
LABEL_6:
  if ( v8 )
  {
    if ( *(_BYTE *)(a2 - 1) != 5 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v8);
    if ( a1[31] )
    {
      v9 = a1[34] ^ *(_DWORD *)(v8 + 8);
      if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(((unsigned __int16)(*((_WORD *)a1 + 68) ^ *(_WORD *)(v8 + 8)) >> 8) ^ BYTE2(v9))) )
        goto LABEL_35;
    }
    v12 = a1[31];
    if ( v12 )
    {
      v13 = *(_DWORD *)(v8 + 8);
      v12 = a1[31];
      LOWORD(v19) = v13;
      if ( (v12 & v13) != 0 )
        v19 = a1[34] ^ v13;
      v14 = v19;
    }
    else
    {
      v14 = *(_WORD *)(v8 + 8);
    }
    if ( *(_BYTE *)(v8 + 15) == 4 )
    {
      if ( v12 )
      {
        v15 = *(_DWORD *)(v8 + 8);
        LOWORD(v20) = v15;
        if ( (v15 & a1[31]) != 0 )
          v20 = a1[34] ^ v15;
        v16 = v20;
      }
      else
      {
        v16 = *(_WORD *)(v8 + 8);
      }
      v17 = v14 + *(_QWORD *)(v8 - 16) - v16;
    }
    else
    {
      v17 = 16LL * v14;
    }
    if ( v17 + v8 < a2 )
    {
LABEL_35:
      RtlpLogHeapFailure(3, (_DWORD)a1, v8, a2, 0LL, 0LL);
      return v3;
    }
    if ( (a3 & 0x3C000102) != 0 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v8);
    v18 = *(_BYTE *)(a2 - 16 + 15) == 5 ? a2 - 16LL * *(unsigned __int8 *)(a2 - 16 + 14) : 0LL;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(a2 - 8), (__int64)a1, a2, 3u, v18) >= 0 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v8);
  }
  return v3;
}
