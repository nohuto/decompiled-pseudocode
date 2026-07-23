/*
 * XREFs of MiInitializeSlabAllocator @ 0x14070BF18
 * Callers:
 *     MiInitializeNuma @ 0x1406E7EDC (MiInitializeNuma.c)
 *     MiInitializeSlabIdentities @ 0x14070C2BC (MiInitializeSlabIdentities.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiInitializeSlabAllocator(volatile LONG *a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r14
  KIRQL v6; // bp
  __int64 v7; // rsi
  volatile LONG *v9; // rdi
  _QWORD *v10; // rbx
  __int16 v11; // ax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r15d
  __int64 v15; // r8
  _QWORD *v16; // rcx
  _QWORD *v17; // r8
  __int64 *v18; // r13
  unsigned __int8 v19; // si
  __int64 v20; // rbp
  __int64 v21; // r12
  unsigned __int64 v22; // r14
  __int64 v23; // rbx
  unsigned int v24; // [rsp+20h] [rbp-58h]
  char v26; // [rsp+88h] [rbp+10h]
  _QWORD *v27; // [rsp+98h] [rbp+20h]

  v5 = a2;
  v6 = 17;
  v7 = *(_QWORD *)(a4 + 16) + 56320LL * a3;
  v26 = 17;
  v9 = a1;
  v10 = (_QWORD *)(v7 + 56112);
  if ( a2 == 8 && *v10 )
  {
    v6 = ExAcquireSpinLockExclusive(a1 + 4);
    goto LABEL_10;
  }
  memset_0((void *)a1, 0, 0xE8uLL);
  v11 = v9[34] & 0xFFEF;
  *((_QWORD *)v9 + 3) = a4;
  *((_DWORD *)v9 + 32) = v5;
  *((_DWORD *)v9 + 33) = a3;
  *((_WORD *)v9 + 68) = v11 | 8;
  *((_QWORD *)v9 + 28) = v9 + 54;
  *((_QWORD *)v9 + 27) = v9 + 54;
  *((_QWORD *)v9 + 25) = MiReplenishSlabAllocatorWorker;
  if ( (_DWORD)v5 == 7 )
  {
    *((_WORD *)v9 + 68) |= 6u;
  }
  else
  {
    if ( (_DWORD)v5 != 2 )
      goto LABEL_9;
    *((_WORD *)v9 + 68) |= 2u;
  }
  *((_QWORD *)v9 + 13) = 512LL;
LABEL_9:
  v12 = 88 * v5;
  *((_QWORD *)v9 + 10) = v7 + 88 * v5 + 55296;
  *(_QWORD *)(v12 + v7 + 55312) = 0LL;
  *(_DWORD *)(v12 + v7 + 55324) = 2;
  *(_QWORD *)(v12 + v7 + 55296) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(v12 + v7 + 55304) = 0x3FFFFFFFFFLL;
  *(_DWORD *)(v12 + v7 + 55328) = 0;
  if ( (_DWORD)v5 == 8 )
  {
LABEL_10:
    *((_WORD *)v9 + 68) |= 2u;
    v26 = v6;
    if ( *v10 )
    {
      *((_QWORD *)v9 + 4) = *v10 + 312000LL;
      *((_QWORD *)v9 + 5) = *v10 + 312512LL;
      v13 = 0LL;
      *((_QWORD *)v9 + 11) = *v10 + 313024LL;
      v14 = 65;
      v24 = 65;
      v15 = 65LL;
      do
      {
        v16 = (_QWORD *)(v13 + *((_QWORD *)v9 + 11));
        v13 += 16LL;
        v16[1] = v16;
        *v16 = v16;
        --v15;
      }
      while ( v15 );
      v17 = v9 + 16;
      *((_QWORD *)v9 + 8) = *(_QWORD *)(v7 + 56112);
      v18 = (__int64 *)(v9 + 18);
      *((_QWORD *)v9 + 9) = *(_QWORD *)(v7 + 56112) + 266240LL;
    }
    else
    {
      v14 = 0;
      v18 = (__int64 *)(v9 + 18);
      v24 = 0;
      v17 = v9 + 16;
    }
    v19 = 0;
    v27 = v17;
    if ( !v14 )
      goto LABEL_22;
    goto LABEL_18;
  }
  v18 = (__int64 *)(v9 + 18);
  v27 = v9 + 16;
  *((_QWORD *)v9 + 9) = v7 + 704 * v5 + 49664;
  *((_QWORD *)v9 + 8) = v7 + (v5 << 12) + 16896;
  v19 = 0;
  v24 = 1;
  do
  {
LABEL_18:
    v20 = 8LL;
    v21 = 704LL * v19;
    v22 = (unsigned __int64)v19 << 12;
    do
    {
      v23 = *v18;
      memset_0((void *)(v22 + *v27), -1, 0x200uLL);
      *(_QWORD *)(v21 + v23 + 16) = 0LL;
      v22 += 512LL;
      *(_DWORD *)(v21 + v23 + 28) = 2;
      *(_QWORD *)(v21 + v23) = 0x3FFFFFFFFFLL;
      *(_QWORD *)(v21 + v23 + 8) = 0x3FFFFFFFFFLL;
      *(_DWORD *)(v21 + v23 + 32) = 0;
      v21 += 88LL;
      --v20;
    }
    while ( v20 );
    ++v19;
  }
  while ( v19 < v24 );
  v9 = a1;
  v6 = v26;
LABEL_22:
  if ( v6 != 17 )
    ExReleaseSpinLockExclusive(v9 + 4, v6);
}
