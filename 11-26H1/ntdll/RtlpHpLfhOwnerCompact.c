/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x180016790
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1800163FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180016790 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180016B50 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpLfhOwnerCompact @ 0x180016790 (RtlpHpLfhOwnerCompact.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180094ED0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180095A30 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800966D8 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCompact(__int64 a1, unsigned __int8 *a2, unsigned int a3)
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
  _QWORD *result; // rax
  unsigned int v18; // ebx
  bool v19; // zf
  volatile signed __int32 *v20; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v22; // rax
  _QWORD *v23; // rcx
  volatile signed __int32 **v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rdx
  unsigned __int8 *j; // rbx
  __int64 v30; // [rsp+20h] [rbp-168h] BYREF
  __int64 *v31; // [rsp+28h] [rbp-160h]
  __int64 v32; // [rsp+30h] [rbp-158h]
  _DWORD v33[64]; // [rsp+40h] [rbp-148h] BYREF

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
        v12 = v33;
        while ( *v12 != v10 )
        {
          ++v11;
          v12 += 2;
          if ( v11 >= i )
            goto LABEL_7;
        }
        ++HIWORD(v33[v11]);
      }
      else
      {
LABEL_7:
        v13 = i++;
        v33[v13] = 0;
        LOWORD(v33[v13]) = v10;
        HIWORD(v33[v13]) = 1;
      }
    }
    v14 = 0LL;
    if ( i )
    {
      v15 = (unsigned __int16 *)v33;
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
  if ( *((unsigned __int8 **)a2 + 3) != a2 + 24 || (result = a2 + 40, (_QWORD *)*result != result) )
  {
    v18 = 7;
    if ( a3 )
      v18 = 3;
    v19 = (*a2 & 1) == 0;
    v30 = (__int64)&v30;
    v31 = &v30;
    if ( !v19 || !*((_WORD *)a2 + 2) )
    {
      v20 = (volatile signed __int32 *)(a2 + 16);
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v22 = 0LL;
        v23 = SchedulerSharedDataSlot;
        while ( *v23 )
        {
          v22 = (unsigned int)(v22 + 1);
          ++v23;
          if ( (unsigned int)v22 >= 8 )
            goto LABEL_28;
        }
        v24 = (volatile signed __int32 **)&SchedulerSharedDataSlot[v22];
        if ( v24 )
          *v24 = v20;
      }
LABEL_28:
      if ( _interlockedbittestandset64(v20, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(a2 + 16);
    }
    if ( (*a2 & 1) == 0 && (v18 & 4) != 0 )
    {
      v25 = 0LL;
      v26 = _InterlockedExchange64(v14 + 7, 0LL);
      v32 = v26;
      if ( (v26 & 0xFFF) != 0 )
        v25 = v26 & 0xFFFFFFFFFFFFF000uLL;
      v27 = v26 & 0xFFF;
      if ( v27 )
        *(_WORD *)(v25 + 32) += v27;
    }
    ((void (__fastcall *)(__int64, unsigned __int8 *, __int64 *, _QWORD))RtlpHpLfhOwnerRunMaintenance)(
      a1,
      a2,
      &v30,
      v18);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      RtlReleaseSRWLockExclusive(a2 + 16, v28);
    if ( (*a2 & 1) == 0 && *((_WORD *)a2 + 2) )
      v3 = 2;
    result = (_QWORD *)((__int64 (__fastcall *)(__int64, unsigned __int8 *, __int64 *, _QWORD))RtlpHpLfhBucketAddSubsegment)(
                         a1,
                         v7,
                         &v30,
                         v3);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
    {
      RtlAcquireSRWLockShared(a2 + 16);
      for ( j = (unsigned __int8 *)*((_QWORD *)a2 + 3); j != a2 + 24; j = *(unsigned __int8 **)j )
      {
        if ( j[39] != 1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, j, 0xFFFFFFFFLL, 1LL, v30, v31, v32);
      }
      return (_QWORD *)RtlReleaseSRWLockShared(a2 + 16);
    }
  }
  return result;
}
