/*
 * XREFs of HamIpcChannelObjectMakeZombie @ 0x1800091A0
 * Callers:
 *     HamCompleteExtendedExecution @ 0x180011280 (HamCompleteExtendedExecution.c)
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180009510 (HampIpcChannelObjectComparePayloadForTree.c)
 */

__int64 __fastcall HamIpcChannelObjectMakeZombie(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  int v5; // ebp
  int v6; // eax
  unsigned __int64 v7; // rax
  __int64 **v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx

  RtlAcquireSRWLockExclusive(a1 + 1);
  *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  v4 = a1[3];
  v5 = a1[4] & 1;
  if ( (a1[4] & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_8;
    v4 ^= (unsigned __int64)(a1 + 3);
  }
  while ( v4 )
  {
    v6 = HampIpcChannelObjectComparePayloadForTree(a2, v4);
    if ( v6 < 0 )
    {
      v7 = *(_QWORD *)v4;
      if ( v5 && v7 )
        goto LABEL_19;
    }
    else
    {
      if ( v6 <= 0 )
      {
        RtlRbRemoveNode(a1 + 3, v4);
        v9 = (__int64 **)a1[6];
        v10 = (__int64 *)(v4 + 24);
        if ( *v9 != a1 + 5 )
          __fastfail(3u);
        v10[1] = (__int64)v9;
        *v10 = (__int64)(a1 + 5);
        *v9 = v10;
        a1[6] = (__int64)v10;
        v11 = *a1;
        RtlAcquireSRWLockExclusive(*a1 + 32);
        v12 = *(_DWORD *)(v11 + 64) | 2;
        *(_DWORD *)(v11 + 64) = v12;
        if ( (v12 & 1) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 56);
          *(_DWORD *)(v11 + 64) = v12 | 1;
          TpPostWork(v13);
        }
        RtlReleaseSRWLockExclusive(v11 + 32);
        break;
      }
      v7 = *(_QWORD *)(v4 + 8);
      if ( v5 && v7 )
      {
LABEL_19:
        v4 ^= v7;
        continue;
      }
    }
    v4 = v7;
  }
LABEL_8:
  *((_DWORD *)a1 + 4) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 1);
}
