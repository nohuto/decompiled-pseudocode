/*
 * XREFs of PpmGetIdleConstrainedMask @ 0x1405258A0
 * Callers:
 *     PoExecuteIdleCheck @ 0x1404E9AC4 (PoExecuteIdleCheck.c)
 *     PpmEstimateIdleDuration @ 0x1404F57EC (PpmEstimateIdleDuration.c)
 * Callees:
 *     KeEnumerateNextNodeInSystem @ 0x140452D80 (KeEnumerateNextNodeInSystem.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmGetIdleConstrainedMask(unsigned __int16 *a1)
{
  char v2; // si
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+28h] [rbp-18h]
  unsigned __int64 v13; // [rsp+60h] [rbp+20h] BYREF

  v2 = 0;
  memset_0(a1 + 4, 0, 8LL * *a1);
  v11 = 0LL;
  v13 = 0LL;
  *a1 = 1;
  v12 = 0LL;
  KeEnumerateNextNodeInSystem((unsigned __int16 *)&v11, (__int64 *)&v13);
  v3 = v13;
  v4 = 0;
  v12 = v13;
  while ( 1 )
  {
    v13 = 0LL;
    v5 = 0LL;
    while ( 1 )
    {
      v6 = v4;
      if ( v4 < *(_DWORD *)(v3 + 48) )
        break;
      if ( (int)KeEnumerateNextNodeInSystem((unsigned __int16 *)&v11, (__int64 *)&v13) < 0 )
      {
        v4 = DWORD2(v12);
        v3 = v12;
        goto LABEL_8;
      }
      v3 = v13;
      v4 = 0;
      v12 = v13;
    }
    v7 = *(_QWORD *)(v3 + 32);
    ++v4;
    DWORD2(v12) = v6 + 1;
    v5 = *(_QWORD *)(v7 + 8 * v6);
LABEL_8:
    if ( !v5 )
      return v2;
    v8 = *(unsigned __int16 *)(v5 + 136);
    v9 = *(_QWORD *)(v5 + 72);
    if ( *a1 > (unsigned __int16)v8 )
      goto LABEL_12;
    if ( a1[1] > (unsigned __int16)v8 )
    {
      *a1 = v8 + 1;
LABEL_12:
      *(_QWORD *)&a1[4 * v8 + 4] |= v9;
    }
    if ( *(_QWORD *)(v5 + 72) )
      v2 = 1;
  }
}
