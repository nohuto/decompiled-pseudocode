/*
 * XREFs of PoInitiateProcessorWake @ 0x140603F50
 * Callers:
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     HalRequestIpiSpecifyVector @ 0x1402F95B0 (HalRequestIpiSpecifyVector.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403D3A10 (KiSendSoftwareInterruptAffinity.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     PpmIdleTransitionStall @ 0x1406051FC (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateSynchronizationState @ 0x140605430 (PpmIdleUpdateSynchronizationState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PoInitiateProcessorWake(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 Prcb; // r14
  __int64 v5; // r15
  _DWORD *v6; // rsi
  int v7; // ebx
  char v8; // di
  __int64 v9; // r12
  char updated; // al
  __int64 v11; // rdx
  unsigned __int16 i; // cx
  _QWORD v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v15; // [rsp+30h] [rbp-D0h]
  struct _KAFFINITY_EX v16; // [rsp+40h] [rbp-C0h] BYREF

  memset_0(&v16, 0, sizeof(v16));
  Prcb = KeGetPrcb(a1);
  v5 = *(_QWORD *)(Prcb + 34880);
  v6 = (_DWORD *)(Prcb + 34972);
  v7 = HIBYTE(*(_DWORD *)(Prcb + 34972));
  v8 = 0;
  v9 = *(_QWORD *)(v5 + 664);
  while ( (unsigned __int8)(v7 - 2) <= 4u || (unsigned __int8)v7 >= 9u )
  {
    if ( (_BYTE)v7 == 2 )
    {
      v7 = HIBYTE(*v6);
      goto LABEL_12;
    }
    if ( (((_BYTE)v7 - 3) & 0xFC) != 0 )
    {
      if ( (_BYTE)v7 != 5 )
        goto LABEL_12;
    }
    else if ( (_BYTE)v7 != 5 )
    {
      LOBYTE(v3) = v7;
      LOBYTE(v2) = 8;
      updated = PpmIdleUpdateSynchronizationState(v6, v2, v3);
      if ( updated == (_BYTE)v7 )
      {
        if ( !*(_BYTE *)(Prcb + 34957) )
          return 1;
        v14[0] = 0LL;
        v14[1] = PopIdleTransitionTimeout;
        v15 = (unsigned __int64)Prcb;
        while ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v9, v2) )
        {
          if ( HIBYTE(*v6) != 8 )
            return v8;
          PpmIdleTransitionStall(v14);
        }
        return guard_dispatch_icall_no_overrides(v9, v11);
      }
      LOBYTE(v7) = updated;
      goto LABEL_12;
    }
    LOBYTE(v3) = 5;
    LOBYTE(v2) = 7;
    LOBYTE(v7) = PpmIdleUpdateSynchronizationState(v6, v2, v3);
    if ( (_BYTE)v7 == 5 )
    {
      *(_QWORD *)&v16.Count = 2097153LL;
      memset_0(&v16.8, 0, sizeof(v16.8));
      RtlpCopyAffinityEx(&v16, v16.Size, (struct _KAFFINITY_EX *)(v5 + 72));
      for ( i = 0; i < v16.Count; ++i )
      {
        if ( v16.Bitmap[i] )
        {
          HalRequestIpi(0, (__int64)&v16);
          return v8;
        }
      }
      return v8;
    }
LABEL_12:
    _mm_pause();
  }
  return v8;
}
