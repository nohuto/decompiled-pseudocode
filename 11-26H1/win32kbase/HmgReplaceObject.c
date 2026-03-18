/*
 * XREFs of HmgReplaceObject @ 0x140023150
 * Callers:
 *     <none>
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgReplaceObject(__int64 *a1, __m128i *a2)
{
  __int64 v2; // r12
  __int64 SessionState; // rax
  __int64 v5; // rsi
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int *v14; // rsi
  unsigned int v15; // r14d
  __m128i *v16; // rbx
  __int16 v17; // dx
  __int64 v18; // rcx
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // rax
  __int16 v22; // ax
  __m128i v23; // xmm0
  __int64 *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  ThreadRestrictNewHandlesRegion *v28; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __m128i v31; // [rsp+20h] [rbp-30h] BYREF
  __int64 v32; // [rsp+30h] [rbp-20h]
  __m128i v33; // [rsp+38h] [rbp-18h]
  __int64 v34; // [rsp+48h] [rbp-8h]
  __int64 v35; // [rsp+90h] [rbp+40h] BYREF
  __m128i *v36; // [rsp+98h] [rbp+48h]

  v36 = a2;
  v2 = 0LL;
  v31.m128i_i16[6] = 0;
  SessionState = W32GetSessionState(a1);
  v35 = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(SessionState + 88);
  v7 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  v32 = v6;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v35);
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
      v5 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  }
  v9 = v5 + 8;
  v10 = -v5;
  v11 = v9 & -(__int64)(v10 != 0);
  if ( v11 )
    v2 = *(_QWORD *)((v9 & -(__int64)(v10 != 0)) + 0x40);
  v12 = *(_QWORD *)(v6 + 8);
  v31.m128i_i32[2] = 1;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, v7);
  v31.m128i_i64[0] = v13;
  v14 = (unsigned int *)v13;
  if ( v13 )
  {
    _m_prefetchw((const void *)(v13 + 8));
    v15 = *(_DWORD *)(v13 + 8) & 0xFFFFFFFE;
    if ( v15 == (v35 & 0xFFFFFFFC) || !v15 || v2 && v15 == (unsigned int)UMPDGetThreadClientPID(v11) )
    {
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 8) + 96LL))(
                         *(_QWORD *)(v6 + 8),
                         *v14)
                     + 14) & 0x20) == 0 )
        goto LABEL_9;
      if ( v11 )
      {
        v28 = *(ThreadRestrictNewHandlesRegion **)(v11 + 328);
        if ( v28 )
        {
          if ( *((_BYTE *)v28 + 80) && ThreadRestrictNewHandlesRegion::InRegion(v28, v7) )
            goto LABEL_9;
        }
      }
      v31.m128i_i8[12] = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
    if ( v31.m128i_i32[2] )
    {
      v6 = v32;
      v14 = (unsigned int *)v31.m128i_i64[0];
LABEL_9:
      v16 = v36;
      v17 = v36->m128i_i16[7] & 0x70 | *((_WORD *)a1 + 7) & 0x80;
      v18 = v36->m128i_i16[7] & 0x80 | *((_WORD *)a1 + 7) & 0x70u;
      v31 = *v36;
      v33 = v31;
      v19 = v36[1].m128i_i64[0];
      v36->m128i_i16[7] = v18;
      v20 = *a1;
      *((_WORD *)a1 + 7) = v17;
      v16->m128i_i64[0] = v20;
      v16->m128i_i16[6] = *((_WORD *)a1 + 6);
      v16->m128i_i32[2] = *((_DWORD *)a1 + 2);
      v16[1].m128i_i64[0] = a1[2];
      v34 = v19;
      v21 = W32GetSessionState(v18);
      (*(void (__fastcall **)(_QWORD, _QWORD, __m128i *))(**(_QWORD **)(*(_QWORD *)(v21 + 88) + 8LL) + 104LL))(
        *(_QWORD *)(*(_QWORD *)(v21 + 88) + 8LL),
        (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000u,
        v16);
      v22 = v33.m128i_i16[6];
      v23 = v31;
      *a1 = v31.m128i_i64[0];
      *((_WORD *)a1 + 6) = v22;
      a1[2] = v34;
      *((_DWORD *)a1 + 2) = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
      v24 = *(__int64 **)(v6 + 8);
      v25 = *v24;
      v26 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v24 + 96))(v24, *v14);
      (*(void (__fastcall **)(__int64 *, __int64))(v25 + 48))(v24, v26);
      KeLeaveCriticalRegion();
      return 1LL;
    }
  }
  else
  {
    v31.m128i_i32[2] = 0;
    KeLeaveCriticalRegion();
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v31);
  return 0LL;
}
