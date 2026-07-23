/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x140A154F4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x140219118 (EtwpDequeueBuffer.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     EtwpFreeTraceBuffer @ 0x140482658 (EtwpFreeTraceBuffer.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r13
  int v2; // esi
  volatile signed __int32 *v4; // r14
  volatile signed __int32 *v5; // r15
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rbx
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD **v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // r14d
  __int64 v19; // r8
  unsigned int UsedProcessorCount; // r12d
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  volatile __int64 *v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rbx

  v1 = *a1;
  v2 = 0;
  if ( (a1[3] & 0x40000) == 0 )
  {
    v4 = (volatile signed __int32 *)(a1 + 58);
    v5 = (volatile signed __int32 *)(a1 + 57);
    v6 = (volatile signed __int32 *)(a1 + 58);
    v7 = (volatile signed __int32 *)(a1 + 57);
    while ( 1 )
    {
      v8 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 6);
      if ( !v8 )
        break;
      v6 = (volatile signed __int32 *)(a1 + 58);
      ++v2;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
      v7 = (volatile signed __int32 *)(a1 + 57);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
      EtwpFreeTraceBuffer(v9, v8, v10);
    }
    while ( 1 )
    {
      v15 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
      if ( !v15 )
        break;
      _InterlockedDecrement(v6);
      ++v2;
      _InterlockedDecrement(v7);
      EtwpFreeTraceBuffer(v16, v15, v17);
      v6 = v4;
      v7 = v5;
    }
    v18 = 0;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(v16);
    if ( UsedProcessorCount )
    {
      v21 = 0LL;
      do
      {
        if ( (a1[3] & 0x10000000) != 0 )
        {
          v24 = (volatile __int64 *)(a1 + 32);
        }
        else
        {
          v22 = *((_QWORD *)a1 + 170);
          if ( v22 == EtwpHostSiloState )
            v23 = *(_QWORD *)(*(_QWORD *)(KeGetPrcb(v18) + 35816) + 320LL);
          else
            v23 = *(_QWORD *)(v21 + *(_QWORD *)(v22 + 4416));
          v24 = (volatile __int64 *)(v23 + 8 * v1);
        }
        v25 = _InterlockedExchange64(v24, 0LL);
        v26 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v26 + 12), -(v25 & 0xF));
          do
          {
            v28 = *(_QWORD *)(v26 + 32);
            _InterlockedDecrement(v6);
            ++v2;
            EtwpFreeTraceBuffer((__int64)a1, (char *)v26, v19);
            v26 = v28;
          }
          while ( v28 );
        }
        ++v18;
        v21 += 64LL;
      }
      while ( v18 < UsedProcessorCount );
    }
    if ( *((_QWORD *)a1 + 177) && (a1[3] & 0x400) != 0 )
    {
      _InterlockedDecrement(v6);
      ++v2;
      EtwpFreeTraceBuffer((__int64)a1, *((char **)a1 + 177), v19);
    }
    while ( 1 )
    {
      v27 = (_QWORD *)*((_QWORD *)a1 + 181);
      if ( !v27 )
        break;
      *((_QWORD *)a1 + 181) = *v27;
      ExFreePoolWithTag(v27 - 4, 0);
    }
    v12 = (_QWORD **)(a1 + 20);
    while ( 1 )
    {
      v13 = *v12;
      if ( *v12 == v12 )
        break;
      if ( (_QWORD **)v13[1] != v12 || (v14 = (_QWORD *)*v13, *(_QWORD **)(*v13 + 8LL) != v13) )
        __fastfail(3u);
      *v12 = v14;
      v14[1] = v12;
      ExFreePoolWithTag(v13, 0);
    }
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 170) + 4LL * (a1[75] & 1) + 4396), -(a1[1] * v2));
  }
  return 0LL;
}
