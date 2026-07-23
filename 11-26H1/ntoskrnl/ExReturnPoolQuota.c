/*
 * XREFs of ExReturnPoolQuota @ 0x1402640A0
 * Callers:
 *     IopFreeIrp @ 0x140267B00 (IopFreeIrp.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x140A82540 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExpStampBigPoolEntry @ 0x14029B2E0 (ExpStampBigPoolEntry.c)
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403C7AF4 (PspLockQuotaExpansion.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     ExIsSpecialPoolAddress @ 0x14047E9E4 (ExIsSpecialPoolAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall ExReturnPoolQuota(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // esi
  ULONG_PTR v3; // r12
  ULONG_PTR v4; // rbx
  __int16 v5; // ax
  unsigned int v6; // r13d
  ULONG_PTR v7; // r14
  ULONG_PTR BugCheckParameter4; // rdi
  signed __int64 v9; // rax
  ULONG_PTR v10; // r12
  ULONG_PTR v11; // rcx
  unsigned __int64 *v12; // r12
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  char *v18; // rbx
  __int64 v19; // r8
  __int64 *v20; // r9
  ULONG_PTR v21; // rdx
  signed __int64 v22; // rcx
  signed __int64 v23; // r15
  bool v24; // cc
  signed __int64 v25; // r15
  __int64 v26; // rax
  __int64 v28; // [rsp+30h] [rbp-58h]
  ULONG_PTR v29; // [rsp+38h] [rbp-50h]
  __int64 *v30; // [rsp+40h] [rbp-48h]
  __int64 v31; // [rsp+98h] [rbp+10h] BYREF
  ULONG_PTR v32; // [rsp+A0h] [rbp+18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+A8h] [rbp+20h]

  v1 = 0;
  v32 = 0LL;
  LODWORD(v31) = 0;
  if ( !LODWORD(stru_140EFF2C0.InitialStack) || (LODWORD(v9) = ExIsSpecialPoolAddress(BugCheckParameter2), !(_DWORD)v9) )
  {
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 5 )
      v3 = 256LL;
    else
      v3 = 64LL;
    v4 = 0LL;
    if ( (BugCheckParameter2 & 0xFFF) != 0 )
    {
      v4 = BugCheckParameter2 - 16;
      if ( (*(_BYTE *)(BugCheckParameter2 - 13) & 4) != 0 )
        v4 -= 16LL * (unsigned __int8)*(_WORD *)v4;
      v5 = *(_WORD *)(v4 + 2);
      v6 = *(_DWORD *)(v4 + 4);
      v7 = 16LL * (unsigned __int8)v5;
      if ( (v5 & 0x800) != 0 )
      {
        BugCheckParameter4 = v4 ^ (__int64)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v4 + 8) = (ULONG_PTR)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ v4;
      }
      else
      {
        BugCheckParameter4 = -1LL;
      }
    }
    else
    {
      v26 = ExpStampBigPoolEntry(BugCheckParameter2, v3, (__int64)&v31);
      v7 = v32;
      BugCheckParameter4 = v26;
      v6 = v31;
    }
    LOBYTE(v9) = BugCheckParameter4 - 1;
    if ( BugCheckParameter4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( BugCheckParameter4 < 0xFFFF800000000000uLL
        || (LOBYTE(v9) = *(_BYTE *)BugCheckParameter4 & 0x7F, (_BYTE)v9 != 3) )
      {
        if ( v4 )
          v1 = *(_DWORD *)(v4 + 4);
        KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter2, v1, BugCheckParameter4);
      }
      v10 = v3 & 0x100;
      if ( (PEPROCESS)BugCheckParameter4 != PsInitialSystemProcess )
      {
        v30 = *(__int64 **)(BugCheckParameter4 + 760);
        v11 = v10 != 0;
        BugCheckParameter2a = v11;
        LOBYTE(v32) = stru_140FC11F0.SchedulerApcFill3[8 * v11 + 40];
        v29 = v11 << 7;
        v12 = (unsigned __int64 *)&v30[16 * v11];
        _m_prefetchw(v12);
        v13 = *v12;
        v14 = v12[8];
        if ( v12[10] )
        {
          v15 = 56 * v11;
          if ( v14 > v13 )
          {
            v16 = *(_QWORD *)((char *)&PsAltSystemCallRegistrationLock.Timer.Processor + v15);
            if ( v14 - v13 > v16 )
            {
              if ( v16 > v7 )
                v16 = v7;
              v17 = v12[8];
              if ( v17 == _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 8, v14 - v16, v14)
                && v16 + _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 9, v16) > *(_QWORD *)((char *)&PsAltSystemCallRegistrationLock.Timer.Processor + v15) )
              {
                v28 = _InterlockedExchange64((volatile __int64 *)v12 + 9, 0LL);
                if ( v28 )
                {
                  LOBYTE(v31) = 0;
                  v18 = (char *)&PsAltSystemCallRegistrationLock.Timer.Dpc + v15;
                  PspLockQuotaExpansion((char *)&PsAltSystemCallRegistrationLock.Timer.Dpc + v15, &v31);
                  guard_dispatch_icall_no_overrides((unsigned int)BugCheckParameter2a, v28, v19);
                  PspUnlockQuotaExpansion(v18, (unsigned __int8)v31);
                }
              }
            }
          }
        }
        v20 = v30;
        v21 = v7;
        while ( 1 )
        {
          while ( 1 )
          {
            v22 = 0LL;
            if ( v21 < v13 )
              v22 = v13 - v21;
            v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v22, v13);
            if ( v13 == v9 )
              break;
            v13 = v9;
          }
          if ( v21 < v13 )
            v13 = v21;
          v21 -= v13;
          if ( !v21 )
            break;
          if ( v20 == &PspSystemQuotaBlock )
            KeBugCheckEx(0x21u, BugCheckParameter4, BugCheckParameter2a, v7, v21);
          v20 = &PspSystemQuotaBlock;
          v12 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v29);
          _m_prefetchw((char *)&PspSystemQuotaBlock + v29);
          v13 = *(__int64 *)((char *)&PspSystemQuotaBlock + v29);
        }
        if ( (v32 & 4) != 0 )
        {
          LOBYTE(v9) = BugCheckParameter2a;
          _InterlockedAdd64(
            (volatile signed __int64 *)(BugCheckParameter4 + 8 * BugCheckParameter2a + 512),
            -(__int64)v7);
        }
      }
      if ( ObpTraceFlags )
        LOBYTE(v9) = ObpPushStackInfo(BugCheckParameter4 - 48, 0xFFFFFFFFLL, v6);
      v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter4 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v24 = v23 <= 1;
      v25 = v23 - 1;
      if ( v24 )
      {
        if ( *(_QWORD *)(BugCheckParameter4 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter4 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter4 - 48) >> 8)],
            BugCheckParameter4,
            3uLL,
            *(_QWORD *)(BugCheckParameter4 - 40));
        if ( v25 < 0 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter4, 4uLL, v25);
        LOBYTE(v9) = ObpDeferObjectDeletion(BugCheckParameter4 - 48);
      }
    }
  }
  return v9;
}
