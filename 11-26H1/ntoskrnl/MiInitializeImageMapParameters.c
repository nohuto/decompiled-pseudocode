/*
 * XREFs of MiInitializeImageMapParameters @ 0x14099E4F4
 * Callers:
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x140A08E48 (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiArbitraryCodeBlocked @ 0x140ABDF28 (MiArbitraryCodeBlocked.c)
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 */

__int64 __fastcall MiInitializeImageMapParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int16 *v4; // rdx
  const signed __int32 *v5; // r14
  unsigned int v6; // edi
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int16 v10; // r11
  unsigned __int64 v11; // r8
  __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  int v18; // ecx
  __int64 *i; // rcx
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r10
  __int16 v23; // cx
  int v24; // eax
  int v25; // eax

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v1 + 88);
  if ( (*(_BYTE *)(v3 + 368) & 1) != 0 && (*(_DWORD *)(v1 + 60) & 0x2000000) == 0 )
    return 3221225506LL;
  v4 = (__int16 *)(a1 + 98);
  v5 = *(const signed __int32 **)(a1 + 32);
  *(_WORD *)(a1 + 96) = *(_WORD *)(v3 + 1772);
  *(_WORD *)(a1 + 98) = *(_WORD *)(v1 + 54);
  if ( (*(_DWORD *)(v1 + 40) & 0x800000) != 0 )
    *(_DWORD *)(a1 + 56) |= 2u;
  v6 = 0;
  v7 = *(_QWORD *)v5;
  v8 = *((_QWORD *)v5 + 12) & 0xFFFFFFFFFFFFFFF8uLL;
  v9 = *(_QWORD *)(*(_QWORD *)v5 + 56LL);
  if ( *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[136] )
  {
    v4 = (__int16 *)(a1 + 98);
    if ( *(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[140] == __PAIR64__(
                                                              *(_DWORD *)(*(_QWORD *)(v7 + 56) + 68LL),
                                                              *(_DWORD *)(v9 + 60)) )
      __debugbreak();
  }
  v10 = 0x4000;
  v11 = *(_QWORD *)(v7 + 32);
  if ( ((v5[14] & 0x8000) != 0 && (v5[14] & 0x20) != 0 || (*(_DWORD *)(v3 + 1532) & 0x2000) != 0)
    && (*(_WORD *)(v7 + 12) & 0x4000) == 0 )
  {
    *(_DWORD *)(a1 + 56) |= 5u;
    *(_DWORD *)(a1 + 48) |= 1u;
  }
  v12 = *v4;
  if ( !*v4 )
  {
    if ( (*(_DWORD *)(v3 + 1532) & 0x1000) != 0 || (*(_DWORD *)(v3 + 1532) & 1) != 0 )
      v12 = *(_WORD *)(v9 + 48);
    else
      v12 = *(_WORD *)(a1 + 96);
    *(_WORD *)(a1 + 98) = v12;
  }
  if ( v12 != *(_WORD *)(v9 + 48) )
  {
    if ( (unsigned int)HalSystemVectorDispatchEntry() )
    {
      *(_DWORD *)(a1 + 56) |= 4u;
      *(_DWORD *)(a1 + 48) |= 2u;
    }
    else
    {
      if ( *(_WORD *)(v1 + 54) )
        return 3221225659LL;
      *(_WORD *)(a1 + 98) = v23;
    }
  }
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(v1 + 16);
  v13 = *(_QWORD *)(v1 + 24);
  *(_QWORD *)(a1 + 64) = v13;
  if ( (*(_DWORD *)(v1 + 40) & 0x20000000) != 0 )
  {
    if ( v11 < 0x100000000LL )
      return 3221225496LL;
    v24 = *(_DWORD *)(a1 + 56);
    if ( (v24 & 4) != 0 )
      return 3221225496LL;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 56) = v24 & 0xFFFFFFFC | 1;
    if ( (*(_BYTE *)(v9 + 44) & 1) != 0 )
      return 3221226089LL;
    *(_QWORD *)(a1 + 88) = 0x200000LL;
    *(_QWORD *)(a1 + 64) = (v13 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  v14 = *(_QWORD *)(a1 + 16);
  if ( !v14 || (*(_DWORD *)(v14 + 56) & 0x80000) != 0 || (*(_DWORD *)(v1 + 40) & 0x40000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 40) != 1 )
      return 3221225541LL;
    *(_DWORD *)(a1 + 56) |= 0x800u;
  }
  *(_DWORD *)(a1 + 60) = 0;
  v16 = *(unsigned int *)&stru_140E2D2D0.BamQosLevel;
  if ( *(_DWORD *)&stru_140E2D2D0.BamQosLevel && (*(_DWORD *)(*(_QWORD *)(v7 + 56) + 76LL) & 0x40) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x800) != 0 )
      goto LABEL_35;
    if ( *(_QWORD *)(a1 + 88) != 0x200000LL )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( (v17 >> 12) + ((v17 & 0xFFF) != 0) != *(_DWORD *)(v7 + 8)
        || (*(_DWORD *)(v3 + 2012) & 4) != 0
        || (*(_DWORD *)(a1 + 80) & 4) != 0 )
      {
        if ( (unsigned int)MiDoesImageContainFunctionOverrideFixups(v5)
          && (**(_QWORD **)(a1 + 24)
           || *(_QWORD *)(a1 + 64) > ((v22 + *(unsigned int *)(v21 + 64)) & 0xFFFFFFFFFFFFF000uLL)) )
        {
          *(_DWORD *)(a1 + 56) |= 4u;
          *(_DWORD *)(a1 + 48) |= 1u;
        }
      }
      else
      {
        if ( v17 + *(unsigned int *)&stru_140E2D2D0.BamQosLevel < v17 )
          return 3221225503LL;
        *(_DWORD *)(a1 + 60) |= 0x20u;
        *(_QWORD *)(a1 + 64) = v17 + v16;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x800) == 0 )
  {
    result = MiAllowImageMap(v3, *(_QWORD *)(a1 + 16), v5, v9);
    if ( (int)result < 0 )
      return result;
    v18 = *(_DWORD *)(v3 + 1872);
    if ( (v18 & 0x10) != 0 && (*(_BYTE *)(v9 + 51) & 4) == 0 )
    {
      if ( (*(_BYTE *)(v9 + 44) & 1) != 0 )
      {
        if ( (v18 & 8) != 0 )
          return 3221226089LL;
      }
      else
      {
        *(_DWORD *)(a1 + 56) |= 1u;
      }
    }
    v10 = 0x4000;
  }
