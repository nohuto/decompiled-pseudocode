/*
 * XREFs of RtlpHpVsSlotFreeList @ 0x1800E0364
 * Callers:
 *     RtlpHpVsContextCompact @ 0x180061C90 (RtlpHpVsContextCompact.c)
 *     RtlpHpVsContextFree @ 0x1800E0118 (RtlpHpVsContextFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsSlotFreeInternal @ 0x1800E045C (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpVsSubsegmentFree @ 0x1800E0704 (RtlpHpVsSubsegmentFree.c)
 */

__int64 **__fastcall RtlpHpVsSlotFreeList(__int64 a1, _RTL_SRWLOCK *a2, _QWORD *a3)
{
  bool v3; // zf
  _QWORD *v7; // r8
  __int64 ***v8; // rax
  _QWORD *v9; // rcx
  __int64 *v10; // rdx
  __int64 **result; // rax
  __int64 *v12; // rax
  __int64 *v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 **v14; // [rsp+28h] [rbp-28h]
  PRTL_SRWLOCK SRWLock[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]

  v3 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v16 = 0LL;
  v14 = &v13;
  v13 = (__int64 *)&v13;
  *(_OWORD *)SRWLock = 0LL;
  if ( v3 )
  {
    SRWLock[1] = a2 + 1;
    RtlAcquireSRWLockExclusive(a2 + 1);
  }
  do
  {
    v7 = a3 - 2;
    a3 = (_QWORD *)*a3;
    v8 = (__int64 ***)RtlpHpVsSlotFreeInternal(a1, a2, v7, SRWLock);
    if ( v8 )
    {
      v9 = v14;
      if ( *v14 != (__int64 *)&v13 )
LABEL_5:
        __fastfail(3u);
      v8[1] = v14;
      *v8 = &v13;
      *v9 = v8;
      v14 = (__int64 **)v8;
    }
  }
  while ( a3 );
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(SRWLock[1]);
  while ( 1 )
  {
    v10 = v13;
    result = &v13;
    if ( v13 == (__int64 *)&v13 )
      return result;
    if ( (__int64 **)v13[1] != &v13 )
      goto LABEL_5;
    v12 = (__int64 *)*v13;
    if ( *(__int64 **)(*v13 + 8) != v13 )
      goto LABEL_5;
    v13 = (__int64 *)*v13;
    v12[1] = (__int64)&v13;
    RtlpHpVsSubsegmentFree(a1, v10);
  }
}
