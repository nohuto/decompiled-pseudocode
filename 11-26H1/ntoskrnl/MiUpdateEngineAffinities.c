/*
 * XREFs of MiUpdateEngineAffinities @ 0x1404F725C
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x1404E5460 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiInitializeGroupAffinity @ 0x1404E83C0 (MiInitializeGroupAffinity.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MiInitializeZeroingDomains @ 0x140885648 (MiInitializeZeroingDomains.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUpdateEngineAffinities(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rsi
  int v6; // edi
  __int64 v8; // rbp
  __int64 v9; // r13
  int v10; // esi
  int v11; // ecx
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 result; // rax
  volatile LONG *v17; // r13
  KIRQL v18; // al
  int v19; // edx
  KIRQL v20; // r8
  int v21; // r9d
  unsigned int v22; // r10d
  void *v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // r8
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-48h]
  KIRQL OldIrql; // [rsp+70h] [rbp+8h]
  int v32; // [rsp+78h] [rbp+10h]
  __int64 v33; // [rsp+88h] [rbp+20h]

  v4 = *(unsigned int *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 8);
  v8 = *a2;
  v9 = *(_QWORD *)(384 * v4 + qword_140E2D838 + 376);
  v33 = v9;
  if ( v6 == a2[32] )
    return 1LL;
  v10 = v4 | 0x80000000;
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 4);
    *(_BYTE *)a1 = 1;
    v12 = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(a1 + 16) = v12;
    v13 = (unsigned int)(4 * v11);
    v14 = (unsigned int)(v12 * v11);
    v30 = 16 * v13;
    v15 = (unsigned int)v14;
    result = ExAllocatePoolMm(64LL, 16 * v13 + 16 * ((unsigned int)(2 * v14) + 3 * v14), 1666869581, v10);
    *(_QWORD *)(a1 + 24) = result;
    if ( !result )
      return result;
    v17 = (volatile LONG *)(v9 + 64);
    v18 = ExAcquireSpinLockShared(v17);
    v19 = KeNumberProcessors_0;
    v20 = v18;
    v21 = *(unsigned __int16 *)(a3 + 16);
    v22 = *(_DWORD *)(a1 + 4);
    OldIrql = v18;
    if ( v22 != v21 )
      goto LABEL_9;
    if ( *(unsigned __int16 *)(a3 + 2 * v8 + 18) < (unsigned int)KeNumberProcessors_0 )
      v19 = *(unsigned __int16 *)(a3 + 2 * v8 + 18);
    if ( v6 == v19 )
    {
      v32 = 0;
      v23 = (void *)(*(_QWORD *)(a1 + 24) + 32LL * v22);
      *(_QWORD *)(a1 + 32) = v23;
      memmove(v23, *(const void **)a3, 16LL * v22);
      v20 = OldIrql;
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 24) + 16LL * (unsigned int)(3 * *(_DWORD *)(a1 + 4));
    }
    else
    {
LABEL_9:
      *(_DWORD *)(a1 + 4) = v21;
      v6 = *(unsigned __int16 *)(a3 + 2 * v8 + 18);
      *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(a3 + 2 * v8 + 24);
      v32 = 1;
    }
    if ( v20 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v17);
    else
      ExReleaseSpinLockShared(v17, v20);
    v24 = *(_QWORD *)(a1 + 24);
    if ( !v32 )
    {
      v25 = (__int64 *)(v24 + v30);
      v26 = v24 + v30 + 48 * v15;
      *(_DWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 48) = v24 + v30;
      if ( (_DWORD)v15 )
      {
        v27 = v25 + 2;
        v28 = v15;
        do
        {
          *v25 = v26;
          v25 += 6;
          v27[1] = v27;
          *v27 = v27;
          v29 = 16LL * *(unsigned int *)(a1 + 4) + v26;
          *(v27 - 1) = v29;
          v27 += 6;
          v26 = 16LL * *(unsigned int *)(a1 + 4) + v29;
          --v28;
        }
        while ( v28 );
      }
      MiInitializeGroupAffinity(*(_OWORD **)(a1 + 24), *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 4), v8);
      MiInitializeZeroingDomains(a1, (unsigned int)v8);
      return 1LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
    v9 = v33;
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( v6 == a2[32] )
      return 1LL;
  }
}
