/*
 * XREFs of PpmTestAndLockProcessor @ 0x140605F08
 * Callers:
 *     PpmIdleCheckCoordinatedDependency @ 0x1406043C0 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedProcessorDependency @ 0x1406046D4 (PpmIdleCheckCoordinatedProcessorDependency.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140420700 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x140420840 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     PpmIdleTransitionStall @ 0x1406051FC (PpmIdleTransitionStall.c)
 */

__int64 __fastcall PpmTestAndLockProcessor(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned int Number; // ebp
  __int64 v13; // r15
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // r9d
  _QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h]

  v3 = *(_DWORD *)(a1 + 34972);
  v18 = 0LL;
  BYTE12(v18) = 1;
  v17[0] = 0LL;
  *(_QWORD *)&v18 = a1;
  v17[1] = PopIdleTransitionTimeout;
  v7 = 0LL;
  while ( (v3 & 0xFF000000) == 0x2000000 )
  {
    PpmIdleTransitionStall((__int64)v17);
    v3 = *(_DWORD *)(a1 + 34972);
  }
  v8 = HIBYTE(v3);
  if ( v8 != 3 && v8 - 4 > 1 )
    return 0xFFFFFFFFLL;
  v9 = 2147483653LL;
  if ( a3 )
  {
    v10 = *(_DWORD *)a3;
    v11 = 0LL;
    if ( *(_DWORD *)a3 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a3 + 8) + 24 * v11;
        if ( *(_DWORD *)(v7 + 4) == *(_DWORD *)(a1 + 34960) )
          break;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v10 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( (_DWORD)v11 == v10 )
        return v9;
    }
    if ( !*(_BYTE *)(v7 + 2) )
      return v9;
    if ( !*(_BYTE *)v7 )
      return 0LL;
  }
  if ( (unsigned int)KeCheckProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36)) )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v13 = *(_QWORD *)(a1 + 34880);
  KeInterlockedSetProcessorAffinityEx(v13 + 72, Number);
  _m_prefetchw((const void *)(a1 + 34972));
  v14 = *(_DWORD *)(a1 + 34972);
  do
  {
    if ( HIBYTE(v14) != 4 && HIBYTE(v14) != 5 )
    {
      KeInterlockedClearProcessorAffinityEx(v13 + 72, Number);
      return v9;
    }
    v15 = v14;
    v14 = _InterlockedCompareExchange(
            (volatile signed __int32 *)(a1 + 34972),
            (((int)((v14 & 0xFFFFFF | 0x5000000) << 8) >> 8) + 1) ^ ((v14 & 0xFFFFFF | 0x5000000) ^ (((int)((v14 & 0xFFFFFF | 0x5000000) << 8) >> 8) + 1)) & 0xFF000000,
            v14);
  }
  while ( v14 != v15 );
  KeAddProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36));
  if ( !a3 || *(_DWORD *)(v7 + 4) == *(_DWORD *)(a1 + 34960) )
    return 0LL;
  return v9;
}
