/*
 * XREFs of RtlpHpVsSlotFreeList @ 0x18008E93C
 * Callers:
 *     RtlpHpVsContextCompact @ 0x180016560 (RtlpHpVsContextCompact.c)
 *     RtlpHpVsContextFree @ 0x18008E6F0 (RtlpHpVsContextFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsSlotFreeInternal @ 0x18008EA34 (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpVsSubsegmentFree @ 0x18008ECDC (RtlpHpVsSubsegmentFree.c)
 */

__int64 **__fastcall RtlpHpVsSlotFreeList(__int64 a1, __int64 a2, _QWORD *a3)
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
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]

  v3 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v16 = 0LL;
  v14 = &v13;
  v13 = (__int64 *)&v13;
  v15 = 0LL;
  if ( v3 )
  {
    *((_QWORD *)&v15 + 1) = a2 + 8;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 8), a2);
  }
  do
  {
    v7 = a3 - 2;
    a3 = (_QWORD *)*a3;
    v8 = (__int64 ***)RtlpHpVsSlotFreeInternal(a1, a2, v7, &v15);
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
    RtlReleaseSRWLockExclusive(*((volatile signed __int64 **)&v15 + 1));
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
