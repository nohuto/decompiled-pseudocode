/*
 * XREFs of KiSetUserAffinityThread @ 0x14022C114
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x14025BD0C (KiSetLegacyAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1402F56D4 (KeSetUserGroupAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KiReselectIdealProcessorAfterAffinityChange @ 0x14022B2E0 (KiReselectIdealProcessorAfterAffinityChange.c)
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14022BCC0 (KiUpdateNodeAffinitizedFlag.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 */

__int64 __fastcall KiSetUserAffinityThread(__int64 a1, __int64 a2, unsigned __int16 *a3, char a4)
{
  char v4; // r13
  unsigned __int16 *v5; // rdi
  __int64 v7; // rdx
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // ax
  bool v10; // cc
  unsigned __int16 v11; // cx
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int16 i; // cx
  __int64 v18; // rdx
  unsigned __int16 v19; // ax
  struct _KPRCB *CurrentPrcb; // r15
  __int64 result; // rax
  char v22; // r14
  unsigned int v23; // eax
  unsigned __int16 v24; // cx
  unsigned int v25; // r15d
  __int64 v26; // r8
  unsigned __int16 v27; // dx
  unsigned __int16 v28; // r9
  unsigned __int16 v29; // cx
  __int64 v30; // r10
  _QWORD *v31; // rdx
  char *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // edx
  _WORD *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // edi
  int v40; // r8d
  unsigned int v41; // [rsp+30h] [rbp-39h]
  unsigned int v42; // [rsp+38h] [rbp-31h]
  __int128 v43; // [rsp+40h] [rbp-29h] BYREF
  _OWORD v44[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v45; // [rsp+70h] [rbp+7h]
  __int64 v46; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v47; // [rsp+D8h] [rbp+6Fh]
  unsigned int v48; // [rsp+E0h] [rbp+77h]
  char v49; // [rsp+E8h] [rbp+7Fh]

  v49 = a4;
  v47 = a2;
  v43 = 0LL;
  v4 = 0;
  LODWORD(v46) = 0;
  v5 = a3;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v46);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(_QWORD *)(a1 + 552);
  v41 = *(_DWORD *)(a1 + 588);
  v48 = v41;
  v8 = *(_WORD *)(v7 + 2);
  v42 = *(_DWORD *)(a1 + 196);
  LODWORD(v46) = v42;
  v9 = *v5;
  v10 = *v5 <= v8;
  *(_WORD *)(v7 + 2) = v8;
  *(_DWORD *)(v7 + 4) = 0;
  v11 = 0;
  if ( v10 )
    v8 = v9;
  *(_WORD *)v7 = v8;
  if ( v8 )
  {
    v12 = v8;
    v11 = v8;
    a3 = (unsigned __int16 *)(v7 + 8);
    do
    {
      *(_QWORD *)a3 = *(_QWORD *)((char *)a3 + (_QWORD)v5 - v7);
      a3 += 4;
      --v12;
    }
    while ( v12 );
  }
  while ( v11 < *(_WORD *)(v7 + 2) )
  {
    v13 = v11++;
    *(_QWORD *)(v7 + 8 * v13 + 8) = 0LL;
  }
  v14 = *(unsigned int *)(a1 + 196);
  v15 = KiProcessorBlock[v14];
  v16 = *(unsigned __int8 *)(v15 + 208);
  if ( (unsigned __int16)v16 >= *v5 || ((*(_QWORD *)&v5[4 * v16 + 4] >> *(_BYTE *)(v15 + 209)) & 1) == 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0);
    for ( i = 0; i < *v5; ++i )
    {
      v18 = *(_QWORD *)&v5[4 * i + 4];
      if ( v18 )
      {
        WORD4(v43) = i;
        *(_QWORD *)&v43 = v18;
        break;
      }
    }
    LOWORD(v46) = *(unsigned __int8 *)(v15 + 209);
    v19 = KiReselectIdealProcessorAfterAffinityChange(a1, (__int64 *)&v43, v15, &v46);
    LODWORD(a3) = v19;
    *(_DWORD *)(a1 + 196) = v19;
    LODWORD(v14) = v19;
    v46 = v19;
    v15 = KiProcessorBlock[v19];
    *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v15 + 208);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( *(_QWORD *)(a1 + 240) && (*(_DWORD *)(a1 + 116) & 0x4000) != 0 && !*(_BYTE *)(a1 + 1906) )
  {
    *(_BYTE *)(a1 + 1906) = 1;
    KiInsertQueueApc(a1 + 1824);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1 + 1824, v49, 1);
  }
  result = *(unsigned int *)(a1 + 116);
  if ( (result & 8) != 0 )
  {
    v39 = v48;
    v22 = 1;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    v45 = 0LL;
    v22 = 0;
    memset(v44, 0, sizeof(v44));
    v23 = KiAcquireThreadStateLockForWrite(a1, v44);
    v24 = *v5;
    v25 = v23;
    v26 = *(_QWORD *)(a1 + 576);
    v27 = *(_WORD *)(v26 + 2);
    *(_WORD *)(v26 + 2) = v27;
    v28 = v27;
    *(_DWORD *)(v26 + 4) = 0;
    if ( v24 <= v27 )
      v28 = v24;
    v29 = 0;
    *(_WORD *)v26 = v28;
    if ( v28 )
    {
      v30 = v28;
      v31 = (_QWORD *)(v26 + 8);
      v29 = v28;
      v32 = (char *)v5 - v26;
      do
      {
        *v31 = *(_QWORD *)((char *)v31 + (_QWORD)v32);
        ++v31;
        --v30;
      }
      while ( v30 );
    }
    while ( v29 < *(_WORD *)(v26 + 2) )
    {
      v33 = v29++;
      *(_QWORD *)(v26 + 8 * v33 + 8) = 0LL;
    }
    if ( !(unsigned int)KiComputeThreadAffinity(a1) )
    {
      *(_DWORD *)(a1 + 588) = v14;
      *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v15 + 208);
      KiUpdateNodeAffinitizedFlag(a1);
      v34 = *(_QWORD *)(v15 + 36480);
      v35 = 0;
      if ( v34 )
      {
        v36 = *(_WORD **)(a1 + 576);
        v37 = *(unsigned __int8 *)(v15 + 208);
        if ( (unsigned __int16)v37 >= *v36 )
          v38 = 0LL;
        else
          v38 = *(_QWORD *)&v36[4 * v37 + 4];
        LOBYTE(v35) = (v34 & v38) == v34;
      }
      if ( v35 != ((*(_DWORD *)(a1 + 120) >> 13) & 1) )
        _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
    }
    v39 = *(_DWORD *)(a1 + 588);
    result = KiRescheduleThreadAfterAffinityChange(a1, v25, v44, v47);
    v4 = 1;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
  {
    LOBYTE(a3) = v22;
    result = EtwTraceThreadAffinity(a1, *(unsigned __int16 *)(a1 + 560), (_DWORD)a3, 0, *(_QWORD *)(a1 + 552), 1335);
    if ( v4 )
    {
      LOBYTE(v40) = v22;
      result = EtwTraceThreadAffinity(a1, *(unsigned __int16 *)(a1 + 584), v40, 0, *(_QWORD *)(a1 + 576), 1334);
    }
  }
  if ( _bittest((const signed __int32 *)&xmmword_140FC0C10, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1350LL, v41, v39);
  if ( _bittest((const signed __int32 *)&xmmword_140FC0C10, 0x1Bu) )
    return EtwTraceIdealProcessor(a1, 1351LL, v42, (unsigned int)v46);
  return result;
}
