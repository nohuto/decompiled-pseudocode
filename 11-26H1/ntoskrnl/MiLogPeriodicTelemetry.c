/*
 * XREFs of MiLogPeriodicTelemetry @ 0x1402A7B80
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiLogPeriodicTelemetry(ULONG *a1)
{
  unsigned __int64 result; // rax
  ULONG64 v3; // r12
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v6; // r8d
  __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // r9
  int v10; // r8d
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  __int64 v13; // r15
  int v14; // eax
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned __int64 v19; // r12
  int v20; // r8d
  unsigned __int64 v21; // r9
  unsigned int v22; // r8d
  int v23; // r10d
  _DWORD *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // r8d
  unsigned __int64 v28; // r8
  int v29; // r10d
  int v30; // [rsp+28h] [rbp-E0h]
  int v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  __int64 v39; // [rsp+80h] [rbp-88h] BYREF
  __int64 v40; // [rsp+88h] [rbp-80h] BYREF
  __int64 v41; // [rsp+90h] [rbp-78h] BYREF
  __int128 v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *p_QpcTimeStamp; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  __int64 *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  __int64 *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  __int64 *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  __int64 *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  __int64 *v59; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  __int64 *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  __int64 *v63; // [rsp+168h] [rbp+60h]
  __int64 v64; // [rsp+170h] [rbp+68h]
  __int64 *v65; // [rsp+178h] [rbp+70h]
  __int64 v66; // [rsp+180h] [rbp+78h]
  __int64 *v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]
  __int64 *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  __int64 *v71; // [rsp+1A8h] [rbp+A0h]
  __int64 v72; // [rsp+1B0h] [rbp+A8h]
  __int64 *v73; // [rsp+1B8h] [rbp+B0h]
  __int64 v74; // [rsp+1C0h] [rbp+B8h]

  result = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  if ( !stru_140E366D8.FirstArgument )
    return result;
  v3 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  QpcTimeStamp = v3;
  v4 = (__int64)(a1 + 5552);
  if ( a1 != &MiSystemPartition || *(_QWORD *)v4 )
  {
    result = v3 - *(_QWORD *)v4;
    v4 = 6000000000LL;
    if ( result < 0x165A0BC00LL )
      return result;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, 2LL);
  }
  if ( a1[4513]
    && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000000400LL) )
  {
    v35 = v7;
    p_QpcTimeStamp = &v35;
    LODWORD(v32) = *(unsigned __int16 *)a1;
    v50 = 8LL;
    v51 = &v32;
    v53 = &v37;
    v52 = 4LL;
    v37 = 0x1000000LL;
    v54 = 8LL;
    tlgWriteAgg(v6, (int)&word_14005A9B6, v6, 5, &v48);
  }
  if ( *((_QWORD *)a1 + 2135)
    && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000000400LL) )
  {
    v37 = v9;
    p_QpcTimeStamp = &v37;
    LODWORD(v32) = *(unsigned __int16 *)a1;
    v50 = 8LL;
    v51 = &v32;
    v53 = &v35;
    v52 = 4LL;
    v35 = 0x1000000LL;
    v54 = 8LL;
    tlgWriteAgg(v8, (int)&word_14005AE3A, v8, 5, &v48);
  }
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000000400LL) )
  {
    v37 = *((_QWORD *)a1 + 2137);
    v50 = 8LL;
    p_QpcTimeStamp = &v37;
    v35 = *((_QWORD *)a1 + 2138);
    v51 = &v35;
    v44 = *((_QWORD *)a1 + 2139);
    v53 = &v44;
    v45 = *((_QWORD *)a1 + 2140);
    v55 = &v45;
    v46 = *((_QWORD *)a1 + 2141);
    v57 = &v46;
    v47 = *((_QWORD *)a1 + 2142);
    v59 = &v47;
    v41 = a1[4286];
    v61 = &v41;
    v38 = a1[4287];
    v63 = &v38;
    v39 = a1[4288];
    v65 = &v39;
    v40 = a1[4289];
    v67 = &v40;
    v36 = *((_QWORD *)a1 + 2145);
    v69 = &v36;
    LODWORD(v32) = *(unsigned __int16 *)a1;
    v71 = &v32;
    v73 = &v33;
    v52 = 8LL;
    v54 = 8LL;
    v56 = 8LL;
    v58 = 8LL;
    v60 = 8LL;
    v62 = 8LL;
    v64 = 8LL;
    v66 = 8LL;
    v68 = 8LL;
    v70 = 8LL;
    v72 = 4LL;
    v33 = 0x1000000LL;
    v74 = 8LL;
    tlgWriteAgg(v10, (int)&byte_14005AE9D, v10, 15, &v48);
  }
  MiEnumerateSlabAllocatorsEx((_DWORD)a1, (unsigned int)MiLogPeriodicTelemetryForSlabAllocator, 0, -1, 9);
  v11 = 0;
  v12 = a1 + 4225;
  do
  {
    v13 = (int)*(v12 - 1);
    v14 = 0;
    if ( (_DWORD)v13 )
    {
      v14 = 1;
      *(v12 - 1) = 0;
    }
    if ( *v12 )
    {
      v14 = 1;
      *v12 = 0;
    }
    if ( v12[1] )
    {
      v14 = 1;
      v12[1] = 0;
    }
    if ( v12[2] )
    {
      v12[2] = 0;
    }
    else if ( !v14 )
    {
      goto LABEL_33;
    }
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
      && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000000800LL) )
    {
      v36 = v16;
      p_QpcTimeStamp = &v33;
      v33 = v13;
      v51 = &v36;
      v50 = 8LL;
      v53 = &v40;
      v52 = 8LL;
      v55 = &v39;
      v57 = &v32;
      LODWORD(v35) = *(unsigned __int16 *)a1;
      v59 = &v35;
      v61 = &v38;
      v40 = v17;
      v54 = 8LL;
      v39 = v18;
      v56 = 8LL;
      LODWORD(v32) = v11;
      v58 = 4LL;
      v60 = 4LL;
      v38 = 0x1000000LL;
      v62 = 8LL;
      tlgWriteAgg(v15, (int)&byte_14005ACD9, v15, 9, &v48);
    }
LABEL_33:
    ++v11;
    v12 += 12;
  }
  while ( v11 < 3 );
  v19 = QpcTimeStamp;
  if ( a1 == &MiSystemPartition )
  {
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
      && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000000800LL) )
    {
      QpcTimeStamp = v21;
      p_QpcTimeStamp = (__int64 *)&QpcTimeStamp;
      v33 = v21;
      v51 = &v33;
      v50 = 8LL;
      v53 = &v36;
      v52 = 8LL;
      v36 = 0x1000000LL;
      v54 = 8LL;
      tlgWriteAgg(v20, (int)&dword_14005ADB4, v20, 5, &v48);
    }
    if ( _InterlockedExchange(&dword_140E2C8D4, 0)
      && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
      && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000008000LL) )
    {
      QpcTimeStamp = v22;
      v50 = 8LL;
      p_QpcTimeStamp = (__int64 *)&QpcTimeStamp;
      v33 = 0x1000000LL;
      v51 = &v33;
      v52 = 8LL;
      tlgWriteAgg(v23, (int)&unk_14005ABB0, v22, 4, &v48);
    }
    v24 = &unk_140E2C8D8;
    v25 = 0LL;
    v26 = 6LL;
    do
    {
      *(_DWORD *)((char *)&v42 + v25) = *(ULONG *)((char *)&MiState + v25 + 472);
      v25 += 4LL;
      *v24++ = 0;
      --v26;
    }
    while ( v26 );
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
      && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000008000LL) )
    {
      QpcTimeStamp = (unsigned int)v42;
      v50 = 8LL;
      p_QpcTimeStamp = (__int64 *)&QpcTimeStamp;
      v33 = DWORD1(v42);
      v51 = &v33;
      v36 = DWORD2(v42);
      v53 = &v36;
      v40 = HIDWORD(v42);
      v55 = &v40;
      v39 = (unsigned int)v43;
      v57 = &v39;
      v38 = HIDWORD(v43);
      v59 = &v38;
      v61 = &v41;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 8LL;
      v41 = 0x1000000LL;
      v62 = 8LL;
      tlgWriteAgg(v27, (int)&byte_14005AC07, v27, 9, &v48);
    }
    if ( !*((_QWORD *)a1 + 2776)
      && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
      && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000000000LL) )
    {
      QpcTimeStamp = v28;
      p_QpcTimeStamp = (__int64 *)&QpcTimeStamp;
      v50 = 8LL;
      v33 = 0x80000000LL;
      v52 = 8LL;
      v51 = &v33;
      tlgWriteEx_EtwWriteEx(v29, (int)&byte_14005AB70, v28, 1, v30, v31, 4u, (__int64)&v48);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *((_QWORD *)a1 + 2776) = v19;
  return result;
}
