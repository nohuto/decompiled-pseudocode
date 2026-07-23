/*
 * XREFs of KiComputeCpuSetAffinity @ 0x14022B948
 * Callers:
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     KiCopyGroupMasksToAffinityEx @ 0x14043FE50 (KiCopyGroupMasksToAffinityEx.c)
 *     KiGetSystemAllowedSetsAffinityEx @ 0x140440640 (KiGetSystemAllowedSetsAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiComputeCpuSetAffinity(__int64 a1, struct _KAFFINITY_EX *a2)
{
  $B38C3B1372D6E954799962D5DD404846 *v4; // rsi
  __int64 v5; // r12
  unsigned __int16 v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // r13
  unsigned __int16 v9; // di
  unsigned __int16 Size; // ax
  unsigned __int16 Count; // si
  char v12; // r12
  __int64 v13; // rax
  unsigned __int16 j; // cx
  __int64 result; // rax
  _QWORD *v16; // rdx
  unsigned __int16 k; // cx
  __int64 v18; // rdx
  unsigned __int16 m; // cx
  struct _KAFFINITY_EX *v20; // r8
  unsigned __int16 i; // cx
  unsigned int v22; // r15d
  unsigned __int16 v23; // r10
  unsigned __int16 v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  char v29; // si
  unsigned __int16 v30; // [rsp+20h] [rbp-E0h]
  struct _KAFFINITY_EX v31; // [rsp+30h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v32; // [rsp+140h] [rbp+40h] BYREF
  struct _KAFFINITY_EX v33; // [rsp+250h] [rbp+150h] BYREF

  memset_0(&v31.8, 0, sizeof(v31.8));
  memset_0(&v33.8, 0, sizeof(v33.8));
  memset_0(&v32.8, 0, sizeof(v32.8));
  *(_QWORD *)&v31.Count = 2097153LL;
  memset_0(&v31.8, 0, sizeof(v31.8));
  *(_QWORD *)&v33.Count = 2097153LL;
  memset_0(&v33.8, 0, sizeof(v33.8));
  *(_QWORD *)&v32.Count = 2097153LL;
  memset_0(&v32.8, 0, sizeof(v32.8));
  v4 = &a2->8;
  memset_0(&a2->8, 0, 8LL * a2->Count);
  a2->Count = 1;
  v5 = *(_QWORD *)(a1 + 544);
  v6 = KiMaximumGroups;
  v7 = (_QWORD *)(v5 + 1736);
  v8 = (_QWORD *)(v5 + 1744);
  if ( (*(_DWORD *)(v5 + 1532) & 0x80u) != 0 )
  {
    v7 = (_QWORD *)*v7;
    v8 = (_QWORD *)*v8;
  }
  KiGetSystemAllowedSetsAffinityEx(&v31, (unsigned __int16)KiMaximumGroups, 0LL);
  if ( *(_BYTE *)(a1 + 959) )
  {
    KiGetSystemAllowedSetsAffinityEx(a2, v6, *(unsigned __int8 *)(a1 + 959));
    RtlOrAffinityEx(&v31, a2, &v31);
  }
  KiCopyGroupMasksToAffinityEx(a2, v7, v6);
  v9 = 0;
  if ( (*(_DWORD *)(v5 + 496) & 0x8000000) != 0 )
  {
    for ( i = 0; i < a2->Count; ++i )
    {
      if ( a2->Bitmap[i] )
      {
        v12 = 0;
        RtlpCopyAffinityEx(&v31, v31.Size, a2);
        RtlpCopyAffinityEx(&v33, v33.Size, a2);
        goto LABEL_15;
      }
    }
  }
  Size = v33.Size;
  Count = v33.Size;
  v12 = 1;
  v33.Reserved = 0;
  if ( v31.Count <= v33.Size )
    Count = v31.Count;
  v33.Count = Count;
  if ( Count )
  {
    memmove(&v33.8, &v31.8, 8LL * Count);
    do
      ++v9;
    while ( v9 < Count );
    Size = v33.Size;
  }
  if ( v9 < Size )
  {
    do
    {
      v13 = v9++;
      v33.Bitmap[v13] = 0LL;
    }
    while ( v9 < v33.Size );
  }
  RtlOrAffinityEx(&v31, a2, &v31);
  v4 = &a2->8;
LABEL_15:
  for ( j = 0; ; ++j )
  {
    if ( j >= v31.Count )
    {
      result = (__int64)memset_0(v4, 0, 8LL * a2->Count);
      a2->Count = 1;
      return result;
    }
    if ( v31.Bitmap[j] )
      break;
  }
  v16 = (_QWORD *)(a1 + 1680);
  if ( (*(_DWORD *)(a1 + 1440) & 0x20000) != 0 )
    v16 = (_QWORD *)*v16;
  KiCopyGroupMasksToAffinityEx(&v32, v16, v6);
  for ( k = 0; k < v32.Count; ++k )
  {
    if ( v32.Bitmap[k] )
      goto LABEL_36;
  }
  KiCopyGroupMasksToAffinityEx(a2, v8, v6);
  v18 = a2->Count;
  for ( m = 0; m < (unsigned __int16)v18; ++m )
  {
    if ( a2->Bitmap[m] )
    {
      v20 = a2;
      goto LABEL_35;
    }
  }
  if ( !KiRestrictedSystemCpuSetsActive && v12 )
  {
    result = (__int64)memset_0(v4, 0, 8 * v18);
    a2->Count = 1;
    return result;
  }
  v20 = &v33;
LABEL_35:
  RtlpCopyAffinityEx(&v32, v32.Size, v20);
LABEL_36:
  if ( !(unsigned int)RtlAndAffinityEx(&v32, &v31, &v32) )
    RtlpCopyAffinityEx(&v32, v32.Size, &v31);
  KiCopyGroupMasksToAffinityEx(a2, KiNonParkedCpuSets, v6);
  v22 = RtlpAndAffinityExNoResult(&v32, a2);
  result = (__int64)memset_0(v4, 0, 8LL * a2->Count);
  v23 = a2->Size;
  v24 = 0;
  if ( v6 <= v23 )
    v23 = v6;
  v30 = v23;
  a2->Count = v23;
  if ( v23 )
  {
    result = 1LL;
    do
    {
      v25 = v32.Bitmap[v24];
      a2->Bitmap[v24] = 0LL;
      if ( v25 )
      {
        v26 = 0LL;
        do
        {
          v27 = KiNonParkedCpuSets[v24];
          _BitScanForward64((unsigned __int64 *)&v28, v25);
          if ( _bittest64(&v27, (unsigned int)v28) || !v22 )
          {
            v29 = v28;
            v26 |= *((_QWORD *)KiCpuSetAffinities + 64 * v24 + (unsigned int)v28);
          }
          else
          {
            v29 = v28;
            _bittestandset64((__int64 *)&v26, (unsigned int)v28);
          }
          v25 &= ~(1LL << v29);
          a2->Bitmap[v24] = v26;
        }
        while ( v25 );
        v23 = v30;
        result = 1LL;
      }
      ++v24;
    }
    while ( v24 < v23 );
  }
  return result;
}
