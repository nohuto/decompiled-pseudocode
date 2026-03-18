/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140021890
 * Callers:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1400C5040 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(__m128i **this, __m128i **a2)
{
  __int64 v2; // rsi
  __m128i *v3; // rbx
  __int64 SessionState; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // edi
  _QWORD *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int *v14; // r14
  unsigned int v15; // r15d
  __int64 v16; // r15
  __m128i *v17; // rdi
  __int16 v18; // dx
  __int64 v19; // rcx
  __int16 v20; // r8
  __int64 v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rax
  __int16 v24; // ax
  __m128i v25; // xmm0
  __int64 *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __m128i **v29; // rdx
  int v30; // r8d
  __int64 *m128i_i64; // rbx
  __m128i *v32; // r14
  __int64 v33; // rdi
  __m128i *v34; // r15
  __int64 **v35; // rax
  __m128i *v36; // rax
  __m128i *v37; // rcx
  __m128i *v38; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __m128i *v43; // rdi
  __int64 *v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 **v48; // rax
  __m128i *v49; // rdi
  __m128i *v50; // rbx
  __int64 *v51; // rax
  __int64 v52; // rcx
  __m128i **v53; // rax
  __int64 v54; // rcx
  ThreadRestrictNewHandlesRegion *v56; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __m128i *v59; // [rsp+20h] [rbp-48h]
  __m128i v60; // [rsp+28h] [rbp-40h] BYREF
  __int64 v61; // [rsp+38h] [rbp-30h]
  __m128i v62; // [rsp+40h] [rbp-28h]
  __int64 v63; // [rsp+50h] [rbp-18h]
  __int64 v64; // [rsp+B0h] [rbp+48h] BYREF
  _QWORD *v65; // [rsp+B8h] [rbp+50h]
  __int64 v66; // [rsp+C0h] [rbp+58h]
  __m128i *v67; // [rsp+C8h] [rbp+60h]

  v2 = 0LL;
  v3 = *this;
  v67 = *a2;
  v59 = v3;
  v60.m128i_i16[6] = 0;
  SessionState = W32GetSessionState(this);
  v64 = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(SessionState + 88);
  v9 = (unsigned __int16)v3->m128i_i32[0] | ((unsigned __int32)v3->m128i_i32[0] >> 8) & 0xFF0000;
  v66 = v8;
  v61 = v8;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (_QWORD *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v64);
  v65 = CurrentThreadWin32ThreadAndEnterCriticalRegion;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( CurrentWin32kSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      goto LABEL_4;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = v65;
  }
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
    v7 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
LABEL_4:
  v11 = (v7 + 8) & -(__int64)(v7 != 0);
  if ( v11 )
    v65 = *(_QWORD **)(((v7 + 8) & -(__int64)(v7 != 0)) + 0x40);
  else
    v65 = 0LL;
  v12 = *(_QWORD *)(v8 + 8);
  v60.m128i_i32[2] = 1;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, v9);
  v60.m128i_i64[0] = v13;
  v14 = (unsigned int *)v13;
  if ( v13 )
  {
    _m_prefetchw((const void *)(v13 + 8));
    v15 = *(_DWORD *)(v13 + 8) & 0xFFFFFFFE;
    if ( v15 == (v64 & 0xFFFFFFFC) || !v15 || v65 && v15 == (unsigned int)UMPDGetThreadClientPID(v11) )
    {
      v16 = v66;
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v66 + 8) + 96LL))(
                         *(_QWORD *)(v66 + 8),
                         *v14)
                     + 14) & 0x20) == 0
        || v11
        && (v56 = *(ThreadRestrictNewHandlesRegion **)(v11 + 328)) != 0LL
        && *((_BYTE *)v56 + 80)
        && ThreadRestrictNewHandlesRegion::InRegion(v56, v9) )
      {
LABEL_9:
        v17 = v67;
        v18 = v59->m128i_i16[7] & 0x80;
        v19 = v67->m128i_i16[7] & 0x80 | v59->m128i_i16[7] & 0x70u;
        v20 = v67->m128i_i16[7] & 0x70;
        v60 = *v67;
        v62 = v60;
        v21 = v67[1].m128i_i64[0];
        v67->m128i_i16[7] = v19;
        v22 = v59->m128i_i64[0];
        v59->m128i_i16[7] = v20 | v18;
        v17->m128i_i64[0] = v22;
        v17->m128i_i16[6] = v59->m128i_i16[6];
        v17->m128i_i32[2] = v59->m128i_i32[2];
        v17[1].m128i_i64[0] = v59[1].m128i_i64[0];
        v63 = v21;
        v23 = W32GetSessionState(v19);
        (*(void (__fastcall **)(_QWORD, _QWORD, __m128i *))(**(_QWORD **)(*(_QWORD *)(v23 + 88) + 8LL) + 104LL))(
          *(_QWORD *)(*(_QWORD *)(v23 + 88) + 8LL),
          (unsigned __int16)v59->m128i_i32[0] | ((unsigned __int32)v59->m128i_i32[0] >> 8) & 0xFF0000,
          v17);
        v24 = v62.m128i_i16[6];
        v25 = v60;
        v59->m128i_i64[0] = v60.m128i_i64[0];
        v59->m128i_i16[6] = v24;
        v59[1].m128i_i64[0] = v63;
        v59->m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v25, 8));
        v26 = *(__int64 **)(v16 + 8);
        v27 = *v26;
        v28 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v26 + 96))(v26, *v14);
        (*(void (__fastcall **)(__int64 *, __int64))(v27 + 48))(v26, v28);
        KeLeaveCriticalRegion();
        v29 = (__m128i **)*this;
        v30 = (*this)[4].m128i_i32[3];
        (*this)[4].m128i_i32[3] = (*a2)[4].m128i_i32[3];
        (*a2)[4].m128i_i32[3] = v30;
        m128i_i64 = (*this)[5].m128i_i64;
        v32 = *a2 + 5;
        v33 = *m128i_i64;
        v34 = (__m128i *)v32->m128i_i64[0];
        if ( *this != (__m128i *)-80LL )
        {
          if ( *(__int64 **)(v33 + 8) != m128i_i64 )
            goto LABEL_25;
          v35 = (__int64 **)(*this)[5].m128i_i64[1];
          if ( *v35 != m128i_i64 )
            goto LABEL_25;
          *v35 = (__int64 *)v33;
          *(_QWORD *)(v33 + 8) = v35;
          m128i_i64[1] = (__int64)m128i_i64;
          *m128i_i64 = (__int64)m128i_i64;
        }
        v36 = *a2 + 5;
        if ( *a2 != (__m128i *)-80LL )
        {
          v37 = (__m128i *)v36->m128i_i64[0];
          if ( *(__m128i **)(v36->m128i_i64[0] + 8) != v36 )
            goto LABEL_25;
          v29 = (__m128i **)(*a2)[5].m128i_i64[1];
          if ( *v29 != v36 )
            goto LABEL_25;
          *v29 = v37;
          v37->m128i_i64[1] = (__int64)v29;
          v36->m128i_i64[1] = (__int64)v36;
          v36->m128i_i64[0] = (__int64)v36;
        }
        v38 = *this;
        *this = *a2;
        *a2 = v38;
        CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v38, v29);
        if ( !CurrentThreadWin32Thread )
          return 1LL;
        v41 = *CurrentThreadWin32Thread;
        v42 = v41 + 8;
        if ( (-(__int64)(v41 != 0) & (v41 + 8)) == 0 )
          return 1LL;
        if ( (__int64 *)v33 != m128i_i64 )
        {
          v43 = *this;
          v44 = (*this)[5].m128i_i64;
          if ( *this != (__m128i *)-80LL )
          {
            v45 = (__int64 *)PsGetCurrentThreadWin32Thread(v42, v40);
            if ( v45 )
              v46 = *v45;
            else
              v46 = 0LL;
            v47 = v46 + 8;
            v44[2] = (__int64)v43;
            v42 = -v46;
            v44[3] = (__int64)CleanUpRegion;
            v40 = v47 & -(__int64)(v42 != 0);
            if ( v40 )
            {
              v48 = (__int64 **)(v40 + 88);
              v42 = *(_QWORD *)(v40 + 88);
              if ( *(_QWORD *)(v42 + 8) != v40 + 88 )
                goto LABEL_25;
              *v44 = v42;
              v44[1] = (__int64)v48;
              *(_QWORD *)(v42 + 8) = v44;
              *v48 = v44;
            }
            else
            {
              v44[1] = (__int64)v44;
              *v44 = (__int64)v44;
            }
          }
        }
        if ( v34 == v32 )
          return 1LL;
        v49 = *a2;
        v50 = *a2 + 5;
        if ( *a2 == (__m128i *)-80LL )
          return 1LL;
        v51 = (__int64 *)PsGetCurrentThreadWin32Thread(v42, v40);
        if ( v51 )
          v2 = *v51;
        v50[1].m128i_i64[0] = (__int64)v49;
        v50[1].m128i_i64[1] = (__int64)CleanUpRegion;
        v52 = (v2 + 8) & -(__int64)(v2 != 0);
        if ( !v52 )
        {
          v50->m128i_i64[1] = (__int64)v50;
          v50->m128i_i64[0] = (__int64)v50;
          return 1LL;
        }
        v53 = (__m128i **)(v52 + 88);
        v54 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
        if ( *(__m128i ***)(v54 + 8) == v53 )
        {
          v50->m128i_i64[0] = v54;
          v50->m128i_i64[1] = (__int64)v53;
          *(_QWORD *)(v54 + 8) = v50;
          *v53 = v50;
          return 1LL;
        }
LABEL_25:
        __fastfail(3u);
      }
      v60.m128i_i8[12] = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
    if ( v60.m128i_i32[2] )
    {
      v16 = v61;
      v14 = (unsigned int *)v60.m128i_i64[0];
      goto LABEL_9;
    }
  }
  else
  {
    v60.m128i_i32[2] = 0;
    KeLeaveCriticalRegion();
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v60);
  return 0LL;
}
