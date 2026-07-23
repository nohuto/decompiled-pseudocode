/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x1408DA960
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     CmpDeleteHive @ 0x1408DA884 (CmpDeleteHive.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 *     CmpIsKcbLockAllowed @ 0x140A96AA4 (CmpIsKcbLockAllowed.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a4,
        ULONG_PTR *a5)
{
  int v5; // esi
  int v6; // edi
  bool v8; // zf
  __int64 CellPaged; // rax
  __int16 v13; // cx
  unsigned __int8 *v14; // rbx
  int v15; // ebp
  WCHAR v16; // ax
  unsigned int v17; // ebx
  ULONG_PTR v18; // rdi
  unsigned __int16 v19; // ax
  ULONG_PTR v20; // rcx
  ULONG_PTR v21; // rdi
  signed __int64 *v22; // rbp
  struct _KLOCK_ENTRIES *v23; // r9
  void *v24; // rdx
  LegacyAutoBoost *v25; // rsi
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  ULONG_PTR v28; // rdi
  __int64 i; // rcx
  __int64 v30; // rdi
  __int64 *v31; // rbx
  signed __int64 v32; // rax
  signed __int64 v33; // rdx
  __int64 v34; // rtt
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KLOCK_ENTRIES *v37; // r9
  ULONG_PTR v39; // rdi
  unsigned __int16 v40; // ax
  __int16 v41; // cx
  __int16 v42; // ax
  unsigned __int16 v43; // ax
  __int16 v44; // cx
  __int16 v45; // ax
  __int16 v46; // cx
  __int16 v47; // ax
  __m128i v48; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v49; // [rsp+80h] [rbp+8h] BYREF
  int v50; // [rsp+84h] [rbp+Ch]
  __int64 v51; // [rsp+90h] [rbp+18h]

  v5 = 0;
  v6 = *(_DWORD *)(BugCheckParameter2 + 16);
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v51 = *(_QWORD *)(BugCheckParameter3 + 1648);
  v49 = -1;
  v50 = 0;
  v48.m128i_i32[1] = 0;
  *a5 = 0LL;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a4, &v49);
  if ( !CellPaged )
    return 3221225626LL;
  v13 = *(_WORD *)(CellPaged + 72);
  v14 = (unsigned __int8 *)(CellPaged + 76);
  if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
  {
    v15 = *(unsigned __int16 *)(CellPaged + 72);
    if ( *(_WORD *)(CellPaged + 72) )
    {
      do
      {
        v16 = *v14;
        if ( (unsigned __int8)v16 >= 0x61u )
        {
          if ( (unsigned __int8)v16 > 0x7Au )
            v16 = RtlUpcaseUnicodeChar(*v14);
          else
            v16 -= 32;
        }
        ++v14;
        v5 = v16 + 37 * v5;
        --v15;
      }
      while ( v15 );
    }
    v17 = v5 + 37 * v6;
  }
  else
  {
    v48.m128i_i16[0] = *(_WORD *)(CellPaged + 72);
    v48.m128i_i16[1] = v13;
    v48.m128i_i64[1] = CellPaged + 76;
    v17 = 37 * v6 + CmpHashUnicodeComponent(&v48);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v49);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v49);
  if ( !a2 || BugCheckParameter2 == a2 )
  {
    v18 = BugCheckParameter2;
    goto LABEL_22;
  }
  v19 = *(_WORD *)(a2 + 12);
  if ( *(_WORD *)(BugCheckParameter2 + 12) > v19 )
  {
    v18 = a2;
    v20 = BugCheckParameter2;
  }
  else
  {
    if ( *(_WORD *)(BugCheckParameter2 + 12) < v19 )
      goto LABEL_20;
    v44 = *(_WORD *)(BugCheckParameter2 + 186);
    if ( (v44 & 4) != 0 && (*(_DWORD *)(a2 + 184) & 0x20000) != 0 )
    {
      v18 = a2;
      v20 = BugCheckParameter2;
      goto LABEL_21;
    }
    if ( (v44 & 2) != 0 && (*(_DWORD *)(a2 + 184) & 0x40000) != 0 )
      goto LABEL_20;
    v45 = *(_WORD *)(a2 + 66);
    if ( *(__int16 *)(BugCheckParameter2 + 66) > v45 )
    {
      v18 = a2;
      v20 = BugCheckParameter2;
      goto LABEL_21;
    }
    if ( *(__int16 *)(BugCheckParameter2 + 66) < v45 || BugCheckParameter2 <= a2 )
    {
LABEL_20:
      v20 = a2;
      v18 = BugCheckParameter2;
    }
    else
    {
      v18 = a2;
      v20 = BugCheckParameter2;
    }
  }
LABEL_21:
  CmpUnlockKcb(v20);