LABEL_35:
  if ( _bittest((const signed __int32 *)(a1 + 56), 0xBu)
    || ((unsigned __int16)v10 & *(_WORD *)(v7 + 12)) != 0 && (*(_DWORD *)(v3 + 1872) & 0x40) == 0 )
  {
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 0xFFFFFFFC | 1;
  }
  if ( (*(_DWORD *)(a1 + 80) & 2) != 0 || v3 == PsSecureSystemProcess )
  {
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 56) &= 0xFFFFFFF9;
  }
  if ( *(_QWORD *)(v8 + 32) && !_bittest(v5 + 14, 0xBu) )
    goto LABEL_41;
  v20 = *(_DWORD *)(a1 + 56);
  if ( (v20 & 4) != 0 )
    return 3221225496LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = v20 & 0xFFFFFFFD;
LABEL_41:
  if ( !_bittest((const signed __int32 *)(a1 + 56), 0xBu) )
  {
    for ( i = (__int64 *)(v5 + 32); i; i = (__int64 *)i[2] )
    {
      if ( ((_BYTE)i[4] & 0xEu) >= 0xC )
      {
        v25 = MiArbitraryCodeBlocked(*(_QWORD *)(v1 + 96));
        if ( v25 < 0 )
          return (unsigned int)v25;
        return v6;
      }
    }
  }
  return 0LL;
}
