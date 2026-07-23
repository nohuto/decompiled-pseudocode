/*
 * XREFs of KiForwardTick @ 0x140452220
 * Callers:
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x1402F9510 (HalRequestClockInterrupt.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x140452B10 (PoCopyDeepIdleMask.c)
 *     ?RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140452C14 (-RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiForwardTick(__int64 a1, unsigned int a2, int a3, char a4, struct _KAFFINITY_EX *a5)
{
  unsigned int v6; // r13d
  unsigned __int16 i; // cx
  unsigned int v10; // edi
  struct _KAFFINITY_EX *v11; // rsi
  unsigned __int16 *v12; // rcx
  unsigned __int16 Count; // r8
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // r9
  unsigned __int16 j; // dx
  char v16; // r14
  unsigned __int16 v17; // di
  unsigned int v18; // ecx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int16 k; // cx
  unsigned int v22; // edx
  int v23; // edi
  struct _KAFFINITY_EX v25; // [rsp+38h] [rbp-D0h] BYREF

  v6 = a2;
  memset_0(&v25.8, 0, sizeof(v25.8));
  if ( PoSkipTickMode == 2 )
  {
LABEL_7:
    v10 = 1;
    v11 = 0LL;
    RtlpCopyAffinityEx(a5, a5->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
LABEL_8:
    if ( !KiClockTimerPerCpuTickScheduling )
    {
      HalRequestClockInterrupt(v10, (__int64)v11);
      KiLastForwardedHand = a3;
    }
    goto LABEL_10;
  }
  *(_QWORD *)&v25.Count = 2097153LL;
  memset_0(&v25.8, 0, sizeof(v25.8));
  PoCopyDeepIdleMask(&v25);
  for ( i = 0; ; ++i )
  {
    if ( i >= v25.Count )
      goto LABEL_7;
    if ( v25.Bitmap[i] )
      break;
  }
  RtlpComplementAffinityEx(a5, a5->Size, &v25);
  RtlAndAffinityEx(v12, (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags, (__int64)a5);
  if ( a4 )
    RtlOrAffinityEx(a5, (struct _KAFFINITY_EX *)KiGroupSchedulingOverQuotaMask, (__int64)a5);
  if ( KiSerializeTimerExpiration )
    goto LABEL_15;
  v16 = KiLastForwardedHand;
  *(_QWORD *)&v25.Count = 2097153LL;
  v17 = 0;
  memset_0(&v25.8, 0, sizeof(v25.8));
  do
  {
    LOBYTE(v18) = v16 - 1;
    v19 = qword_140FC2698[2 * v17];
    do
    {
      v18 = (unsigned __int8)(v18 + 1);
      v20 = *(_QWORD *)(((unsigned __int64)v18 << 6) + v19);
      if ( v25.Count > v17 )
        goto LABEL_25;
      if ( v25.Size > v17 )
      {
        v25.Count = v17 + 1;
LABEL_25:
        v25.Bitmap[v17] |= v20;
      }
    }
    while ( v18 != (unsigned __int8)a3 );
    ++v17;
  }
  while ( v17 < (unsigned __int16)KiActiveGroups );
  RtlOrAffinityEx(a5, &v25, (__int64)a5);
  v6 = a2;
LABEL_15:
  Count = a5->Count;
  if ( a5->Count >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
  {
    p_WaitRegister = (_KWAIT_STATUS_REGISTER *)a5;
    Count = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  }
  else
  {
    p_WaitRegister = &stru_140FC11F0.WaitRegister;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= Count )
    {
      while ( j < *(_WORD *)&p_WaitRegister->Flags )
      {
        if ( *(_QWORD *)&p_WaitRegister[8 * j + 8].Flags )
          goto LABEL_29;
        ++j;
      }
      goto LABEL_7;
    }
    if ( a5->Bitmap[j] != *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * j + 4) )
      break;
  }
LABEL_29:
  KeRemoveProcessorAffinityEx(a5, *(unsigned int *)(a1 + 36));
  if ( PoSkipTickMode && (unsigned int)RtlCountSetBitsAffinityEx(&a5->Count) > PoSkipTickMaxOpportunisticProcessors )
    goto LABEL_7;
  v10 = 0;
  v11 = a5;
  for ( k = 0; k < a5->Count; ++k )
  {
    if ( a5->Bitmap[k] )
      goto LABEL_8;
  }
LABEL_10:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v22 = KiPollSlotNext;
    KiPollSlot = KiPollSlotNext++;
    if ( KiPollSlotNext >= v6 )
      KiPollSlotNext = 0;
    v23 = *(_DWORD *)(a1 + 36);
    if ( v22 != v23 && !(unsigned int)KeCheckProcessorAffinityEx(&a5->Count, v22) )
      KiPollSlot = v23;
  }
}
