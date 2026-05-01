/*
 * XREFs of HampIpcChannelObjectMakeZombieUnsafe @ 0x18000EB20
 * Callers:
 *     HamIpcChannelRundown @ 0x18000532C (HamIpcChannelRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectMakeZombieUnsafe(__int64 a1, __int64 *a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx

  RtlRbRemoveNode(a2 + 3, a1);
  v4 = (__int64 **)a2[6];
  v5 = (__int64 *)(a1 + 24);
  if ( *v4 != a2 + 5 )
    __fastfail(3u);
  v5[1] = (__int64)v4;
  *v5 = (__int64)(a2 + 5);
  *v4 = v5;
  a2[6] = (__int64)v5;
  v6 = *a2;
  RtlAcquireSRWLockExclusive(*a2 + 32);
  v7 = *(_DWORD *)(v6 + 64) | 2;
  *(_DWORD *)(v6 + 64) = v7;
  if ( (v7 & 1) == 0 )
  {
    v8 = *(_QWORD *)(v6 + 56);
    *(_DWORD *)(v6 + 64) = v7 | 1;
    TpPostWork(v8);
  }
  return RtlReleaseSRWLockExclusive(v6 + 32);
}
