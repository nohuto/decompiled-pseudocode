/*
 * XREFs of TppAlpcpExecuteCallback @ 0x18003E8A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x18003F020 (TpCallbackMayRunLong.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
 *     NtAlpcSetInformation @ 0x180160010 (NtAlpcSetInformation.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall TppAlpcpExecuteCallback(_TP_CALLBACK_INSTANCE *a1, __int64 a2, __int64 a3)
{
  void *v3; // r15
  char v6; // r15
  signed __int64 v7; // rdi
  volatile signed __int32 **v8; // rdx
  unsigned __int64 v9; // rbx
  volatile signed __int32 *v10; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  bool v13; // zf
  signed __int64 v14; // rax
  PTP_CALLBACK_INSTANCE v15; // r14
  __int64 v16; // r13
  __int64 **v17; // rbx
  __int64 *v18; // rdi
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // rdi
  struct _TEB *v22; // rax
  void *SubProcessTag; // r8
  _DWORD *SharedData; // rdx
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // rbx
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r15
  char *v39; // rdi
  struct _PEB *v40; // rax
  _DWORD *v41; // rcx
  __int64 v42; // rcx
  _DWORD *v43; // rcx
  int Count; // edi
  signed __int32 v45; // r8d
  __int64 v46; // rax
  int v47; // eax
  signed __int32 v48; // ecx
  signed __int32 v49; // edx
  void *v50; // rcx
  signed __int32 PortInformation; // [rsp+30h] [rbp-D0h] BYREF
  PVOID BaseAddress[2]; // [rsp+38h] [rbp-C8h] BYREF
  PTP_CALLBACK_INSTANCE Instance; // [rsp+48h] [rbp-B8h]
  __int64 v55; // [rsp+50h] [rbp-B0h]
  _DWORD Fields[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h]
  __int128 v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h]
  _DWORD v64[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-48h]
  __int128 v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  _OWORD v72[2]; // [rsp+100h] [rbp+0h] BYREF
  int v73; // [rsp+120h] [rbp+20h]
  int v74; // [rsp+124h] [rbp+24h]

  v3 = *(void **)(a2 + 208);
  v55 = a3;
  Instance = a1;
  if ( v3 )
  {
    BaseAddress[0] = 0LL;
    LODWORD(v40) = LdrpFindLoadedDllByHandle(v3, BaseAddress, &PortInformation);
    if ( (int)v40 < 0 )
      return (int)v40;
    Count = LdrpIncrementModuleLoadCount(BaseAddress[0]);
    LODWORD(v40) = LdrpDereferenceModule(BaseAddress[0]);
    if ( Count < 0 )
      return (int)v40;
    a1->CallbackEpilogFlags |= 0x100u;
    a1->RaceDll = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v45 = *(_DWORD *)(a2 + 284);
      v46 = *(_QWORD *)(a2 + 216);
      if ( !v46 || (v47 = *(_DWORD *)(v46 + 440)) == 0 )
        v47 = MEMORY[0x7FFE03C0];
      v48 = v47 + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      v49 = v48 + v47;
      if ( v45 >= v48 && v45 <= v47 + v49 )
        break;
      if ( v45 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v49, v45) )
      {
        v50 = *(void **)(a2 + 272);
        PortInformation = v49;
        NtAlpcSetInformation(v50, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
      }
    }
  }
  v6 = 0;
  *(_OWORD *)BaseAddress = 0LL;
  _m_prefetchw((const void *)(a2 + 128));
  v7 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
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
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(a2 + 136), (unsigned __int64)v8);
    }
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v9, v7);
    v13 = v7 == v14;
    v7 = v14;
  }
  while ( !v13 );
  v15 = Instance;
  v16 = v55;
  if ( v6 )
  {
    v17 = *(__int64 ***)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    if ( v17 )
    {
      do
      {
        v18 = *v17;
        ZwAlertThreadByThreadId(v17[1]);
        v17 = (__int64 **)v18;
      }
      while ( v18 );
    }
  }
  v19 = *(_QWORD *)(a2 + 168);
  if ( v19 && v19 != -1 )
  {
    v15->ActivationFrame.Size = 72LL;
    v15->ActivationFrame.Format = 1;
    RtlActivateActivationContextUnsafeFast((__int64)v15, *(_QWORD *)(a2 + 168));
    *((_BYTE *)v15 + 76) |= 1u;
  }
  v15->CallbackEpilogFlags |= 0x240u;
  v15->CleanupGroupMember = (_TPP_CLEANUP_GROUP_MEMBER *)(a2 + 72);
  if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
    TpCallbackMayRunLong(v15);
  v20 = *(void **)(a2 + 176);
  if ( v20 )
  {
    v15->SubProcessTag = v20;
    v21 = 2147353488LL;
    v22 = NtCurrentTeb();
    SubProcessTag = v22->SubProcessTag;
    v22->SubProcessTag = v20;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v25 = (__int64)NtCurrentPeb()->SharedData + 566;
    else
      v25 = 2147353488LL;
    if ( *(_BYTE *)v25 && v20 != SubProcessTag )
    {
      memset(v72, 0, sizeof(v72));
      WORD3(v72[0]) = 1349;
      v73 = (int)SubProcessTag;
      v74 = (int)v20;
      if ( RtlGetCurrentServiceSessionId() )
        v21 = (__int64)NtCurrentPeb()->SharedData + 566;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v21, 0x402u, 8u, v72);
    }
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
  v26 = (_QWORD *)(a2 + 200);
  if ( a2 != -200 )
  {
    if ( memcmp(NtCurrentTeb()->WorkingOnBehalfTicket, v26, 8uLL) )
    {
      if ( NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v26, 8u) < 0 )
        goto LABEL_29;
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v26;
    }
    v15->WorkOnBehalf = *v26;
  }
LABEL_29:
  v27 = 2147353478LL;
  v28 = NtCurrentPeb()->SharedData;
  if ( v28 && *v28 )
    v29 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v29 = 2147353478LL;
  if ( *(_BYTE *)v29 )
  {
    v59 = *(_QWORD *)(a2 + 216);
    v61 = *(_QWORD *)(a2 + 152);
    v62 = *(_QWORD *)(a2 + 160);
    v63 = *(_QWORD *)(a2 + 176);
    Fields[0] = 0;
    Fields[1] = 471990272;
    v57 = 0LL;
    v58 = 0LL;
    v60 = a2;
    v30 = NtCurrentPeb()->SharedData;
    if ( v30 && *v30 )
      v31 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v31 = 2147353478LL;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v31, 0x402u, 0x28u, Fields);
  }
  v32 = *(_QWORD *)(a2 + 176);
  v33 = *(_QWORD *)(a2 + 160);
  v34 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v36 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    v37 = v36;
    *((_DWORD *)ThreadPoolData + 3) = v36;
    v36 *= 32LL;
    *(_QWORD *)((char *)ThreadPoolData + v36 + 32) = v34;
    *(_QWORD *)((char *)ThreadPoolData + v36 + 40) = v33;
    *(_QWORD *)((char *)ThreadPoolData + v36 + 48) = v32;
    v38 = (__int64)&ThreadPoolData[4 * v37 + 7];
    v39 = (char *)&ThreadPoolData[4 * v37 + 4];
    *(_QWORD *)v38 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v39 = 0LL;
    v38 = 24LL;
  }
  v15->Callback = *(void **)(a2 + 152);
  v15->Context = *(void **)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    v15->AlpcWorkItem = (_TP_ALPC *)a2;
    (*(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD, __int64, __int64))(a2 + 152))(
      v15,
      *(_QWORD *)(a2 + 160),
      a2,
      v16);
  }
  else
  {
    (*(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD, __int64))(a2 + 152))(v15, *(_QWORD *)(a2 + 160), a2);
  }
  v40 = NtCurrentPeb();
  v41 = v40->SharedData;
  if ( v41 && *v41 )
  {
    v40 = NtCurrentPeb();
    v42 = (__int64)v40->SharedData + 556;
  }
  else
  {
    v42 = 2147353478LL;
  }
  if ( *(_BYTE *)v42 )
  {
    v67 = *(_QWORD *)(a2 + 216);
    v69 = *(_QWORD *)(a2 + 152);
    v70 = *(_QWORD *)(a2 + 160);
    v71 = *(_QWORD *)(a2 + 176);
    v64[0] = 0;
    v64[1] = 472055808;
    v65 = 0LL;
    v66 = 0LL;
    v68 = a2;
    v43 = NtCurrentPeb()->SharedData;
    if ( v43 && *v43 )
      v27 = (__int64)NtCurrentPeb()->SharedData + 556;
    LODWORD(v40) = NtTraceEvent((HANDLE)*(unsigned __int8 *)v27, 0x403u, 0x28u, v64);
  }
  if ( v39 )
  {
    v40 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)v38 )
    {
      v40 = (struct _PEB *)((char *)v40 - *(_QWORD *)v38);
      *(_QWORD *)v38 = v40;
    }
  }
  return (int)v40;
}
