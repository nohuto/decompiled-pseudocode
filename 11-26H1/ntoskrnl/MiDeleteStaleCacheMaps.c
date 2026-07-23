/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x1406F8760
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x1403158BC (MiIsPageInIoHugeRangeTransition.c)
 *     MiIsPageInHugePfn @ 0x140315910 (MiIsPageInHugePfn.c)
 *     MiIoPfnTreeLockContended @ 0x1404CC934 (MiIoPfnTreeLockContended.c)
 *     MiConvertIoPfnTreeLockExclusiveToShared @ 0x1404FB1A4 (MiConvertIoPfnTreeLockExclusiveToShared.c)
 *     MiDereferenceIoHugeRange @ 0x1406F0028 (MiDereferenceIoHugeRange.c)
 *     MiFlushStaleCacheMap @ 0x1406F8C5C (MiFlushStaleCacheMap.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteStaleCacheMaps(__int64 a1)
{
  __int64 *v1; // rdx
  char v2; // di
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int64 *v9; // r15
  __int64 v10; // rdx
  PVOID *v11; // rcx
  PVOID *v12; // r13
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 i; // rsi
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rcx
  BOOL IsPageInHugePfn; // eax
  unsigned __int8 v24; // dl
  BOOL v25; // edi
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  char v29; // di
  signed __int64 v30; // rdx
  _QWORD *v31; // rax
  unsigned __int64 v32; // rdx
  bool v33; // zf
  struct _LIST_ENTRY **v34; // rcx
  struct _LIST_ENTRY **v35; // rdx
  struct _LIST_ENTRY *v36; // rax
  unsigned __int64 *v37; // rbx
  _QWORD *v38; // rcx
  PVOID *v39; // rax
  __int64 j; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-69h] BYREF
  int v42; // [rsp+20h] [rbp-49h]
  int v43; // [rsp+24h] [rbp-45h]
  int v44; // [rsp+28h] [rbp-41h]
  int v45; // [rsp+2Ch] [rbp-3Dh]
  PVOID P[2]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v47[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v48; // [rsp+50h] [rbp-19h]
  _OWORD v49[6]; // [rsp+58h] [rbp-11h]
  char v51; // [rsp+D8h] [rbp+6Fh]
  char v52; // [rsp+E0h] [rbp+77h]
  KIRQL OldIrql; // [rsp+E8h] [rbp+7Fh]

LABEL_1:
  P[1] = P;
  v1 = (__int64 *)&unk_140E35FE0;
  v2 = 0;
  P[0] = P;
  v3 = 2LL;
  v51 = 0;
  v43 = 0;
  v4 = 0LL;
  v45 = 0;
  v52 = 0;
  LOBYTE(v44) = 0;
  v42 = 0;
  v49[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  do
  {
    v5 = *v1;
    v1 += 8;
    *(_QWORD *)((char *)&v49[1] + v4 * 8 + 8) = v5;
    v47[v4++] = v5;
    --v3;
  }
  while ( v3 );
  v6 = 0LL;
  OldIrql = MiLockIoPfnTree(1LL);
  v9 = (volatile signed __int64 *)&unk_140E35FC8;
  v10 = 2LL;
  v48 = 2LL;
  do
  {
    v11 = (PVOID *)*((_QWORD *)v9 + 2);
    if ( v11 )
    {
      do
      {
        v12 = *(PVOID **)((char *)v49 + v6 * 8);
        if ( v12 > v11 )
        {
          v12 = v11;
          *(_QWORD *)((char *)v49 + v6 * 8) = v11;
        }
        if ( *v9 < 0x400uLL && !*((_QWORD *)v9 + 1) )
          break;
        v13 = *((_QWORD *)v9 - 1);
        v11 = (PVOID *)v47[v6];
        if ( v13 )
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(v13 + 24);
            if ( (unsigned __int64)v11 < v14 )
            {
              v15 = *(_QWORD *)v13;
            }
            else
            {
              if ( (unsigned __int64)v11 < v14 + 512 )
                goto LABEL_16;
              v15 = *(_QWORD *)(v13 + 8);
            }
            if ( !v15 )
              break;
            v13 = v15;
          }
          while ( 1 )
          {
LABEL_16:
            v16 = *(_QWORD *)(v13 + 8);
            v17 = v13;
            if ( v16 )
            {
              v11 = *(PVOID **)v16;
              if ( *(_QWORD *)v16 )
              {
                do
                {
                  v16 = (unsigned __int64)v11;
                  v11 = (PVOID *)*v11;
                }
                while ( v11 );
              }
            }
            else
            {
              for ( i = *(_QWORD *)(v13 + 16); ; i = *(_QWORD *)(v16 + 16) )
              {
                v16 = i & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v16 || *(_QWORD *)v16 == v17 )
                  break;
                v17 = v16;
              }
            }
            v19 = v43;
            if ( v43 )
            {
              --v43;
              if ( v19 == 1 )
              {
                MiConvertIoPfnTreeLockExclusiveToShared();
                v2 = 0;
                v51 = 0;
              }
            }
            v20 = *(_QWORD *)(v13 + 24);
            if ( *(_DWORD *)(v13 + 32) )
            {
              v12 = (PVOID *)((char *)v12 - 1);
              v47[v6] = v20 + 512;
              *(_QWORD *)((char *)v49 + v6 * 8) = v12;
              if ( !v12 )
                goto LABEL_67;
              if ( (++v42 & 0xF) == 0
                && ((unsigned int)MiIoPfnTreeLockContended(v2) || OldIrql != 17 && KeShouldYieldProcessor()) )
              {
                LOBYTE(v11) = OldIrql;
                MiUnlockIoPfnTree(v11, (unsigned int)(v2 != 0) + 1, v7, v8);
                MiLockIoPfnTree(1LL);
                v21 = 0;
                if ( !v2 )
                  v21 = v43;
                goto LABEL_35;
              }
            }
            else
            {
              if ( !v2 )
              {
                v47[v6] = v20;
                LOBYTE(v11) = OldIrql;
                MiUnlockIoPfnTree(v11, 1LL, v7, v8);
                v2 = 1;
                v51 = 1;
                v43 = 64;
                _InterlockedOr(v41, 0);
                v45 = KiCacheFlushTimeStamp;
                LOBYTE(v44) = 0;
                v52 = 0;
                MiLockIoPfnTree(2LL);
                goto LABEL_66;
              }
              v22 = *(_QWORD *)(v13 + 24);
              ++v42;
              IsPageInHugePfn = MiIsPageInHugePfn(v22);
              v25 = IsPageInHugePfn;
              if ( !v52 && !IsPageInHugePfn )
              {
                MiFlushEntireTbDueToAttributeChange();
                v24 = v25 + 1;
                v52 = v25 + 1;
              }
              if ( (_BYTE)v44
                || v25
                || !*(_BYTE *)(v13 + 40)
                || (v26 = *(_DWORD *)(v13 + 36), (unsigned int)(v45 - v26) > 2)
                || ((unsigned __int8)v26 & v24) == 0 && (unsigned int)(v45 - v26) >= 2 )
              {
                v29 = v42;
              }
              else
              {
                v27 = MiFlushStaleCacheMap(v13);
                v28 = (unsigned __int8)v44;
                if ( v27 )
                  v28 = 1;
                v29 = 0;
                v42 = 0;
                v44 = v28;
              }
              RtlAvlRemoveNode((unsigned __int64 *)v9 - 1, v13);
              if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(v13 + 24)) )
                _InterlockedDecrement64(v9 + 1);
              v30 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
              _InterlockedDecrement64(v9 + 2);
              v31 = P[0];
              v32 = v30 - 1;
              if ( *((PVOID **)P[0] + 1) != P )
                __fastfail(3u);
              *(PVOID *)v13 = P[0];
              v11 = P;
              *(_QWORD *)(v13 + 8) = P;
              v31[1] = v13;
              P[0] = (PVOID)v13;
              v47[v6] = *(_QWORD *)(v13 + 24) + 512LL;
              if ( v32 <= 0x300 )
                goto LABEL_67;
              v12 = (PVOID *)((char *)v12 - 1);
              *(_QWORD *)((char *)v49 + v6 * 8) = v12;
              if ( !v12 )
                goto LABEL_67;
              v33 = (v29 & 0xF) == 0;
              v2 = v51;
              if ( v33 && ((unsigned int)MiIoPfnTreeLockContended(v51) || OldIrql != 17 && KeShouldYieldProcessor()) )
              {
                LOBYTE(v11) = OldIrql;
                MiUnlockIoPfnTree(v11, 2LL, v7, v8);
                MiLockIoPfnTree(1LL);
                v21 = 0;
LABEL_35:
                v2 = 0;
                v43 = v21;
                v51 = 0;
                goto LABEL_66;
              }
            }
            if ( !v16 )
              break;
            v13 = v16;
          }
        }
        if ( !*(_QWORD *)((char *)&v49[1] + v6 * 8 + 8) )
          break;
        v47[v6] = 0LL;
        *(_QWORD *)((char *)&v49[1] + v6 * 8 + 8) = 0LL;
LABEL_66:
        v11 = (PVOID *)*((_QWORD *)v9 + 2);
      }
      while ( v11 );
