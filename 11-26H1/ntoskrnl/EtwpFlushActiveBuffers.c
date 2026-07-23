/*
 * XREFs of EtwpFlushActiveBuffers @ 0x140A133D8
 * Callers:
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402191F4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140219758 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpRequestFlushTimer @ 0x140219A50 (EtwpRequestFlushTimer.c)
 *     EtwpLockUnlockBufferList @ 0x140441BF0 (EtwpLockUnlockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140A12CDC (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpAdjustFreeBuffers @ 0x140A1385C (EtwpAdjustFreeBuffers.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140A13E18 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFlushBuffer @ 0x140A13E4C (EtwpFlushBuffer.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  int v2; // r12d
  __int64 *v4; // r15
  int v5; // esi
  signed __int64 v6; // r8
  int v7; // r13d
  __int64 v8; // rbp
  unsigned __int64 *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  ULONG ActiveProcessorCount; // eax
  __int64 v13; // rax
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  _QWORD **v17; // r14
  unsigned __int16 v18; // r15
  unsigned int v19; // ebp
  _QWORD *v20; // rbx
  unsigned __int16 v21; // ax
  __int64 v22; // rsi
  unsigned int v23; // eax
  bool v24; // zf
  unsigned int v25; // r12d
  unsigned __int32 v27; // eax
  signed __int64 i; // rcx
  signed __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 *v34; // rsi
  __int64 v35; // r10
  __int64 v36; // r9
  __int64 v37; // r11
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // eax
  char v45; // [rsp+20h] [rbp-158h]
  unsigned __int16 v47; // [rsp+30h] [rbp-148h]
  _BYTE v48[256]; // [rsp+40h] [rbp-138h] BYREF

  v2 = a2;
  memset_0(v48, 0, sizeof(v48));
  if ( !*((_QWORD *)a1 + 100) && !*((_QWORD *)a1 + 45) )
  {
    if ( a1[52] )
      EtwpRequestFlushTimer((__int64)a1, 0LL, 0LL);
    return 259LL;
  }
  v4 = (__int64 *)v48;
  v45 = 0;
  v5 = 0;
  if ( *((_QWORD *)a1 + 165) )
    v4 = (__int64 *)*((_QWORD *)a1 + 165);
  if ( (a1[3] & 0x40000) != 0 )
  {
    v31 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
    if ( v31 )
    {
      *v4 = v31;
      v5 = 1;
    }
    goto LABEL_20;
  }
  v7 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
  v8 = v7;
  if ( v7 < 0 )
    goto LABEL_19;
  v9 = (unsigned __int64 *)v4;
  v10 = (__int64)v7 << 6;
  do
  {
    if ( (a1[3] & 0x10000000) != 0 )
    {
      v14 = a1 + 32;
    }
    else
    {
      v11 = *((_QWORD *)a1 + 170);
      if ( v11 == EtwpHostSiloState )
      {
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        v6 = 0LL;
        if ( v7 >= ActiveProcessorCount )
          v13 = 0LL;
        else
          v13 = KiProcessorBlock[v8];
        v14 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 35816) + 320LL) + 8LL * *a1);
      }
      else
      {
        v14 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 4416) + v10) + 8LL * *a1);
      }
    }
    v15 = *v14 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v15 )
    {
      if ( a2 )
      {
        v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), a1[1]);
        if ( v27 <= a1[1] )
          *(_DWORD *)(v15 + 4) = v27;
        _m_prefetchw(v14);
        for ( i = *v14; (v15 ^ i) <= 0xF; i = v29 )
        {
          v29 = _InterlockedCompareExchange64(v14, v6, i);
          if ( i == v29 )
            break;
        }
        v30 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v15 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v30 + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v30);
          v6 = 0LL;
        }
        else
        {
          if ( v30 )
          {
            do
            {
              v32 = *(_QWORD *)(v30 + 32);
              if ( v32 == v15 )
                break;
              v30 = *(_QWORD *)(v30 + 32);
            }
            while ( v32 );
          }
          *(_QWORD *)(v30 + 32) = v6;
          v45 = 1;
        }
        *v9 = v15;
      }
      else
      {
        v16 = *(_QWORD *)((*v14 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
        if ( !v16 )
          goto LABEL_17;
        *v9 = v16;
        *(_QWORD *)(v15 + 32) = v6;
      }
      ++v5;
      ++v9;
    }
LABEL_17:
    --v7;
    v10 -= 64LL;
    --v8;
  }
  while ( v8 >= 0 );
  v2 = a2;
LABEL_19:
  EtwpLockUnlockBufferList((__int64)a1);
LABEL_20:
  v17 = 0LL;
  if ( v5 > 0 )
  {
    v33 = v5;
    v34 = &v4[v5 - 1];
    do
    {
      v35 = 1LL;
      v36 = 0LL;
      if ( (unsigned __int64)v33 > 1 )
      {
        v37 = 0LL;
        do
        {
          v38 = 8 * v35;
          v39 = *(_QWORD *)(v4[v35] + 16);
          v40 = *(_QWORD *)(*(__int64 *)((char *)v4 + v37) + 16);
          v41 = v35;
          if ( v39 <= v40 )
            v41 = v36;
          ++v35;
          v36 = v41;
          if ( v39 <= v40 )
            v38 = v37;
          v37 = v38;
        }
        while ( v35 < v33 );
      }
      v42 = v4[v36];
      v43 = *(_QWORD *)(v42 + 32);
      v4[v36] = v43;
      if ( !v43 )
      {
        --v33;
        v4[v36] = *v34--;
      }
      if ( *(int *)(v42 + 12) <= 0
        && (v44 = *(_DWORD *)(v42 + 4), v44 <= 0x48)
        && (v44 || *(_DWORD *)(v42 + 8) <= 0x48u) )
      {
        *(_WORD *)(v42 + 52) = 0;
        EtwpEnqueueAvailableBuffer((__int64)a1, (unsigned int *)v42, 0);
      }
      else
      {
        *(_QWORD *)(v42 + 32) = v17;
        v17 = (_QWORD **)(v42 + 32);
      }
    }
    while ( v33 > 0 );
  }
  v18 = 0;
  v19 = 0;
  if ( v17 )
  {
    v20 = *v17;
    v21 = v2 != 0;
    v47 = v21;
    do
    {
      v22 = (__int64)(v17 - 4);
      if ( !v20 )
        v18 = v21;
      EtwpAdjustFreeBuffers(a1);
      EtwpWaitForBufferReferenceCount(v17 - 4);
      *v17 = 0LL;
      if ( (a1[3] & 0x40000) != 0 )
      {
        *(_QWORD *)(v22 + 56) = 0LL;
        *(_QWORD *)(v22 + 64) = 0LL;
      }
      v23 = EtwpFlushBuffer(a1, v22, v18);
      v24 = (a1[3] & 0x40000) == 0;
      v25 = v23;
      *(_WORD *)(v22 + 52) = 0;
      if ( v24 )
        EtwpEnqueueAvailableBuffer((__int64)a1, (unsigned int *)v22, 0);
      else
        guard_dispatch_icall_no_overrides(v23, v22);
      v17 = (_QWORD **)v20;
      if ( v20 )
        v20 = (_QWORD *)*v20;
      v21 = v47;
      if ( v25 )
        v19 = v25;
    }
    while ( v17 );
    if ( a1[52] && a2 && ((a1[3] & 0x10000000) == 0 || v45) )
      EtwpRequestFlushTimer((__int64)a1, 0LL, 0LL);
  }
  else if ( v2 && (a1[204] & 8) != 0 )
  {
    EtwpRealtimeSendEmptyMarker((__int64)a1);
  }
  return v19;
}
