/*
 * XREFs of MiSetIoPfnNodeCellsActive @ 0x140314080
 * Callers:
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIoSpaceGetBounds @ 0x140315778 (MiIoSpaceGetBounds.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x1403158BC (MiIsPageInIoHugeRangeTransition.c)
 *     MiFlushCachedIoPfnRange @ 0x140526AFC (MiFlushCachedIoPfnRange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiSetIoPfnNodeCellsActive(__int64 a1, __int64 a2, int a3)
{
  char *v5; // rbx
  unsigned __int64 v6; // r12
  _BYTE *v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int16 v18; // r8
  int v19; // edx
  int v20; // eax
  unsigned int v21; // r9d
  unsigned int v22; // edi
  __int64 result; // rax
  char v24; // cl
  unsigned __int64 v25; // r8
  char v26; // cl
  __int64 v27; // rcx
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // [rsp+20h] [rbp-128h]
  unsigned int v31; // [rsp+24h] [rbp-124h]
  int v32; // [rsp+28h] [rbp-120h]
  char v34; // [rsp+30h] [rbp-118h]
  int v35; // [rsp+34h] [rbp-114h]
  __int64 v36; // [rsp+38h] [rbp-110h]
  int v37; // [rsp+40h] [rbp-108h]
  _BYTE v38[48]; // [rsp+50h] [rbp-F8h] BYREF
  char v39; // [rsp+80h] [rbp-C8h] BYREF

  memset_0(v38, 0, 0xB0uLL);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v30 = *(_DWORD *)(a1 + 28);
  v31 = 3;
  v34 = 0;
  v9 = v8 - v6;
  v10 = *(_QWORD *)(a2 + 24);
  v11 = v6 - v10;
  v12 = v10 + 512;
  if ( v12 )
  {
    if ( v8 > v12 )
      v36 = 512LL;
    else
      v36 = v9 + v11;
  }
  else
  {
    v36 = v9 + v11;
  }
  v35 = 0;
  v32 = 0;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 172));
  v13 = a3;
  v14 = 0LL;
  if ( a3 )
    --*(_DWORD *)(a2 + 32);
  v15 = 1LL;
LABEL_7:
  v16 = v36;
  while ( v11 < v16 )
  {
    if ( v6 < *(_QWORD *)(a1 + 48) || v6 > *(_QWORD *)(a1 + 56) )
    {
      MiIoSpaceGetBounds(a1 + 48, v6);
      v13 = a3;
      v16 = v36;
    }
    if ( *(_DWORD *)(a1 + 24) != (_DWORD)v15 || *(_DWORD *)(a1 + 68) == 3 )
    {
      v17 = v11 + *(_QWORD *)(a2 + 24);
      if ( v17 <= qword_140E2D920 && ((unsigned __int16)v15 & (*(_QWORD *)(48 * v17 - 0x21FFFFFFFFD8LL) >> 54)) != 0 )
      {
        v22 = -1073741800;
        goto LABEL_23;
      }
      v18 = *(_WORD *)(a2 + 2 * v11 + 176);
      v19 = (*(_DWORD *)(a2
                       + 4
                       * ((unsigned __int64)(2
                                           * (((unsigned int)v6 & ((unsigned int)(v15 << ((unsigned __int8)dword_140E2D878
                                                                                        - 12))
                                                                 - (_DWORD)v15))
                                            - *(_DWORD *)(a2 + 24))) >> 5)
                       + 44) >> (2
                               * ((v6 & ((v15 << ((unsigned __int8)dword_140E2D878 - 12)) - v15)) - *(_BYTE *)(a2 + 24)))) & 3;
      v37 = v19;
      if ( v18 == -1 )
      {
        v22 = -1073741823;
LABEL_23:
        if ( v7 )
          MiFlushCachedIoPfnRange(v7, (v5 - v7 - 48) >> 3, v31);
        goto LABEL_29;
      }
      if ( v18 )
        goto LABEL_18;
      v20 = *(_DWORD *)(a2 + 32);
      if ( !v20 )
      {
        v26 = v34;
        if ( !v13 )
          v26 = v15;
        v34 = v26;
      }
      v21 = v30;
      *(_DWORD *)(a2 + 32) = v20 + 1;
      if ( v19 == v30 )
        goto LABEL_18;
      if ( v30 == (_DWORD)v15 )
        *(_BYTE *)(a2 + 40) = v15;
      if ( v19 != 3 )
      {
        if ( v35 == (_DWORD)v14 )
        {
          MiFlushEntireTbDueToAttributeChange();
          v19 = v37;
          v15 = 1LL;
          v21 = v30;
          v14 = 0LL;
          v35 = 1;
        }
        if ( v19 == (_DWORD)v15 && v32 == (_DWORD)v14 )
        {
          _InterlockedAdd(&dword_140E3607C, v15);
          if ( !v7 )
            goto LABEL_53;
          if ( v31 != v21 )
          {
            MiFlushCachedIoPfnRange(v7, (v5 - v7 - 48) >> 3, v31);
            v14 = 0LL;
            v15 = 1LL;
LABEL_53:
            v21 = v30;
            v7 = v38;
            v5 = &v39;
          }
          *(_QWORD *)v5 = v6;
          v5 += 8;
          v31 = v21;
          if ( v5 == v7 + 176 )
          {
            v28 = MiFlushCachedIoPfnRange(v7, 16LL, v21);
            v29 = v32;
            v14 = 0LL;
            v21 = v30;
            v7 = 0LL;
            v15 = 1LL;
            if ( v28 )
              v29 = 1;
            v32 = v29;
          }
        }
      }
      v24 = (2 * ((v6 & ((v15 << ((unsigned __int8)dword_140E2D878 - 12)) - v15)) - *(_BYTE *)(a2 + 24))) & 0x1F;
      v25 = (unsigned __int64)(2
                             * (((unsigned int)v6 & ((unsigned int)(v15 << ((unsigned __int8)dword_140E2D878 - 12))
                                                   - (_DWORD)v15))
                              - *(_DWORD *)(a2 + 24))) >> 5;
      *(_DWORD *)(a2 + 4 * v25 + 44) = (v21 << v24) | *(_DWORD *)(a2 + 4 * v25 + 44) & ~(3 << v24);
      LOBYTE(v19) = v21;
LABEL_18:
      *(_DWORD *)(a1 + 72) |= (_DWORD)v15 << v19;
      *(_WORD *)(a2 + 2 * v11 + 176) += v15;
      if ( *(_QWORD *)(a1 + 80) == v14 )
        *(_QWORD *)(a1 + 80) = a2;
      v13 = a3;
      v11 += v15;
      v6 += v15;
      goto LABEL_7;
    }
    *(_DWORD *)(a1 + 72) |= (_DWORD)v15 << *(_DWORD *)(a1 + 64);
    v27 = v16 - v11;
    if ( *(_QWORD *)(a1 + 56) - v6 + 1 <= v16 - v11 )
      v27 = *(_QWORD *)(a1 + 56) - v6 + 1;
    v6 += v27;
    v11 += v27;
  }
  if ( v34 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)a1 + 8LL));
    if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(a2 + 24)) )
      _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)a1 + 16LL));
  }
  if ( v7 )
  {
    MiFlushCachedIoPfnRange(v7, (v5 - v7 - 48) >> 3, v31);
    LODWORD(v14) = 0;
  }
  v22 = v14;
LABEL_29:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 172));
  result = v22;
  *(_QWORD *)(a1 + 32) = v6;
  return result;
}
