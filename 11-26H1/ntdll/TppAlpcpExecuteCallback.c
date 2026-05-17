/*
 * XREFs of TppAlpcpExecuteCallback @ 0x180054320
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x180054AA0 (TpCallbackMayRunLong.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 *     NtAlpcSetInformation @ 0x180160110 (NtAlpcSetInformation.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _PEB *__fastcall TppAlpcpExecuteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  char v6; // r15
  signed __int64 v7; // rdi
  volatile signed __int32 **v8; // rdx
  unsigned __int64 v9; // rbx
  volatile signed __int32 *v10; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  bool v13; // zf
  signed __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r13
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rax
  void *v22; // rcx
  __int64 v23; // rdi
  struct _TEB *v24; // rax
  void *SubProcessTag; // r8
  _DWORD *SharedData; // rdx
  __int64 v27; // rdx
  _QWORD *v28; // rbx
  __int64 v29; // rbx
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r15
  char *v41; // rdi
  struct _PEB *result; // rax
  _DWORD *v43; // rcx
  __int64 v44; // rcx
  _DWORD *v45; // rcx
  int Count; // edi
  signed __int32 v47; // r8d
  __int64 v48; // rax
  int v49; // eax
  signed __int32 v50; // ecx
  signed __int32 v51; // edx
  __int64 v52; // rcx
  signed __int32 v53; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v54; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  _DWORD v57[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+68h] [rbp-98h]
  __int128 v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  _DWORD v65[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int128 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  __int64 v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  __int64 v72; // [rsp+F0h] [rbp-10h]
  _OWORD v73[2]; // [rsp+100h] [rbp+0h] BYREF
  int v74; // [rsp+120h] [rbp+20h]
  int v75; // [rsp+124h] [rbp+24h]

  v3 = *(_QWORD *)(a2 + 208);
  v56 = a3;
  v55 = a1;
  if ( v3 )
  {
    *(_QWORD *)&v54 = 0LL;
    result = (struct _PEB *)LdrpFindLoadedDllByHandle(v3, &v54, &v53);
    if ( (int)result < 0 )
      return result;
    Count = LdrpIncrementModuleLoadCount(v54);
    result = (struct _PEB *)LdrpDereferenceModule(v54);
    if ( Count < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v47 = *(_DWORD *)(a2 + 284);
      v48 = *(_QWORD *)(a2 + 216);
      if ( !v48 || (v49 = *(_DWORD *)(v48 + 440)) == 0 )
        v49 = MEMORY[0x7FFE03C0];
      v50 = v49 + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      v51 = v50 + v49;
      if ( v47 >= v50 && v47 <= v49 + v51 )
        break;
      if ( v47 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v51, v47) )
      {
        v52 = *(_QWORD *)(a2 + 272);
        v53 = v51;
        NtAlpcSetInformation(v52, 8LL, &v53, 4LL);
      }
    }
  }
  v6 = 0;
  v54 = 0LL;
  _m_prefetchw((const void *)(a2 + 128));
  v7 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 136));
      v6 = 0;
    }
    v8 = (volatile signed __int32 **)0xF000000000000000LL;
    v9 = (v7 + 1) ^ ((v7 + 1) ^ v7) & 0xF000000000000000uLL;
    if ( v7 < 0 && ((v7 + 1) & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v10 = (volatile signed __int32 *)(a2 + 136);
      v9 &= ~0x8000000000000000uLL;
      v6 = 1;
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          v8 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
          if ( !*v8 )
          {
            *v8 = v10;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v10, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(a2 + 136), (__int64)v8);
    }
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v9, v7);
    v13 = v7 == v14;
    v7 = v14;
  }
  while ( !v13 );
  v15 = v55;
  v16 = v56;
  if ( v6 )
  {
    v17 = *(_QWORD **)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 136));
    if ( v17 )
    {
      do
      {
        v20 = (_QWORD *)*v17;
        ZwAlertThreadByThreadId(v17[1], v18, v19);
        v17 = v20;
      }
      while ( v20 );
    }
  }
  v21 = *(_QWORD *)(a2 + 168);
  if ( v21 && v21 != -1 )
  {
    *(_QWORD *)v15 = 72LL;
    *(_DWORD *)(v15 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(v15, *(_QWORD *)(a2 + 168));
    *(_BYTE *)(v15 + 76) |= 1u;
  }
  *(_DWORD *)(v15 + 144) |= 0x240u;
  *(_QWORD *)(v15 + 184) = a2 + 72;
  if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
    TpCallbackMayRunLong(v15);
  v22 = *(void **)(a2 + 176);
  if ( v22 )
  {
    *(_QWORD *)(v15 + 80) = v22;
    v23 = 2147353488LL;
    v24 = NtCurrentTeb();
    SubProcessTag = v24->SubProcessTag;
    v24->SubProcessTag = v22;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v27 = (__int64)NtCurrentPeb()->SharedData + 566;
    else
      v27 = 2147353488LL;
    if ( *(_BYTE *)v27 && v22 != SubProcessTag )
    {
      memset(v73, 0, sizeof(v73));
      WORD3(v73[0]) = 1349;
      v74 = (int)SubProcessTag;
      v75 = (int)v22;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v23 = (__int64)NtCurrentPeb()->SharedData + 566;
      NtTraceEvent(*(unsigned __int8 *)v23, 1026LL, 8LL, v73);
    }
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
  v28 = (_QWORD *)(a2 + 200);
  if ( a2 != -200 )
  {
    if ( memcmp(NtCurrentTeb()->WorkingOnBehalfTicket, v28, 8uLL) )
    {
      if ( (int)NtSetInformationThread(-2LL, 44LL, v28, 8LL) < 0 )
        goto LABEL_29;
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v28;
    }
    *(_QWORD *)(v15 + 248) = *v28;
  }
LABEL_29:
  v29 = 2147353478LL;
  v30 = NtCurrentPeb()->SharedData;
  if ( v30 && *v30 )
    v31 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v31 = 2147353478LL;
  if ( *(_BYTE *)v31 )
  {
    v60 = *(_QWORD *)(a2 + 216);
    v62 = *(_QWORD *)(a2 + 152);
    v63 = *(_QWORD *)(a2 + 160);
    v64 = *(_QWORD *)(a2 + 176);
    v57[0] = 0;
    v57[1] = 471990272;
    v58 = 0LL;
    v59 = 0LL;
    v61 = a2;
    v32 = NtCurrentPeb()->SharedData;
    if ( v32 && *v32 )
      v33 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v33 = 2147353478LL;
    NtTraceEvent(*(unsigned __int8 *)v33, 1026LL, 40LL, v57);
  }
  v34 = *(_QWORD *)(a2 + 176);
  v35 = *(_QWORD *)(a2 + 160);
  v36 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v38 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    v39 = v38;
    *((_DWORD *)ThreadPoolData + 3) = v38;
    v38 *= 32LL;
    *(_QWORD *)((char *)ThreadPoolData + v38 + 32) = v36;
    *(_QWORD *)((char *)ThreadPoolData + v38 + 40) = v35;
    *(_QWORD *)((char *)ThreadPoolData + v38 + 48) = v34;
    v40 = (__int64)&ThreadPoolData[4 * v39 + 7];
    v41 = (char *)&ThreadPoolData[4 * v39 + 4];
    *(_QWORD *)v40 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v41 = 0LL;
    v40 = 24LL;
  }
  *(_QWORD *)(v15 + 88) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(v15 + 96) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *(_QWORD *)(v15 + 136) = a2;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(v15, *(_QWORD *)(a2 + 160), a2, v16);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(a2 + 152))(v15, *(_QWORD *)(a2 + 160), a2);
  }
  result = NtCurrentPeb();
  v43 = result->SharedData;
  if ( v43 && *v43 )
  {
    result = NtCurrentPeb();
    v44 = (__int64)result->SharedData + 556;
  }
  else
  {
    v44 = 2147353478LL;
  }
  if ( *(_BYTE *)v44 )
  {
    v68 = *(_QWORD *)(a2 + 216);
    v70 = *(_QWORD *)(a2 + 152);
    v71 = *(_QWORD *)(a2 + 160);
    v72 = *(_QWORD *)(a2 + 176);
    v65[0] = 0;
    v65[1] = 472055808;
    v66 = 0LL;
    v67 = 0LL;
    v69 = a2;
    v45 = NtCurrentPeb()->SharedData;
    if ( v45 && *v45 )
      v29 = (__int64)NtCurrentPeb()->SharedData + 556;
    result = (struct _PEB *)NtTraceEvent(*(unsigned __int8 *)v29, 1027LL, 40LL, v65);
  }
  if ( v41 )
  {
    result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)v40 )
    {
      result = (struct _PEB *)((char *)result - *(_QWORD *)v40);
      *(_QWORD *)v40 = result;
    }
  }
  return result;
}
