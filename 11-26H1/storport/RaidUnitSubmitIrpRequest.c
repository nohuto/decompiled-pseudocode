/*
 * XREFs of RaidUnitSubmitIrpRequest @ 0x140021420
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaUnitIoIrp @ 0x140021230 (RaUnitIoIrp.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     RaAcquirePowerRefWorkRoutine @ 0x14004CC60 (RaAcquirePowerRefWorkRoutine.c)
 * Callees:
 *     StorEtwIORequestDispatch @ 0x1400036E4 (StorEtwIORequestDispatch.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaUnitFillIrpData @ 0x140021950 (RaUnitFillIrpData.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaUnitAttributedIoQueued @ 0x140099748 (RaUnitAttributedIoQueued.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidUnitSubmitIrpRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // r14
  __int64 v8; // rax
  bool v9; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  ULONG64 v11; // rax
  unsigned __int8 *v12; // rcx
  unsigned int v13; // r8d
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  void (__fastcall *v17)(__int64, _QWORD, _QWORD); // rax
  _DWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, __int64, _QWORD *); // rax
  unsigned int v22; // ecx
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  void (__fastcall *v26)(__int64, _QWORD, __int64); // rax
  _DWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64, __int64, _QWORD *); // rax
  int v31; // esi
  int v32; // esi
  int v33; // r15d
  int v34; // esi
  KIRQL v35; // al
  __int64 v36; // rdx
  KIRQL v37; // r12
  int v38; // eax
  __int64 v39; // rcx
  __int64 *v40; // rdi
  __int64 v41; // rax
  __int64 **v42; // rcx
  unsigned __int64 QpcTimeStamp; // [rsp+40h] [rbp-69h] BYREF
  __int64 v44; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v46; // [rsp+60h] [rbp-49h]
  __int128 v47; // [rsp+70h] [rbp-39h]
  __int128 v48; // [rsp+80h] [rbp-29h]
  __int128 v49; // [rsp+90h] [rbp-19h] BYREF
  int v50; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v51; // [rsp+A4h] [rbp-5h]
  int v52; // [rsp+B4h] [rbp+Bh]
  ULONG64 v53; // [rsp+B8h] [rbp+Fh]

  v4 = *(_DWORD *)(a2 + 48);
  v5 = *(_QWORD *)(a2 + 184);
  v45[1] = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  QpcTimeStamp = 0LL;
  v44 = 0LL;
  v49 = 0LL;
  if ( v4 >= 0 || (_BYTE)a3 )
  {
LABEL_2:
    DWORD1(v49) = 4;
    v45[0] = &v49;
    LOWORD(v49) = 1;
    RaUnitFillIrpData(a2, v45, a3, a4);
    v8 = *((_QWORD *)&v46 + 1);
    **((_OWORD **)&v46 + 1) = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    if ( *(_QWORD *)(a2 + 56) )
      goto LABEL_16;
    if ( (int)IoGetIoAttributionHandle(a2, &v44) >= 0 )
    {
      v11 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      v12 = *(unsigned __int8 **)(a2 + 184);
      v51 = 0LL;
      QpcTimeStamp = v11;
      v52 = 0;
      v50 = 1;
      v13 = *v12 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFF00 | 0x100;
      v53 = v11;
      LODWORD(v51) = v13;
      IoRecordIoAttribution(v44, &v50);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 32) + 12LL));
      PerformanceCounter.QuadPart = QpcTimeStamp;
LABEL_13:
      *(_DWORD *)(a2 + 168) = PerformanceCounter.LowPart;
      v9 = StorEtwLoggingEnabled == 0;
      *(_DWORD *)(a2 + 172) = PerformanceCounter.HighPart;
      if ( !v9
        && ((byte_140173441 & 8) != 0
         || (byte_140173441 & 0x10) != 0
         || (byte_140173441 & 2) != 0
         || (byte_140173441 & 4) != 0)
        && (*(_BYTE *)v5 == 3 || *(_BYTE *)v5 == 4) )
      {
        StorEtwIORequestDispatch(a2);
      }
      if ( (qword_140172448 & 0x2000) != 0 )
        DbgLogRequest(
          *(_QWORD *)(a1 + 24),
          49,
          a2,
          (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
          0LL,
          0LL,
          QpcTimeStamp);
LABEL_16:
      if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2232));
        v22 = -1073740534;
        goto LABEL_50;
      }
      if ( RaidIsUnitControlSupported(a1, 30) )
      {
        if ( *(_BYTE *)v5 == 3 )
        {
          v23 = (__int64 *)(*(_QWORD *)(a1 + 24) + 896LL);
          if ( *(_QWORD *)(a2 + 8) )
          {
            if ( *(_QWORD *)(a1 + 24) != -896LL )
            {
              v24 = *v23;
              if ( *v23 )
              {
                v25 = *(_QWORD *)(v24 + 8);
                if ( v25 )
                {
                  if ( *(int *)(*(_QWORD *)(a1 + 24) + 924LL) >= 3
                    && (v26 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v25 + 240)) != 0LL )
                  {
                    v26(v24, *(_QWORD *)(a2 + 8), 1LL);
                  }
                  else
                  {
                    KeFlushIoBuffers(*(_QWORD *)(a2 + 8), 1LL, 1LL);
                  }
                }
              }
            }
          }
          v27 = *(_DWORD **)(a1 + 24);
          if ( *v27 == 1094997074 )
          {
            v28 = (__int64)(v27 + 154);
            v29 = (__int64)(v27 + 152);
          }
          else if ( *v27 == 1314275652 )
          {
            v28 = (__int64)(v27 + 102);
            v29 = (__int64)(v27 + 100);
          }
          else
          {
            v28 = 240LL;
            v29 = 232LL;
          }
          v30 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v29 + 200LL);
          if ( !v30 )
            goto LABEL_48;
          v31 = v30(*(_QWORD *)v28 + 16LL, 30LL, v45);
          if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( !v31 )
              goto LABEL_53;
            v32 = v31 - 1;
            if ( v32 )
            {
              if ( v32 != 1 )
              {
LABEL_91:
                v22 = -1073741595;
                goto LABEL_31;
              }
LABEL_48:
              v22 = -1073741637;
              goto LABEL_31;
            }
LABEL_92:
            v22 = -1073741823;
LABEL_31:
            if ( !v22 )
              return;
LABEL_50:
            *(_DWORD *)(a2 + 48) = v22;
            *(_QWORD *)(a2 + 56) = 0LL;
            RaidUnitCompleteIrpRequest((PIRP)a2);
            return;
          }
LABEL_59:
          v22 = v31 != 0 ? 0xC0000001 : 0;
          goto LABEL_31;
        }
        if ( *(_BYTE *)v5 == 4 )
        {
          v14 = (__int64 *)(*(_QWORD *)(a1 + 24) + 896LL);
          if ( *(_QWORD *)(a2 + 8) )
          {
            if ( *(_QWORD *)(a1 + 24) != -896LL )
            {
              v15 = *v14;
              if ( *v14 )
              {
                v16 = *(_QWORD *)(v15 + 8);
                if ( v16 )
                {
                  if ( *(int *)(*(_QWORD *)(a1 + 24) + 924LL) >= 3
                    && (v17 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v16 + 240)) != 0LL )
                  {
                    v17(v15, *(_QWORD *)(a2 + 8), 0LL);
                  }
                  else
                  {
                    KeFlushIoBuffers(*(_QWORD *)(a2 + 8), 0LL, 1LL);
                  }
                }
              }
            }
          }
          v18 = *(_DWORD **)(a1 + 24);
          if ( *v18 == 1094997074 )
          {
            v19 = (__int64)(v18 + 154);
            v20 = (__int64)(v18 + 152);
          }
          else if ( *v18 == 1314275652 )
          {
            v19 = (__int64)(v18 + 102);
            v20 = (__int64)(v18 + 100);
          }
          else
          {
            v19 = 240LL;
            v20 = 232LL;
          }
          v21 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v20 + 200LL);
          if ( !v21 )
          {
            v22 = -1073741637;
            goto LABEL_31;
          }
          v31 = v21(*(_QWORD *)v19 + 16LL, 30LL, v45);
          if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( !v31 )
            {
LABEL_53:
              v22 = 0;
              goto LABEL_31;
            }
            v34 = v31 - 1;
            if ( v34 )
            {
              if ( v34 != 1 )
                goto LABEL_91;
              goto LABEL_48;
            }
            goto LABEL_92;
          }
          goto LABEL_59;
        }
      }
      v22 = -1073741637;
      goto LABEL_50;
    }
    if ( StorEtwLoggingEnabled )
    {
      v9 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        PerformanceCounter.QuadPart = 0LL;
        goto LABEL_12;
      }
      if ( !UseQPCTime )
        goto LABEL_11;
      v9 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v9 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_12:
      QpcTimeStamp = PerformanceCounter.QuadPart;
      goto LABEL_13;
    }
LABEL_11:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_12;
  }
  v33 = 0;
  if ( *(_BYTE *)v5 == 3 || *(_BYTE *)v5 == 4 )
    v33 = *(_DWORD *)(v5 + 8);
  v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
  v36 = *(_QWORD *)(a1 + 32);
  v37 = v35;
  if ( *(_QWORD *)(v36 + 48) == v36 + 48 )
  {
    v38 = *(_DWORD *)(v36 + 4);
    if ( v38 < 8 && *(int *)(v36 + 8) < 0x40000 )
    {
      *(_DWORD *)(v36 + 4) = v38 + 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) += v33;
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v37);
      goto LABEL_2;
    }
  }
  if ( (int)IoGetIoAttributionHandle(a2, &v44) >= 0 )
    RaUnitAttributedIoQueued(v39, a2, v44);
  v40 = (__int64 *)(a2 + 168);
  v41 = *(_QWORD *)(a1 + 32) + 48LL;
  v42 = *(__int64 ***)(*(_QWORD *)(a1 + 32) + 56LL);
  if ( *v42 != (__int64 *)v41 )
    __fastfail(3u);
  v40[1] = (__int64)v42;
  *v40 = v41;
  *v42 = v40;
  *(_QWORD *)(v41 + 8) = v40;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v37);
}
