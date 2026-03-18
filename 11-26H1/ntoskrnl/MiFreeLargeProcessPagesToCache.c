/*
 * XREFs of MiFreeLargeProcessPagesToCache @ 0x140711B98
 * Callers:
 *     MiFreeLargePages @ 0x1403C700C (MiFreeLargePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeLargePageCharges @ 0x1403C4704 (MiFreeLargePageCharges.c)
 *     MiEmptyCacheSlice @ 0x140711A5C (MiEmptyCacheSlice.c)
 *     MiFreeCacheSlice @ 0x140711B48 (MiFreeCacheSlice.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall MiFreeLargeProcessPagesToCache(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR *v2; // r14
  ULONG_PTR v4; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r13
  volatile LONG *v10; // r12
  KIRQL v11; // r15
  unsigned int *v12; // r8
  __int64 v13; // r9
  unsigned int *v14; // rbx
  int v15; // ecx
  __int64 v16; // rdx
  ULONG_PTR v17; // rdi
  unsigned __int64 v18; // r14
  unsigned int i; // r9d
  int v20; // r10d
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // r11d
  unsigned int v28; // r8d
  __int64 v29; // rbx
  int v30; // edx
  __int64 v31; // rcx
  volatile LONG *v32; // rcx
  __int64 v34; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B8h]
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+38h] [rbp-B0h]
  _BYTE v37[96]; // [rsp+40h] [rbp-A8h] BYREF

  v2 = a1;
  v4 = *a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  v6 = ActiveProcessors[4].StaticBitmap[14];
  v7 = *(unsigned int *)(48 * v4 - 0x21FFFFFFFFE0LL);
  v8 = MiPageToNode(v4);
  v35 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * HIWORD(Process[2].ProcessListEntry.Blink));
  *(_DWORD *)(v6 + 24) = *(_DWORD *)(v35 + 16856);
  v9 = ((3LL * v8 + ((v7 >> 22) & 3)) << 6) + v6 + 32;
  MiFreeLargePageCharges(v35, 16 * a2, 0);
  v10 = (volatile LONG *)&ActiveProcessors[4].StaticBitmap[15];
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[15]);
  v12 = (unsigned int *)(v9 + 12);
  v13 = 4LL;
  do
  {
    if ( (*v12 & 0xFFFF0000) != 0xFFFF0000 )
      *v12 = (unsigned __int16)*v12 | ((*v12 & 0xFFFF0000) + 0x10000);
    v12 += 4;
    --v13;
  }
  while ( v13 );
  if ( a2 )
  {
    while ( 2 )
    {
      v14 = (unsigned int *)(v9 + 12);
LABEL_7:
      v34 = a2;
      v15 = -1;
      --a2;
      v16 = v9;
      v17 = v2[a2];
      v18 = v17 & 0xFFFFFFFFFFFFFE00uLL;
      for ( i = 0; i < 4; ++i )
      {
        if ( (*(_DWORD *)(v16 + 12) & 0x3F) != 0 )
        {
          if ( *(_QWORD *)v16 == v18 )
          {
            v20 = -1;
            goto LABEL_32;
          }
        }
        else
        {
          v15 = i;
        }
        v16 += 16LL;
      }
      v20 = v15;
      if ( i != 4 )
        break;
      if ( v15 != -1 )
      {
        i = v15;
        break;
      }
      if ( a2 )
      {
        v21 = a2 - 1;
        v22 = v9;
        v23 = 4LL;
        do
        {
          v24 = v21;
          if ( v21 )
          {
            while ( *(_QWORD *)v22 != (a1[v24] & 0xFFFFFFFFFFFFFE00uLL) )
            {
              if ( !--v24 )
                goto LABEL_21;
            }
            *(_DWORD *)(v22 + 12) = (unsigned __int16)*(_DWORD *)(v22 + 12);
          }
LABEL_21:
          v22 += 16LL;
          --v23;
        }
        while ( v23 );
      }
      v25 = *v14;
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = *v14;
        v14 += 4;
        i = v27;
        if ( HIWORD(v28) < HIWORD(v25) )
          i = v26;
        ++v27;
        v26 = i;
        if ( HIWORD(v28) < HIWORD(v25) )
          v28 = v25;
        v25 = v28;
      }
      while ( v27 < 4 );
      a2 = v34;
      v29 = v9 + 16LL * i;
      if ( v29 )
      {
LABEL_36:
        memset_0(v37, 0, sizeof(v37));
        MiEmptyCacheSlice(v31, (__int64)v37, v29);
        if ( v11 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        else
          ExReleaseSpinLockExclusive(v10, v11);
        MiFreeCacheSlice(v35, (__int64)v37);
        if ( a2 )
        {
          ExAcquireSpinLockExclusive(v10);
          v2 = a1;
          continue;
        }
        return;
      }
      break;
    }
LABEL_32:
    v29 = v9 + 16LL * i;
    if ( v20 != -1 )
      *(_QWORD *)v29 = v18;
    v30 = (unsigned __int16)*(_DWORD *)(v29 + 12) ^ ((unsigned __int8)*(_DWORD *)(v29 + 12) ^ (unsigned __int8)(*(_DWORD *)(v29 + 12) + 1)) & 0x3F;
    *(_DWORD *)(v29 + 12) = v30;
    *(_DWORD *)(v29 + 8) |= 1 << ((v17 - *(_QWORD *)v29) >> 4);
    if ( (v30 & 0x3F) == 0x20 && v29 )
      goto LABEL_36;
    v2 = a1;
    v14 = (unsigned int *)(v9 + 12);
    if ( a2 )
      goto LABEL_7;
  }
  v32 = (volatile LONG *)&ActiveProcessors[4].StaticBitmap[15];
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v32);
  else
    ExReleaseSpinLockExclusive(v32, v11);
}
