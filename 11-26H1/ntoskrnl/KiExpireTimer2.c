/*
 * XREFs of KiExpireTimer2 @ 0x140338F88
 * Callers:
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     EtwTraceTimedEvent @ 0x14032D7A0 (EtwTraceTimedEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     KiDpcTimerCallbackEpilogue @ 0x140339500 (KiDpcTimerCallbackEpilogue.c)
 *     KiInsertTimer2 @ 0x1403397B0 (KiInsertTimer2.c)
 *     KiUpdateTimer2Flags @ 0x1403B4220 (KiUpdateTimer2Flags.c)
 *     KiFinalizeTimer2Disablement @ 0x1403B42B8 (KiFinalizeTimer2Disablement.c)
 *     PsTimerResolutionActive @ 0x14044E890 (PsTimerResolutionActive.c)
 *     KiTimer2ComputeDueTime @ 0x140472380 (KiTimer2ComputeDueTime.c)
 *     KiUpdateTimer2Collections @ 0x1404B9030 (KiUpdateTimer2Collections.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiExpireTimer2(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r14
  LARGE_INTEGER v6; // r10
  unsigned int v9; // r12d
  char v10; // cl
  unsigned __int64 v11; // r11
  char v12; // bl
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rsi
  _QWORD *v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  char v21; // cl
  int v22; // eax
  unsigned __int64 v23; // rsi
  signed __int32 v24; // ecx
  signed __int32 v25; // edx
  unsigned int v26; // r12d
  signed __int32 i; // eax
  unsigned int v28; // edx
  char v29; // r12
  __int64 result; // rax
  __int64 v31; // rax
  char v32; // cl
  __int64 v33; // r8
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rbx
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  LARGE_INTEGER InterruptTimePrecise; // rax
  _QWORD *v44; // r8
  _QWORD *v45; // rdx
  _QWORD *v46; // rcx
  char v47; // al
  char v48; // al
  char v49; // al
  unsigned __int8 v50; // cl
  __int64 v51; // r8
  char v52; // cl
  char v53; // dl
  char v54; // cl
  char v55; // [rsp+30h] [rbp-59h]
  char v56; // [rsp+31h] [rbp-58h]
  _BYTE v57[6]; // [rsp+32h] [rbp-57h] BYREF
  __int64 v58; // [rsp+38h] [rbp-51h] BYREF
  __int64 v59; // [rsp+40h] [rbp-49h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-41h] BYREF
  __int128 v61; // [rsp+50h] [rbp-39h] BYREF
  __int128 v62; // [rsp+60h] [rbp-29h]
  __int128 v63; // [rsp+70h] [rbp-19h]
  __int64 v64; // [rsp+80h] [rbp-9h]
  _OWORD v65[2]; // [rsp+88h] [rbp-1h] BYREF

  v4 = 0LL;
  v58 = 0LL;
  v64 = 0LL;
  v6.QuadPart = a3;
  v59 = *(_QWORD *)(a2 + 8);
  v57[0] = 0;
  v61 = 0LL;
  v9 = 0;
  v56 = 0;
  v62 = 0LL;
  v63 = 0LL;
  memset(v65, 0, sizeof(v65));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v61 = *(_OWORD *)(a1 + 72);
    *(_QWORD *)&v62 = *(_QWORD *)(a1 + 88);
    v56 = *(_BYTE *)(a1 + 129);
    v55 = 1;
  }
  else
  {
    v55 = 0;
  }
  if ( !*(_QWORD *)(a1 + 88) || (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    goto LABEL_21;
  v10 = *(_BYTE *)(a1 + 129);
  if ( (v10 & 4) != 0 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v10 = *(_BYTE *)(a1 + 129);
    v6 = InterruptTimePrecise;
  }
  v11 = v6.QuadPart + *(_QWORD *)(a1 + 88);
  if ( v11 < v6.QuadPart || v11 == -1LL )
  {
    v11 = -2LL;
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( (v10 & 0x2E) == 0 )
  {
    if ( KiGlobalTimerResolutionRequests )
    {
      if ( (v10 & 0x10) != 0 )
        goto LABEL_11;
      *(_BYTE *)(a1 + 129) = v10 | 0x10;
    }
    else
    {
      v44 = (_QWORD *)(a1 + 8);
      v45 = *(_QWORD **)(a1 + 8);
      while ( v45 != v44 )
      {
        v46 = v45;
        v45 = (_QWORD *)*v45;
        if ( *((_BYTE *)v46 + 16) <= 1u && (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(v46[3] + 544LL)) )
        {
          v47 = *(_BYTE *)(a1 + 129);
          if ( (v47 & 0x10) != 0 )
            goto LABEL_11;
          v48 = v47 | 0x10;
          goto LABEL_86;
        }
      }
      v49 = *(_BYTE *)(a1 + 129);
      if ( (v49 & 0x10) == 0 )
        goto LABEL_11;
      v48 = v49 & 0xEF;
LABEL_86:
      *(_BYTE *)(a1 + 129) = v48;
    }
    KiUpdateTimer2Collections(a1);
  }
LABEL_11:
  v13 = *(_QWORD *)(a1 + 80);
  if ( v13 != -1 )
  {
    v14 = v13 - *(_QWORD *)(a1 + 72);
    if ( v14 )
    {
      v15 = v14 + v6.QuadPart;
      if ( (unsigned __int64)(v14 + v6.QuadPart) < v6.QuadPart || v15 == -1LL )
        v15 = -2LL;
      v16 = v15 + *(_QWORD *)(a1 + 88);
      if ( v16 < v15 || v16 == -1LL )
        v16 = -2LL;
    }
    else
    {
      v16 = v11;
    }
    *(_QWORD *)(a1 + 80) = v16;
  }
  *(_QWORD *)(a1 + 72) = v11;
  while ( !(unsigned __int8)KiInsertTimer2(a1, 0LL, v57) )
  {
    if ( v12 )
      goto LABEL_21;
    v34 = *(_QWORD *)(a1 + 72);
    v35 = *(_QWORD *)(a1 + 88);
    v36 = v35 + v34;
    if ( v35 + v34 < v34 || v36 == -1 )
    {
      v12 = 1;
      v36 = -2LL;
    }
    else
    {
      v12 = 0;
    }
    *(_QWORD *)(a1 + 72) = v36;
    v37 = *(_QWORD *)(a1 + 80);
    if ( v37 != -1 )
      *(_QWORD *)(a1 + 80) = KiTimer2ComputeDueTime(v37, v35, 0LL);
  }
  v9 = 1;
LABEL_21:
  *(_DWORD *)(a1 + 4) = 1;
  v17 = (_QWORD *)(a1 + 8);
  v18 = *(_QWORD **)(a1 + 8);
  if ( (*(_BYTE *)a1 & 0x7F) == 0x19 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v18 == v17 )
          goto LABEL_28;
        v19 = (__int64)v18;
        v18 = (_QWORD *)*v18;
        if ( v18[1] != v19 || (v20 = *(_QWORD **)(v19 + 8), *v20 != v19) )
          __fastfail(3u);
        *v20 = v18;
        v18[1] = v20;
        v21 = *(_BYTE *)(v19 + 16);
        if ( v21 != 1 )
          break;
        if ( KiTryUnwaitThread(a2, v19, *(unsigned __int16 *)(v19 + 18), 0LL) )
        {
LABEL_27:
          v22 = *(_DWORD *)(a1 + 4) - 1;
          *(_DWORD *)(a1 + 4) = v22;
          if ( !v22 )
            goto LABEL_28;
        }
      }
      if ( v21 == 2 )
      {
        *(_BYTE *)(v19 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v19 + 24), (_QWORD *)v19, a3);
        goto LABEL_27;
      }
      if ( v21 == 4 )
      {
        *(_BYTE *)(v19 + 17) = 5;
        *(_DWORD *)(a1 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v19 + 24), a1, v19, 0LL, 0);
      }
      else
      {
        KiTryUnwaitThread(a2, v19, 256LL, 0LL);
      }
    }
  }
  while ( v18 != v17 )
  {
    v31 = (__int64)v18;
    v18 = (_QWORD *)*v18;
    v32 = *(_BYTE *)(v31 + 16);
    switch ( v32 )
    {
      case 1:
        v33 = *(unsigned __int16 *)(v31 + 18);
        goto LABEL_52;
      case 2:
        *(_BYTE *)(v31 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v31 + 24), (_QWORD *)v31, a3);
        break;
      case 4:
        *(_BYTE *)(v31 + 17) = 5;
        *(_DWORD *)(a1 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v31 + 24), a1, v31, 0LL, 0);
        break;
      default:
        v33 = 256LL;
LABEL_52:
        KiTryUnwaitThread(a2, v31, v33, 0LL);
        break;
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
LABEL_28:
  v23 = (unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(__ROL8__(
                                                                                               KiWaitNever ^ *(_QWORD *)(a1 + 96),
                                                                                               KiWaitNever) ^ a1);
  if ( v23 )
    v9 |= 0x10u;
  LODWORD(v58) = *(_DWORD *)(v59 + 484);
  BYTE4(v58) = *(_BYTE *)(v59 + 562);
  if ( v23 )
  {
    v4 = (unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(__ROL8__(
                                                                                                KiWaitNever ^ *(_QWORD *)(a1 + 104),
                                                                                                KiWaitNever) ^ a1);
    KiUpdateTimer2Flags(a1, v9, 0LL);
    if ( *(_QWORD *)(a2 + 11528) )
      KiProcessThreadWaitList((struct _SINGLE_LIST_ENTRY *)a2, 1LL, 0LL, 2);
    v29 = v55;
    if ( v55 )
      EtwGetKernelTraceTimestamp((unsigned __int64)v65, 0x40020000uLL, v38);
    v39 = (*a4)++ & 0xF;
    v40 = 3 * v39;
    *(_QWORD *)&a4[2 * v40 + 4] = v23;
    *(_QWORD *)&a4[2 * v40 + 6] = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)&a4[2 * v40 + 8] = 0LL;
    *(_DWORD *)(a2 + 34396) = 0;
    *(_BYTE *)(a2 + 14522) = 1;
    guard_dispatch_icall_no_overrides(a1, v4, v38);
    *(_BYTE *)(a2 + 14522) = 0;
    *(_QWORD *)&a4[2 * v40 + 8] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)a1);
    v41 = *(_DWORD *)a1;
    do
    {
      v42 = v41;
      v41 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v41 & 0xFFFFEFFF, v41);
    }
    while ( v42 != v41 );
    if ( (v41 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
  }
  else
  {
    v24 = *(_DWORD *)a1;
    v25 = *(_DWORD *)a1;
    v26 = v9 << 8;
    for ( i = *(_DWORD *)a1; ; v25 = i )
    {
      v28 = v26 | v25 & 0xFFFFF07F;
      i = _InterlockedCompareExchange((volatile signed __int32 *)a1, v28, i);
      if ( v24 == i )
        break;
      v24 = i;
    }
    if ( (v28 & 0x3F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
    v29 = v55;
  }
  result = KiDpcTimerCallbackEpilogue(&v58, v59, v23, 5LL);
  if ( v29 )
  {
    *(_QWORD *)&v63 = v23;
    *((_QWORD *)&v62 + 1) = 0x7E35C6C7F3DD7277LL
                          * (KiWaitNever ^ __ROR8__(
                                             v23 ^ _byteswap_uint64((__int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ a1),
                                             KiWaitNever));
    *((_QWORD *)&v63 + 1) = 0x7E35C6C7F3DD7277LL
                          * (KiWaitNever ^ __ROR8__(
                                             a1 ^ _byteswap_uint64((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ v4),
                                             KiWaitNever));
    v50 = (2 * (v56 & 0x20)) | 4;
    if ( (v56 & 2) == 0 )
      v50 = 2 * (v56 & 0x20);
    v51 = v50;
    v52 = v50 | 8;
    if ( (v56 & 4) == 0 )
      v52 = v51;
    v53 = v52;
    v54 = v52 | 0x10;
    if ( (v56 & 8) == 0 )
      v54 = v53;
    LOBYTE(v64) = v54;
    if ( v23 )
    {
      v54 |= 1u;
      LOBYTE(v64) = v54;
    }
    if ( (_QWORD)v62 )
      LOBYTE(v64) = v54 | 2;
    if ( !v23 )
      EtwGetKernelTraceTimestamp((unsigned __int64)v65, 0x40020000uLL, v51);
    return EtwTraceTimedEvent(3945, 0x40020000u, (__int64)&v61, 56, 5246466, (__int64)v65);
  }
  return result;
}
