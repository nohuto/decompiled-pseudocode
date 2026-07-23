/*
 * XREFs of MiSignalNewAcceleratorsAvailable @ 0x140714488
 * Callers:
 *     MiAcceptNewAccelerators @ 0x140885D8C (MiAcceptNewAccelerators.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiSignalNewAcceleratorsAvailable(char ***a1)
{
  int v2; // ebx
  KIRQL v3; // r13
  char **v4; // rcx
  char *v5; // rax
  char **v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  char *v11; // rax
  char **v12; // rcx
  char **v13; // rcx
  char *v14; // rax
  PVOID v15; // rcx
  __int64 *result; // rax
  __int64 v17; // rax
  void *v18; // rsi
  __int64 v19; // r13
  unsigned int v20; // r9d
  int v21; // r15d
  char *v22; // r14
  unsigned int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // ebx
  char *v27; // rdx
  __int64 i; // r8
  unsigned __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r14
  volatile LONG *v34; // rdi
  KIRQL v35; // al
  KIRQL v36; // r12
  int v37; // [rsp+24h] [rbp-4Ch]
  PVOID P[2]; // [rsp+28h] [rbp-48h] BYREF
  char *v39; // [rsp+38h] [rbp-38h]
  unsigned int v40; // [rsp+40h] [rbp-30h]
  __int64 v41; // [rsp+50h] [rbp-20h] BYREF
  int v42; // [rsp+58h] [rbp-18h]
  _BYTE vars0[40]; // [rsp+70h] [rbp+0h] BYREF

  v40 = 64;
  v41 = 0LL;
  v42 = 0;
  v2 = 0;
  P[1] = P;
  P[0] = P;
  v37 = 0;
  v3 = ExAcquireSpinLockExclusive(&dword_140E366B0);
  if ( !byte_140E36684 )
  {
    while ( 1 )
    {
      v4 = *a1;
      if ( *a1 == (char **)a1 || word_140E2D82A == -1 )
        goto LABEL_19;
      if ( v4[1] != (char *)a1 || (v5 = *v4, *((char ***)*v4 + 1) != v4) )
        __fastfail(3u);
      *a1 = (char **)v5;
      v6 = v4;
      *((_QWORD *)v5 + 1) = a1;
      v7 = *((unsigned int *)v4 + 6);
      v8 = P[0];
      if ( (unsigned int)v7 >= 0x40 )
        break;
      v9 = *((unsigned int *)v4 + 6);
      v10 = *(_QWORD *)(384 * v7 + qword_140E2D838 + 376);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 64));
      if ( *(_WORD *)(v10 + 18) == 0xFFFF )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 64));
        v8 = P[0];
        if ( *((PVOID **)P[0] + 1) != P )
          __fastfail(3u);
        *v6 = (char *)P[0];
        v6[1] = (char *)P;
LABEL_11:
        v2 = v37;
        v8[1] = v6;
        P[0] = v6;
      }
      else
      {
        *((_BYTE *)&v41 + (v9 >> 3)) |= 1 << (v7 & 7);
        v11 = (char *)&unk_140E36280 + 16 * v9;
        v12 = (char **)*((_QWORD *)v11 + 1);
        if ( *v12 != v11 )
          __fastfail(3u);
        *v6 = v11;
        v6[1] = (char *)v12;
        *v12 = (char *)v6;
        *((_QWORD *)v11 + 1) = v6;
        ++dword_140E36680;
        ++*(_WORD *)(v10 + 18);
        ++*(_WORD *)(v10 + 24);
        ++word_140E2D82A;
        ++word_140E2D830;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 64));
        v2 = 1;
        v37 = 1;
      }
    }
    if ( *((PVOID **)P[0] + 1) != P )
      __fastfail(3u);
    *v4 = (char *)P[0];
    v4[1] = (char *)P;
    goto LABEL_11;
  }
LABEL_19:
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E366B0);
  else
    ExReleaseSpinLockExclusive(&dword_140E366B0, v3);
  while ( 1 )
  {
    v13 = *a1;
    if ( *a1 == (char **)a1 )
      break;
    if ( v13[1] != (char *)a1 || (v14 = *v13, *((char ***)*v13 + 1) != v13) )
LABEL_30:
      __fastfail(3u);
    *a1 = (char **)v14;
    *((_QWORD *)v14 + 1) = a1;
    ExFreePoolWithTag(v13, 0);
  }
  while ( 1 )
  {
    v15 = P[0];
    result = (__int64 *)P;
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_30;
    v17 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_30;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v17 + 8) = P;
    ExFreePoolWithTag(v15, 0);
  }
  if ( v2 )
  {
    for ( result = (__int64 *)PsGetNextPartition(0LL); ; result = (__int64 *)PsGetNextPartition(v18) )
    {
      v18 = result;
      if ( !result )
        break;
      v19 = *result;
      KeSetEvent((PRKEVENT)(*result + 136), 0, 0);
      v20 = 0;
      v21 = (((unsigned __int8)vars0 - 32) & 4) != 0LL ? 0x20 : 0;
      v22 = (char *)&v41 + (-(__int64)((((unsigned __int8)vars0 - 32) & 4) != 0LL) & 0xFFFFFFFFFFFFFFFCuLL);
      v39 = v22;
      do
      {
        v23 = v20 < v40 ? v20 : 0;
        v24 = v40 - 1;
        while ( 1 )
        {
          v25 = v21 + v24;
          if ( v24 - v23 != -1 )
            break;
          v26 = -1;
LABEL_44:
          if ( !v23 )
            goto LABEL_50;
          v30 = v20 + 1;
          if ( v20 + 1 > v40 )
            v30 = v40;
          v24 = v30 - 1;
          v23 = 0;
        }
        v27 = &v22[8 * ((unsigned __int64)(v21 + v23) >> 6)];
        for ( i = ~*(_QWORD *)v27 | ((1LL << ((unsigned __int8)v21 + (unsigned __int8)v23)) - 1);
              i == -1;
              i = ~*(_QWORD *)v27 )
        {
          v27 += 8;
          if ( v27 > &v22[8 * ((unsigned __int64)v25 >> 6)] )
            goto LABEL_48;
        }
        _BitScanForward64(&v29, ~i);
        v26 = ((unsigned int)((v27 - v22) >> 3) << 6) + v29;
        if ( v26 > v25 )
        {
LABEL_48:
          v26 = -1;
          goto LABEL_44;
        }
        if ( v26 == -1 )
          goto LABEL_44;
        v26 -= v21;
LABEL_50:
        if ( v26 < v20 || v26 == -1 )
          break;
        v31 = 56320LL * v26;
        v32 = *(_QWORD *)(v19 + 16);
        v33 = *(_QWORD *)(v31 + v32 + 14192);
        if ( v33 )
        {
          v34 = (volatile LONG *)(v31 + v32 + 14200);
          v35 = ExAcquireSpinLockExclusive(v34);
          *(_BYTE *)(v33 + 163) = 0;
          v36 = v35;
          KeSetEvent((PRKEVENT)(v33 + 168), 0, 0);
          if ( v36 == 17 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v34);
          else
            ExReleaseSpinLockExclusive(v34, v36);
        }
        v22 = v39;
        v20 = v26 + 1;
      }
      while ( v26 + 1 < 0x40 );
    }
  }
  return result;
}
