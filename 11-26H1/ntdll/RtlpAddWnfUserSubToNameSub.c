/*
 * XREFs of RtlpAddWnfUserSubToNameSub @ 0x18006E764
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWnfETWEventSubscribe @ 0x180115164 (RtlpWnfETWEventSubscribe.c)
 *     NtSubscribeWnfStateChange @ 0x1801628F0 (NtSubscribeWnfStateChange.c)
 */

__int64 __fastcall RtlpAddWnfUserSubToNameSub(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 **v5; // r8
  __int64 ****v6; // rcx
  __int64 ***v7; // rax
  _DWORD *v8; // r9
  unsigned int v9; // edx
  _DWORD *v10; // rcx
  int v11; // eax
  unsigned int v12; // r10d
  unsigned int i; // ecx
  __int64 v14; // rdx
  int v15; // esi
  __int64 v16; // rdx
  __int64 *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 8), a2);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 64), v4);
  v5 = (__int64 **)(a1 + 72);
  v6 = *(__int64 *****)(a1 + 80);
  v7 = (__int64 ***)(a2 + 8);
  if ( *v6 != (__int64 ***)(a1 + 72) )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(a2 + 16) = v6;
  *v6 = v7;
  *(_QWORD *)(a1 + 80) = v7;
  *(_QWORD *)(a2 + 24) = a1;
  if ( *(_DWORD *)(a1 + 124) == 1 && (*(_DWORD *)(a2 + 72) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 156) = 1;
  v8 = (_DWORD *)(a1 + 104);
  v9 = 0;
  v10 = (_DWORD *)(a1 + 104);
  do
  {
    v11 = *(_DWORD *)(a2 + 72);
    if ( _bittest(&v11, v9) )
      ++*v10;
    ++v9;
    ++v10;
  }
  while ( v9 < 5 );
  v12 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v8 )
      v12 |= 1 << i;
    ++v8;
  }
  ++*(_DWORD *)(a1 + 96);
  if ( (*(_BYTE *)(a2 + 68) & 4) != 0 )
    ++*(_DWORD *)(a1 + 100);
  v14 = *(unsigned int *)(a2 + 64);
  if ( *(_DWORD *)(a1 + 24) < (unsigned int)v14 )
  {
    v18 = *v5;
    while ( v18 != (__int64 *)v5 )
    {
      v19 = *((_DWORD *)v18 + 14);
      v18 = (__int64 *)*v18;
      if ( (unsigned int)v14 <= v19 )
        v19 = v14;
      v14 = v19;
    }
  }
  *(_DWORD *)(a1 + 24) = v14;
  v15 = NtSubscribeWnfStateChange(a1 + 16, v14, v12, &v20);
  if ( v15 >= 0 )
    *(_QWORD *)(a1 + 8) = v20;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v16 = 2147353486LL;
  if ( *(_BYTE *)v16 && v15 >= 0 )
    RtlpWnfETWEventSubscribe(
      *(_QWORD *)(a1 + 16),
      a2,
      a1,
      *(_DWORD *)(a1 + 88),
      *(_QWORD *)(a2 + 40),
      *(_DWORD *)(a2 + 72));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 8));
  return (unsigned int)v15;
}
