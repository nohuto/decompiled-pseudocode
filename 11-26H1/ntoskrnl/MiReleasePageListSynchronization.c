/*
 * XREFs of MiReleasePageListSynchronization @ 0x1402DAB30
 * Callers:
 *     MiActivateDecayNode @ 0x140298EF4 (MiActivateDecayNode.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiReleasePageListSynchronization(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 *v9; // rcx
  unsigned int i; // edx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  volatile signed __int64 *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 result; // rax
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 7544LL);
    if ( v3 == 1 )
      _InterlockedDecrement64((volatile signed __int64 *)(v5 + 16));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v5 + 16), -v3);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v6 == 1 )
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 16));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 16), -v6);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  if ( (*(_DWORD *)a1 & 8) == 0 )
  {
    v18 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 32LL);
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v18, 0xBFFFFFFF);
        _InterlockedDecrement(v18);
        *(_DWORD *)a1 &= ~1u;
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v18, retaddr);
        *(_DWORD *)a1 &= ~1u;
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v18);
      *(_DWORD *)a1 &= ~2u;
    }
  }
  if ( *(_DWORD *)(a1 + 56) )
  {
    v8 = *(_DWORD *)(a1 + 60);
    v9 = (__int64 *)(a1 + 136);
    for ( i = 0; i < v8; ++i )
    {
      v11 = *v9;
      if ( *v9 )
      {
        if ( v11 != a2 )
        {
          *v9 = 0LL;
          v12 = --*(_DWORD *)(a1 + 56);
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v12 )
            break;
        }
      }
      ++v9;
    }
    if ( a2 )
    {
      *(_QWORD *)(a1 + 136) = a2;
      *(_DWORD *)(a1 + 60) = 1;
    }
    else
    {
      *(_DWORD *)(a1 + 60) = 0;
    }
  }
  v13 = *(_QWORD *)(a1 + 64);
  v14 = *(volatile signed __int64 **)(a1 + 8);
  if ( v13 )
  {
    if ( v13 == 1 )
      _InterlockedDecrement64(v14 + 2088);
    else
      _InterlockedAdd64(v14 + 2088, -v13);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 )
  {
    if ( v15 == 1 )
      _InterlockedDecrement64(v14 + 952);
    else
      _InterlockedAdd64(v14 + 952, -v15);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  result = *(_QWORD *)(a1 + 88);
  if ( result )
  {
    if ( result == 1 )
    {
      _InterlockedDecrement64(v14 + 2932);
    }
    else
    {
      result = -(__int64)result;
      _InterlockedAdd64(v14 + 2932, result);
    }
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v17 = *(_QWORD *)(a1 + 96);
  if ( v17 )
  {
    result = MiDecreaseAvailablePages(v14, v17, -1LL, 0LL);
    if ( !(_DWORD)result )
      *(_DWORD *)a1 |= 0x400u;
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return result;
}
