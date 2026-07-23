/*
 * XREFs of MiFreeLargeProcessPagesToCache @ 0x140716898
 * Callers:
 *     MiFreeLargePages @ 0x1403D0F00 (MiFreeLargePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeLargePageCharges @ 0x1403CE610 (MiFreeLargePageCharges.c)
 *     MiEmptyCacheSlice @ 0x14071675C (MiEmptyCacheSlice.c)
 *     MiFreeCacheSlice @ 0x140716848 (MiFreeCacheSlice.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
  int v14; // ecx
  __int64 v15; // rdx
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // r14
  unsigned int i; // r9d
  int v19; // r10d
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  unsigned int v24; // eax
  unsigned int *v25; // rbx
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
  v35 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * HIWORD(Process[2].ProcessListEntry.Blink));
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
  while ( 2 )
  {
    if ( a2 )
    {
LABEL_6:
      v34 = a2;
      v14 = -1;
      --a2;
      v15 = v9;
      v16 = v2[a2];
      v17 = v16 & 0xFFFFFFFFFFFFFE00uLL;
      for ( i = 0; i < 4; ++i )
      {
        if ( (*(_DWORD *)(v15 + 12) & 0x3F) != 0 )
        {
          if ( *(_QWORD *)v15 == v17 )
          {
            v19 = -1;
            goto LABEL_31;
          }
        }
        else
        {
          v14 = i;
        }
        v15 += 16LL;
      }
      v19 = v14;
      if ( i == 4 )
      {
        if ( v14 == -1 )
        {
          if ( a2 )
          {
            v20 = a2 - 1;
            v21 = v9;
            v22 = 4LL;
            do
            {
              v23 = v20;
              if ( v20 )
              {
                while ( *(_QWORD *)v21 != (a1[v23] & 0xFFFFFFFFFFFFFE00uLL) )
                {
                  if ( !--v23 )
                    goto LABEL_20;
                }
                *(_DWORD *)(v21 + 12) = (unsigned __int16)*(_DWORD *)(v21 + 12);
              }
LABEL_20:
              v21 += 16LL;
              --v22;
            }
            while ( v22 );
          }
          v24 = *(_DWORD *)(v9 + 12);
          v25 = (unsigned int *)(v9 + 12);
          v26 = 0;
          v27 = 0;
          do
          {
            v28 = *v25;
            v25 += 4;
            i = v27;
            if ( HIWORD(v28) < HIWORD(v24) )
              i = v26;
            ++v27;
            v26 = i;
            if ( HIWORD(v28) < HIWORD(v24) )
              v28 = v24;
            v24 = v28;
          }
          while ( v27 < 4 );
          a2 = v34;
          v29 = v9 + 16LL * i;
          if ( v29 )
            goto LABEL_35;
        }
        else
        {
          i = v14;
        }
      }
LABEL_31:
      v29 = v9 + 16LL * i;
      if ( v19 != -1 )
        *(_QWORD *)v29 = v17;
      v30 = (unsigned __int16)*(_DWORD *)(v29 + 12) ^ ((unsigned __int8)*(_DWORD *)(v29 + 12) ^ (unsigned __int8)(*(_DWORD *)(v29 + 12) + 1)) & 0x3F;
      *(_DWORD *)(v29 + 12) = v30;
      *(_DWORD *)(v29 + 8) |= 1 << ((v16 - *(_QWORD *)v29) >> 4);
      if ( (v30 & 0x3F) != 0x20 || !v29 )
      {
        v2 = a1;
        continue;
      }
LABEL_35:
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
        goto LABEL_6;
      }
    }
    else
    {
      v32 = (volatile LONG *)&ActiveProcessors[4].StaticBitmap[15];
      if ( v11 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v32);
      else
        ExReleaseSpinLockExclusive(v32, v11);
    }
    break;
  }
}
