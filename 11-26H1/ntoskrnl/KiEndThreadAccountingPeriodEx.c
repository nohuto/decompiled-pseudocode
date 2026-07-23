/*
 * XREFs of KiEndThreadAccountingPeriodEx @ 0x140227750
 * Callers:
 *     KiEndThreadAccountingPeriod @ 0x1405F8FB0 (KiEndThreadAccountingPeriod.c)
 * Callees:
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 */

void __fastcall KiEndThreadAccountingPeriodEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  char v4; // di
  int v5; // ebp
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // r10d
  unsigned __int16 *v22; // r8
  _BOOL8 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  unsigned int UserWaitTime_high; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  int v30; // ecx
  __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  _QWORD *i; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned int *v38; // r10
  __int64 v39; // r11
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  __int64 v42; // [rsp+50h] [rbp+8h]

  v4 = *(_BYTE *)(a2 + 2);
  v5 = 0;
  v10 = 1LL;
  if ( v4 < 0 )
  {
    v11 = *(_QWORD *)(a2 + 544);
    v12 = *(_QWORD *)(a1 + 35824);
    v13 = (*(_QWORD *)(v11 + 400) >> 4) & 0x1FFLL;
    v14 = ((unsigned int)*(_QWORD *)(v11 + 400) >> 13) & 0x3FFFF;
    _BitScanReverse(&v15, v14);
    v16 = *(_QWORD *)(*(_QWORD *)(v12 + 8LL * (v15 - 2)) + 8 * (v14 ^ (unsigned int)(1 << v15)) + 8);
    *(_QWORD *)(v16 + 8 * v13) += a3;
    v4 &= ~0x80u;
  }
  if ( (v4 & 0x10) != 0 )
  {
    *(_QWORD *)(8LL * *(unsigned __int8 *)(a2 + 124) + 34440 + a1) += a3;
    v4 &= ~0x10u;
  }
  if ( (v4 & 0x20) != 0 )
  {
    v17 = *(_QWORD *)(a2 + 1672);
    if ( v17 )
    {
      v18 = *(_QWORD *)(a1 + 35264);
      v19 = *(_QWORD *)(a1 + 35272);
      if ( v18 && v19 )
      {
        v20 = *(_DWORD *)(v19 + 148);
        if ( v20 == -1 )
        {
          v20 = *(_DWORD *)(v19 + 160);
        }
        else if ( v20 >= *(_DWORD *)(v18 + 536) )
        {
          v20 = *(_DWORD *)(v18 + 536);
        }
      }
      else
      {
        v20 = 100;
      }
      v21 = 0;
      v22 = (unsigned __int16 *)(a1 + 35468);
      do
      {
        if ( v20 <= *v22 )
          break;
        ++v21;
        ++v22;
      }
      while ( v21 < 3 );
      v23 = *(_BYTE *)(a1 + 35352) != 0;
      v24 = v23 + 2LL * v21;
      v25 = *(_QWORD *)(v17 + 8 * v24);
      v26 = (_QWORD *)(v17 + 8 * v24);
      UserWaitTime_high = HIDWORD(KsepShimDbLock.UserWaitTime);
      *v26 = a3 + v25;
      v28 = *(_DWORD *)(v17 + 192);
      if ( UserWaitTime_high > v28 )
      {
        LODWORD(v42) = UserWaitTime_high;
        if ( UserWaitTime_high - v28 >= 0x20 )
          HIDWORD(v42) = 1;
        else
          HIDWORD(v42) = (*(_DWORD *)(v17 + 196) << (UserWaitTime_high - v28)) | 1;
        *(_QWORD *)(v17 + 192) = v42;
      }
      else
      {
        v29 = v28 - UserWaitTime_high;
        if ( v29 < 0x20 )
          *(_DWORD *)(v17 + 196) |= 1 << v29;
      }
      if ( !KiEfficiencyClassSystem )
      {
        v30 = *(unsigned __int8 *)(a2 + 516);
        if ( v30 == 2 || *(_BYTE *)(a2 + 516) == 6 || (_BYTE)v30 == 5 )
          *(_QWORD *)(v17 + 16LL * v21 + 8) += a3;
      }
      if ( *(_QWORD *)(a2 + 1616) )
      {
        *(_QWORD *)(v17 + 8 * (v23 + 16 + 2LL * v21)) += a3;
        _InterlockedAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1616) + 1672LL) + 8 * (v23 + 2LL * v21) + 64),
          a3);
      }
    }
    v4 &= ~0x20u;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v31 = *(_QWORD *)(a2 + 968);
    if ( v31 )
      *(_BYTE *)(v31 + 64) = 0;
  }
  if ( KiHgsPlusEnabled )
    KiUpdateThreadHgsFeedback(a1, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 34480) && *(_UNKNOWN **)(a2 + 544) != &unk_140FC9F40 && *(unsigned __int8 *)(a2 + 516) < 7u )
  {
    v32 = *(_DWORD *)(a2 + 80);
    if ( v32 <= *(_DWORD *)(a2 + 84) )
      v32 = *(_DWORD *)(a2 + 84);
    LOBYTE(v5) = v32 >= KiDynamicHeteroCpuPolicyExpectedCycles;
    v33 = *(unsigned __int8 *)(a2 + 517)
        + KiHgsPlusConfiguration * (v5 + 2 * (unsigned int)*(unsigned __int8 *)(a2 + 516));
    *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v33) += a3;
  }
  if ( (v4 & 0xBE) != 0 )
  {
    v34 = *(_QWORD *)(a2 + 104);
    if ( v34 )
    {
      for ( i = (_QWORD *)(v34 + *(unsigned int *)(a1 + 216)); i; i = (_QWORD *)i[55] )
        *i += a3;
    }
    if ( (*(_BYTE *)(a2 + 2) & 8) != 0
      && *(_UNKNOWN **)(a2 + 544) != &unk_140FC9F40
      && (*(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
    {
      *(_QWORD *)(a1 + 34472) += a3;
    }
    v36 = *(_QWORD *)(a2 + 360);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 32);
      if ( v37 )
      {
        if ( KiHwCountersCount )
        {
          v38 = (unsigned int *)&KiHwCounters;
          v39 = (unsigned int)KiHwCountersCount;
          v40 = v36 + 48;
          do
          {
            if ( (v37 & v10) != 0 )
            {
              v41 = __readpmc(*v38);
              *(_QWORD *)(v40 + 8) += (unsigned int)(v41 - *(_DWORD *)v40);
              *(_QWORD *)v40 = v41;
            }
            v10 *= 2LL;
            ++v38;
            v40 += 24LL;
            --v39;
          }
          while ( v39 );
        }
      }
    }
  }
}
