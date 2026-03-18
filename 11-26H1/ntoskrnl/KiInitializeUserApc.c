/*
 * XREFs of KiInitializeUserApc @ 0x140446248
 * Callers:
 *     KiDeliverApc @ 0x1402439F0 (KiDeliverApc.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D2F80 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x1403D46B0 (KeContextFromKframes.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D6D60 (RtlGetExtendedContextLength2.c)
 *     RtlpCopyExtendedContext @ 0x140417400 (RtlpCopyExtendedContext.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     KiSetupForInstrumentationReturn @ 0x140488168 (KiSetupForInstrumentationReturn.c)
 *     KePopulateContinuationContext @ 0x1404B6B70 (KePopulateContinuationContext.c)
 *     KeCopyExceptionRecord @ 0x1404E5F9C (KeCopyExceptionRecord.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v9; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v11; // rbx
  char *v12; // r14
  int v13; // eax
  unsigned int v14; // r15d
  int v15; // edx
  unsigned __int64 v16; // rbx
  int MiscFlags; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // r13d
  unsigned __int64 v21; // rax
  void *v22; // rsp
  void *v23; // rdx
  void *v24; // rsi
  __int64 v25; // r12
  __int64 v26; // rdx
  unsigned __int64 v27; // r13
  unsigned int *v28; // r12
  unsigned __int64 result; // rax
  _QWORD *v30; // r8
  const char *v31; // rax
  int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // [rsp+30h] [rbp+0h] BYREF
  __int128 *v37; // [rsp+38h] [rbp+8h] BYREF
  __int64 v38; // [rsp+40h] [rbp+10h]
  int v39; // [rsp+4Ch] [rbp+1Ch]
  __int64 v40; // [rsp+58h] [rbp+28h]
  _QWORD v41[2]; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp+48h]
  unsigned int *v43; // [rsp+80h] [rbp+50h]
  __int64 v44; // [rsp+88h] [rbp+58h]
  __int64 v45; // [rsp+90h] [rbp+60h]
  __int64 v46; // [rsp+98h] [rbp+68h]
  int v47[4]; // [rsp+B0h] [rbp+80h] BYREF
  __int128 Src; // [rsp+150h] [rbp+120h] BYREF
  __int128 v49; // [rsp+160h] [rbp+130h]

  v45 = a4;
  v41[0] = a3;
  v38 = a1;
  v40 = a2;
  v9 = a5;
  v44 = a5;
  v46 = a6;
  memset_0(v47, 0, 0x98uLL);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    v15 = 1048603;
    v16 = 0LL;
    v14 = a7;
    if ( (_bittest64(&KeFeatureBits, 0x17u) & ((a7 & 2) != 0)) != 0 )
    {
      v15 = 1048667;
      v16 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    MiscFlags = CurrentThread->MiscFlags;
    v18 = v16 & 0xFFFFFFFFFFFFF7FFuLL;
    v19 = v16 | 0x800;
    if ( (MiscFlags & 0x100000) == 0 )
      v19 = v18;
    v20 = v15 | 0x100040;
    if ( (MiscFlags & 0x100000) == 0 )
      v20 = v15;
    v36 = 0;
    RtlGetExtendedContextLength2(v20, &v36, v19);
    v21 = v36 + 15LL;
    if ( v21 <= v36 )
      v21 = 0xFFFFFFFFFFFFFF0LL;
    v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
    v43 = &v36;
    memset_0(&v36, 0, v36);
    v37 = 0LL;
    RtlInitializeExtendedContext2((__int64)&v36, v20, &v37, v19);
    KeContextFromKframes(a2, a1, (__int64)&v36);
    v23 = *(void **)(a2 + 384);
    v24 = v23;
    v36 = v20 & 0x100040;
    if ( (v20 & 0x100040) == 0x100040 )
      v24 = (void *)(((unsigned __int64)v23 - *((unsigned int *)v37 + 5)) & 0xFFFFFFFFFFFFFFC0uLL);
    v42 = ((unsigned __int64)v24 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
    v12 = (char *)(v42 - 32);
    v11 = v42 - 1328;
    v25 = (__int64)v37;
    Src = *v37;
    v49 = v37[1];
    DWORD1(Src) = (_DWORD)v23 - (v42 - 1328);
    LODWORD(v49) = (_DWORD)v24 - (v42 - 96);
    ProbeForWrite((volatile void *)(v42 - 1328), (SIZE_T)v23 - v42 + 1328, 0x10u);
    RtlSetUserMemory(v12 - 32);
    RtlWriteULongToUser(v12 - 32, 1LL);
    v39 = 2;
    v26 = 2LL;
    if ( (a7 & 1) != 0 )
      v26 = 3LL;
    v39 = v26;
    RtlWriteULongToUser(v12 - 28, v26);
    if ( v36 == 1048640 )
      RtlCopyToUser(v24, (void *)(v25 + *(int *)(v25 + 16)), 0x40uLL);
    RtlpCopyExtendedContext(0, (__int64)(v12 - 64), (__int64)&Src, v20, (__int64)v37, 0LL);
    RtlCopyToUser(v12 - 64, &Src, 0x20uLL);
    v27 = v42;
    v28 = v43;
    RtlWriteULong64ToUser(v42 + 24, *((_QWORD *)v43 + 19));
    RtlWriteULong64ToUser(v27, *((_QWORD *)v28 + 31));
    KePopulateContinuationContext(*((_QWORD *)v28 + 31));
    v9 = v44;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 208);
    v38 = *(_QWORD *)(a2 + 352);
    v12 = (char *)(v11 + 1296);
    ProbeForWrite((volatile void *)(v11 + 1296), 0x20uLL, 0x10u);
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v13 = KiUnwindUserSspForApcContextCopyBypass(v11);
      if ( v13 < 0 )
        RtlRaiseStatus(v13);
    }
    v14 = a7;
  }
  RtlSetUserMemory(v12);
  if ( (v14 & 4) != 0 )
  {
    RtlWriteULong64ToUser(v12, v9);
    RtlWriteULong64ToUser(v12 + 8, v11);
    v9 = (__int64)v12;
  }
  RtlWriteULong64ToUser(v11, v45);
  RtlWriteULong64ToUser(v11 + 8, v9);
  RtlWriteULong64ToUser(v11 + 16, v46);
  RtlWriteULong64ToUser(v11 + 24, v41[0]);
  RtlWriteULong64ToUser(v11 + 32, v14);
  *(_QWORD *)(a2 + 384) = v11;
  *(_QWORD *)(a2 + 360) = *(_QWORD *)&stru_140FC01F0.ReservedPreviousReadyTimeValue;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  result = MEMORY[0xFFFFF780000003B0];
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140E62580 )
  {
    __sidt(v41);
    v30 = *(_QWORD **)((char *)v41 + 2);
    if ( *(_QWORD *)((char *)v41 + 2) < (unsigned __int64)(*(_QWORD *)((char *)v41 + 2) + 848LL) )
    {
      v31 = *(const char **)((char *)v41 + 2);
      do
      {
        _mm_prefetch(v31, 0);
        v31 += 64;
      }
      while ( (unsigned __int64)v31 < *(_QWORD *)((char *)v41 + 2) + 848LL );
    }
    v32 = 848;
    v33 = qword_140E62570;
    v34 = 106LL;
    v35 = (unsigned int)qword_140E62578;
    do
    {
      v33 = __ROR8__(v33 - *v30++, qword_140E62578);
      v32 -= 8;
      --v34;
    }
    while ( v34 );
    for ( ; v32; --v32 )
    {
      v33 = __ROR8__(v33 - *(unsigned __int8 *)v30, qword_140E62578);
      v30 = (_QWORD *)((char *)v30 + 1);
    }
    if ( qword_140E62588 != v33 )
    {
      if ( qword_140E62540 )
        goto LABEL_37;
      v36 = 603979780;
      qword_140E62540 = (unsigned int)__ROL4__(603979780, 166);
      xmmword_140E62548 = 0LL;
      qword_140E62558 = 269LL;
      qword_140E62560 = *(_QWORD *)((char *)v41 + 2);
    }
    if ( !qword_140E62540 )
    {
LABEL_40:
      LOBYTE(v35) = 1;
      result = KiQueryUnbiasedInterruptTime(v35) + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140E62580 = result;
      return result;
    }
LABEL_37:
    if ( (KDEFERRED_ROUTINE *)qword_140E62518 != KiSchedulerDpc )
    {
      LODWORD(dword_140E62500) = 275;
      qword_140E62518 = (__int64)KiSchedulerDpc;
      qword_140E62520 = (__int64)&dword_140E62500;
      qword_140E62538 = 0LL;
      qword_140E62510 = 0LL;
    }
    qword_140E62568 = 1107776LL;
    KiInsertQueueDpc((ULONG_PTR)&dword_140E62500, 0LL, 0LL, 0LL, 0);
    goto LABEL_40;
  }
  return result;
}
