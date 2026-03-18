/*
 * XREFs of ?QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x14004F378
 * Callers:
 *     NtDCompositionGetTargetStatistics @ 0x1400EFD80 (NtDCompositionGetTargetStatistics.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F56C (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

char __fastcall DirectComposition::CConnection::QueryTargetStats(
        DirectComposition::CConnection *this,
        unsigned __int64 a2,
        const struct tagCOMPOSITION_TARGET_ID *a3,
        struct tagCOMPOSITION_TARGET_STATS *a4)
{
  DirectComposition::CPushLockCriticalSection *v4; // r15
  char v9; // si
  unsigned __int64 v10; // r9
  unsigned int i; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int v15; // r10d

  v4 = (DirectComposition::CConnection *)((char *)this + 376);
  v9 = 0;
  ExAcquirePushLockSharedEx((char *)this + 376, 0LL);
  *((_BYTE *)v4 + 8) = 0;
  v10 = 528 * (a2 % 0x12C);
  if ( *(_QWORD *)((char *)this + v10 + 432) == a2 )
  {
    for ( i = 0; i < *(_DWORD *)((char *)this + v10 + 428); ++i )
    {
      v12 = *(_QWORD *)((char *)this + v10 + 464);
      v13 = 120LL * i;
      if ( *(_DWORD *)(v13 + v12) == *(_DWORD *)a3
        && *(_DWORD *)(v13 + v12 + 4) == *((_DWORD *)a3 + 1)
        && *(_DWORD *)(v13 + v12 + 8) == *((_DWORD *)a3 + 2)
        && *(_DWORD *)(v13 + v12 + 12) == *((_DWORD *)a3 + 3)
        && *(_DWORD *)(v13 + v12 + 16) == *((_DWORD *)a3 + 4)
        && *(_DWORD *)(v13 + v12 + 20) == *((_DWORD *)a3 + 5) )
      {
        v14 = *(_DWORD *)(v13 + v12 + 24);
        v15 = *((_DWORD *)a3 + 6);
        if ( v14 == v15 || !v14 || !v15 )
        {
          v9 = 1;
          *(_DWORD *)a4 = *(_DWORD *)(v13 + v12 + 32);
          *((_QWORD *)a4 + 1) = *(_QWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 40);
          *((_QWORD *)a4 + 2) = *(_QWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 48);
          *((_DWORD *)a4 + 6) = *(_DWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 56);
          *((_DWORD *)a4 + 7) = *(_DWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 60);
          *((_DWORD *)a4 + 8) = *(_DWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 64);
          *((_QWORD *)a4 + 5) = *(_QWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 72);
          *((_DWORD *)a4 + 12) = *(_DWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 88);
          *((_DWORD *)a4 + 13) = *(_DWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 92);
          *((_DWORD *)a4 + 14) = *(_DWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 96);
          *((_QWORD *)a4 + 8) = *(_QWORD *)(*(_QWORD *)((char *)this + v10 + 464) + v13 + 104);
          break;
        }
      }
    }
  }
  DirectComposition::CPushLockCriticalSection::Release(v4);
  return v9;
}