LABEL_67:
      v2 = v51;
      v10 = v48;
    }
    v9 += 8;
    ++v6;
    v48 = --v10;
  }
  while ( v10 );
  LOBYTE(v11) = OldIrql;
  MiUnlockIoPfnTree(v11, (unsigned int)(v2 != 0) + 1, v7, v8);
  v34 = (struct _LIST_ENTRY **)&unk_140E35FE0;
  v35 = (struct _LIST_ENTRY **)v47;
  do
  {
    v36 = *v35++;
    *v34 = v36;
    v34 += 8;
  }
  while ( (__int64)v34 < (__int64)&stru_140E36058.List.Blink );
  while ( 1 )
  {
    v37 = (unsigned __int64 *)P[0];
    if ( P[0] == P )
      break;
    v38 = *(_QWORD **)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] || (v39 = (PVOID *)*((_QWORD *)P[0] + 1), *v39 != P[0]) )
      __fastfail(3u);
    *v39 = v38;
    v38[1] = v39;
    MiDereferenceIoHugeRange(v37[3]);
    ExFreePoolWithTag(v37, 0);
  }
  ExAcquireSpinLockExclusive(&dword_140E36050);
  for ( j = 0LL; j < 128; j += 64LL )
  {
    if ( *(_QWORD *)((char *)&MiState + j + 39112) >= 0x400uLL || *(_QWORD *)((char *)&MiState + j + 39120) )
    {
      if ( OldIrql == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36050);
      else
        ExReleaseSpinLockExclusive(&dword_140E36050, OldIrql);
      goto LABEL_1;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36050);
  else
    ExReleaseSpinLockExclusive(&dword_140E36050, OldIrql);
}
