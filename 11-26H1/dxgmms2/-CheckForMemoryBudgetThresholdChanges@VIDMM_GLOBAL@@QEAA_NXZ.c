/*
 * XREFs of ?CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400FE2D0
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::CheckForMemoryBudgetThresholdChanges(VIDMM_GLOBAL *this)
{
  unsigned __int8 v2; // di
  __int64 i; // r10
  __int64 v4; // r8
  struct _RTL_BALANCED_NODE *v5; // rax
  _QWORD *j; // r8
  __int64 v7; // r11
  unsigned __int64 v8; // rcx
  char v9; // al
  _QWORD **v10; // rax
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  char v16; // al
  struct _RTL_BALANCED_NODE *v18; // rax
  _QWORD *k; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  char v22; // al
  _QWORD **v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx

  v2 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1738); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * i);
    if ( (*(_BYTE *)(v4 + 632) & 1) != 0 )
    {
      v5 = VIDMM_PARTITION::_PartitionTree;
      for ( j = 0LL; v5; v5 = v5->Children[0] )
        j = v5->Children;
      while ( j )
      {
        v7 = 344LL * (unsigned int)i + *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + j[5] + 24);
        v8 = *(_QWORD *)(v7 + 16);
        if ( v8 )
          v9 = (__int64)(100 - 100LL * *(_QWORD *)(v7 + 120) / v8) < (unsigned int)dword_14008A580;
        else
          v9 = 0;
        if ( v9 != *(_BYTE *)(v7 + 136) )
        {
          v2 = 1;
          *(_BYTE *)(v7 + 136) = v9;
        }
        v10 = (_QWORD **)j[1];
        v11 = j;
        if ( v10 )
        {
          v25 = *v10;
          for ( j = (_QWORD *)j[1]; v25; v25 = (_QWORD *)*v25 )
            j = v25;
        }
        else
        {
          for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*j == v11 )
              break;
            v11 = j;
          }
        }
      }
    }
    else
    {
      v12 = *(_QWORD *)(v4 + 680);
      if ( v12 )
        v13 = (__int64)(100 - 100LL * *(_QWORD *)(v4 + 784) / v12) < (unsigned int)dword_14008A580;
      else
        v13 = 0;
      if ( v13 != *(_BYTE *)(v4 + 800) )
      {
        v2 = 1;
        *(_BYTE *)(v4 + 800) = v13;
      }
    }
    v14 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * i);
    if ( (*(_BYTE *)(v14 + 656) & 1) != 0 )
    {
      v18 = VIDMM_PARTITION::_PartitionTree;
      for ( k = 0LL; v18; v18 = v18->Children[0] )
        k = v18->Children;
      while ( k )
      {
        v20 = 344LL * (unsigned int)i
            + *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + k[5] + 24);
        v21 = *(_QWORD *)(v20 + 16);
        if ( v21 )
          v22 = (__int64)(100 - 100LL * *(_QWORD *)(v20 + 120) / v21) < (unsigned int)dword_14008A580;
        else
          v22 = 0;
        if ( v22 != *(_BYTE *)(v20 + 136) )
        {
          v2 = 1;
          *(_BYTE *)(v20 + 136) = v22;
        }
        v23 = (_QWORD **)k[1];
        v24 = k;
        if ( v23 )
        {
          v26 = *v23;
          for ( k = (_QWORD *)k[1]; v26; v26 = (_QWORD *)*v26 )
            k = v26;
        }
        else
        {
          for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*k == v24 )
              break;
            v24 = k;
          }
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(v14 + 1024);
      if ( v15 )
        v16 = (__int64)(100 - 100LL * *(_QWORD *)(v14 + 1128) / v15) < (unsigned int)dword_14008A580;
      else
        v16 = 0;
      if ( v16 != *(_BYTE *)(v14 + 1144) )
      {
        v2 = 1;
        *(_BYTE *)(v14 + 1144) = v16;
      }
    }
  }
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