LABEL_22:
  CmpUnlockKcb(v18);
  v21 = *(_QWORD *)(BugCheckParameter2 + 32);
  v22 = (signed __int64 *)(*(_QWORD *)(v21 + 1648)
                         + 24
                         * ((unsigned int)(*(_DWORD *)(v21 + 1656) - 1) & ((101027 * (v17 ^ (v17 >> 9))) ^ ((unsigned __int64)(101027 * (v17 ^ (v17 >> 9))) >> 9))));
  v25 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v22, 0LL, 0LL, v23);
  if ( _InterlockedCompareExchange64(v22, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v22, 0, v25, (struct _KTHREAD *)v22);
  if ( v25 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v25, v24);
    else
      *((_BYTE *)v25 + 10) = 1;
  }
  _m_prefetchw((const void *)(v21 + 4240));
  v26 = *(_DWORD *)(v21 + 4240);
  do
  {
    if ( !v26 )
      KeBugCheckEx(0x51u, 0x17uLL, v21, 9uLL, v17);
    v27 = v26;
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 4240), v26 + 1, v26);
  }
  while ( v27 != v26 );
  if ( !a2 || BugCheckParameter2 == a2 )
  {
    v28 = BugCheckParameter2;
  }
  else
  {
    v43 = *(_WORD *)(a2 + 12);
    if ( *(_WORD *)(BugCheckParameter2 + 12) <= v43
      && (*(_WORD *)(BugCheckParameter2 + 12) < v43
       || ((v46 = *(_WORD *)(BugCheckParameter2 + 186), (v46 & 4) == 0) || (*(_DWORD *)(a2 + 184) & 0x20000) == 0)
       && ((v46 & 2) != 0 && (*(_DWORD *)(a2 + 184) & 0x40000) != 0
        || (v47 = *(_WORD *)(a2 + 66), *(__int16 *)(BugCheckParameter2 + 66) <= v47)
        && (*(__int16 *)(BugCheckParameter2 + 66) < v47 || BugCheckParameter2 <= a2))) )
    {
      v28 = a2;
      CmpLockKcbShared(BugCheckParameter2);
    }
    else
    {
      v28 = BugCheckParameter2;
      CmpLockKcbShared(a2);
    }
  }
  CmpLockKcbShared(v28);
  for ( i = *(_QWORD *)(v51
                      + 24
                      * ((unsigned int)(*(_DWORD *)(BugCheckParameter3 + 1656) - 1) & ((101027 * (v17 ^ (v17 >> 9))) ^ ((unsigned __int64)(101027 * (v17 ^ (v17 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v17 == *(_DWORD *)i && a4 == *(_DWORD *)(i + 24) && BugCheckParameter3 == *(_QWORD *)(i + 16) )
    {
      v39 = i - 16;
      if ( BugCheckParameter2 == i - 16
        || (v40 = *(_WORD *)(v39 + 12), *(_WORD *)(BugCheckParameter2 + 12) <= v40)
        && (*(_WORD *)(BugCheckParameter2 + 12) < v40
         || ((v41 = *(_WORD *)(BugCheckParameter2 + 186), (v41 & 4) == 0) || (*(_DWORD *)(v39 + 184) & 0x20000) == 0)
         && ((v41 & 2) != 0 && (*(_DWORD *)(v39 + 184) & 0x40000) != 0
          || (v42 = *(_WORD *)(v39 + 66), *(__int16 *)(BugCheckParameter2 + 66) <= v42)
          && (*(__int16 *)(BugCheckParameter2 + 66) < v42 || BugCheckParameter2 <= v39))) )
      {
        if ( !a2 || (unsigned __int8)CmpIsKcbLockAllowed(a2, v39, &v49) )
        {
          a2 = v39;
        }
        else
        {
          CmpUnlockKcb(a2);
          CmpLockKcbShared(v39);
        }
      }
      else
      {
        CmpUnlockKcb(BugCheckParameter2);
        CmpLockKcbShared(v39);
        a2 = BugCheckParameter2;
      }
      CmpLockKcbShared(a2);
      CmpReferenceKeyControlBlock(v39);
      *a5 = v39;
      CmpUnlockKcb(v39);
      break;
    }
  }
  v30 = *(_QWORD *)(BugCheckParameter2 + 32);
  v31 = (__int64 *)(*(_QWORD *)(v30 + 1648)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(v30 + 1656) - 1) & ((101027 * (v17 ^ (v17 >> 9))) ^ ((unsigned __int64)(101027 * (v17 ^ (v17 >> 9))) >> 9))));
  v31[1] = 0LL;
  _m_prefetchw(v31);
  v32 = *v31;
  v33 = *v31 - 16;
  if ( (*v31 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v33 = 0LL;
  if ( (v32 & 2) != 0 || (v34 = *v31, v34 != _InterlockedCompareExchange64(v31, v33, v32)) )
    ExfReleasePushLock(v31);
  KeAbPostRelease((unsigned __int64)v31);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 4240), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v30, v35, v36, v37);
  return 0LL;
}
