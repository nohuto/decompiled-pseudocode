/*
 * XREFs of KiCheckForTimerExpiration @ 0x140220830
 * Callers:
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14021F9A0 (HalRequestSoftwareInterrupt.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KiResetClockIntervalOneShot @ 0x14040D06C (KiResetClockIntervalOneShot.c)
 *     KiSetClockIntervalOneShot @ 0x14040D19C (KiSetClockIntervalOneShot.c)
 *     KiSetDpcRequestFlag @ 0x140447660 (KiSetDpcRequestFlag.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall KiCheckForTimerExpiration(_BYTE *a1, unsigned __int64 a2)
{
  bool v2; // di
  unsigned __int64 v3; // rbp
  unsigned int v4; // r13d
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r11
  bool v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // r12
  _DWORD *v16; // r12
  unsigned int v17; // r9d
  __int64 v18; // r15
  unsigned int v19; // esi
  unsigned int v20; // r11d
  unsigned __int64 v21; // r13
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int16 v25; // cx
  unsigned int v26; // [rsp+30h] [rbp-68h]
  unsigned int v27; // [rsp+34h] [rbp-64h]
  _QWORD v28[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h]
  __int128 v30; // [rsp+50h] [rbp-48h] BYREF

  v30 = 0LL;
  v2 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = a2;
  v27 = a2;
  if ( (a1[14524] & 8) == 0 )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( !a1[33] )
        goto LABEL_21;
      v6 = KiProcessorBlock[0];
    }
    else
    {
      v6 = (__int64)a1;
    }
    v7 = v6 + 16640;
    if ( v6 != -16640 )
    {
      v8 = KiLastPseudoHrTimerExpiration;
      v9 = *(_QWORD *)(v6 + 33536);
      v10 = *(_QWORD *)(v6 + 33544) != KiLastNonHrTimerExpiration;
      v29 = KiLastPseudoHrTimerExpiration;
      v28[0] = v9;
      if ( KiGlobalTimerResolutionRequests )
        v10 = v9 != KiLastPseudoHrTimerExpiration;
      if ( !v10 && v9 == KiLastPseudoHrTimerExpiration )
      {
LABEL_10:
        if ( !a1[33] )
          goto LABEL_22;
        if ( v10
          || v9 == v8
          || v3 < qword_140F26E10
          || (a2 = v3 + (unsigned int)KePseudoHrTimeIncrement,
              a2 <= qword_140F26E10 + (unsigned __int64)(unsigned int)KeNonHrTimeIncrement) )
        {
          if ( !v2 )
          {
            if ( v10 )
            {
              v2 = KiNextTimer2DueTime <= v3;
            }
            else if ( v9 == v8 || qword_140F26DF8 > v3 )
            {
              v11 = qword_140F26DC8;
              v2 = 0;
              if ( qword_140F26DE0 < (unsigned __int64)qword_140F26DC8 )
                v11 = qword_140F26DE0;
              if ( v11 <= v3 )
                v2 = 1;
            }
            else
            {
              v2 = 1;
            }
          }
        }
        else
        {
          KiLastNonHrTimerExpiration = v3;
          v2 = 1;
        }
        goto LABEL_21;
      }
      v16 = (_DWORD *)(v6 + 33552);
      a2 = MEMORY[0xFFFFF78000000008] >> 18;
      v26 = -1;
      v17 = 0;
      v18 = 0LL;
LABEL_41:
      v19 = *v16 + 255;
      if ( (unsigned int)(a2 - *v16) < 0x100 )
        v19 = a2;
      v20 = *v16 - 1;
      while ( 1 )
      {
        v21 = *(_QWORD *)(32 * (v18 + (unsigned __int8)++v20) + v7 + 536);
        if ( v17 != 1 || v10 )
        {
          if ( v3 >= v21 )
          {
            v2 = 1;
LABEL_53:
            if ( !v17 || v10 )
LABEL_54:
              *(_DWORD *)(v7 + 4LL * v17 + 16912) = v20;
            ++v17;
            ++v16;
            v18 += 256LL;
            a2 = v19;
            if ( v17 >= 2 )
            {
              v8 = v29;
              v9 = v28[0];
              v4 = v27;
              goto LABEL_10;
            }
            goto LABEL_41;
          }
        }
        else if ( v3 >= v21 )
        {
          v22 = v26;
          if ( v26 >= v20 )
            v22 = v20;
          v26 = v22;
          if ( v3 + (unsigned int)KePseudoHrTimeIncrement > v21 + (unsigned int)KeNonHrTimeIncrement )
          {
            v2 = 1;
            KiLastNonHrTimerExpiration = v3;
            v10 = 1;
            v20 = v22;
            goto LABEL_54;
          }
        }
        if ( v20 == v19 )
          goto LABEL_53;
      }
    }
  }
LABEL_21:
  if ( !a1[33] )
    goto LABEL_22;
  v12 = qword_140F26DC8;
  v13 = v3 + KeMaximumIncrement;
  if ( qword_140F26DE0 < (unsigned __int64)qword_140F26DC8 )
    v12 = qword_140F26DE0;
  if ( v12 > v3 )
  {
    v14 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v14 = -1LL;
    if ( v14 != v12 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 15;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      if ( v13 > v12 )
        KiSetClockIntervalOneShot(v12, v3);
      else
        KiResetClockIntervalOneShot();
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
LABEL_22:
    if ( !v2 )
      goto LABEL_23;
  }
  if ( (KiSetDpcRequestFlag(a1 + 14524, 8LL) & 0xA9) == 0 )
  {
    if ( a1[32] )
    {
      a1[6] = 1;
    }
    else
    {
      LOBYTE(v24) = 2;
      HalRequestSoftwareInterrupt(v24, v23);
    }
  }
LABEL_23:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    *(_QWORD *)&v30 = v3;
    v25 = 0;
    WORD4(v30) = 0;
    if ( a1[33] )
    {
      v25 = 1;
      WORD4(v30) = 1;
    }
    if ( (a1[14524] & 8) != 0 )
    {
      v25 |= 8u;
      WORD4(v30) = v25;
    }
    if ( v4 <= 1 )
      WORD4(v30) = v25 | 0x10;
    v28[1] = 16LL;
    v28[0] = &v30;
    EtwTraceKernelEvent((unsigned int)v28, 1, 1074003968, 3919, 5245442);
  }
}
