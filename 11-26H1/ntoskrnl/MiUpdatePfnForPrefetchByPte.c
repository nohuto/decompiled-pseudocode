/*
 * XREFs of MiUpdatePfnForPrefetchByPte @ 0x1402D5050
 * Callers:
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiRelinkStandbyPage @ 0x140298DC0 (MiRelinkStandbyPage.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiInvalidPteConforms @ 0x1402D64B0 (MiInvalidPteConforms.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiUpdatePfnForPrefetchByPte(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v5; // rsi
  int v6; // r13d
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // ebp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  ULONG_PTR v13; // rdi
  __int64 result; // rax
  unsigned __int64 v15; // r14
  char v16; // al
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 HasShadow; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 PteShadow; // rax
  __int64 *v33; // r9
  __int64 v34; // rcx
  __int64 *v35; // r9
  unsigned __int64 v36; // r10
  __int64 v37; // rcx
  unsigned __int64 v38; // r11

  v5 = a1;
  v6 = 0;
LABEL_2:
  v7 = 0xFFFFFFFFFFLL;
  v8 = 0xFFFFDE0000000000uLL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)v5;
        if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (v9 & 1) == 0 )
            goto LABEL_77;
          if ( (v9 & 0x20) == 0 || (v9 & 0x42) == 0 )
          {
            HasShadow = MiPteHasShadow(a1, *(_QWORD *)v5, 0xFFFFDE0000000000uLL);
            if ( HasShadow )
            {
              v25 = *(_QWORD *)(HasShadow + 1288);
              if ( v25 )
              {
                v26 = *(_QWORD *)(v25 + 8 * ((v5 >> 3) & 0x1FF));
                if ( (v26 & 0x20) != 0 )
                  v24 |= 0x20uLL;
                v9 = v24 | 0x42;
                if ( (v26 & 0x42) == 0 )
                  v9 = v24;
              }
            }
          }
        }
        if ( (v9 & 1) != 0 )
        {
          v10 = 6;
          v11 = v9;
          goto LABEL_6;
        }
LABEL_77:
        result = v9 & 0xC00;
        if ( result != 2048 )
          return result;
        result = MiInvalidPteConforms(v9);
        if ( !(_DWORD)result )
          return result;
        if ( qword_140E2D8C0 && (v9 & 0x10) == 0 )
          v11 = v9 & qword_140E2D8C8;
        v10 = 2;
LABEL_6:
        v12 = v7 & (v11 >> 12);
        v13 = v8 + 48 * v12;
        result = MiSafeLockPage(v12);
        v15 = (unsigned __int8)result;
        if ( (_BYTE)result == 17 )
          return result;
        a1 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
        if ( a1 != v5 )
        {
          a1 = *(_QWORD *)(v13 + 40);
          if ( a1 < 0 )
          {
            if ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL )
              goto LABEL_8;
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (unsigned __int8)v15 >= 2u )
              return result;
            if ( KiIrqlFlags )
LABEL_86:
              result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
          }
          else
          {
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (unsigned __int8)v15 >= 2u )
              return result;
            if ( KiIrqlFlags )
              goto LABEL_86;
          }
          __writecr8(v15);
          return result;
        }
LABEL_8:
        v16 = *(_BYTE *)(v13 + 34) & 7;
        if ( v10 == 6 )
          break;
        if ( (unsigned __int8)(v16 - 2) <= 2u && (*(_QWORD *)(v13 + 24) & 0x4000000000000000LL) == 0 )
          goto LABEL_10;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 0xFFFFFFFFFFLL;
        v8 = 0xFFFFDE0000000000uLL;
        if ( (unsigned __int8)v15 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
          goto LABEL_32;
        }
      }
      if ( v16 == 6 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v15 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
        __writecr8(v15);
      }
      v7 = 0xFFFFFFFFFFLL;
      v8 = 0xFFFFDE0000000000uLL;
      if ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        a1 = (__int64)(v5 << 25) >> 16;
        if ( (unsigned __int64)a1 < 0xFFFFF68000000000uLL || (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          result = MiGetSystemRegionType(a1);
          if ( (_DWORD)result == 8 )
            return result;
          goto LABEL_2;
        }
      }
    }
LABEL_10:
    if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    v22 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      v27 = MiPteHasShadow(a1, v22, *(_QWORD *)v5);
      if ( v27 )
      {
        a1 = *(_QWORD *)(v27 + 1288);
        if ( a1 )
        {
          v29 = *(_QWORD *)(a1 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v28 |= 0x20uLL;
          v22 = v28 | 0x42;
          if ( (v29 & 0x42) == 0 )
            v22 = v28;
        }
      }
    }
    if ( v9 == v22 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 0xFFFFDE0000000000uLL;
    v7 = 0xFFFFFFFFFFLL;
    if ( (unsigned __int8)v15 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
LABEL_32:
      __writecr8(v15);
      goto LABEL_2;
    }
  }
  v17 = *(_DWORD *)(v13 + 32);
  if ( (*(_QWORD *)(v13 + 40) & 0x20000000000000LL) != 0 )
  {
    v18 = 5;
  }
  else if ( (*(_DWORD *)(v13 + 32) & 0x8000000) != 0
         && (v13 < 0xFFFFDE0000000000uLL
          || v13 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
          || (unsigned int)MiIsDecayPfn((__int64)(v13 + 0x220000000000LL) / 48)
          || (v17 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v13) == 9) )
  {
    v18 = 5;
  }
  else
  {
    v18 = HIBYTE(v17) & 7;
  }
  if ( a2 != v18 && a2 >= v18 )
  {
    if ( (*(_BYTE *)(v13 + 34) & 7) == 2 )
    {
      if ( v18
        || (*(_DWORD *)(v13 + 16) & 0x400LL) != 0
        || (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0
        || (v30 = *(_QWORD *)(v13 + 16), (v30 & 8) == 0)
        || (unsigned __int16)v30 >> 12 != *(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock
                                                                + 8 * ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL))
                                                    + 1300LL) )
      {
        MiRelinkStandbyPage(v13, a2);
      }
    }
    else if ( (*(_QWORD *)(v13 + 40) & 0x20000000000000LL) == 0 )
    {
      *(_DWORD *)(v13 + 32) = ((char)a2 << 24) ^ (*(_DWORD *)(v13 + 32) ^ ((char)a2 << 24)) & 0xF8FFFFFF;
    }
  }
  if ( a3 && (*(_BYTE *)(v13 + 34) & 7) == 2 )
  {
    v31 = *(_QWORD *)(v13 + 16) >> 16;
    if ( (*(_QWORD *)(v13 + 16) & 0x400LL) != 0 )
      LOBYTE(v31) = *(_QWORD *)(v13 + 16) >> 2;
    if ( (v31 & 1) != 0 )
    {
      PteShadow = *(_QWORD *)(v13 + 16);
      v33 = (__int64 *)(v13 + 16);
      if ( v13 + 16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v33 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v13 + 16, *(_QWORD *)(v13 + 16));
      v34 = -65537LL;
      v6 = 1;
      if ( (PteShadow & 0x400) != 0 )
        v34 = -5LL;
      *v33 = PteShadow & v34;
    }
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v15 < 2u )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
    __writecr8(v15);
  }
  if ( v6 )
  {
    v19 = (unsigned int)a3[1];
    v20 = (__int64)(v13 + 0x220000000000LL) / 48;
    if ( !(_DWORD)v19 )
      goto LABEL_23;
    v35 = (__int64 *)&a3[2 * (unsigned int)(v19 - 1) + 4];
    if ( !v35 )
      goto LABEL_23;
    v36 = *v35;
    if ( (*v35 & 0xC00) != 0 || (*v35 & 0x3FF) == 0x3FF )
      goto LABEL_23;
    v37 = (*v35 & 0x3FF) + 1;
    v38 = v36 >> 12;
    if ( v20 == (v36 >> 12) + v37 )
    {
      result = v37 ^ (v36 ^ v37) & 0xFFFFFFFFFFFFFC00uLL;
      *v35 = result;
      return result;
    }
    result = v38 - 1;
    if ( v20 == v38 - 1 )
    {
      *v35 = v37 & 0x3FF | (v20 << 12);
    }
    else
    {
LABEL_23:
      *(_QWORD *)&a3[2 * v19 + 4] = v20 << 12;
      v21 = a3[1] + 1;
      result = *a3 >> 3;
      a3[1] = v21;
      if ( v21 == (_DWORD)result )
        return MiIssuePageHeatList(a3);
    }
  }
  return result;
}
