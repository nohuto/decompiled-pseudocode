/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x180061EC0
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x180061B2C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180062280 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180062870 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1800633D0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180064078 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned __int8 *v7; // r13
  unsigned int v8; // r9d
  unsigned int i; // edx
  __int16 v10; // r8
  unsigned int v11; // ecx
  _WORD *v12; // rax
  __int64 v13; // rax
  volatile __int64 *v14; // r14
  unsigned __int16 *v15; // rbx
  __int64 v16; // rsi
  unsigned int v17; // ebx
  bool v18; // zf
  volatile signed __int32 *v19; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v21; // rax
  _QWORD *v22; // rcx
  volatile signed __int32 **v23; // rcx
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // ecx
  unsigned __int8 *j; // rbx
  __int64 v28; // [rsp+20h] [rbp-168h] BYREF
  __int64 *v29; // [rsp+28h] [rbp-160h]
  __int64 v30; // [rsp+30h] [rbp-158h]
  _DWORD v31[64]; // [rsp+40h] [rbp-148h] BYREF

  v3 = 0;
  if ( (*a2 & 1) != 0 )
  {
    v7 = a2;
    v8 = 0;
    for ( i = 0; v8 < *(unsigned __int8 *)(a1 + 72); ++v8 )
    {
      v10 = *(_WORD *)(a1 + 2 * (((unsigned __int64)v8 << 7) + ((unsigned __int64)*a2 >> 1)) + 1472);
      v11 = 0;
      if ( i )
      {
        v12 = v31;
        while ( *v12 != v10 )
        {
          ++v11;
          v12 += 2;
          if ( v11 >= i )
            goto LABEL_7;
        }
        ++HIWORD(v31[v11]);
      }
      else
      {
LABEL_7:
        v13 = i++;
        v31[v13] = 0;
        LOWORD(v31[v13]) = v10;
        HIWORD(v31[v13]) = 1;
      }
    }
    v14 = 0LL;
    if ( i )
    {
      v15 = (unsigned __int16 *)v31;
      v16 = i;
      do
      {
        v14 = (volatile __int64 *)(a1 + ((unsigned __int64)*v15 << 6));
        RtlpHpLfhOwnerCompact(a1, v14, a3);
        v15 += 2;
        --v16;
      }
      while ( v16 );
    }
  }
  else
  {
    v14 = (volatile __int64 *)a2;
    v7 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)a2 + 1) << 6));
  }
  if ( *((unsigned __int8 **)a2 + 3) != a2 + 24 || *((unsigned __int8 **)a2 + 5) != a2 + 40 )
  {
    v17 = 7;
    if ( a3 )
      v17 = 3;
    v18 = (*a2 & 1) == 0;
    v28 = (__int64)&v28;
    v29 = &v28;
    if ( !v18 || !*((_WORD *)a2 + 2) )
    {
      v19 = (volatile signed __int32 *)(a2 + 16);
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v21 = 0LL;
        v22 = SchedulerSharedDataSlot;
        while ( *v22 )
        {
          v21 = (unsigned int)(v21 + 1);
          ++v22;
          if ( (unsigned int)v21 >= 8 )
            goto LABEL_28;
        }
        v23 = (volatile signed __int32 **)&SchedulerSharedDataSlot[v21];
        if ( v23 )
          *v23 = v19;
      }
LABEL_28:
      if ( _interlockedbittestandset64(v19, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)a2 + 2, (unsigned __int64)v19);
    }
    if ( (*a2 & 1) == 0 && (v17 & 4) != 0 )
    {
      v24 = 0LL;
      v25 = _InterlockedExchange64(v14 + 7, 0LL);
      v30 = v25;
      if ( (v25 & 0xFFF) != 0 )
        v24 = v25 & 0xFFFFFFFFFFFFF000uLL;
      v26 = v25 & 0xFFF;
      if ( v26 )
        *(_WORD *)(v24 + 32) += v26;
    }
    ((void (__fastcall *)(__int64, unsigned __int8 *, __int64 *, _QWORD))RtlpHpLfhOwnerRunMaintenance)(
      a1,
      a2,
      &v28,
      v17);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a2 + 2);
    if ( (*a2 & 1) == 0 && *((_WORD *)a2 + 2) )
      v3 = 2;
    ((void (__fastcall *)(__int64, unsigned __int8 *, __int64 *, _QWORD))RtlpHpLfhBucketAddSubsegment)(a1, v7, &v28, v3);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
    {
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)a2 + 2);
      for ( j = (unsigned __int8 *)*((_QWORD *)a2 + 3); j != a2 + 24; j = *(unsigned __int8 **)j )
      {
        if ( j[39] != 1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, j, 0xFFFFFFFFLL, 1LL, v28, v29, v30);
      }
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)a2 + 2);
    }
  }
}
