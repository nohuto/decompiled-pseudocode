/*
 * XREFs of PnprQuiesceProcessors @ 0x140BF86B4
 * Callers:
 *     PnprQuiesce @ 0x1405DE678 (PnprQuiesce.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1403087F0 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeSuspendClockTimerSafe @ 0x1405F0AC4 (KeSuspendClockTimerSafe.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnprGetMillisecondCounter @ 0x140BF76E4 (PnprGetMillisecondCounter.c)
 */

__int64 PnprQuiesceProcessors()
{
  int v0; // edx
  void *v1; // rbx
  unsigned __int8 CurrentIrql; // cl
  __int64 v3; // r14
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // rsi
  _KWAIT_STATUS_REGISTER *v5; // rax
  unsigned __int16 *v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned __int16 *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 result; // rax
  unsigned int MillisecondCounter; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  unsigned __int16 *v34; // rcx
  _KWAIT_STATUS_REGISTER *v35; // rax
  __int64 v36; // rdx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  unsigned int v44; // r8d
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rbx
  int v53; // edi
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  unsigned __int16 *v64; // rax
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v74[2]; // [rsp+30h] [rbp-D8h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v76; // [rsp+80h] [rbp-88h]
  unsigned __int16 v77; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 *v78; // [rsp+90h] [rbp-78h]

  memset_0(&v77, 0, 0x108uLL);
  memset((void *)&Dpc.Number, 0, 62);
  LODWORD(v76) = 0;
  DeferredContext_4 = 0;
  v1 = (void *)*(unsigned int *)(PnprContext + 176);
  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v0);
  }
  KeInitializeDpc((PRKDPC)&Dpc.DpcListEntry, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  p_WaitRegister = &stru_140FC11F0.WaitRegister;
  BYTE1(Dpc.DpcListEntry.Next) = 2;
  v5 = &stru_140FC11F0.WaitRegister;
  v6 = &v77;
  v7 = 2LL;
  do
  {
    v8 = *(_OWORD *)&v5[16].Flags;
    *(_OWORD *)v6 = *(_OWORD *)&v5->Flags;
    v9 = *(_OWORD *)&v5[32].Flags;
    *((_OWORD *)v6 + 1) = v8;
    v10 = *(_OWORD *)&v5[48].Flags;
    *((_OWORD *)v6 + 2) = v9;
    v11 = *(_OWORD *)&v5[64].Flags;
    *((_OWORD *)v6 + 3) = v10;
    v12 = *(_OWORD *)&v5[80].Flags;
    *((_OWORD *)v6 + 4) = v11;
    v13 = *(_OWORD *)&v5[96].Flags;
    *((_OWORD *)v6 + 5) = v12;
    v14 = *(_OWORD *)&v5[112].Flags;
    v5 += 128;
    *((_OWORD *)v6 + 6) = v13;
    v6 += 64;
    *((_OWORD *)v6 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = PnprContext;
  *(_QWORD *)v6 = *(_QWORD *)&v5->Flags;
  KeRemoveProcessorAffinityEx(&v77, *(_DWORD *)(v15 + 180));
  v74[1] = v78;
  v74[0] = &v77;
  LOWORD(Dpc.TargetInfoAsUlong) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v74) )
  {
    if ( !v76 )
      WORD1(Dpc.DpcListEntry.Next) = DeferredContext_4 + 2048;
    DeferredContext = 0;
    KeInsertQueueDpc((PRKDPC)&Dpc.DpcListEntry, v1, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  v17 = *(unsigned int *)(PnprContext + 64);
  if ( (v17 & 0x20) != 0 && (int)guard_dispatch_icall_no_overrides(v17, v16) < 0 )
  {
    v18 = PnprContext;
    v19 = *(_DWORD *)(PnprContext + 33288);
    if ( !v19 )
      v19 = 2267;
    *(_DWORD *)(PnprContext + 33288) = v19;
    v20 = *(_DWORD *)(v18 + 33292);
    if ( !v20 )
      v20 = 1;
    *(_DWORD *)(v18 + 33292) = v20;
    v21 = &v77;
    do
    {
      v22 = *((_OWORD *)v21 + 1);
      *(_OWORD *)&p_WaitRegister->Flags = *(_OWORD *)v21;
      v23 = *((_OWORD *)v21 + 2);
      *(_OWORD *)&p_WaitRegister[16].Flags = v22;
      v24 = *((_OWORD *)v21 + 3);
      *(_OWORD *)&p_WaitRegister[32].Flags = v23;
      v25 = *((_OWORD *)v21 + 4);
      *(_OWORD *)&p_WaitRegister[48].Flags = v24;
      v26 = *((_OWORD *)v21 + 5);
      *(_OWORD *)&p_WaitRegister[64].Flags = v25;
      v27 = *((_OWORD *)v21 + 6);
      *(_OWORD *)&p_WaitRegister[80].Flags = v26;
      v28 = *((_OWORD *)v21 + 7);
      v21 += 64;
      *(_OWORD *)&p_WaitRegister[96].Flags = v27;
      p_WaitRegister += 128;
      *(_OWORD *)&p_WaitRegister[-16].Flags = v28;
      --v3;
    }
    while ( v3 );
LABEL_22:
    result = *(_QWORD *)v21;
    *(_QWORD *)&p_WaitRegister->Flags = result;
    return result;
  }
  guard_dispatch_icall_no_overrides(0LL, *(_QWORD *)(PnprContext + 33176));
  KeSuspendClockTimerSafe();
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v32 = PnprContext;
  *(_QWORD *)(PnprContext + 33296) = MillisecondCounter;
  _InterlockedAdd((volatile signed __int32 *)(v32 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)v1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)v1 )
      _mm_pause();
    LOBYTE(v31) = 1;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v31);
    v33 = PnprContext;
    *(_DWORD *)(v33 + 33304) = PnprGetMillisecondCounter(0);
  }
  v34 = &v77;
  v35 = &stru_140FC11F0.WaitRegister;
  v36 = 2LL;
  do
  {
    v37 = *(_OWORD *)&v35[16].Flags;
    *(_OWORD *)v34 = *(_OWORD *)&v35->Flags;
    v38 = *(_OWORD *)&v35[32].Flags;
    *((_OWORD *)v34 + 1) = v37;
    v39 = *(_OWORD *)&v35[48].Flags;
    *((_OWORD *)v34 + 2) = v38;
    v40 = *(_OWORD *)&v35[64].Flags;
    *((_OWORD *)v34 + 3) = v39;
    v41 = *(_OWORD *)&v35[80].Flags;
    *((_OWORD *)v34 + 4) = v40;
    v42 = *(_OWORD *)&v35[96].Flags;
    *((_OWORD *)v34 + 5) = v41;
    v43 = *(_OWORD *)&v35[112].Flags;
    v35 += 128;
    *((_OWORD *)v34 + 6) = v42;
    v34 += 64;
    *((_OWORD *)v34 - 1) = v43;
    --v36;
  }
  while ( v36 );
  v44 = 0;
  *(_QWORD *)v34 = *(_QWORD *)&v35->Flags;
  v45 = *(_QWORD *)(PnprContext + 16);
  if ( *(_DWORD *)(v45 + 8) )
  {
    do
    {
      v46 = v44++;
      *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * v46 + 4) &= ~*(_QWORD *)(*(_QWORD *)v45 + 8 * v46);
    }
    while ( v44 < *(_DWORD *)(v45 + 8) );
  }
  v47 = PnprContext;
  v48 = *(_QWORD *)(PnprContext + 16);
  *(_QWORD *)(PnprContext + 200) = 1LL;
  if ( *(_DWORD *)(v48 + 16) )
  {
    v49 = PnprGetMillisecondCounter(0);
    v50 = PnprContext;
    *(_DWORD *)(v47 + 33308) = v49;
    v51 = guard_dispatch_icall_no_overrides(1LL, *(_QWORD *)(v50 + 33176));
    v52 = PnprContext;
    v53 = v51;
    *(_DWORD *)(v52 + 33312) = PnprGetMillisecondCounter(0);
    if ( v53 < 0 )
    {
      v54 = PnprContext;
      v55 = *(_DWORD *)(PnprContext + 33288);
      if ( !v55 )
        v55 = 2352;
      *(_DWORD *)(PnprContext + 33288) = v55;
      v56 = *(_DWORD *)(v54 + 33292);
      if ( !v56 )
        v56 = 1;
      *(_DWORD *)(v54 + 33292) = v56;
      v21 = &v77;
      do
      {
        v57 = *((_OWORD *)v21 + 1);
        *(_OWORD *)&p_WaitRegister->Flags = *(_OWORD *)v21;
        v58 = *((_OWORD *)v21 + 2);
        *(_OWORD *)&p_WaitRegister[16].Flags = v57;
        v59 = *((_OWORD *)v21 + 3);
        *(_OWORD *)&p_WaitRegister[32].Flags = v58;
        v60 = *((_OWORD *)v21 + 4);
        *(_OWORD *)&p_WaitRegister[48].Flags = v59;
        v61 = *((_OWORD *)v21 + 5);
        *(_OWORD *)&p_WaitRegister[64].Flags = v60;
        v62 = *((_OWORD *)v21 + 6);
        *(_OWORD *)&p_WaitRegister[80].Flags = v61;
        v63 = *((_OWORD *)v21 + 7);
        v21 += 64;
        *(_OWORD *)&p_WaitRegister[96].Flags = v62;
        p_WaitRegister += 128;
        *(_OWORD *)&p_WaitRegister[-16].Flags = v63;
        --v3;
      }
      while ( v3 );
      goto LABEL_22;
    }
  }
  v64 = &v77;
  do
  {
    v65 = *((_OWORD *)v64 + 1);
    *(_OWORD *)&p_WaitRegister->Flags = *(_OWORD *)v64;
    v66 = *((_OWORD *)v64 + 2);
    *(_OWORD *)&p_WaitRegister[16].Flags = v65;
    v67 = *((_OWORD *)v64 + 3);
    *(_OWORD *)&p_WaitRegister[32].Flags = v66;
    v68 = *((_OWORD *)v64 + 4);
    *(_OWORD *)&p_WaitRegister[48].Flags = v67;
    v69 = *((_OWORD *)v64 + 5);
    *(_OWORD *)&p_WaitRegister[64].Flags = v68;
    v70 = *((_OWORD *)v64 + 6);
    *(_OWORD *)&p_WaitRegister[80].Flags = v69;
    v71 = *((_OWORD *)v64 + 7);
    v64 += 64;
    *(_OWORD *)&p_WaitRegister[96].Flags = v70;
    p_WaitRegister += 128;
    *(_OWORD *)&p_WaitRegister[-16].Flags = v71;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)&p_WaitRegister->Flags = *(_QWORD *)v64;
  while ( 1 )
  {
    result = *(unsigned int *)(PnprContext + 204);
    if ( (int)result >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
