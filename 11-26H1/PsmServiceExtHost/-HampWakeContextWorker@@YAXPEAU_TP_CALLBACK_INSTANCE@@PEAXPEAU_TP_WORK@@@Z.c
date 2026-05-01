/*
 * XREFs of ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039C10
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001113C (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x18003A4E0 (-HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@.c)
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003CDBC (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE24 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE90 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180046664 (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800466F4 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180046724 (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180046760 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampWakeContextWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  _QWORD *Value; // rsi
  char *v6; // r14
  char *v7; // r12
  _BYTE *v8; // rsi
  _QWORD *v9; // r13
  unsigned __int8 v10; // bl
  DWORD v11; // ecx
  __int64 *v12; // rax
  __int64 v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  DWORD v17; // ebx
  DWORD v18; // ecx
  __int64 *v19; // rax
  __int64 v20; // rdx
  char v21; // bl
  __int128 v22; // xmm1
  unsigned __int64 v23; // r12
  __int64 v24; // xmm0_8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  DWORD v28; // r14d
  _QWORD *v29; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v31; // ecx
  char v32; // bl
  __int64 *v33; // rax
  __int64 v34; // rdx
  DWORD v35; // r14d
  _QWORD *v36; // rbx
  unsigned __int64 v37; // rbx
  signed __int64 v38; // rax
  bool v39; // cc
  signed __int64 v40; // rax
  __int64 v41; // rdx
  _WORD *v42; // rcx
  __int16 v43; // ax
  _WORD *v44; // rax
  __int64 v45; // rdx
  _WORD *v46; // rcx
  __int16 v47; // ax
  _WORD *v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r8
  __int64 v52; // r10
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  int v55; // ecx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v58; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v59; // [rsp+38h] [rbp-C8h]
  __int64 v60; // [rsp+48h] [rbp-B8h]
  _OWORD TlsValue[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-20h]
  int v63; // [rsp+F0h] [rbp-10h] BYREF
  int v64; // [rsp+F4h] [rbp-Ch]
  int v65; // [rsp+F8h] [rbp-8h]
  _BYTE v66[128]; // [rsp+FCh] [rbp-4h] BYREF
  _BYTE v67[128]; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v68; // [rsp+1FCh] [rbp+FCh]
  int v69; // [rsp+204h] [rbp+104h]
  char v70[32]; // [rsp+208h] [rbp+108h] BYREF
  int v71; // [rsp+228h] [rbp+128h]
  __int128 v72; // [rsp+230h] [rbp+130h]
  __int128 v73; // [rsp+240h] [rbp+140h]
  __int128 v74; // [rsp+250h] [rbp+150h]
  __int64 v75; // [rsp+260h] [rbp+160h]

  v3 = HampLockTrackerId;
  v60 = 0LL;
  v62 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v3, TlsValue);
    v3 = HampLockTrackerId;
  }
  if ( !*((_QWORD *)a2 + 3) )
  {
    HampWakeContextDestroy((struct _HAM_HOST_WAKE_CONTEXT *)a2);
    goto LABEL_17;
  }
  if ( v3 != -1 )
  {
    Value = TlsGetValue(v3);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockExclusive(a2 + 40);
  *((_DWORD *)a2 + 12) = GetCurrentThreadId();
  v6 = a2 + 160;
  *((_DWORD *)a2 + 45) = GetCurrentThreadId();
  v7 = a2 + 128;
  v8 = a2 + 160;
  v9 = a2 + 128;
  while ( 1 )
  {
    v10 = a2[185];
    if ( !v10 )
      break;
    v18 = HampLockTrackerId;
    a2[185] = 0;
    if ( v18 != -1 )
    {
      v19 = (__int64 *)TlsGetValue(v18);
      v20 = *v19;
      if ( (*v19 & 0x800) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v14 = v19[12]-- == 1;
      v8 = v6;
      v9 = v7;
      if ( v14 )
        *v19 = v20 & 0xFFFFFFFFFFFFF7FFuLL;
    }
    *((_DWORD *)a2 + 12) = 0;
    RtlReleaseSRWLockExclusive(a2 + 40);
    if ( (v10 & 4) != 0 && (*v8 & 2) != 0 )
    {
      HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
      *v9 = 0LL;
    }
    HampWakeContextComputeNextState(a2, v10, &v58);
    memset_0(&v63, 0, 0x188uLL);
    v21 = v60;
    if ( ((*v8 & 2) != 0) == ((v60 & 2) != 0) )
      goto LABEL_27;
    if ( (v60 & 2) != 0 )
    {
      v63 = 8397888;
      v41 = 64LL;
      v42 = v66;
      do
      {
        if ( v41 == -2147483582 )
          break;
        v43 = *(_WORD *)((char *)v42 + (char *)L"WakeReference" - v66);
        if ( !v43 )
          break;
        *v42++ = v43;
        --v41;
      }
      while ( v41 );
      v14 = v41 == 0;
      v44 = v42 - 1;
      v45 = 64LL;
      if ( !v14 )
        v44 = v42;
      v46 = v67;
      *v44 = 0;
      do
      {
        if ( v45 == -2147483582 )
          break;
        v47 = *(_WORD *)((char *)v46 + (char *)&word_1800BBB1C - v67);
        if ( !v47 )
          break;
        *v46++ = v47;
        --v45;
      }
      while ( v45 );
      v48 = v46 - 1;
      if ( v45 )
        v48 = v46;
      *v48 = 0;
      v68 = 5;
      memset_0(v70, 0, 0x68uLL);
      v49 = *((_QWORD *)a2 + 7);
      v63 |= 0x42400u;
      v64 |= 4u;
      v65 |= 8u;
      v50 = *((_QWORD *)a2 + 21);
      v71 = 0;
      v69 = 0;
      v73 = 0LL;
      v74 = 0uLL;
      v72 = 0xAFuLL;
      v75 = 0LL;
      if ( (int)HamSrvCreateActivityInternal(
                  *(struct _HAM_CLIENT_CONTEXT **)(v49 + 8),
                  v50,
                  (struct _HAM_ACTIVITY_PROPERTIES *)&v63,
                  (unsigned __int64 *)a2 + 11) < 0 )
        goto LABEL_85;
      HampWakeManagerAcquireLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7));
      if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
        __fastfail(0xEu);
      v52 = *((_QWORD *)a2 + 7) + 80LL;
      v53 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 88LL);
      v54 = *(_QWORD *)v52;
      if ( (v53 & 1) == 0 )
        goto LABEL_75;
      if ( v54 )
      {
        v54 ^= v52;
LABEL_75:
        LOBYTE(v51) = 0;
        v55 = v53 & 1;
        if ( !v54 )
          goto LABEL_83;
        v51 = *((_QWORD *)a2 + 11);
        while ( 1 )
        {
          if ( v51 < *(_QWORD *)(v54 + 24) )
          {
            v56 = *(_QWORD *)v54;
            if ( v55 )
            {
              if ( !v56 )
                goto LABEL_92;
              v56 ^= v54;
            }
            if ( !v56 )
              goto LABEL_92;
          }
          else
          {
            v56 = *(_QWORD *)(v54 + 8);
            if ( v55 )
            {
              if ( !v56 )
              {
LABEL_82:
                LOBYTE(v51) = 1;
                goto LABEL_83;
              }
              v56 ^= v54;
            }
            if ( !v56 )
              goto LABEL_82;
          }
          v54 = v56;
        }
      }
      v54 = 0LL;
LABEL_92:
      LOBYTE(v51) = 0;
LABEL_83:
      RtlRbInsertNodeEx(*((_QWORD *)a2 + 7) + 80LL, v54, v51, a2 + 64);
      HampWakeManagerReleaseLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7));
      if ( (int)HamSrvStartActivityAsync(*(_QWORD *)(*((_QWORD *)a2 + 7) + 8LL), *((_QWORD *)a2 + 11), 0, 0LL) >= 0 )
        goto LABEL_27;
    }
    HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
LABEL_85:
    v59 = 0uLL;
    LOBYTE(v60) = v21 & 0xFD;
LABEL_27:
    v9 = a2 + 128;
    v57 = 0LL;
    v22 = v59;
    v23 = -1LL;
    *((_OWORD *)a2 + 8) = v58;
    v24 = v60;
    *((_OWORD *)a2 + 9) = v22;
    *((_QWORD *)a2 + 20) = v24;
    v25 = *((_QWORD *)a2 + 18);
    v26 = *((_QWORD *)a2 + 17);
    if ( v26 < v25 && v25 != -1LL )
      v23 = *((_QWORD *)a2 + 18);
    v27 = *((_QWORD *)a2 + 19);
    if ( v26 < v27 && v27 < v23 )
      v23 = *((_QWORD *)a2 + 19);
    TpWaitForTimer(*((_QWORD *)a2 + 13), 1LL);
    v28 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v29 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v29 |= 0x800uLL;
      ++v29[12];
    }
    RtlAcquireSRWLockExclusive(a2 + 40);
    CurrentThreadId = GetCurrentThreadId();
    v31 = HampLockTrackerId;
    *((_DWORD *)a2 + 12) = CurrentThreadId;
    v32 = a2[184];
    a2[184] = v32 & 0xFB;
    if ( v31 != -1 )
    {
      v33 = (__int64 *)TlsGetValue(v31);
      v34 = *v33;
      if ( (*v33 & 0x800) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v14 = v33[12]-- == 1;
      if ( v14 )
        *v33 = v34 & 0xFFFFFFFFFFFFF7FFuLL;
    }
    *((_DWORD *)a2 + 12) = 0;
    RtlReleaseSRWLockExclusive(a2 + 40);
    if ( (v32 & 4) != 0 )
      CemRcObjectDereference(a2);
    if ( v23 != -1LL )
    {
      v57 = *((_QWORD *)a2 + 17) - v23;
      HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a2);
      a2[184] |= 4u;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
        __fastfail(0xEu);
      HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a2);
      TpSetTimerEx(*((_QWORD *)a2 + 13), &v57, 0LL, 0LL);
    }
    v35 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v36 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v35) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v36 |= 0x800uLL;
      ++v36[12];
    }
    RtlAcquireSRWLockExclusive(a2 + 40);
    *((_DWORD *)a2 + 12) = GetCurrentThreadId();
    v6 = a2 + 160;
    v7 = a2 + 128;
    if ( (a2[160] & 1) != 0 )
    {
      a2[184] |= 2u;
      break;
    }
  }
  a2[184] &= ~1u;
  v11 = HampLockTrackerId;
  *((_DWORD *)a2 + 45) = 0;
  if ( v11 != -1 )
  {
    v12 = (__int64 *)TlsGetValue(v11);
    v13 = *v12;
    if ( (*v12 & 0x800) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v14 = v12[12]-- == 1;
    if ( v14 )
      *v12 = v13 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  *((_DWORD *)a2 + 12) = 0;
  RtlReleaseSRWLockExclusive(a2 + 40);
  _m_prefetchw(a2 + 24);
  v15 = *((_QWORD *)a2 + 3);
  while ( v15 - 1 > 0 )
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v15 - 1, v15);
    if ( v16 == v15 )
      goto LABEL_17;
  }
  if ( v15 != 1 )
    __fastfail(0xEu);
  v37 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( *((_QWORD *)a2 + 2) == -1LL )
  {
    if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
      __fastfail(0xEu);
    (*(void (__fastcall **)(char *))(v37 + 24))(a2);
  }
  else
  {
    RtlAcquireSRWLockExclusive(v37 + 16);
    v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    v39 = v38 <= 1;
    v40 = v38 - 1;
    if ( v39 )
    {
      if ( v40 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v37 + 16);
      (*(void (__fastcall **)(char *))(v37 + 24))(a2);
    }
    else
    {
      RtlReleaseSRWLockExclusive(v37 + 16);
    }
  }
LABEL_17:
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v17, 0LL);
  }
}
