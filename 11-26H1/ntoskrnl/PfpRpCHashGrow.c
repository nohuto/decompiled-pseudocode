/*
 * XREFs of PfpRpCHashGrow @ 0x140B04FB4
 * Callers:
 *     PfpRpCHashAddEntries @ 0x140B04DEC (PfpRpCHashAddEntries.c)
 * Callees:
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PfpRpCHashGrow(__int64 a1, __int64 a2, unsigned __int64 *a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // ebx
  char v13; // dl
  unsigned int v14; // r15d
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // r13d
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 *v22; // rsi
  unsigned __int64 v23; // r12
  size_t v24; // r10
  int v25; // r14d
  char *v26; // rax
  int v27; // r9d
  __int64 i; // rdx
  __int64 v29; // r9
  char *Pool2; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v32; // [rsp+30h] [rbp-48h]
  __int128 v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+48h] [rbp-30h]
  void *Src[2]; // [rsp+50h] [rbp-28h]
  char v36; // [rsp+C0h] [rbp+48h]
  __int64 v37; // [rsp+C0h] [rbp+48h]

  v32 = (struct _KTHREAD *)(a1 + 128);
  v5 = a2;
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 128), a2, (__int64)a3, a4);
  v9 = *(_DWORD *)(v5 + 12);
  if ( 2 * *(_DWORD *)(v5 + 16) < v9 )
  {
    v12 = 0;
    PfLockExclusiveAcquire(a3, v6, v7, v8);
  }
  else
  {
    v10 = 2 * v9;
    if ( v10 < 8 )
      v10 = 8;
    v11 = v10 << *(_DWORD *)(v5 + 8);
    v12 = 0;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v13 = -1;
      HIDWORD(v34) = 0;
      *(_OWORD *)Src = *(_OWORD *)v5;
      v36 = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(v5 + 8)));
      v14 = 1 << v36;
      v15 = -1;
      v16 = 1 << v36;
      if ( 1 << v36 )
      {
        do
        {
          ++v15;
          v16 >>= 1;
        }
        while ( v16 );
      }
      v17 = v15 + 1;
      if ( ((v14 - 1) & v14) == 0 )
        v17 = v15;
      v18 = v11 >> v17;
      if ( ((v18 - 1) & v18) != 0 )
      {
        for ( ; v18; v18 >>= 1 )
          ++v13;
        v18 = 1 << v13;
      }
      LODWORD(v34) = 0;
      *((_QWORD *)&v33 + 1) = __PAIR64__(v18, v17);
      *(_QWORD *)&v33 = Pool2;
      memset_0(Pool2, 0, (unsigned __int64)v18 << v17);
      v22 = (__int64 *)Src[0];
      v23 = (unsigned __int64)Src[0] + ((unsigned __int64)HIDWORD(Src[1]) << v36);
      if ( Src[0] < (void *)v23 )
      {
        v24 = v14;
        v25 = 0;
        do
        {
          v20 = *v22;
          if ( *v22 )
          {
            if ( v18 )
            {
              v37 = *v22;
              v27 = 442596621 * (unsigned __int8)v20
                  + 37
                  * (BYTE6(v37)
                   + 37 * (BYTE5(v37) + 37 * (BYTE4(v37) + 37 * (BYTE3(v37) + 37 * (BYTE2(v37) + 37 * BYTE1(v37))))))
                  + HIBYTE(v37)
                  - 877075889;
              for ( i = 0LL; ; v27 = i + v29 )
              {
                v29 = (v18 - 1) & v27;
                v26 = &Pool2[v29 << v17];
                if ( !*(_QWORD *)v26 || *(_QWORD *)v26 == v20 )
                  break;
                if ( !i )
                {
                  i = 2654435761LL * v20 + 1;
                  if ( ((-79 * (_BYTE)v20) & 1) != 0 )
                    i = 2654435761LL * v20;
                }
              }
            }
            else
            {
              v26 = 0LL;
            }
            memmove(v26, v22, v24);
            v24 = v14;
            LODWORD(v34) = ++v25;
          }
          v22 = (__int64 *)((char *)v22 + v24);
        }
        while ( (unsigned __int64)v22 < v23 );
        v5 = a2;
      }
      PfLockExclusiveAcquire(a3, v19, v20, v21);
      *(_OWORD *)v5 = v33;
      *(_QWORD *)(v5 + 16) = v34;
      if ( Src[0] )
      {
        *(_QWORD *)Src[0] = a4->Thread;
        a4->Thread = (_KTHREAD *)Src[0];
      }
    }
    else
    {
      v12 = -1073741670;
    }
  }
  PfLockExclusiveRelease(v32);
  return v12;
}
