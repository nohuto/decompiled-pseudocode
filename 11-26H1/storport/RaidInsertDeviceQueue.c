/*
 * XREFs of RaidInsertDeviceQueue @ 0x1400234A0
 * Callers:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RiFastInsertDeviceQueue @ 0x140023B9C (RiFastInsertDeviceQueue.c)
 *     RiPeekDeviceQueue @ 0x140023F80 (RiPeekDeviceQueue.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x14005AAB0 (RaUnitCheckForwardIoOutstanding.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x140074034 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidInsertDeviceQueue(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        _QWORD *a6,
        int *a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  _QWORD *v9; // r12
  char v13; // cl
  char v14; // r8
  char v15; // dl
  char v16; // r8
  char v17; // dl
  char v18; // r8
  char v19; // cl
  KIRQL v20; // bl
  int v21; // ecx
  int v22; // r14d
  KIRQL v23; // di
  int v25; // edx
  bool v26; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  int v28; // r8d
  signed __int64 v29; // r14
  signed __int64 v30; // rax
  char v31; // cl
  __int64 v32; // rdi
  char v33; // cl
  char v34; // r8
  signed __int64 v35; // rsi
  __int64 v36; // rax
  signed __int64 v37; // rdx
  signed __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  _QWORD *v43; // rcx
  KIRQL v44; // al
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int16 v48; // cx
  _DWORD *v49; // rcx
  _DWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  _QWORD *v55; // rdx
  KIRQL v56; // [rsp+50h] [rbp-89h] BYREF
  __int64 v57; // [rsp+58h] [rbp-81h]
  int v58; // [rsp+60h] [rbp-79h] BYREF
  int v59; // [rsp+64h] [rbp-75h] BYREF
  int v60; // [rsp+68h] [rbp-71h]
  LARGE_INTEGER v61; // [rsp+70h] [rbp-69h] BYREF
  int *v62; // [rsp+78h] [rbp-61h]
  _DWORD *v63; // [rsp+80h] [rbp-59h]
  _OWORD v64[2]; // [rsp+88h] [rbp-51h] BYREF
  __int128 v65; // [rsp+A8h] [rbp-31h]
  __int64 v66; // [rsp+B8h] [rbp-21h]
  __int128 v67; // [rsp+C0h] [rbp-19h] BYREF

  v8 = a2 + 120;
  v9 = a6;
  v62 = a7;
  v63 = a8;
  v13 = *(_BYTE *)(a2 + 142);
  v57 = (__int64)a6;
  v59 = 0;
  v56 = 0;
  v26 = (a3 & 2) == 0;
  v14 = v13 | 2;
  v67 = 0LL;
  if ( v26 )
    v14 = v13 & 0xFD;
  v61.QuadPart = 0LL;
  v58 = 0;
  v15 = v14 | 4;
  if ( (a3 & 4) == 0 )
    v15 = v14 & 0xFB;
  v16 = v15 | 1;
  if ( (a3 & 1) == 0 )
    v16 = v15 & 0xFE;
  v17 = v16 | 8;
  if ( (a3 & 8) == 0 )
    v17 = v16 & 0xF7;
  v18 = v17 | 0x20;
  if ( (a3 & 0x10) == 0 )
    v18 = v17 & 0xDF;
  v19 = v18 | 0x40;
  if ( (a3 & 0x20) == 0 )
    v19 = v18 & 0xBF;
  *(_BYTE *)(v8 + 22) = v19 ^ (v19 ^ (16 * a5)) & 0x10;
  v20 = KfRaiseIrql(2u);
  v60 = 0;
  if ( byte_140173442 < 0 )
  {
    IoGetActivityIdIrp(a2, &v67);
    v60 = ((*(_BYTE *)(v8 + 22) & 6) != 0) + 1;
  }
  if ( !(unsigned __int8)RiFastInsertDeviceQueue(
                           a1,
                           v8,
                           0,
                           (unsigned int)&v56,
                           (__int64)&v61,
                           (__int64)&v59,
                           (__int64)&v58) )
  {
    if ( StorEtwLoggingEnabled )
    {
      v26 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        PerformanceCounter.QuadPart = 0LL;
LABEL_28:
        v61 = PerformanceCounter;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        LOBYTE(v28) = 1;
        if ( (unsigned __int8)RiFastInsertDeviceQueue(
                                a1,
                                v8,
                                v28,
                                (unsigned int)&v56,
                                (__int64)&v61,
                                (__int64)&v59,
                                (__int64)&v58) )
        {
          v22 = v59;
          v23 = v56;
LABEL_72:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
          goto LABEL_17;
        }
        v29 = *(_QWORD *)(a1 + 88);
        if ( (v29 & 1) == 0 )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 80));
          ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 80));
          do
          {
            v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v29 | 1, v29);
            v26 = v29 == v30;
            v29 = v30;
          }
          while ( !v26 && (v30 & 1) == 0 );
        }
        if ( *(_DWORD *)(a1 + 28) || ((*(__int64 *)(a1 + 88) >> 2) & 0x3FFFFFFF) >= *(_DWORD *)(a1 + 4) )
        {
          v22 = 1;
        }
        else if ( !*(_BYTE *)(a1 + 37) || (*(_BYTE *)(v8 + 22) & 4) != 0 )
        {
          if ( !*(_BYTE *)(a1 + 36) || (*(_BYTE *)(v8 + 22) & 2) != 0 )
          {
            if ( *(int *)(a1 + 24) > 0 )
            {
              v22 = 4;
            }
            else if ( *(_BYTE *)(a1 + 38) )
            {
              v22 = 5;
            }
            else if ( (*(_DWORD *)(a1 + 16) || (unsigned int)(*(_QWORD *)(a1 + 88) / 0x100000000LL))
                   && (v39 = RiPeekDeviceQueue(a1), v8 != v39)
                   && (*(_BYTE *)(v39 + 22) & 1) != 0
                   && (*(_BYTE *)(v8 + 22) & 6) == 0 )
            {
              v22 = 6;
            }
            else
            {
              v31 = *(_BYTE *)(v8 + 22);
              if ( (v31 & 1) != 0 && (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) != 0 )
              {
                v22 = 7;
              }
              else if ( !*(_BYTE *)(a1 + 39) || (v31 & 8) != 0 )
              {
                if ( (v31 & 0x10) != 0 )
                {
                  v22 = 9;
                }
                else if ( (v31 & 0x40) != 0 )
                {
                  v22 = 10;
                }
                else
                {
                  if ( (v31 & 1) == 0 )
                    goto LABEL_48;
                  v32 = a1 - 720;
                  if ( !*(_QWORD *)(a1 - 720 + 32) )
                    goto LABEL_48;
                  v66 = 0LL;
                  memset(v64, 0, sizeof(v64));
                  v65 = 0LL;
                  if ( RaidIsUnitControlSupported(a1 - 720, 31) )
                  {
                    v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v32 + 32) + 24LL));
                    v45 = *(_QWORD *)(v32 + 32);
                    v56 = v44;
                    *(_DWORD *)(v45 + 80) |= 0x100u;
                    v46 = *(_QWORD *)(v32 + 32);
                    if ( (*(_DWORD *)(v46 + 80) & 0x201) == 1 )
                    {
                      *(_DWORD *)(v46 + 80) |= 0x200u;
                      KeSetCoalescableTimer(
                        (PKTIMER)(*(_QWORD *)(v32 + 32) + 88LL),
                        (LARGE_INTEGER)-20000000LL,
                        0,
                        0x12Cu,
                        (PKDPC)(*(_QWORD *)(v32 + 32) + 152LL));
                    }
                    LODWORD(v64[0]) = 56;
                    *(_QWORD *)((char *)v64 + 4) = 0x200000038LL;
                    if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline() )
                    {
                      v47 = *(_QWORD *)(v32 + 24);
                      WORD4(v65) = 1;
                      HIDWORD(v65) = 4;
                      v48 = *(_WORD *)(v47 + 56);
                      LOWORD(v66) = *(_WORD *)(v32 + 104);
                      BYTE2(v66) = *(_BYTE *)(v32 + 106);
                      WORD5(v65) = v48;
                    }
                    v49 = *(_DWORD **)(v32 + 24);
                    if ( *v49 == 1094997074 )
                    {
                      v50 = v49 + 94;
                    }
                    else if ( *v49 == 1314275652 )
                    {
                      v50 = v49 + 42;
                    }
                    else
                    {
                      v50 = 0LL;
                    }
                    RaCallMiniportUnitControl(v50, 31LL, v64);
                    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v32 + 32) + 24LL), v56);
                  }
                  *(_BYTE *)(v8 + 20) |= 4u;
                  if ( !(unsigned __int8)RaUnitCheckForwardIoOutstanding(a1 - 720) )
                  {
LABEL_48:
                    v22 = 0;
                    v23 = 0;
                    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 4uLL);
                    v33 = 0;
                    if ( (*(_BYTE *)(a2 + 142) & 1) != 0 )
                      *(_BYTE *)(a1 + 38) = 1;
LABEL_50:
                    *(_BYTE *)(v8 + 20) = v33 | *(_BYTE *)(v8 + 20) & 0xFE;
                    v34 = 0;
                    v35 = *(_QWORD *)(a1 + 88);
                    while ( (v35 & 3) != 0
                         && !*(_DWORD *)(a1 + 28)
                         && !*(_DWORD *)(a1 + 16)
                         && !*(_DWORD *)(a1 + 32)
                         && !*(_BYTE *)(a1 + 37)
                         && !*(_BYTE *)(a1 + 39)
                         && !*(_BYTE *)(a1 + 36)
                         && *(int *)(a1 + 24) <= 0
                         && !*(_BYTE *)(a1 + 38) )
                    {
                      v36 = v35;
                      if ( (v35 & 1) != 0 )
                      {
                        if ( !v34 )
                        {
                          ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
                          v34 = 1;
                        }
                        v36 = v35 ^ 1;
                      }
                      v37 = v36 ^ 2;
                      if ( (v35 & 2) == 0 )
                        v37 = v36;
                      v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v37, v35);
                      v26 = v35 == v38;
                      v35 = v38;
                      if ( v26 )
                      {
                        if ( *(_BYTE *)(a1 + 37) || *(_BYTE *)(a1 + 39) || *(_BYTE *)(a1 + 36) || *(int *)(a1 + 24) > 0 )
                        {
                          v41 = *(_QWORD *)(a1 + 88);
                          if ( (v41 & 3) == 0 )
                          {
                            do
                            {
                              v42 = v41;
                              v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v41 | 2, v41);
                            }
                            while ( v42 != v41 && (v41 & 3) == 0 );
                          }
                        }
                        break;
                      }
                    }
                    v9 = (_QWORD *)v57;
                    goto LABEL_72;
                  }
                  v22 = 7;
                }
              }
              else
              {
                v22 = 8;
              }
            }
          }
          else
          {
            v22 = 3;
          }
        }
        else
        {
          v22 = 2;
        }
        if ( (*(_BYTE *)(a2 + 142) & 6) != 0 )
        {
          v43 = *(_QWORD **)(a1 + 152);
          if ( *v43 != a1 + 144 )
            goto LABEL_98;
          *(_QWORD *)v8 = a1 + 144;
          *(_QWORD *)(v8 + 8) = v43;
          *v43 = v8;
          *(_QWORD *)(a1 + 152) = v8;
          ++*(_DWORD *)(a1 + 16);
        }
        else
        {
          _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 0x100000000uLL);
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), (PSLIST_ENTRY)((v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL));
          *(_BYTE *)(v8 + 20) |= 2u;
          if ( *(_BYTE *)(v8 + 22) )
            ++*(_DWORD *)(a1 + 32);
          v40 = *(_QWORD *)(a1 + 88) / 0x100000000LL;
          if ( (int)v40 > *(_DWORD *)(a1 + 180) )
            *(_DWORD *)(a1 + 180) = v40;
        }
        if ( (*(_BYTE *)(v8 + 22) & 8) != 0 )
          ++*(_DWORD *)(a1 + 20);
        if ( (*(_BYTE *)(v8 + 22) & 0x20) == 0 )
          goto LABEL_87;
        v51 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
        v52 = 96LL;
        if ( *(_BYTE *)(v51 + 2) != 40 )
          v52 = 48LL;
        v53 = *(_QWORD *)(v52 + v51);
        v54 = *(_QWORD **)(a1 + 168);
        v55 = (_QWORD *)(v53 + 24);
        if ( *v54 == a1 + 160 )
        {
          *v55 = a1 + 160;
          v55[1] = v54;
          *v54 = v55;
          *(_QWORD *)(a1 + 168) = v55;
LABEL_87:
          v23 = 1;
          v33 = 1;
          v58 = *(_QWORD *)(a1 + 88) / 0x100000000LL;
          goto LABEL_50;
        }
LABEL_98:
        __fastfail(3u);
      }
      if ( !UseQPCTime )
      {
LABEL_27:
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        goto LABEL_28;
      }
      v26 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v26 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  v22 = v59;
  v23 = v56;
LABEL_17:
  if ( v23 )
  {
    v25 = v58;
    *v9 = v61.QuadPart;
    *v62 = v22;
    *v63 = v25;
    if ( byte_140173442 < 0 )
      McTemplateK0pquuqqd_EtwWriteTransfer(
        v21,
        *(_DWORD *)(a1 + 16) + v25,
        (unsigned int)&v67,
        a1,
        v60,
        3,
        v22,
        *(_BYTE *)(a1 + 16) + v25,
        (__int64)*(unsigned int *)(a1 + 88) >> 2);
  }
  KeLowerIrql(v20);
  return v23;
}
